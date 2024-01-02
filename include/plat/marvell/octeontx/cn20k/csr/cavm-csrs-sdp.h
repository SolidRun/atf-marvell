#ifndef __CAVM_CSRS_SDP_H__
#define __CAVM_CSRS_SDP_H__
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
 * SDP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration sdp_bar_e
 *
 * SDP Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_SDP_BAR_E_SDPX_PF_BAR0(a) (0xc01800000000ll + 0x100000000ll * (a))
#define CAVM_SDP_BAR_E_SDPX_PF_BAR0_SIZE 0x40000000ull
#define CAVM_SDP_BAR_E_SDPX_PF_BAR4(a) (0xc01880000000ll + 0x100000000ll * (a))
#define CAVM_SDP_BAR_E_SDPX_PF_BAR4_SIZE 0x40000000ull

/**
 * Enumeration sdp_cs_e
 *
 * SDP Completion Status Enumeration
 * Enumerates the completion status return values.
 */
#define CAVM_SDP_CS_E_ERRRSP (3)
#define CAVM_SDP_CS_E_NOERR (0)
#define CAVM_SDP_CS_E_RDFLT (4)
#define CAVM_SDP_CS_E_RDRST (1)
#define CAVM_SDP_CS_E_WRFLT (5)
#define CAVM_SDP_CS_E_WRRST (2)

/**
 * Enumeration sdp_endianswap_e
 *
 * SDP Endian Swap Mode Enumeration
 * Enumerates the endian swap modes that SDP supports.
 */
#define CAVM_SDP_ENDIANSWAP_E_BYTE_SWAP_32B (2)
#define CAVM_SDP_ENDIANSWAP_E_BYTE_SWAP_64B (1)
#define CAVM_SDP_ENDIANSWAP_E_LW_SWAP_64B (3)
#define CAVM_SDP_ENDIANSWAP_E_PASS_THRU (0)

/**
 * Enumeration sdp_pf_int_vec_e
 *
 * SDP MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_SDP_PF_INT_VEC_E_SDP_FLR_RING_LINTX(a) (0 + (a))
#define CAVM_SDP_PF_INT_VEC_E_SDP_ORD_LINTX(a) (8 + (a))

/**
 * Enumeration sdp_rmt_int_vec_e
 *
 * SDP MSI-X Vector to Remote Host Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_DMA_RINT (9)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_IRE_RINT (0)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_MBOX_RINT (6)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_MISC_RINT (0xe)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_OEI_RINTX(a) (0x10 + (a))
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_ORE_RINT (1)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_RX_CNTS(a) (0x20 + (a))
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_RSVD0 (3)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_RSVD1 (5)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_RSVD2X(a) (7 + (a))
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_RSVD3X(a) (0xa + (a))
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_RSVD5 (0xf)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_VFIRE_RINT (2)
#define CAVM_SDP_RMT_INT_VEC_E_SDP_EPF_VFORE_RINT (4)

/**
 * Structure sdp_buf_info_pair_s
 *
 * SDP Buffer/Information Pair Structure
 * The 16 byte buffer/info pointer pair. Each entry in a PCIe unsolicited
 * output ring is a SDP_BUF_INFO_PAIR_S.
 */
union cavm_sdp_buf_info_pair_s
{
    uint64_t u[2];
    struct cavm_sdp_buf_info_pair_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t buf_ptr               : 64; /**< [ 63:  0] The buffer pointer. */
#else /* Word 0 - Little Endian */
        uint64_t buf_ptr               : 64; /**< [ 63:  0] The buffer pointer. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t info_ptr              : 64; /**< [127: 64] The info pointer. \<2:0\> must always be zero.
                                                                  When SDP()_R()_OUT_CONTROL[IMODE]=0, [INFO_PTR] must be zero. */
#else /* Word 1 - Little Endian */
        uint64_t info_ptr              : 64; /**< [127: 64] The info pointer. \<2:0\> must always be zero.
                                                                  When SDP()_R()_OUT_CONTROL[IMODE]=0, [INFO_PTR] must be zero. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_sdp_buf_info_pair_s_s cn; */
};

/**
 * Structure sdp_func_sel_s
 *
 * SDP Function Selector Structure
 * DPI DMA function selector for MACs.
 */
union cavm_sdp_func_sel_s
{
    uint32_t u;
    struct cavm_sdp_func_sel_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t epf                   : 4;  /**< [ 11:  8] Selects the PCIe physical function within the referenced MAC.

                                                                 [EPF] must select a valid physical function in a PCIe MAC. */
        uint32_t func                  : 8;  /**< [  7:  0] Selects the function within the physical function [EPF]
                                                                 within the referenced MAC.

                                                                 0x0 = The physical function [EPF].
                                                                 0x1 = The first virtual function within the physical function [EPF].
                                                                 0x2 = The second virtual function within the physical function [EPF].
                                                                 0x3 = ...

                                                                 When [FUNC] is nonzero, it must select a valid virtual
                                                                 function.

                                                                 [FUNC] must be zero for any MAC that isn't PCIe, doesn't
                                                                 support the PCIe SR-IOV standard, or doesn't have PCIe SR-IOV
                                                                 enabled. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 8;  /**< [  7:  0] Selects the function within the physical function [EPF]
                                                                 within the referenced MAC.

                                                                 0x0 = The physical function [EPF].
                                                                 0x1 = The first virtual function within the physical function [EPF].
                                                                 0x2 = The second virtual function within the physical function [EPF].
                                                                 0x3 = ...

                                                                 When [FUNC] is nonzero, it must select a valid virtual
                                                                 function.

                                                                 [FUNC] must be zero for any MAC that isn't PCIe, doesn't
                                                                 support the PCIe SR-IOV standard, or doesn't have PCIe SR-IOV
                                                                 enabled. */
        uint32_t epf                   : 4;  /**< [ 11:  8] Selects the PCIe physical function within the referenced MAC.

                                                                 [EPF] must select a valid physical function in a PCIe MAC. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdp_func_sel_s_s cn; */
};

/**
 * Structure sdp_instr_hdr_s
 *
 * SDP Instruction Header Structure
 * SDP_INSTR_HDR_S is the instruction header that is present in
 * each PCIe instruction in remote host memory.
 */
union cavm_sdp_instr_hdr_s
{
    uint64_t u;
    struct cavm_sdp_instr_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t g                     : 1;  /**< [ 62: 62] Gather is used.

                                                                 When [G] is set and [GSZ]!=0, the instruction is an indirect gather
                                                                 instruction. In this case:

                                                                 * DPTR points at an array of SDP_SGLIST_COMPONENT_S's in the
                                                                   remote host's memory, and the pointers in that (indirect) gather
                                                                   list point at the packet data in the host's memory.

                                                                 * [GSZ] is the number of pointers in the indirect gather list.

                                                                 * The sum of the [GSZ] valid SDP_SGLIST_COMPONENT_S[LEN*]
                                                                   must equal [TLEN]-[FSZ].

                                                                 When [G] is set and [GSZ]==0, the instruction is a direct gather
                                                                 instruction. In this case:

                                                                 * The instruction contains a number of DPTRs (DPTR, DPTR 1, ...) and
                                                                   associated lengths (LEN, LEN 1, ..., respectively) that point at
                                                                   the packet data in the host's memory.

                                                                 * The length word (containing LEN, LEN 1, LEN 2, and LEN 3) is present
                                                                   immediately following the (eight-byte-aligned) Front Data, if front
                                                                   data is present. If the instruction is 32 bytes or if [FSZ]==0, then
                                                                   front data is not present, and the length word immediately follows
                                                                   the SDP_INSTR_HDR_S in the direct gather instruction.

                                                                 * LEN and LEN 1 must be nonzero and must indicate the number of input
                                                                   packet bytes pointed at by DPTR and DPTR 1, respectively.

                                                                 * If LEN 2 is nonzero, then DPTR 2 is present and LEN 2 must indicate
                                                                   the number of input packet bytes pointed at by DPTR 2. LEN 2 must be
                                                                   zero for 32-byte direct gather instructions.

                                                                 * If LEN 3 is nonzero, then DPTR 3 is present, and LEN 3 must indicate
                                                                   the number of input packet bytes pointed at by DPTR 3, and LEN 2 must
                                                                   also be nonzero. LEN 3 must be zero for 32-byte direct gather
                                                                   instructions.

                                                                 * LEN + (LEN 1) + (LEN 2) + (LEN 3) must equal [TLEN]-[FSZ].

                                                                 When [G] is clear, the instruction is a direct data instruction. In
                                                                 this case:

                                                                 * The instruction contains exactly one DPTR, which points directly at
                                                                   the packet data in the host's memory.

                                                                 * The amount of packet data at DPTR in host memory is [TLEN]-[FSZ]. */
        uint64_t gsz                   : 14; /**< [ 61: 48] When [G] is one, [GSZ] is the number of gather list pointers in remote
                                                                 host memory. If [GSZ] is zero, direct gather is selected. If [GSZ]
                                                                 is not zero, indirect gather is selected. [GSZ] must be zero when
                                                                 [G] is clear. [GSZ] must never be one (i.e. an indirect gather list
                                                                 must be at least two entries). Note that with indirect gather,
                                                                 the number of SDP_SGLIST_COMPONENT_S's for the instruction in
                                                                 remote host memory is ([GSZ] + 3)/4. */
        uint64_t fsz                   : 6;  /**< [ 47: 42] The number of front data bytes directly included in the PCIe instruction.
                                                                 The front data begins the input packet.

                                                                 For the direct data and indirect gather cases (i.e. [G]==0 or [GSZ]!=0):

                                                                 * [FSZ] must be \<= 23 with a 32-byte instruction, \<= 55 with a 64-byte
                                                                   instruction. An [FSZ] value between 17 and 23 with a 32-byte instruction
                                                                   can be used to insert a pad between the front data and the DPTR data.
                                                                   The hardware inserts unpredictable bytes for the extra bytes
                                                                   that are not actually contained in the DPI instruction in this case.
                                                                   The same is true for [FSZ] values between 49 and 55 with a 64-byte
                                                                   instruction.

                                                                 For the direct gather case (i.e. [G]!=0 and [GSZ]=0):

                                                                 * With 32-byte direct gather instructions:

                                                                   o [FSZ] must be zero (and the Front Data field is not present in
                                                                     the PCIe Instruction).

                                                                 * With 64-byte direct gather instructions:

                                                                   o When [FSZ] is zero, the Front Data field is not present.

                                                                   o When [FSZ] is nonzero, the size of the Front Data field
                                                                     in the PCIe instruction in remote host memory is [FSZ] rounded
                                                                     up to the nearest multiple of 8 bytes.

                                                                   o [FSZ] can legally range between 0 and 32 bytes (inclusive) when LEN 2
                                                                     and LEN 3 are both zero.

                                                                   o [FSZ] can legally range between 0 and 24 bytes (inclusive) when LEN 3
                                                                     is zero.

                                                                   o [FSZ] can legally range between 0 and 16 bytes (inclusive) in all
                                                                     circumstances. */
        uint64_t pkind                 : 6;  /**< [ 41: 36] The port kind assigned to the packet in PKI. */
        uint64_t reserved_16_35        : 20;
        uint64_t tlen                  : 16; /**< [ 15:  0] The length of the input packet in bytes.  This should include the length of
                                                                 the front data (FSZ), plus the sum of packet data from all direct or indirect
                                                                 gather buffers.

                                                                 [TLEN] must not be zero. [TLEN] must be greater than or equal to [FSZ].
                                                                 [TLEN]-[FSZ] is the number of bytes that CNXXXX will fetch from the DPTR's. */
#else /* Word 0 - Little Endian */
        uint64_t tlen                  : 16; /**< [ 15:  0] The length of the input packet in bytes.  This should include the length of
                                                                 the front data (FSZ), plus the sum of packet data from all direct or indirect
                                                                 gather buffers.

                                                                 [TLEN] must not be zero. [TLEN] must be greater than or equal to [FSZ].
                                                                 [TLEN]-[FSZ] is the number of bytes that CNXXXX will fetch from the DPTR's. */
        uint64_t reserved_16_35        : 20;
        uint64_t pkind                 : 6;  /**< [ 41: 36] The port kind assigned to the packet in PKI. */
        uint64_t fsz                   : 6;  /**< [ 47: 42] The number of front data bytes directly included in the PCIe instruction.
                                                                 The front data begins the input packet.

                                                                 For the direct data and indirect gather cases (i.e. [G]==0 or [GSZ]!=0):

                                                                 * [FSZ] must be \<= 23 with a 32-byte instruction, \<= 55 with a 64-byte
                                                                   instruction. An [FSZ] value between 17 and 23 with a 32-byte instruction
                                                                   can be used to insert a pad between the front data and the DPTR data.
                                                                   The hardware inserts unpredictable bytes for the extra bytes
                                                                   that are not actually contained in the DPI instruction in this case.
                                                                   The same is true for [FSZ] values between 49 and 55 with a 64-byte
                                                                   instruction.

                                                                 For the direct gather case (i.e. [G]!=0 and [GSZ]=0):

                                                                 * With 32-byte direct gather instructions:

                                                                   o [FSZ] must be zero (and the Front Data field is not present in
                                                                     the PCIe Instruction).

                                                                 * With 64-byte direct gather instructions:

                                                                   o When [FSZ] is zero, the Front Data field is not present.

                                                                   o When [FSZ] is nonzero, the size of the Front Data field
                                                                     in the PCIe instruction in remote host memory is [FSZ] rounded
                                                                     up to the nearest multiple of 8 bytes.

                                                                   o [FSZ] can legally range between 0 and 32 bytes (inclusive) when LEN 2
                                                                     and LEN 3 are both zero.

                                                                   o [FSZ] can legally range between 0 and 24 bytes (inclusive) when LEN 3
                                                                     is zero.

                                                                   o [FSZ] can legally range between 0 and 16 bytes (inclusive) in all
                                                                     circumstances. */
        uint64_t gsz                   : 14; /**< [ 61: 48] When [G] is one, [GSZ] is the number of gather list pointers in remote
                                                                 host memory. If [GSZ] is zero, direct gather is selected. If [GSZ]
                                                                 is not zero, indirect gather is selected. [GSZ] must be zero when
                                                                 [G] is clear. [GSZ] must never be one (i.e. an indirect gather list
                                                                 must be at least two entries). Note that with indirect gather,
                                                                 the number of SDP_SGLIST_COMPONENT_S's for the instruction in
                                                                 remote host memory is ([GSZ] + 3)/4. */
        uint64_t g                     : 1;  /**< [ 62: 62] Gather is used.

                                                                 When [G] is set and [GSZ]!=0, the instruction is an indirect gather
                                                                 instruction. In this case:

                                                                 * DPTR points at an array of SDP_SGLIST_COMPONENT_S's in the
                                                                   remote host's memory, and the pointers in that (indirect) gather
                                                                   list point at the packet data in the host's memory.

                                                                 * [GSZ] is the number of pointers in the indirect gather list.

                                                                 * The sum of the [GSZ] valid SDP_SGLIST_COMPONENT_S[LEN*]
                                                                   must equal [TLEN]-[FSZ].

                                                                 When [G] is set and [GSZ]==0, the instruction is a direct gather
                                                                 instruction. In this case:

                                                                 * The instruction contains a number of DPTRs (DPTR, DPTR 1, ...) and
                                                                   associated lengths (LEN, LEN 1, ..., respectively) that point at
                                                                   the packet data in the host's memory.

                                                                 * The length word (containing LEN, LEN 1, LEN 2, and LEN 3) is present
                                                                   immediately following the (eight-byte-aligned) Front Data, if front
                                                                   data is present. If the instruction is 32 bytes or if [FSZ]==0, then
                                                                   front data is not present, and the length word immediately follows
                                                                   the SDP_INSTR_HDR_S in the direct gather instruction.

                                                                 * LEN and LEN 1 must be nonzero and must indicate the number of input
                                                                   packet bytes pointed at by DPTR and DPTR 1, respectively.

                                                                 * If LEN 2 is nonzero, then DPTR 2 is present and LEN 2 must indicate
                                                                   the number of input packet bytes pointed at by DPTR 2. LEN 2 must be
                                                                   zero for 32-byte direct gather instructions.

                                                                 * If LEN 3 is nonzero, then DPTR 3 is present, and LEN 3 must indicate
                                                                   the number of input packet bytes pointed at by DPTR 3, and LEN 2 must
                                                                   also be nonzero. LEN 3 must be zero for 32-byte direct gather
                                                                   instructions.

                                                                 * LEN + (LEN 1) + (LEN 2) + (LEN 3) must equal [TLEN]-[FSZ].

                                                                 When [G] is clear, the instruction is a direct data instruction. In
                                                                 this case:

                                                                 * The instruction contains exactly one DPTR, which points directly at
                                                                   the packet data in the host's memory.

                                                                 * The amount of packet data at DPTR in host memory is [TLEN]-[FSZ]. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdp_instr_hdr_s_s cn; */
};

/**
 * Structure sdp_length_s
 *
 * SDP Packet Output Length Structure
 * The 8 byte packet length structure that is appended to the end of
 * the info pointer bytes when SDP()_R()_OUT_CONTROL[IMODE]=1, or
 * prepended as the first 8 bytes written in front of the packet when
 * SDP()_R()_OUT_CONTROL[IMODE]=0.
 */
union cavm_sdp_length_s
{
    uint64_t u;
    struct cavm_sdp_length_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t len                   : 16; /**< [ 15:  0] The packet length in bytes.

                                                                 When SDP()_R()_OUT_CONTROL[IMODE]=0:

                                                                 * Hardware writes MINIMUM([LEN]+8,SDP()_R()_OUT_CONTROL[BSIZE])
                                                                   bytes to the first SDP_BUF_INFO_PAIR_S[BUF_PTR]. The "+8" is
                                                                   due to the SDP_LENGTH_S prepend.

                                                                 * If packet bytes remain, hardware uses additional
                                                                   SDP_BUF_INFO_PAIR_S[BUF_PTR]'s for the packet data, writing
                                                                   SDP()_R()_OUT_CONTROL[BSIZE] packet data bytes to each until
                                                                   the packet data is consumed.

                                                                 * The number of SDP_BUF_INFO_PAIR_S's consumed by a packet is
                                                                   ceiling(([LEN]+8)/SDP()_R()_OUT_CONTROL[BSIZE]), where
                                                                   ceiling() rounds up to the nearest integer.

                                                                 * The SDP_LENGTH_S will be unaligned in host memory if
                                                                   the first SDP_BUF_INFO_PAIR_S[BUF_PTR] is unaligned.

                                                                 When SDP()_R()_OUT_CONTROL[IMODE]=1:

                                                                 * Hardware skips the first SDP()_R()_OUT_CONTROL[ISIZE] bytes
                                                                   of the packet, writing the remaining packet bytes to the
                                                                   first SDP_BUF_INFO_PAIR_S[BUF_PTR].

                                                                 * If further packet bytes follow, hardware uses additional
                                                                   SDP_BUF_INFO_PAIR_S[BUF_PTR]'s for the packet data, writing
                                                                   SDP()_R()_OUT_CONTROL[BSIZE] packet data bytes to each until
                                                                   the packet data is consumed.

                                                                 * Finally, hardware writes the first SDP()_R()_OUT_CONTROL[ISIZE]
                                                                   bytes of the packet followed by the SDP_LENGTH_S to
                                                                   the first SDP_BUF_INFO_PAIR_S[INFO_PTR]. There is pad between
                                                                   the packet data and the SDP_LENGTH_S if necessary to
                                                                   naturally-align the 8B SDP_LENGTH_S.

                                                                 * The number of SDP_BUF_INFO_PAIR_S's consumed by a packet is
                                                                   ceiling(([LEN]-SDP()_R()_OUT_CONTROL[ISIZE])/SDP()_R()_OUT_CONTROL[BSIZE]),
                                                                   where ceiling() rounds up to the nearest integer. Only the
                                                                   first SDP_BUF_INFO_PAIR_S[INFO_PTR] is used.

                                                                 * Minimum allowed output packet size is 1 byte. */
#else /* Word 0 - Little Endian */
        uint64_t len                   : 16; /**< [ 15:  0] The packet length in bytes.

                                                                 When SDP()_R()_OUT_CONTROL[IMODE]=0:

                                                                 * Hardware writes MINIMUM([LEN]+8,SDP()_R()_OUT_CONTROL[BSIZE])
                                                                   bytes to the first SDP_BUF_INFO_PAIR_S[BUF_PTR]. The "+8" is
                                                                   due to the SDP_LENGTH_S prepend.

                                                                 * If packet bytes remain, hardware uses additional
                                                                   SDP_BUF_INFO_PAIR_S[BUF_PTR]'s for the packet data, writing
                                                                   SDP()_R()_OUT_CONTROL[BSIZE] packet data bytes to each until
                                                                   the packet data is consumed.

                                                                 * The number of SDP_BUF_INFO_PAIR_S's consumed by a packet is
                                                                   ceiling(([LEN]+8)/SDP()_R()_OUT_CONTROL[BSIZE]), where
                                                                   ceiling() rounds up to the nearest integer.

                                                                 * The SDP_LENGTH_S will be unaligned in host memory if
                                                                   the first SDP_BUF_INFO_PAIR_S[BUF_PTR] is unaligned.

                                                                 When SDP()_R()_OUT_CONTROL[IMODE]=1:

                                                                 * Hardware skips the first SDP()_R()_OUT_CONTROL[ISIZE] bytes
                                                                   of the packet, writing the remaining packet bytes to the
                                                                   first SDP_BUF_INFO_PAIR_S[BUF_PTR].

                                                                 * If further packet bytes follow, hardware uses additional
                                                                   SDP_BUF_INFO_PAIR_S[BUF_PTR]'s for the packet data, writing
                                                                   SDP()_R()_OUT_CONTROL[BSIZE] packet data bytes to each until
                                                                   the packet data is consumed.

                                                                 * Finally, hardware writes the first SDP()_R()_OUT_CONTROL[ISIZE]
                                                                   bytes of the packet followed by the SDP_LENGTH_S to
                                                                   the first SDP_BUF_INFO_PAIR_S[INFO_PTR]. There is pad between
                                                                   the packet data and the SDP_LENGTH_S if necessary to
                                                                   naturally-align the 8B SDP_LENGTH_S.

                                                                 * The number of SDP_BUF_INFO_PAIR_S's consumed by a packet is
                                                                   ceiling(([LEN]-SDP()_R()_OUT_CONTROL[ISIZE])/SDP()_R()_OUT_CONTROL[BSIZE]),
                                                                   where ceiling() rounds up to the nearest integer. Only the
                                                                   first SDP_BUF_INFO_PAIR_S[INFO_PTR] is used.

                                                                 * Minimum allowed output packet size is 1 byte. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdp_length_s_s cn; */
};

/**
 * Structure sdp_sglist_component_s
 *
 * SDP Scatter/Gather List Component Structure
 * A scatter or gather list is an array of SDP_SGLIST_COMPONENT_S's
 * in remote host memory. The number of SDP_SGLIST_COMPONENT_S's
 * in the array is (LL + 3)/4, where LL is either
 * SDP_INSTR_HDR_S[GSZ]. The array must be naturally-aligned on an
 * 8B boundary in remote host memory.
 */
union cavm_sdp_sglist_component_s
{
    uint64_t u[5];
    struct cavm_sdp_sglist_component_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t len0                  : 16; /**< [ 63: 48] The number of bytes at [PTR0] on the remote host. Must be greater
                                                                 than zero. */
        uint64_t len1                  : 16; /**< [ 47: 32] The number of bytes at [PTR1] on the remote host. Must be greater
                                                                 than zero when valid. [LEN1,PTR1] are invalid in the last
                                                                 SDP_SGLIST_COMPONENT_S in the array (that is the scatter/
                                                                 gather list) when (LL AND 0x3) is 1, where LL is
                                                                 SDP_INSTR_HDR_S[GSZ]. */
        uint64_t len2                  : 16; /**< [ 31: 16] The number of bytes at [PTR2] on the remote host. Must be greater
                                                                 than zero when valid. [LEN2,PTR2] are invalid in the last
                                                                 SDP_SGLIST_COMPONENT_S in the array (that is the scatter/
                                                                 gather list) when (LL AND 0x3) is 1 or 2, where LL is
                                                                 SDP_INSTR_HDR_S[GSZ]. */
        uint64_t len3                  : 16; /**< [ 15:  0] The number of bytes at [PTR3] on the remote host. Must be greater
                                                                 than zero when valid. [LEN3,PTR3] are invalid in the last
                                                                 SDP_SGLIST_COMPONENT_S in the array (that is the scatter/
                                                                 gather list) when (LL AND 0x3) is 1 or 2 or 3, where LL is
                                                                 SDP_INSTR_HDR_S[GSZ]. */
#else /* Word 0 - Little Endian */
        uint64_t len3                  : 16; /**< [ 15:  0] The number of bytes at [PTR3] on the remote host. Must be greater
                                                                 than zero when valid. [LEN3,PTR3] are invalid in the last
                                                                 SDP_SGLIST_COMPONENT_S in the array (that is the scatter/
                                                                 gather list) when (LL AND 0x3) is 1 or 2 or 3, where LL is
                                                                 SDP_INSTR_HDR_S[GSZ]. */
        uint64_t len2                  : 16; /**< [ 31: 16] The number of bytes at [PTR2] on the remote host. Must be greater
                                                                 than zero when valid. [LEN2,PTR2] are invalid in the last
                                                                 SDP_SGLIST_COMPONENT_S in the array (that is the scatter/
                                                                 gather list) when (LL AND 0x3) is 1 or 2, where LL is
                                                                 SDP_INSTR_HDR_S[GSZ]. */
        uint64_t len1                  : 16; /**< [ 47: 32] The number of bytes at [PTR1] on the remote host. Must be greater
                                                                 than zero when valid. [LEN1,PTR1] are invalid in the last
                                                                 SDP_SGLIST_COMPONENT_S in the array (that is the scatter/
                                                                 gather list) when (LL AND 0x3) is 1, where LL is
                                                                 SDP_INSTR_HDR_S[GSZ]. */
        uint64_t len0                  : 16; /**< [ 63: 48] The number of bytes at [PTR0] on the remote host. Must be greater
                                                                 than zero. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t ptr0                  : 64; /**< [127: 64] The first pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory. */
#else /* Word 1 - Little Endian */
        uint64_t ptr0                  : 64; /**< [127: 64] The first pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t ptr1                  : 64; /**< [191:128] The second pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory when corresponding [LEN1] is valid. */
#else /* Word 2 - Little Endian */
        uint64_t ptr1                  : 64; /**< [191:128] The second pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory when corresponding [LEN1] is valid. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t ptr2                  : 64; /**< [255:192] The third pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory when corresponding [LEN2] is valid. */
#else /* Word 3 - Little Endian */
        uint64_t ptr2                  : 64; /**< [255:192] The third pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory when corresponding [LEN2] is valid. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t ptr3                  : 64; /**< [319:256] The fourth pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory when corresponding [LEN3] is valid. */
#else /* Word 4 - Little Endian */
        uint64_t ptr3                  : 64; /**< [319:256] The fourth pointer in the SDP_SGLIST_COMPONENT_S. Must point
                                                                 to a buffer in remote host memory when corresponding [LEN3] is valid. */
#endif /* Word 4 - End */
    } s;
    /* struct cavm_sdp_sglist_component_s_s cn; */
};

/**
 * Register (ARF) sdp#_const
 *
 * SDP Constants Register
 * This register contains constants for software discovery.
 */
union cavm_sdpx_const
{
    uint64_t u;
    struct cavm_sdpx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rings                 : 16; /**< [ 31: 16](RO) Number of rings implemented. */
        uint64_t fifosz                : 16; /**< [ 15:  0](RO) Number of bytes in outbound FIFO. */
#else /* Word 0 - Little Endian */
        uint64_t fifosz                : 16; /**< [ 15:  0](RO) Number of bytes in outbound FIFO. */
        uint64_t rings                 : 16; /**< [ 31: 16](RO) Number of rings implemented. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_const_s cn; */
};
typedef union cavm_sdpx_const cavm_sdpx_const_t;

static inline uint64_t CAVM_SDPX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080300ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_CONST(a) cavm_sdpx_const_t
#define bustype_CAVM_SDPX_CONST(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_CONST(a) "SDPX_CONST"
#define device_bar_CAVM_SDPX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_CONST(a) (a)
#define arguments_CAVM_SDPX_CONST(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_csclk_active_pc
 *
 * SDP Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 */
union cavm_sdpx_csclk_active_pc
{
    uint64_t u;
    struct cavm_sdpx_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_csclk_active_pc_s cn; */
};
typedef union cavm_sdpx_csclk_active_pc cavm_sdpx_csclk_active_pc_t;

static inline uint64_t CAVM_SDPX_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_CSCLK_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080220ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_CSCLK_ACTIVE_PC(a) cavm_sdpx_csclk_active_pc_t
#define bustype_CAVM_SDPX_CSCLK_ACTIVE_PC(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_CSCLK_ACTIVE_PC(a) "SDPX_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_SDPX_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_SDPX_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_diag
 *
 * SDP Diagnostic Status Register
 * This register indicates some conditions which may be interesting for diagnostics.
 */
union cavm_sdpx_diag
{
    uint64_t u;
    struct cavm_sdpx_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t in_dir_toobig         : 1;  /**< [  2:  2](R/W1C/H) Direct gather list length specified is greater than (packet length - FSZ) in instruction. */
        uint64_t in_ind_unaligned      : 1;  /**< [  1:  1](R/W1C/H) Indirect gather list is not aligned to 8-byte boundary.  This will also cause
                                                                 SDP()_R()_ERR_TYPE[IND_DMA_ERR]. */
        uint64_t in_ind_toobig         : 1;  /**< [  0:  0](R/W1C/H) Indirect gather list length specified is greater than (packet length - FSZ) in instruction. */
#else /* Word 0 - Little Endian */
        uint64_t in_ind_toobig         : 1;  /**< [  0:  0](R/W1C/H) Indirect gather list length specified is greater than (packet length - FSZ) in instruction. */
        uint64_t in_ind_unaligned      : 1;  /**< [  1:  1](R/W1C/H) Indirect gather list is not aligned to 8-byte boundary.  This will also cause
                                                                 SDP()_R()_ERR_TYPE[IND_DMA_ERR]. */
        uint64_t in_dir_toobig         : 1;  /**< [  2:  2](R/W1C/H) Direct gather list length specified is greater than (packet length - FSZ) in instruction. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_diag_s cn; */
};
typedef union cavm_sdpx_diag cavm_sdpx_diag_t;

static inline uint64_t CAVM_SDPX_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_DIAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080140ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_DIAG(a) cavm_sdpx_diag_t
#define bustype_CAVM_SDPX_DIAG(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_DIAG(a) "SDPX_DIAG"
#define device_bar_CAVM_SDPX_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_DIAG(a) (a)
#define arguments_CAVM_SDPX_DIAG(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_epf#_dma_cnt#
 *
 * SDP DMA Count Registers
 * These registers contain the DMA count values.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_dma_cntx
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_cntx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The DMA counter. SDP/DPI hardware subtracts the written value from
                                                                 the counter whenever software writes this CSR. SDP/DPI hardware increments this
                                                                 counter after completing an OUTBOUND or EXTERNAL-ONLY DMA instruction
                                                                 with DPI_DMA_INSTR_HDR_S[CA] set DPI_DMA_INSTR_HDR_S[CSEL] equal to this
                                                                 CSR index. These increments may cause interrupts.
                                                                 See SDP()_EPF()_DMA_INT_LEVEL() and SDP()_EPF()_DMA_RINT[DCNT,DTIME]. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The DMA counter. SDP/DPI hardware subtracts the written value from
                                                                 the counter whenever software writes this CSR. SDP/DPI hardware increments this
                                                                 counter after completing an OUTBOUND or EXTERNAL-ONLY DMA instruction
                                                                 with DPI_DMA_INSTR_HDR_S[CA] set DPI_DMA_INSTR_HDR_S[CSEL] equal to this
                                                                 CSR index. These increments may cause interrupts.
                                                                 See SDP()_EPF()_DMA_INT_LEVEL() and SDP()_EPF()_DMA_RINT[DCNT,DTIME]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_cntx_s cn; */
};
typedef union cavm_sdpx_epfx_dma_cntx cavm_sdpx_epfx_dma_cntx_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_CNTX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_CNTX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=1)))
        return 0xc01810000760ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x1);
    __cavm_csr_fatal("SDPX_EPFX_DMA_CNTX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_CNTX(a,b,c) cavm_sdpx_epfx_dma_cntx_t
#define bustype_CAVM_SDPX_EPFX_DMA_CNTX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_CNTX(a,b,c) "SDPX_EPFX_DMA_CNTX"
#define device_bar_CAVM_SDPX_EPFX_DMA_CNTX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_CNTX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_CNTX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_dma_int_level#
 *
 * SDP DMA Interrupt Level Registers
 * These registers contain the thresholds for DMA count and timer interrupts.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_dma_int_levelx
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_int_levelx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tim                   : 32; /**< [ 63: 32](R/W) Whenever the SDP()_EPF()_DMA_TIM()[TIM] timer exceeds this value,
                                                                 SDP()_EPF()_DMA_RINT[DTIME]\<x\> is set. The SDP()_EPF()_DMA_TIM()[TIM] timer
                                                                 increments every SDP clock whenever SDP()_EPF()_DMA_CNT()[CNT] != 0, and is cleared
                                                                 when SDP()_EPF()_DMA_CNT()[CNT] is written to a non zero value. */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W) Whenever SDP()_EPF()_DMA_CNT()[CNT] exceeds this value, SDP()_EPF()_DMA_RINT[DCNT]\<x\>
                                                                 is set. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W) Whenever SDP()_EPF()_DMA_CNT()[CNT] exceeds this value, SDP()_EPF()_DMA_RINT[DCNT]\<x\>
                                                                 is set. */
        uint64_t tim                   : 32; /**< [ 63: 32](R/W) Whenever the SDP()_EPF()_DMA_TIM()[TIM] timer exceeds this value,
                                                                 SDP()_EPF()_DMA_RINT[DTIME]\<x\> is set. The SDP()_EPF()_DMA_TIM()[TIM] timer
                                                                 increments every SDP clock whenever SDP()_EPF()_DMA_CNT()[CNT] != 0, and is cleared
                                                                 when SDP()_EPF()_DMA_CNT()[CNT] is written to a non zero value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_int_levelx_s cn; */
};
typedef union cavm_sdpx_epfx_dma_int_levelx cavm_sdpx_epfx_dma_int_levelx_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_INT_LEVELX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_INT_LEVELX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=1)))
        return 0xc01810000740ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x1);
    __cavm_csr_fatal("SDPX_EPFX_DMA_INT_LEVELX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_INT_LEVELX(a,b,c) cavm_sdpx_epfx_dma_int_levelx_t
#define bustype_CAVM_SDPX_EPFX_DMA_INT_LEVELX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_INT_LEVELX(a,b,c) "SDPX_EPFX_DMA_INT_LEVELX"
#define device_bar_CAVM_SDPX_EPFX_DMA_INT_LEVELX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_INT_LEVELX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_INT_LEVELX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_dma_rint
 *
 * SDP/DPI DTIME/DCNT/DMAFI Interrupt Registers
 * These registers contain interrupts related to the DPI DMA engines.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_dma_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1C/H) Whenever SDP()_EPF()_DMA_CNT()[CNT] is not 0, the SDP()_EPF()_DMA_TIM()[TIM]
                                                                 timer increments every SDP clock. [DTIME]\<x\> is set whenever
                                                                 SDP()_EPF()_DMA_TIM()[TIM] \> SDP()_EPF()_DMA_INT_LEVEL()[TIM].
                                                                 [DTIME]\<x\> is cleared when writing a non zero value to SDP()_EPF()_DMA_CNT()[CNT]
                                                                 causing SDP()_EPF()_DMA_TIM()[TIM] to clear to 0 and
                                                                 SDP()_EPF()_DMA_TIM()[TIM] to fall below SDP()_EPF()_DMA_INT_LEVEL()[TIM]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1C/H) [DCNT]\<x\> is set whenever SDP()_EPF()_DMA_CNT()[CNT] \> SDP()_EPF()_DMA_INT_LEVEL()[CNT].
                                                                 [DCNT]\<x\> is normally cleared by decreasing SDP()_EPF()_DMA_CNT()[CNT].

                                                                 Since DCNT is a level interrupt, SDP()_EPF()_DMA_CNT()[CNT] must be decremented below
                                                                 SDP()_EPF()_DMA_INT_LEVEL()[CNT] to receive subsequent DCNT interrupts. */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1C/H) DMA set forced interrupts. Set by SDP/DPI after completing a DPI DMA
                                                                 Instruction with DPI_DMA_INSTR_HDR_S[FI] set. */
#else /* Word 0 - Little Endian */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1C/H) DMA set forced interrupts. Set by SDP/DPI after completing a DPI DMA
                                                                 Instruction with DPI_DMA_INSTR_HDR_S[FI] set. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1C/H) [DCNT]\<x\> is set whenever SDP()_EPF()_DMA_CNT()[CNT] \> SDP()_EPF()_DMA_INT_LEVEL()[CNT].
                                                                 [DCNT]\<x\> is normally cleared by decreasing SDP()_EPF()_DMA_CNT()[CNT].

                                                                 Since DCNT is a level interrupt, SDP()_EPF()_DMA_CNT()[CNT] must be decremented below
                                                                 SDP()_EPF()_DMA_INT_LEVEL()[CNT] to receive subsequent DCNT interrupts. */
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1C/H) Whenever SDP()_EPF()_DMA_CNT()[CNT] is not 0, the SDP()_EPF()_DMA_TIM()[TIM]
                                                                 timer increments every SDP clock. [DTIME]\<x\> is set whenever
                                                                 SDP()_EPF()_DMA_TIM()[TIM] \> SDP()_EPF()_DMA_INT_LEVEL()[TIM].
                                                                 [DTIME]\<x\> is cleared when writing a non zero value to SDP()_EPF()_DMA_CNT()[CNT]
                                                                 causing SDP()_EPF()_DMA_TIM()[TIM] to clear to 0 and
                                                                 SDP()_EPF()_DMA_TIM()[TIM] to fall below SDP()_EPF()_DMA_INT_LEVEL()[TIM]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_rint_s cn; */
};
typedef union cavm_sdpx_epfx_dma_rint cavm_sdpx_epfx_dma_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000700ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_DMA_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_RINT(a,b) cavm_sdpx_epfx_dma_rint_t
#define bustype_CAVM_SDPX_EPFX_DMA_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_RINT(a,b) "SDPX_EPFX_DMA_RINT"
#define device_bar_CAVM_SDPX_EPFX_DMA_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_dma_rint_ena_w1c
 *
 * SDP/DPI DTIME/DCNT/DMAFI Interrupt Remote Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_dma_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_DMA_RINT[DTIME]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_DMA_RINT[DCNT]. */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_DMA_RINT[DMAFI]. */
#else /* Word 0 - Little Endian */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_DMA_RINT[DMAFI]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_DMA_RINT[DCNT]. */
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_DMA_RINT[DTIME]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_dma_rint_ena_w1c cavm_sdpx_epfx_dma_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000720ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_DMA_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_dma_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(a,b) "SDPX_EPFX_DMA_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_dma_rint_ena_w1s
 *
 * SDP/DPI DTIME/DCNT/DMAFI Interrupt Remote Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_dma_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_DMA_RINT[DTIME]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_DMA_RINT[DCNT]. */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_DMA_RINT[DMAFI]. */
#else /* Word 0 - Little Endian */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_DMA_RINT[DMAFI]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_DMA_RINT[DCNT]. */
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_DMA_RINT[DTIME]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_dma_rint_ena_w1s cavm_sdpx_epfx_dma_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000730ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_DMA_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_dma_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(a,b) "SDPX_EPFX_DMA_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_dma_rint_w1s
 *
 * SDP/DPI DTIME/DCNT/DMAFI Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_dma_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_DMA_RINT[DTIME]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_DMA_RINT[DCNT]. */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_DMA_RINT[DMAFI]. */
#else /* Word 0 - Little Endian */
        uint64_t dmafi                 : 2;  /**< [  1:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_DMA_RINT[DMAFI]. */
        uint64_t dcnt                  : 2;  /**< [  3:  2](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_DMA_RINT[DCNT]. */
        uint64_t dtime                 : 2;  /**< [  5:  4](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_DMA_RINT[DTIME]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_dma_rint_w1s cavm_sdpx_epfx_dma_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000710ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_DMA_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_RINT_W1S(a,b) cavm_sdpx_epfx_dma_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_DMA_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_RINT_W1S(a,b) "SDPX_EPFX_DMA_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_DMA_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_dma_tim#
 *
 * SDP DMA Timer Registers
 * These registers contain the DMA timer values.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_dma_timx
{
    uint64_t u;
    struct cavm_sdpx_epfx_dma_timx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tim                   : 32; /**< [ 31:  0](RO/H) The DMA timer value. The timer increments when
                                                                 SDP()_EPF()_DMA_CNT()[CNT]!=0 and clears when SDP()_EPF()_DMA_RINT[DTIME]\<x\> is
                                                                 written with one. */
#else /* Word 0 - Little Endian */
        uint64_t tim                   : 32; /**< [ 31:  0](RO/H) The DMA timer value. The timer increments when
                                                                 SDP()_EPF()_DMA_CNT()[CNT]!=0 and clears when SDP()_EPF()_DMA_RINT[DTIME]\<x\> is
                                                                 written with one. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_dma_timx_s cn; */
};
typedef union cavm_sdpx_epfx_dma_timx cavm_sdpx_epfx_dma_timx_t;

static inline uint64_t CAVM_SDPX_EPFX_DMA_TIMX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_DMA_TIMX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=1)))
        return 0xc01810000780ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x1);
    __cavm_csr_fatal("SDPX_EPFX_DMA_TIMX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_DMA_TIMX(a,b,c) cavm_sdpx_epfx_dma_timx_t
#define bustype_CAVM_SDPX_EPFX_DMA_TIMX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_DMA_TIMX(a,b,c) "SDPX_EPFX_DMA_TIMX"
#define device_bar_CAVM_SDPX_EPFX_DMA_TIMX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_DMA_TIMX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_DMA_TIMX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_ire_rint
 *
 * SDP Input Error Status Register
 * This register indicates if an error has been detected on an input ring.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 */
union cavm_sdpx_epfx_ire_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_ire_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on input ring i. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on input ring i. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ire_rint_s cn; */
};
typedef union cavm_sdpx_epfx_ire_rint cavm_sdpx_epfx_ire_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100000c0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_IRE_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_IRE_RINT(a,b) cavm_sdpx_epfx_ire_rint_t
#define bustype_CAVM_SDPX_EPFX_IRE_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_IRE_RINT(a,b) "SDPX_EPFX_IRE_RINT"
#define device_bar_CAVM_SDPX_EPFX_IRE_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_IRE_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_IRE_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ire_rint_ena_w1c
 *
 * SDP Input Error Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_ire_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_ire_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_IRE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_IRE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ire_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_ire_rint_ena_w1c cavm_sdpx_epfx_ire_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100000e0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_IRE_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_ire_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(a,b) "SDPX_EPFX_IRE_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ire_rint_ena_w1s
 *
 * SDP Input Error Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_ire_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_ire_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_IRE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_IRE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ire_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_ire_rint_ena_w1s cavm_sdpx_epfx_ire_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100000f0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_IRE_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_ire_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(a,b) "SDPX_EPFX_IRE_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_IRE_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ire_rint_w1s
 *
 * SDP Input Error Status Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_ire_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_ire_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_IRE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_IRE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ire_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_ire_rint_w1s cavm_sdpx_epfx_ire_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_IRE_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100000d0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_IRE_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_IRE_RINT_W1S(a,b) cavm_sdpx_epfx_ire_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_IRE_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_IRE_RINT_W1S(a,b) "SDPX_EPFX_IRE_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_IRE_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_IRE_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_IRE_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ism_msix_recovery
 *
 * SDP Ring Information Register
 * This register can be used to implement a minimum delay between sending MSI-X messages
 * and ISM messages.
 * This could be used to prevent a misbehaving VF from flooding the system with MSI-X
 * or ISM writes and starving traffic from other VFs.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 * Note: EPF(0-1) are mapped to MAC0, EPF(2-3) are mapped to MAC2.
 */
union cavm_sdpx_epfx_ism_msix_recovery
{
    uint64_t u;
    struct cavm_sdpx_epfx_ism_msix_recovery_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t delay                 : 12; /**< [ 11:  0](R/W) Delay value in system clock cycles. */
#else /* Word 0 - Little Endian */
        uint64_t delay                 : 12; /**< [ 11:  0](R/W) Delay value in system clock cycles. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ism_msix_recovery_s cn; */
};
typedef union cavm_sdpx_epfx_ism_msix_recovery cavm_sdpx_epfx_ism_msix_recovery_t;

static inline uint64_t CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000a00ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_ISM_MSIX_RECOVERY", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(a,b) cavm_sdpx_epfx_ism_msix_recovery_t
#define bustype_CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(a,b) "SDPX_EPFX_ISM_MSIX_RECOVERY"
#define device_bar_CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_ISM_MSIX_RECOVERY(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_mbox_rint
 *
 * SDP Mailbox Interrupt Status Register
 * This register indicates which VF/ring has signaled an interrupt.
 * Register index 0 refers to the VF functions 1..64 of the EPF.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_mbox_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_mbox_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1C/H) Each bit indicates a ring from 0-63. */
#else /* Word 0 - Little Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1C/H) Each bit indicates a ring from 0-63. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_mbox_rint_s cn; */
};
typedef union cavm_sdpx_epfx_mbox_rint cavm_sdpx_epfx_mbox_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000000ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MBOX_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MBOX_RINT(a,b) cavm_sdpx_epfx_mbox_rint_t
#define bustype_CAVM_SDPX_EPFX_MBOX_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MBOX_RINT(a,b) "SDPX_EPFX_MBOX_RINT"
#define device_bar_CAVM_SDPX_EPFX_MBOX_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MBOX_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MBOX_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_mbox_rint_ena_w1c
 *
 * SDP Mailbox Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_mbox_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_mbox_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MBOX_RINT[RING_NUM]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MBOX_RINT[RING_NUM]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_mbox_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_mbox_rint_ena_w1c cavm_sdpx_epfx_mbox_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000040ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MBOX_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_mbox_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(a,b) "SDPX_EPFX_MBOX_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_mbox_rint_ena_w1s
 *
 * SDP Mailbox Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_mbox_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_mbox_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MBOX_RINT[RING_NUM]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MBOX_RINT[RING_NUM]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_mbox_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_mbox_rint_ena_w1s cavm_sdpx_epfx_mbox_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000060ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MBOX_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_mbox_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(a,b) "SDPX_EPFX_MBOX_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MBOX_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_mbox_rint_w1s
 *
 * SDP Mailbox Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_mbox_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_mbox_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MBOX_RINT[RING_NUM]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_num              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MBOX_RINT[RING_NUM]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_mbox_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_mbox_rint_w1s cavm_sdpx_epfx_mbox_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MBOX_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000020ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MBOX_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MBOX_RINT_W1S(a,b) cavm_sdpx_epfx_mbox_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_MBOX_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MBOX_RINT_W1S(a,b) "SDPX_EPFX_MBOX_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_MBOX_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MBOX_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MBOX_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_misc_rint
 *
 * SDP MAC Interrupt Summary Register
 * This register contains the different interrupt-summary bits for one MAC in the SDP.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_misc_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_misc_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) Set when an error response is received for a PF DMA transaction read. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Set when an error response is received for a PF PP transaction read. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Received unsupported N-TLP for window register from the corresponding MAC. This
                                                                 occurs when the window registers are disabled and a window register access
                                                                 occurs. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1C/H) Received unsupported N-TLP for Bar 0 from the corresponding MAC. This occurs
                                                                 when the BAR 0 address space is disabled. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1C/H) Received unsupported P-TLP for window register from the corresponding MAC. This
                                                                 occurs when the window registers are disabled and a window register access
                                                                 occurs. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1C/H) Received unsupported P-TLP for Bar 0 from the corresponding MAC. This occurs
                                                                 when the BAR 0 address space is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1C/H) Received unsupported P-TLP for Bar 0 from the corresponding MAC. This occurs
                                                                 when the BAR 0 address space is disabled. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1C/H) Received unsupported P-TLP for window register from the corresponding MAC. This
                                                                 occurs when the window registers are disabled and a window register access
                                                                 occurs. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1C/H) Received unsupported N-TLP for Bar 0 from the corresponding MAC. This occurs
                                                                 when the BAR 0 address space is disabled. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Received unsupported N-TLP for window register from the corresponding MAC. This
                                                                 occurs when the window registers are disabled and a window register access
                                                                 occurs. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Set when an error response is received for a PF PP transaction read. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) Set when an error response is received for a PF DMA transaction read. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_misc_rint_s cn; */
};
typedef union cavm_sdpx_epfx_misc_rint cavm_sdpx_epfx_misc_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100007a0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MISC_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MISC_RINT(a,b) cavm_sdpx_epfx_misc_rint_t
#define bustype_CAVM_SDPX_EPFX_MISC_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MISC_RINT(a,b) "SDPX_EPFX_MISC_RINT"
#define device_bar_CAVM_SDPX_EPFX_MISC_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MISC_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MISC_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_misc_rint_ena_w1c
 *
 * SDP MAC Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_misc_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_misc_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[DMAPF_ERR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[PPPF_ERR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_WI]. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_B0]. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_B0]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_WI]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[PPPF_ERR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_MISC_RINT[DMAPF_ERR]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_misc_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_misc_rint_ena_w1c cavm_sdpx_epfx_misc_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100007c0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MISC_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_misc_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(a,b) "SDPX_EPFX_MISC_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_misc_rint_ena_w1s
 *
 * SDP MAC Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_misc_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_misc_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[DMAPF_ERR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[PPPF_ERR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_WI]. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_B0]. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UP_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_B0]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[UN_WI]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[PPPF_ERR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_MISC_RINT[DMAPF_ERR]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_misc_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_misc_rint_ena_w1s cavm_sdpx_epfx_misc_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100007d0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MISC_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_misc_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(a,b) "SDPX_EPFX_MISC_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MISC_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_misc_rint_w1s
 *
 * SDP MAC Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_misc_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_misc_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[DMAPF_ERR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[PPPF_ERR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UN_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UN_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UP_WI]. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UP_B0]. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UP_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UP_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UN_B0]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[UN_WI]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[PPPF_ERR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_MISC_RINT[DMAPF_ERR]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_misc_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_misc_rint_w1s cavm_sdpx_epfx_misc_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_MISC_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100007b0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_MISC_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_MISC_RINT_W1S(a,b) cavm_sdpx_epfx_misc_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_MISC_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_MISC_RINT_W1S(a,b) "SDPX_EPFX_MISC_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_MISC_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_MISC_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_MISC_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_oei_rint#
 *
 * SDP Output Endpoint Interrupt Register
 * Interrupt data for interrupts sent to remote hosts.
 * This register is reset due to PF FLR, it is not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_oei_rintx
{
    uint64_t u;
    struct cavm_sdpx_epfx_oei_rintx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1C/H) Data for remote host. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1C/H) Data for remote host. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_oei_rintx_s cn; */
};
typedef union cavm_sdpx_epfx_oei_rintx cavm_sdpx_epfx_oei_rintx_t;

static inline uint64_t CAVM_SDPX_EPFX_OEI_RINTX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_OEI_RINTX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=15)))
        return 0xc01810000300ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_OEI_RINTX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_OEI_RINTX(a,b,c) cavm_sdpx_epfx_oei_rintx_t
#define bustype_CAVM_SDPX_EPFX_OEI_RINTX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_OEI_RINTX(a,b,c) "SDPX_EPFX_OEI_RINTX"
#define device_bar_CAVM_SDPX_EPFX_OEI_RINTX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_OEI_RINTX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_OEI_RINTX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_oei_rint_ena_w1c#
 *
 * SDP Output Endpoint Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_oei_rint_ena_w1cx
{
    uint64_t u;
    struct cavm_sdpx_epfx_oei_rint_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_OEI_RINT(0..15)[DATA]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_OEI_RINT(0..15)[DATA]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_oei_rint_ena_w1cx_s cn; */
};
typedef union cavm_sdpx_epfx_oei_rint_ena_w1cx cavm_sdpx_epfx_oei_rint_ena_w1cx_t;

static inline uint64_t CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=15)))
        return 0xc01810000500ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_OEI_RINT_ENA_W1CX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(a,b,c) cavm_sdpx_epfx_oei_rint_ena_w1cx_t
#define bustype_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(a,b,c) "SDPX_EPFX_OEI_RINT_ENA_W1CX"
#define device_bar_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1CX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_oei_rint_ena_w1s#
 *
 * SDP Output Endpoint Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_oei_rint_ena_w1sx
{
    uint64_t u;
    struct cavm_sdpx_epfx_oei_rint_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_OEI_RINT(0..15)[DATA]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_OEI_RINT(0..15)[DATA]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_oei_rint_ena_w1sx_s cn; */
};
typedef union cavm_sdpx_epfx_oei_rint_ena_w1sx cavm_sdpx_epfx_oei_rint_ena_w1sx_t;

static inline uint64_t CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=15)))
        return 0xc01810000600ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_OEI_RINT_ENA_W1SX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(a,b,c) cavm_sdpx_epfx_oei_rint_ena_w1sx_t
#define bustype_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(a,b,c) "SDPX_EPFX_OEI_RINT_ENA_W1SX"
#define device_bar_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_OEI_RINT_ENA_W1SX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_oei_rint_w1s#
 *
 * SDP Output Endpoint Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_oei_rint_w1sx
{
    uint64_t u;
    struct cavm_sdpx_epfx_oei_rint_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_OEI_RINT(0..15)[DATA]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_OEI_RINT(0..15)[DATA]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_oei_rint_w1sx_s cn; */
};
typedef union cavm_sdpx_epfx_oei_rint_w1sx cavm_sdpx_epfx_oei_rint_w1sx_t;

static inline uint64_t CAVM_SDPX_EPFX_OEI_RINT_W1SX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_OEI_RINT_W1SX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=15)))
        return 0xc01810000400ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_OEI_RINT_W1SX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_OEI_RINT_W1SX(a,b,c) cavm_sdpx_epfx_oei_rint_w1sx_t
#define bustype_CAVM_SDPX_EPFX_OEI_RINT_W1SX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_OEI_RINT_W1SX(a,b,c) "SDPX_EPFX_OEI_RINT_W1SX"
#define device_bar_CAVM_SDPX_EPFX_OEI_RINT_W1SX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_OEI_RINT_W1SX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_OEI_RINT_W1SX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_oei_trig#
 *
 * SDP Output Endpoint Interrupt Trigger Register
 * This trigger register can be used to generate outbound interrupts to the remote host
 * when one of the supported MACs is configured in endpoint mode. This trigger register
 * can either be written directly by the local CPU, or it can be indirectly written by
 * hardware by configuring a local MSI-X table with the address of this register, after
 * translation by the SMMU.  The [SET] field is used for edge triggered interrupts and
 * [SET] and [CLR] can be used to mimic a level sensitive interrupt.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 * Note: EPF(0-15) are mapped to MAC0, EPF(16-31) are mapped to MAC2.
 */
union cavm_sdpx_epfx_oei_trigx
{
    uint64_t u;
    struct cavm_sdpx_epfx_oei_trigx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t set                   : 1;  /**< [ 19: 19](WO/H) When written with a 1, bit number [BIT_NUM] will be set in
                                                                 SDP()_EPF()_OEI_RINT_W1S(). If the outbound interrupt is enabled in
                                                                 SDP()_EPF()_OEI_RINT_ENA_W1S(), an MSI-X message will be generated to the remote
                                                                 host. If [CLR] is also being written with 1, the operation will be ignored. */
        uint64_t clr                   : 1;  /**< [ 18: 18](WO/H) When written with a 1, bit number [BIT_NUM] will be cleared in
                                                                 SDP()_EPF()_OEI_RINT_W1S(). If the outbound interrupt is enabled in
                                                                 SDP()_EPF()_OEI_RINT_ENA_W1S(), an MSI-X message will be generated to the remote
                                                                 host. If [SET] is also being written with 1, the operation will be ignored. */
        uint64_t reserved_6_17         : 12;
        uint64_t bit_num               : 6;  /**< [  5:  0](WO/H) Which bit number is to be set or cleared. */
#else /* Word 0 - Little Endian */
        uint64_t bit_num               : 6;  /**< [  5:  0](WO/H) Which bit number is to be set or cleared. */
        uint64_t reserved_6_17         : 12;
        uint64_t clr                   : 1;  /**< [ 18: 18](WO/H) When written with a 1, bit number [BIT_NUM] will be cleared in
                                                                 SDP()_EPF()_OEI_RINT_W1S(). If the outbound interrupt is enabled in
                                                                 SDP()_EPF()_OEI_RINT_ENA_W1S(), an MSI-X message will be generated to the remote
                                                                 host. If [SET] is also being written with 1, the operation will be ignored. */
        uint64_t set                   : 1;  /**< [ 19: 19](WO/H) When written with a 1, bit number [BIT_NUM] will be set in
                                                                 SDP()_EPF()_OEI_RINT_W1S(). If the outbound interrupt is enabled in
                                                                 SDP()_EPF()_OEI_RINT_ENA_W1S(), an MSI-X message will be generated to the remote
                                                                 host. If [CLR] is also being written with 1, the operation will be ignored. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_oei_trigx_s cn; */
};
typedef union cavm_sdpx_epfx_oei_trigx cavm_sdpx_epfx_oei_trigx_t;

static inline uint64_t CAVM_SDPX_EPFX_OEI_TRIGX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_OEI_TRIGX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=15)))
        return 0xc01810080000ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_OEI_TRIGX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_OEI_TRIGX(a,b,c) cavm_sdpx_epfx_oei_trigx_t
#define bustype_CAVM_SDPX_EPFX_OEI_TRIGX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_OEI_TRIGX(a,b,c) "SDPX_EPFX_OEI_TRIGX"
#define device_bar_CAVM_SDPX_EPFX_OEI_TRIGX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_OEI_TRIGX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_OEI_TRIGX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_ore_rint
 *
 * SDP Output Error Status Register
 * This register indicates if an error has been detected on an output ring.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_ore_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_ore_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on ring output ring i. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on ring output ring i. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ore_rint_s cn; */
};
typedef union cavm_sdpx_epfx_ore_rint cavm_sdpx_epfx_ore_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000140ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_ORE_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_ORE_RINT(a,b) cavm_sdpx_epfx_ore_rint_t
#define bustype_CAVM_SDPX_EPFX_ORE_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_ORE_RINT(a,b) "SDPX_EPFX_ORE_RINT"
#define device_bar_CAVM_SDPX_EPFX_ORE_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_ORE_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_ORE_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ore_rint_ena_w1c
 *
 * SDP Output Error Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_ore_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_ore_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_ORE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_ORE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ore_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_ore_rint_ena_w1c cavm_sdpx_epfx_ore_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000160ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_ORE_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_ore_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(a,b) "SDPX_EPFX_ORE_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ore_rint_ena_w1s
 *
 * SDP Output Error Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_ore_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_ore_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_ORE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_ORE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ore_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_ore_rint_ena_w1s cavm_sdpx_epfx_ore_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000170ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_ORE_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_ore_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(a,b) "SDPX_EPFX_ORE_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_ORE_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_ore_rint_w1s
 *
 * SDP Output Error Status Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_ore_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_ore_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_ORE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_ORE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_ore_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_ore_rint_w1s cavm_sdpx_epfx_ore_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_ORE_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000150ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_ORE_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_ORE_RINT_W1S(a,b) cavm_sdpx_epfx_ore_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_ORE_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_ORE_RINT_W1S(a,b) "SDPX_EPFX_ORE_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_ORE_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_ORE_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_ORE_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_rinfo
 *
 * SDP Ring Information Register
 * This register sets the total number of vfs and vf rings for a given MAC and PF
 * combination (EPF).  An EPF can only access VF rings through VF bar space,
 * it cannot access a VF's rings through its own PF bar space,
 *
 * This register does not specify rings a EPF owns, see SDP()_MAC()_PF_RING_CTL.
 *
 * An individual VF will own SDP()_EPF()_RINFO[RPVF] number of rings.
 *
 * SDP()_EPVF_RING()[EPVF] must be written to values that
 * correlate with the fields in this register.
 *
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_rinfo
{
    uint64_t u;
    struct cavm_sdpx_epfx_rinfo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t nvfs                  : 7;  /**< [ 54: 48](R/W) The number of VFs for this PF. This field must not be zero whenever [RPVF] != 0.
                                                                 Legal values are 0 to 64, with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_39_47        : 9;
        uint64_t rpvf                  : 7;  /**< [ 38: 32](R/W) The number of rings assigned to a VF for this PF. Legal values are 0 to 8
                                                                 with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_9_31         : 23;
        uint64_t srn                   : 9;  /**< [  8:  0](R/W) The starting ring number used by the EPF. */
#else /* Word 0 - Little Endian */
        uint64_t srn                   : 9;  /**< [  8:  0](R/W) The starting ring number used by the EPF. */
        uint64_t reserved_9_31         : 23;
        uint64_t rpvf                  : 7;  /**< [ 38: 32](R/W) The number of rings assigned to a VF for this PF. Legal values are 0 to 8
                                                                 with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_39_47        : 9;
        uint64_t nvfs                  : 7;  /**< [ 54: 48](R/W) The number of VFs for this PF. This field must not be zero whenever [RPVF] != 0.
                                                                 Legal values are 0 to 64, with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } s;
    struct cavm_sdpx_epfx_rinfo_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_55_63        : 9;
        uint64_t nvfs                  : 7;  /**< [ 54: 48](R/W) The number of VFs for this PF. This field must not be zero whenever [RPVF] != 0.
                                                                 Legal values are 0 to 64, with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_39_47        : 9;
        uint64_t rpvf                  : 7;  /**< [ 38: 32](R/W) The number of rings assigned to a VF for this PF. Legal values are 0 to 8
                                                                 with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_24_31        : 8;
        uint64_t reserved_16_23        : 8;
        uint64_t reserved_9_15         : 7;
        uint64_t srn                   : 9;  /**< [  8:  0](R/W) The starting ring number used by the EPF. */
#else /* Word 0 - Little Endian */
        uint64_t srn                   : 9;  /**< [  8:  0](R/W) The starting ring number used by the EPF. */
        uint64_t reserved_9_15         : 7;
        uint64_t reserved_16_23        : 8;
        uint64_t reserved_24_31        : 8;
        uint64_t rpvf                  : 7;  /**< [ 38: 32](R/W) The number of rings assigned to a VF for this PF. Legal values are 0 to 8
                                                                 with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_39_47        : 9;
        uint64_t nvfs                  : 7;  /**< [ 54: 48](R/W) The number of VFs for this PF. This field must not be zero whenever [RPVF] != 0.
                                                                 Legal values are 0 to 64, with the requirement of (NVFS * RPVF) \<= TRS. */
        uint64_t reserved_55_63        : 9;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_sdpx_epfx_rinfo cavm_sdpx_epfx_rinfo_t;

static inline uint64_t CAVM_SDPX_EPFX_RINFO(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_RINFO(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100007f0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_RINFO", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_RINFO(a,b) cavm_sdpx_epfx_rinfo_t
#define bustype_CAVM_SDPX_EPFX_RINFO(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_RINFO(a,b) "SDPX_EPFX_RINFO"
#define device_bar_CAVM_SDPX_EPFX_RINFO(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_RINFO(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_RINFO(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_rmt_msix_pba#
 *
 * SDP Remote MSI-X Pending Bit Array Registers
 * This register is the remote MSI-X PBA table.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 *       PBA(0) refers to the EPF's lower 64 MSIX vectors
 *       PBA(1) refers to the EPF's upper 64 MSIX vectors
 */
union cavm_sdpx_epfx_rmt_msix_pbax
{
    uint64_t u;
    struct cavm_sdpx_epfx_rmt_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated SDP()_EPF()_RMT_MSIX_VEC()_CTL.
                                                                 This is reset by PF-FLR and VF-FLR. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated SDP()_EPF()_RMT_MSIX_VEC()_CTL.
                                                                 This is reset by PF-FLR and VF-FLR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_rmt_msix_pbax_s cn; */
};
typedef union cavm_sdpx_epfx_rmt_msix_pbax cavm_sdpx_epfx_rmt_msix_pbax_t;

static inline uint64_t CAVM_SDPX_EPFX_RMT_MSIX_PBAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_RMT_MSIX_PBAX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=1)))
        return 0xc01800004000ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("SDPX_EPFX_RMT_MSIX_PBAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_RMT_MSIX_PBAX(a,b,c) cavm_sdpx_epfx_rmt_msix_pbax_t
#define bustype_CAVM_SDPX_EPFX_RMT_MSIX_PBAX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_RMT_MSIX_PBAX(a,b,c) "SDPX_EPFX_RMT_MSIX_PBAX"
#define device_bar_CAVM_SDPX_EPFX_RMT_MSIX_PBAX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_RMT_MSIX_PBAX(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_RMT_MSIX_PBAX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_rmt_msix_vec#_addr
 *
 * SDP Remote MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table for remote hosts (when CNXXXX is an
 * endpoint), and is indexed by the SDP_RMT_INT_VEC_E enumeration.
 *
 * This register is not affected by PF-FLR, VF-FLR, VF enable falling edge, or
 * MAC reset. It must be initialized before use.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_rmt_msix_vecx_addr
{
    uint64_t u;
    struct cavm_sdpx_epfx_rmt_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 62; /**< [ 63:  2](R/W) PCI address to use for MSI-X delivery of this vector. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 62; /**< [ 63:  2](R/W) PCI address to use for MSI-X delivery of this vector. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_rmt_msix_vecx_addr_s cn; */
};
typedef union cavm_sdpx_epfx_rmt_msix_vecx_addr cavm_sdpx_epfx_rmt_msix_vecx_addr_t;

static inline uint64_t CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=95)))
        return 0xc01800000000ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x7f);
    __cavm_csr_fatal("SDPX_EPFX_RMT_MSIX_VECX_ADDR", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(a,b,c) cavm_sdpx_epfx_rmt_msix_vecx_addr_t
#define bustype_CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(a,b,c) "SDPX_EPFX_RMT_MSIX_VECX_ADDR"
#define device_bar_CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_RMT_MSIX_VECX_ADDR(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_rmt_msix_vec#_ctl
 *
 * SDP Remote MSI-X Table Entry Data Register
 * This register is the MSI-X vector table for remote hosts (when CNXXXX is an
 * endpoint), and is indexed by the SDP_RMT_INT_VEC_E enumeration.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_rmt_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_sdpx_epfx_rmt_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W/H) When set, no MSI-X interrupts are sent to this vector.
                                                                 This field is reset by hardware in the event of a PF-FLR,
                                                                 VF-FLR, VF enable falling edge, or MAC reset. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector.
                                                                 This field is not affected by PF-FLR, VF-FLR, VF enable falling
                                                                 edge or MAC reset. It must be initialized before use. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector.
                                                                 This field is not affected by PF-FLR, VF-FLR, VF enable falling
                                                                 edge or MAC reset. It must be initialized before use. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W/H) When set, no MSI-X interrupts are sent to this vector.
                                                                 This field is reset by hardware in the event of a PF-FLR,
                                                                 VF-FLR, VF enable falling edge, or MAC reset. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_rmt_msix_vecx_ctl_s cn; */
};
typedef union cavm_sdpx_epfx_rmt_msix_vecx_ctl cavm_sdpx_epfx_rmt_msix_vecx_ctl_t;

static inline uint64_t CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15) && (c<=95)))
        return 0xc01800000008ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x7f);
    __cavm_csr_fatal("SDPX_EPFX_RMT_MSIX_VECX_CTL", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(a,b,c) cavm_sdpx_epfx_rmt_msix_vecx_ctl_t
#define bustype_CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(a,b,c) "SDPX_EPFX_RMT_MSIX_VECX_CTL"
#define device_bar_CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(a,b,c) (a)
#define arguments_CAVM_SDPX_EPFX_RMT_MSIX_VECX_CTL(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) sdp#_epf#_scratch
 *
 * SDP Scratch Register
 * These registers are general purpose 64-bit scratch registers for software use.
 */
union cavm_sdpx_epfx_scratch
{
    uint64_t u;
    struct cavm_sdpx_epfx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) The value in this register is totally software defined. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) The value in this register is totally software defined. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_scratch_s cn; */
};
typedef union cavm_sdpx_epfx_scratch cavm_sdpx_epfx_scratch_t;

static inline uint64_t CAVM_SDPX_EPFX_SCRATCH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_SCRATCH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100007e0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_SCRATCH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_SCRATCH(a,b) cavm_sdpx_epfx_scratch_t
#define bustype_CAVM_SDPX_EPFX_SCRATCH(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_SCRATCH(a,b) "SDPX_EPFX_SCRATCH"
#define device_bar_CAVM_SDPX_EPFX_SCRATCH(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_SCRATCH(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_SCRATCH(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfire_rint
 *
 * SDP Input Error Status Register
 * This register indicates if an error has been detected on an input VF ring.
 * Register refers to the frist 64 rings starting from SDP()_EPF()_RINFO[SRN].
 * SDP()_EPF()_RINFO[SRN] + 64.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_vfire_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfire_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on input ring i. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on input ring i. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfire_rint_s cn; */
};
typedef union cavm_sdpx_epfx_vfire_rint cavm_sdpx_epfx_vfire_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000080ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFIRE_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFIRE_RINT(a,b) cavm_sdpx_epfx_vfire_rint_t
#define bustype_CAVM_SDPX_EPFX_VFIRE_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFIRE_RINT(a,b) "SDPX_EPFX_VFIRE_RINT"
#define device_bar_CAVM_SDPX_EPFX_VFIRE_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFIRE_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFIRE_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfire_rint_ena_w1c
 *
 * SDP Input Error Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_vfire_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfire_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_VFIRE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_VFIRE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfire_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_vfire_rint_ena_w1c cavm_sdpx_epfx_vfire_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100000a0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFIRE_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_vfire_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(a,b) "SDPX_EPFX_VFIRE_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfire_rint_ena_w1s
 *
 * SDP Input Error Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_vfire_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfire_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_VFIRE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_VFIRE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfire_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_vfire_rint_ena_w1s cavm_sdpx_epfx_vfire_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc018100000b0ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFIRE_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_vfire_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(a,b) "SDPX_EPFX_VFIRE_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFIRE_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfire_rint_w1s
 *
 * SDP Input Error Status Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_vfire_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfire_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_VFIRE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_VFIRE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfire_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_vfire_rint_w1s cavm_sdpx_epfx_vfire_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFIRE_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000090ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFIRE_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFIRE_RINT_W1S(a,b) cavm_sdpx_epfx_vfire_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_VFIRE_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFIRE_RINT_W1S(a,b) "SDPX_EPFX_VFIRE_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_VFIRE_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFIRE_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFIRE_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfore_rint
 *
 * SDP Output Error Status Register
 * This register indicates if an error has been detected on an output VF ring.
 * Refers to the 64 rings starting from SDP()_EPF()_RINFO[SRN].
 * SDP()_EPF()_RINFO[SRN] + 64.
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 *
 * Note: EPF(0..7) are mapped to MAC0, EPF(8..15) are mapped to MAC2.
 */
union cavm_sdpx_epfx_vfore_rint
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfore_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on ring output VF ring i. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Error has been detected on ring output VF ring i. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfore_rint_s cn; */
};
typedef union cavm_sdpx_epfx_vfore_rint cavm_sdpx_epfx_vfore_rint_t;

static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000100ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFORE_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFORE_RINT(a,b) cavm_sdpx_epfx_vfore_rint_t
#define bustype_CAVM_SDPX_EPFX_VFORE_RINT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFORE_RINT(a,b) "SDPX_EPFX_VFORE_RINT"
#define device_bar_CAVM_SDPX_EPFX_VFORE_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFORE_RINT(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFORE_RINT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfore_rint_ena_w1c
 *
 * SDP Output Error Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_epfx_vfore_rint_ena_w1c
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfore_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_VFORE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_EPF(0..15)_VFORE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfore_rint_ena_w1c_s cn; */
};
typedef union cavm_sdpx_epfx_vfore_rint_ena_w1c cavm_sdpx_epfx_vfore_rint_ena_w1c_t;

static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000120ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFORE_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(a,b) cavm_sdpx_epfx_vfore_rint_ena_w1c_t
#define bustype_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(a,b) "SDPX_EPFX_VFORE_RINT_ENA_W1C"
#define device_bar_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfore_rint_ena_w1s
 *
 * SDP Output Error Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_epfx_vfore_rint_ena_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfore_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_VFORE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_EPF(0..15)_VFORE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfore_rint_ena_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_vfore_rint_ena_w1s cavm_sdpx_epfx_vfore_rint_ena_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000130ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFORE_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(a,b) cavm_sdpx_epfx_vfore_rint_ena_w1s_t
#define bustype_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(a,b) "SDPX_EPFX_VFORE_RINT_ENA_W1S"
#define device_bar_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFORE_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epf#_vfore_rint_w1s
 *
 * SDP Output Error Status Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_epfx_vfore_rint_w1s
{
    uint64_t u;
    struct cavm_sdpx_epfx_vfore_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_VFORE_RINT[RING_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_err              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_EPF(0..15)_VFORE_RINT[RING_ERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epfx_vfore_rint_w1s_s cn; */
};
typedef union cavm_sdpx_epfx_vfore_rint_w1s cavm_sdpx_epfx_vfore_rint_w1s_t;

static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPFX_VFORE_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01810000110ll + 0x100000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_EPFX_VFORE_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPFX_VFORE_RINT_W1S(a,b) cavm_sdpx_epfx_vfore_rint_w1s_t
#define bustype_CAVM_SDPX_EPFX_VFORE_RINT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPFX_VFORE_RINT_W1S(a,b) "SDPX_EPFX_VFORE_RINT_W1S"
#define device_bar_CAVM_SDPX_EPFX_VFORE_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPFX_VFORE_RINT_W1S(a,b) (a)
#define arguments_CAVM_SDPX_EPFX_VFORE_RINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_epvf_ring#
 *
 * SDP EPVF Ring Register
 * These registers provide the virtual function number for each ring (both input and
 * output). They must be programmed by the PF along with SDP()_EPF()_RINFO before
 * the given ring is enabled. They are not accessible by the VF.
 *
 * All 64 registers associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * These registers are not affected by VF FLR.
 *
 * This register is indexed by ring and would normally be accessed from an AP core where all
 * 128 rings can be indexed.
 * A PF would index this register based upon the settings of SDP()_EPF()_RINFO[SRN]
 * and SDP()_MAC()_PF_RING_CTL[SRN].
 */
union cavm_sdpx_epvf_ringx
{
    uint64_t u;
    struct cavm_sdpx_epvf_ringx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t epvf                  : 12; /**< [ 11:  0](R/W) The function that a ring belongs to.
                                                                 SDP_FUNC_SEL_S format. */
#else /* Word 0 - Little Endian */
        uint64_t epvf                  : 12; /**< [ 11:  0](R/W) The function that a ring belongs to.
                                                                 SDP_FUNC_SEL_S format. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_epvf_ringx_s cn; */
};
typedef union cavm_sdpx_epvf_ringx cavm_sdpx_epvf_ringx_t;

static inline uint64_t CAVM_SDPX_EPVF_RINGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_EPVF_RINGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01810006000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_EPVF_RINGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_EPVF_RINGX(a,b) cavm_sdpx_epvf_ringx_t
#define bustype_CAVM_SDPX_EPVF_RINGX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_EPVF_RINGX(a,b) "SDPX_EPVF_RINGX"
#define device_bar_CAVM_SDPX_EPVF_RINGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_EPVF_RINGX(a,b) (a)
#define arguments_CAVM_SDPX_EPVF_RINGX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_flr_ring_lint#
 *
 * SDP Function Level Reset VF Bit Array Registers
 * These registers are bit maps for the 128 rings in SDP and
 * indicate a ring that is owned by a function that went into
 * FLR.
 *
 * _ SDP()_FLR_RING_LINT(0) represents rings 63..0.
 * _ SDP()_FLR_RING_LINT(1) represents rings 127..63.
 *
 * These registers are only valid for PEM0 PF0 and PEM2 PF0.
 */
union cavm_sdpx_flr_ring_lintx
{
    uint64_t u;
    struct cavm_sdpx_flr_ring_lintx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1C/H) When a VF or PF causes an FLR the appropriate bit for rings
                                                                 under that function will be set. */
#else /* Word 0 - Little Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1C/H) When a VF or PF causes an FLR the appropriate bit for rings
                                                                 under that function will be set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_flr_ring_lintx_s cn; */
};
typedef union cavm_sdpx_flr_ring_lintx cavm_sdpx_flr_ring_lintx_t;

static inline uint64_t CAVM_SDPX_FLR_RING_LINTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_FLR_RING_LINTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810081000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_FLR_RING_LINTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_FLR_RING_LINTX(a,b) cavm_sdpx_flr_ring_lintx_t
#define bustype_CAVM_SDPX_FLR_RING_LINTX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_FLR_RING_LINTX(a,b) "SDPX_FLR_RING_LINTX"
#define device_bar_CAVM_SDPX_FLR_RING_LINTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_FLR_RING_LINTX(a,b) (a)
#define arguments_CAVM_SDPX_FLR_RING_LINTX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_flr_ring_lint_ena_w1c#
 *
 * SDP Function Level Reset VF Bit Array Local Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_flr_ring_lint_ena_w1cx
{
    uint64_t u;
    struct cavm_sdpx_flr_ring_lint_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_FLR_RING_LINT(0..7)[RING_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_FLR_RING_LINT(0..7)[RING_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_flr_ring_lint_ena_w1cx_s cn; */
};
typedef union cavm_sdpx_flr_ring_lint_ena_w1cx cavm_sdpx_flr_ring_lint_ena_w1cx_t;

static inline uint64_t CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810081200ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_FLR_RING_LINT_ENA_W1CX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(a,b) cavm_sdpx_flr_ring_lint_ena_w1cx_t
#define bustype_CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(a,b) "SDPX_FLR_RING_LINT_ENA_W1CX"
#define device_bar_CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(a,b) (a)
#define arguments_CAVM_SDPX_FLR_RING_LINT_ENA_W1CX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_flr_ring_lint_ena_w1s#
 *
 * SDP Function Level Reset VF Bit Array Local Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_flr_ring_lint_ena_w1sx
{
    uint64_t u;
    struct cavm_sdpx_flr_ring_lint_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_FLR_RING_LINT(0..7)[RING_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_FLR_RING_LINT(0..7)[RING_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_flr_ring_lint_ena_w1sx_s cn; */
};
typedef union cavm_sdpx_flr_ring_lint_ena_w1sx cavm_sdpx_flr_ring_lint_ena_w1sx_t;

static inline uint64_t CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810081300ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_FLR_RING_LINT_ENA_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(a,b) cavm_sdpx_flr_ring_lint_ena_w1sx_t
#define bustype_CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(a,b) "SDPX_FLR_RING_LINT_ENA_W1SX"
#define device_bar_CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(a,b) (a)
#define arguments_CAVM_SDPX_FLR_RING_LINT_ENA_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_flr_ring_lint_w1s#
 *
 * SDP Function Level Reset VF Bit Array Set Registers
 * This register sets interrupt bits.
 */
union cavm_sdpx_flr_ring_lint_w1sx
{
    uint64_t u;
    struct cavm_sdpx_flr_ring_lint_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_FLR_RING_LINT(0..7)[RING_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_int              : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_FLR_RING_LINT(0..7)[RING_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_flr_ring_lint_w1sx_s cn; */
};
typedef union cavm_sdpx_flr_ring_lint_w1sx cavm_sdpx_flr_ring_lint_w1sx_t;

static inline uint64_t CAVM_SDPX_FLR_RING_LINT_W1SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_FLR_RING_LINT_W1SX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810081100ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_FLR_RING_LINT_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_FLR_RING_LINT_W1SX(a,b) cavm_sdpx_flr_ring_lint_w1sx_t
#define bustype_CAVM_SDPX_FLR_RING_LINT_W1SX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_FLR_RING_LINT_W1SX(a,b) "SDPX_FLR_RING_LINT_W1SX"
#define device_bar_CAVM_SDPX_FLR_RING_LINT_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_FLR_RING_LINT_W1SX(a,b) (a)
#define arguments_CAVM_SDPX_FLR_RING_LINT_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_gbl_control
 *
 * SDP Global Control Register
 * Global control bits for SDP.
 */
union cavm_sdpx_gbl_control
{
    uint64_t u;
    struct cavm_sdpx_gbl_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t force_clks_on         : 1;  /**< [ 16: 16](R/W) When set this will force conditional clocks in SDP unconditionally on. For diagnostic use only. */
        uint64_t reserved_14_15        : 2;
        uint64_t bpkind                : 6;  /**< [ 13:  8](R/W) PKIND sent to PKI when SDP_INSTR_HDR_S[PKIND] corresponding bit in
                                                                 SDP()_PKIND_VALID[ENB] is set to a 0. */
        uint64_t reserved_4_7          : 4;
        uint64_t pkpfval               : 1;  /**< [  3:  3](R/W) When zero, only VF's are subject to SDP()_PKIND_VALID constraints, and PF instructions
                                                                 can select any PKI PKIND. When one, both PF's and VF's are subject to SDP()_PKIND_VALID
                                                                 constraints. */
        uint64_t bpflr_d               : 1;  /**< [  2:  2](R/W) Disables clearing SDP()_OUT_BP_EN()_W1C[ENB] bit on an FLR. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t bpflr_d               : 1;  /**< [  2:  2](R/W) Disables clearing SDP()_OUT_BP_EN()_W1C[ENB] bit on an FLR. */
        uint64_t pkpfval               : 1;  /**< [  3:  3](R/W) When zero, only VF's are subject to SDP()_PKIND_VALID constraints, and PF instructions
                                                                 can select any PKI PKIND. When one, both PF's and VF's are subject to SDP()_PKIND_VALID
                                                                 constraints. */
        uint64_t reserved_4_7          : 4;
        uint64_t bpkind                : 6;  /**< [ 13:  8](R/W) PKIND sent to PKI when SDP_INSTR_HDR_S[PKIND] corresponding bit in
                                                                 SDP()_PKIND_VALID[ENB] is set to a 0. */
        uint64_t reserved_14_15        : 2;
        uint64_t force_clks_on         : 1;  /**< [ 16: 16](R/W) When set this will force conditional clocks in SDP unconditionally on. For diagnostic use only. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_gbl_control_s cn; */
};
typedef union cavm_sdpx_gbl_control cavm_sdpx_gbl_control_t;

static inline uint64_t CAVM_SDPX_GBL_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_GBL_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080200ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_GBL_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_GBL_CONTROL(a) cavm_sdpx_gbl_control_t
#define bustype_CAVM_SDPX_GBL_CONTROL(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_GBL_CONTROL(a) "SDPX_GBL_CONTROL"
#define device_bar_CAVM_SDPX_GBL_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_GBL_CONTROL(a) (a)
#define arguments_CAVM_SDPX_GBL_CONTROL(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_in_rate_limit#
 *
 * SDP Input Instruction Rate Limit Register
 * This register is the control for rate limiting input instruction rings.
 * Each index represents a token bucket.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the PF or AP prior to enabling the ring.
 *
 * This register is indexed by ring and would normally be accessed from an AP core where all
 * 128 rings can be indexed.
 * A PF would index this register based upon the settings of SDP()_EPF()_RINFO[SRN]
 * and SDP()_MAC()_PF_RING_CTL[SRN].
 */
union cavm_sdpx_in_rate_limitx
{
    uint64_t u;
    struct cavm_sdpx_in_rate_limitx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t wgt                   : 4;  /**< [ 52: 49](R/W) Weight to calculate average packet size. */
        uint64_t init_ap               : 16; /**< [ 48: 33](R/W) Initial average packet size of instruction rings mapped to this bucket. */
        uint64_t max_tokens            : 16; /**< [ 32: 17](R/W) Maximum tokens that can be added to token bucket.
                                                                 Must be as large as the largest packet size input ring can fetch */
        uint64_t ref_tokens            : 16; /**< [ 16:  1](R/W) Tokens to add per ring every 1024 cycle period. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Enable token bucket. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) Enable token bucket. */
        uint64_t ref_tokens            : 16; /**< [ 16:  1](R/W) Tokens to add per ring every 1024 cycle period. */
        uint64_t max_tokens            : 16; /**< [ 32: 17](R/W) Maximum tokens that can be added to token bucket.
                                                                 Must be as large as the largest packet size input ring can fetch */
        uint64_t init_ap               : 16; /**< [ 48: 33](R/W) Initial average packet size of instruction rings mapped to this bucket. */
        uint64_t wgt                   : 4;  /**< [ 52: 49](R/W) Weight to calculate average packet size. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_in_rate_limitx_s cn; */
};
typedef union cavm_sdpx_in_rate_limitx cavm_sdpx_in_rate_limitx_t;

static inline uint64_t CAVM_SDPX_IN_RATE_LIMITX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_IN_RATE_LIMITX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc0181000a000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_IN_RATE_LIMITX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_IN_RATE_LIMITX(a,b) cavm_sdpx_in_rate_limitx_t
#define bustype_CAVM_SDPX_IN_RATE_LIMITX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_IN_RATE_LIMITX(a,b) "SDPX_IN_RATE_LIMITX"
#define device_bar_CAVM_SDPX_IN_RATE_LIMITX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_IN_RATE_LIMITX(a,b) (a)
#define arguments_CAVM_SDPX_IN_RATE_LIMITX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_in_ring_tb_map#
 *
 * SDP Input Ring Token Bucket Map Register
 * This register maps rings to token buckets used in Packet Input Byte Rate Limiting.
 * Each index represents a ring.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the PF or AP prior to enabling the ring. Also, this register cannot be written
 * while either of the following conditions is true:
 *   * SDP()_R()_IN_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_IN_ENABLE[ENB] is set.
 *
 * This register is indexed by ring and would normally be accessed from an AP core where all
 * 128 rings can be indexed.
 * A PF would index this register based upon the settings of SDP()_EPF()_RINFO[SRN]
 * and SDP()_MAC()_PF_RING_CTL[SRN].
 */
union cavm_sdpx_in_ring_tb_mapx
{
    uint64_t u;
    struct cavm_sdpx_in_ring_tb_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t enable                : 1;  /**< [  7:  7](R/W) Enable token bucket mapping for ring. */
        uint64_t tb                    : 7;  /**< [  6:  0](R/W) Maps ring to one of 128 token bucket programmed by SDP()_IN_RATE_LIMIT(). */
#else /* Word 0 - Little Endian */
        uint64_t tb                    : 7;  /**< [  6:  0](R/W) Maps ring to one of 128 token bucket programmed by SDP()_IN_RATE_LIMIT(). */
        uint64_t enable                : 1;  /**< [  7:  7](R/W) Enable token bucket mapping for ring. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_in_ring_tb_mapx_s cn; */
};
typedef union cavm_sdpx_in_ring_tb_mapx cavm_sdpx_in_ring_tb_mapx_t;

static inline uint64_t CAVM_SDPX_IN_RING_TB_MAPX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_IN_RING_TB_MAPX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01810008000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_IN_RING_TB_MAPX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_IN_RING_TB_MAPX(a,b) cavm_sdpx_in_ring_tb_mapx_t
#define bustype_CAVM_SDPX_IN_RING_TB_MAPX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_IN_RING_TB_MAPX(a,b) "SDPX_IN_RING_TB_MAPX"
#define device_bar_CAVM_SDPX_IN_RING_TB_MAPX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_IN_RING_TB_MAPX(a,b) (a)
#define arguments_CAVM_SDPX_IN_RING_TB_MAPX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_link_cfg
 *
 * Programmable SDP ID Mask Register
 * Use as a mask for SDP block id check.
 */
union cavm_sdpx_link_cfg
{
    uint64_t u;
    struct cavm_sdpx_link_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) The range = 2^[LOG2_RANGE] where [LOG2_RANGE]=0x0 means the link is not valid.
                                                                 Must be the same as the number of channels specified for the interface in NIX_AF_CONST.
                                                                 A minimum setting of 16 channels ([LOG2_RANGE]=0x4) is required. */
        uint64_t reserved_12_15        : 4;
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) The base channel number.
                                                                 For 128 channels: 5 bits for SDP ID, 7 bits for channel id. */
#else /* Word 0 - Little Endian */
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) The base channel number.
                                                                 For 128 channels: 5 bits for SDP ID, 7 bits for channel id. */
        uint64_t reserved_12_15        : 4;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) The range = 2^[LOG2_RANGE] where [LOG2_RANGE]=0x0 means the link is not valid.
                                                                 Must be the same as the number of channels specified for the interface in NIX_AF_CONST.
                                                                 A minimum setting of 16 channels ([LOG2_RANGE]=0x4) is required. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_link_cfg_s cn; */
};
typedef union cavm_sdpx_link_cfg cavm_sdpx_link_cfg_t;

static inline uint64_t CAVM_SDPX_LINK_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_LINK_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080180ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_LINK_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_LINK_CFG(a) cavm_sdpx_link_cfg_t
#define bustype_CAVM_SDPX_LINK_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_LINK_CFG(a) "SDPX_LINK_CFG"
#define device_bar_CAVM_SDPX_LINK_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_LINK_CFG(a) (a)
#define arguments_CAVM_SDPX_LINK_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_lmac_const0#
 *
 * SDP Logical MAC Capabilities Register 0
 * These registers along with SDP()_LMAC_CONST1() create a table of logical MAC
 * capabilities.  Each entry is 128 bits, with half the information in SDP()_LMAC_CONST0()
 * and half in SDP()_LMAC_CONST1().
 * The list ends with an entry where [V] is clear.
 */
union cavm_sdpx_lmac_const0x
{
    uint64_t u;
    struct cavm_sdpx_lmac_const0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t epf                   : 8;  /**< [ 39: 32](RO) EPF number. Indicates the index number to the base EPF registers, e.g. the second index
                                                                 of SDP()_EPF()_RINFO. */
        uint64_t pf                    : 8;  /**< [ 31: 24](RO) Max number of physical functions that are supported.
                                                                 SDP()_MAC()_PF_RING_CTL[NPFS] should not exceed [PF]. */
        uint64_t mac                   : 8;  /**< [ 23: 16](RO) Relative MAC number. Indicates the index number to MAC registers, e.g. the
                                                                 second index of SDP()_MAC()_PF_RING_CTL. */
        uint64_t ifn                   : 8;  /**< [ 15:  8](RO) Interface number. Indicates the physical PEM number. */
        uint64_t ifty                  : 4;  /**< [  7:  4](RO) Interface type.
                                                                 0x0 = PEM. */
        uint64_t reserved_2_3          : 2;
        uint64_t ep                    : 1;  /**< [  1:  1](RO) Endpoint.
                                                                 0 = This MAC/PF does not support endpoint mode; many registers are not
                                                                 implemented including input and output ring-based registers. MSI-X message
                                                                 generation is also not implemented.
                                                                 1 = This MAC/PF combination supports endpoint mode. */
        uint64_t v                     : 1;  /**< [  0:  0](RO) Valid entry.
                                                                 0 = Fields in this register will all be zero. This ends the list of capabilities.
                                                                 1 = Fields are valid. There will be at least one subsequent list entry. */
#else /* Word 0 - Little Endian */
        uint64_t v                     : 1;  /**< [  0:  0](RO) Valid entry.
                                                                 0 = Fields in this register will all be zero. This ends the list of capabilities.
                                                                 1 = Fields are valid. There will be at least one subsequent list entry. */
        uint64_t ep                    : 1;  /**< [  1:  1](RO) Endpoint.
                                                                 0 = This MAC/PF does not support endpoint mode; many registers are not
                                                                 implemented including input and output ring-based registers. MSI-X message
                                                                 generation is also not implemented.
                                                                 1 = This MAC/PF combination supports endpoint mode. */
        uint64_t reserved_2_3          : 2;
        uint64_t ifty                  : 4;  /**< [  7:  4](RO) Interface type.
                                                                 0x0 = PEM. */
        uint64_t ifn                   : 8;  /**< [ 15:  8](RO) Interface number. Indicates the physical PEM number. */
        uint64_t mac                   : 8;  /**< [ 23: 16](RO) Relative MAC number. Indicates the index number to MAC registers, e.g. the
                                                                 second index of SDP()_MAC()_PF_RING_CTL. */
        uint64_t pf                    : 8;  /**< [ 31: 24](RO) Max number of physical functions that are supported.
                                                                 SDP()_MAC()_PF_RING_CTL[NPFS] should not exceed [PF]. */
        uint64_t epf                   : 8;  /**< [ 39: 32](RO) EPF number. Indicates the index number to the base EPF registers, e.g. the second index
                                                                 of SDP()_EPF()_RINFO. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_lmac_const0x_s cn; */
};
typedef union cavm_sdpx_lmac_const0x cavm_sdpx_lmac_const0x_t;

static inline uint64_t CAVM_SDPX_LMAC_CONST0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_LMAC_CONST0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=4)))
        return 0xc01810050000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_LMAC_CONST0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_LMAC_CONST0X(a,b) cavm_sdpx_lmac_const0x_t
#define bustype_CAVM_SDPX_LMAC_CONST0X(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_LMAC_CONST0X(a,b) "SDPX_LMAC_CONST0X"
#define device_bar_CAVM_SDPX_LMAC_CONST0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_LMAC_CONST0X(a,b) (a)
#define arguments_CAVM_SDPX_LMAC_CONST0X(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_lmac_const1#
 *
 * SDP Logical MAC Capabilities Register 1
 * See SDP()_LMAC_CONST0().
 */
union cavm_sdpx_lmac_const1x
{
    uint64_t u;
    struct cavm_sdpx_lmac_const1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t trings                : 16; /**< [ 63: 48](RO) Total number of rings.
                                                                 If SDP()_LMAC_CONST0()[EP] is set then this field indicates the total available
                                                                 rings that can be assigned to all functions in all MACS.
                                                                 Physical rings are assigned per MAC in SDP()_MAC(f)_PF_RING_CTL.
                                                                 Virtual rings are assigned per EPF in SDP()_EPF()_RINFO.
                                                                 The total number of rings programmed in all EPF SDP()_EPF()_RINFO and
                                                                 MAC SDP()_MAC(f)_PF_RING_CTL registers cannot exceed [TRINGS].

                                                                 If SDP()_LMAC_CONST0()[EP] is clear then this field will be zero. */
        uint64_t prings                : 16; /**< [ 47: 32](RO) Max number of rings under the physical function.
                                                                 If SDP()_LMAC_CONST0()[EP] is set then this field indicates the total available
                                                                 rings that can be assigned to each physical function.
                                                                 Rings are assigned per MAC in SDP()_MAC()_PF_RING_CTL.
                                                                 SDP()_MAC()_PF_RING_CTL[RPPF] cannot exceed [PRINGS].

                                                                 If SDP()_LMAC_CONST0()[EP] is clear then this field will be zero. */
        uint64_t vrings                : 16; /**< [ 31: 16](RO) Max Number of virtual rings under a EPF.
                                                                 If SDP()_LMAC_CONST0()[EP] is set then this field indicates the number of rings
                                                                 that can be programmed in SDP()_EPF()_RINFO.
                                                                 SDP()_EPF()_RINFO[NVFS] * SDP()_EPF()_RINFO[RPVF] cannot exceed [VRINGS].

                                                                 If SDP()_LMAC_CONST0()[EP] is clear then this field will be zero. */
        uint64_t vfs                   : 16; /**< [ 15:  0](RO) Max Number of virtual functions under a EPF.
                                                                 The maximum number that may be programmed in SDP()_EPF()_RINFO[NVFS]. */
#else /* Word 0 - Little Endian */
        uint64_t vfs                   : 16; /**< [ 15:  0](RO) Max Number of virtual functions under a EPF.
                                                                 The maximum number that may be programmed in SDP()_EPF()_RINFO[NVFS]. */
        uint64_t vrings                : 16; /**< [ 31: 16](RO) Max Number of virtual rings under a EPF.
                                                                 If SDP()_LMAC_CONST0()[EP] is set then this field indicates the number of rings
                                                                 that can be programmed in SDP()_EPF()_RINFO.
                                                                 SDP()_EPF()_RINFO[NVFS] * SDP()_EPF()_RINFO[RPVF] cannot exceed [VRINGS].

                                                                 If SDP()_LMAC_CONST0()[EP] is clear then this field will be zero. */
        uint64_t prings                : 16; /**< [ 47: 32](RO) Max number of rings under the physical function.
                                                                 If SDP()_LMAC_CONST0()[EP] is set then this field indicates the total available
                                                                 rings that can be assigned to each physical function.
                                                                 Rings are assigned per MAC in SDP()_MAC()_PF_RING_CTL.
                                                                 SDP()_MAC()_PF_RING_CTL[RPPF] cannot exceed [PRINGS].

                                                                 If SDP()_LMAC_CONST0()[EP] is clear then this field will be zero. */
        uint64_t trings                : 16; /**< [ 63: 48](RO) Total number of rings.
                                                                 If SDP()_LMAC_CONST0()[EP] is set then this field indicates the total available
                                                                 rings that can be assigned to all functions in all MACS.
                                                                 Physical rings are assigned per MAC in SDP()_MAC(f)_PF_RING_CTL.
                                                                 Virtual rings are assigned per EPF in SDP()_EPF()_RINFO.
                                                                 The total number of rings programmed in all EPF SDP()_EPF()_RINFO and
                                                                 MAC SDP()_MAC(f)_PF_RING_CTL registers cannot exceed [TRINGS].

                                                                 If SDP()_LMAC_CONST0()[EP] is clear then this field will be zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_lmac_const1x_s cn; */
};
typedef union cavm_sdpx_lmac_const1x cavm_sdpx_lmac_const1x_t;

static inline uint64_t CAVM_SDPX_LMAC_CONST1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_LMAC_CONST1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=4)))
        return 0xc01810051000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_LMAC_CONST1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_LMAC_CONST1X(a,b) cavm_sdpx_lmac_const1x_t
#define bustype_CAVM_SDPX_LMAC_CONST1X(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_LMAC_CONST1X(a,b) "SDPX_LMAC_CONST1X"
#define device_bar_CAVM_SDPX_LMAC_CONST1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_LMAC_CONST1X(a,b) (a)
#define arguments_CAVM_SDPX_LMAC_CONST1X(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_mac#_pf_ring_ctl
 *
 * SDP PF Ring Control Register
 * This register sets up the PF rings on each MAC including the starting rings numbers
 * and total rings per PF.
 * This register does not effect PEM configuration registers or how the PEM's are
 * advertised during scan of the PCIe bus.
 *
 * SDP()_EPVF_RING()[EPVF] must be written to values that
 * correlate with the fields in this register.
 */
union cavm_sdpx_macx_pf_ring_ctl
{
    uint64_t u;
    struct cavm_sdpx_macx_pf_ring_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t rppf                  : 8;  /**< [ 21: 14](R/W) Rings per PF.cheetah can have a max of 128 rings per PF */
        uint64_t srn                   : 9;  /**< [ 13:  5](R/W) Starting ring number of PF rings. */
        uint64_t npfs                  : 5;  /**< [  4:  0](R/W) Number of PFs for this MAC. */
#else /* Word 0 - Little Endian */
        uint64_t npfs                  : 5;  /**< [  4:  0](R/W) Number of PFs for this MAC. */
        uint64_t srn                   : 9;  /**< [ 13:  5](R/W) Starting ring number of PF rings. */
        uint64_t rppf                  : 8;  /**< [ 21: 14](R/W) Rings per PF.cheetah can have a max of 128 rings per PF */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_macx_pf_ring_ctl_s cn; */
};
typedef union cavm_sdpx_macx_pf_ring_ctl cavm_sdpx_macx_pf_ring_ctl_t;

static inline uint64_t CAVM_SDPX_MACX_PF_RING_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_MACX_PF_RING_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=3)))
        return 0xc0181000c000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("SDPX_MACX_PF_RING_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_MACX_PF_RING_CTL(a,b) cavm_sdpx_macx_pf_ring_ctl_t
#define bustype_CAVM_SDPX_MACX_PF_RING_CTL(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_MACX_PF_RING_CTL(a,b) "SDPX_MACX_PF_RING_CTL"
#define device_bar_CAVM_SDPX_MACX_PF_RING_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_MACX_PF_RING_CTL(a,b) (a)
#define arguments_CAVM_SDPX_MACX_PF_RING_CTL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_mac_number
 *
 * SDP MAC Number Register
 * When read from a MAC, this register returns the MAC's port number, otherwise returns zero.
 */
union cavm_sdpx_mac_number
{
    uint64_t u;
    struct cavm_sdpx_mac_number_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t chip_rev              : 8;  /**< [ 31: 24](RO/H) Chip revision. See FUSE_NUM_E::CHIP_ID(). */
        uint64_t ifn                   : 8;  /**< [ 23: 16](RO/H) Interface number. Indicates the physical PEM number. */
        uint64_t reserved_9_15         : 7;
        uint64_t a_mode                : 1;  /**< [  8:  8](RO/H) Reserved. */
        uint64_t num                   : 8;  /**< [  7:  0](RO/H) MAC number. */
#else /* Word 0 - Little Endian */
        uint64_t num                   : 8;  /**< [  7:  0](RO/H) MAC number. */
        uint64_t a_mode                : 1;  /**< [  8:  8](RO/H) Reserved. */
        uint64_t reserved_9_15         : 7;
        uint64_t ifn                   : 8;  /**< [ 23: 16](RO/H) Interface number. Indicates the physical PEM number. */
        uint64_t chip_rev              : 8;  /**< [ 31: 24](RO/H) Chip revision. See FUSE_NUM_E::CHIP_ID(). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_mac_number_s cn; */
};
typedef union cavm_sdpx_mac_number cavm_sdpx_mac_number_t;

static inline uint64_t CAVM_SDPX_MAC_NUMBER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_MAC_NUMBER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc0181000c100ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_MAC_NUMBER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_MAC_NUMBER(a) cavm_sdpx_mac_number_t
#define bustype_CAVM_SDPX_MAC_NUMBER(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_MAC_NUMBER(a) "SDPX_MAC_NUMBER"
#define device_bar_CAVM_SDPX_MAC_NUMBER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_MAC_NUMBER(a) (a)
#define arguments_CAVM_SDPX_MAC_NUMBER(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_mbox_pf_vf_data#
 *
 * SDP PF to VF Mailbox Data Registers
 * These registers are used for communication of data from the PF to VF.
 * A write to this register from the PF will cause the corresponding bit in
 * SDP()_R()_MBOX_PF_VF_INT[INTR] to be set, along with other bits in
 * SDP()_R()_OUT_CNTS[MBOX_INT], and SDP()_R()_IN_CNTS[MBOX_INT].
 * A VF will see this data written by reading its corresponding
 * SDP()_R()_MBOX_PF_VF_DATA register.
 * A read from and AP core will always return 0.
 *
 * This register is indexed by ring.
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_mbox_pf_vf_datax
{
    uint64_t u;
    struct cavm_sdpx_mbox_pf_vf_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from PF to VF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from PF to VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_mbox_pf_vf_datax_s cn; */
};
typedef union cavm_sdpx_mbox_pf_vf_datax cavm_sdpx_mbox_pf_vf_datax_t;

static inline uint64_t CAVM_SDPX_MBOX_PF_VF_DATAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_MBOX_PF_VF_DATAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01810010000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_MBOX_PF_VF_DATAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_MBOX_PF_VF_DATAX(a,b) cavm_sdpx_mbox_pf_vf_datax_t
#define bustype_CAVM_SDPX_MBOX_PF_VF_DATAX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_MBOX_PF_VF_DATAX(a,b) "SDPX_MBOX_PF_VF_DATAX"
#define device_bar_CAVM_SDPX_MBOX_PF_VF_DATAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_MBOX_PF_VF_DATAX(a,b) (a)
#define arguments_CAVM_SDPX_MBOX_PF_VF_DATAX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_mbox_vf_pf_data#
 *
 * SDP PF to VF Mailbox Data Registers
 * These registers are used for communication of data from the VF to PF.
 * This is a mirror copy of SDP()_R()_MBOX_VF_PF_DATA[DATA] but this register
 * is how the PF accesses the data.
 *
 * This register is indexed by ring.
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_mbox_vf_pf_datax
{
    uint64_t u;
    struct cavm_sdpx_mbox_vf_pf_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from VF to PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from VF to PF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_mbox_vf_pf_datax_s cn; */
};
typedef union cavm_sdpx_mbox_vf_pf_datax cavm_sdpx_mbox_vf_pf_datax_t;

static inline uint64_t CAVM_SDPX_MBOX_VF_PF_DATAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_MBOX_VF_PF_DATAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01810020000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_MBOX_VF_PF_DATAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_MBOX_VF_PF_DATAX(a,b) cavm_sdpx_mbox_vf_pf_datax_t
#define bustype_CAVM_SDPX_MBOX_VF_PF_DATAX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_MBOX_VF_PF_DATAX(a,b) "SDPX_MBOX_VF_PF_DATAX"
#define device_bar_CAVM_SDPX_MBOX_VF_PF_DATAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_MBOX_VF_PF_DATAX(a,b) (a)
#define arguments_CAVM_SDPX_MBOX_VF_PF_DATAX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_mcast_table#
 *
 * SDP Output Multicast Table Register
 * Implements SDP Multicast Table consisting of a chain of rings and next pointers
 * for SDP multicast outbound packets from NIX TX.
 */
union cavm_sdpx_mcast_tablex
{
    uint64_t u;
    struct cavm_sdpx_mcast_tablex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t ring                  : 9;  /**< [ 19: 11](R/W) Indicates a SDP output ring in multicast chain. */
        uint64_t nxt_ptr               : 11; /**< [ 10:  0](R/W) Points to the next pointer index in SDP()_MCAST_TABLE().  The next pointer
                                                                 index follows multicast chain of rings.  If 0x7FF is written to [NXT_PTR],
                                                                 indicates last this is the last ring in the multicast chain of rings. */
#else /* Word 0 - Little Endian */
        uint64_t nxt_ptr               : 11; /**< [ 10:  0](R/W) Points to the next pointer index in SDP()_MCAST_TABLE().  The next pointer
                                                                 index follows multicast chain of rings.  If 0x7FF is written to [NXT_PTR],
                                                                 indicates last this is the last ring in the multicast chain of rings. */
        uint64_t ring                  : 9;  /**< [ 19: 11](R/W) Indicates a SDP output ring in multicast chain. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_mcast_tablex_s cn; */
};
typedef union cavm_sdpx_mcast_tablex cavm_sdpx_mcast_tablex_t;

static inline uint64_t CAVM_SDPX_MCAST_TABLEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_MCAST_TABLEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=2047)))
        return 0xc01810040000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7ff);
    __cavm_csr_fatal("SDPX_MCAST_TABLEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_MCAST_TABLEX(a,b) cavm_sdpx_mcast_tablex_t
#define bustype_CAVM_SDPX_MCAST_TABLEX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_MCAST_TABLEX(a,b) "SDPX_MCAST_TABLEX"
#define device_bar_CAVM_SDPX_MCAST_TABLEX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_MCAST_TABLEX(a,b) (a)
#define arguments_CAVM_SDPX_MCAST_TABLEX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_ord_lint#
 *
 * SDP Output Drop Status Register
 * This register indicates if an output ring has transitioned from no drop state to
 * drop state indicated by a rings' status in SDP()_OUT_DROP_STATE().
 * The given register associated with an EPF will be reset due to a PF FLR or MAC Reset.
 * SDP()_ORD_LINT(0) holds status of rings 0..63.
 * SDP()_ORD_LINT(1) holds status of rings 64..127.
 * These registers are not affected by VF FLR.
 */
union cavm_sdpx_ord_lintx
{
    uint64_t u;
    struct cavm_sdpx_ord_lintx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1C/H) Ring has transitioned to drop state. */
#else /* Word 0 - Little Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1C/H) Ring has transitioned to drop state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_ord_lintx_s cn; */
};
typedef union cavm_sdpx_ord_lintx cavm_sdpx_ord_lintx_t;

static inline uint64_t CAVM_SDPX_ORD_LINTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_ORD_LINTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810080c00ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_ORD_LINTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_ORD_LINTX(a,b) cavm_sdpx_ord_lintx_t
#define bustype_CAVM_SDPX_ORD_LINTX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_ORD_LINTX(a,b) "SDPX_ORD_LINTX"
#define device_bar_CAVM_SDPX_ORD_LINTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_ORD_LINTX(a,b) (a)
#define arguments_CAVM_SDPX_ORD_LINTX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_ord_lint_ena_w1c#
 *
 * SDP Output Drop Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_sdpx_ord_lint_ena_w1cx
{
    uint64_t u;
    struct cavm_sdpx_ord_lint_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_ORD_LINT(0..7)[RING_DROP_STATE]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for SDP(0)_ORD_LINT(0..7)[RING_DROP_STATE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_ord_lint_ena_w1cx_s cn; */
};
typedef union cavm_sdpx_ord_lint_ena_w1cx cavm_sdpx_ord_lint_ena_w1cx_t;

static inline uint64_t CAVM_SDPX_ORD_LINT_ENA_W1CX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_ORD_LINT_ENA_W1CX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810080e00ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_ORD_LINT_ENA_W1CX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_ORD_LINT_ENA_W1CX(a,b) cavm_sdpx_ord_lint_ena_w1cx_t
#define bustype_CAVM_SDPX_ORD_LINT_ENA_W1CX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_ORD_LINT_ENA_W1CX(a,b) "SDPX_ORD_LINT_ENA_W1CX"
#define device_bar_CAVM_SDPX_ORD_LINT_ENA_W1CX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_ORD_LINT_ENA_W1CX(a,b) (a)
#define arguments_CAVM_SDPX_ORD_LINT_ENA_W1CX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_ord_lint_ena_w1s#
 *
 * SDP Output Drop Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_sdpx_ord_lint_ena_w1sx
{
    uint64_t u;
    struct cavm_sdpx_ord_lint_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_ORD_LINT(0..7)[RING_DROP_STATE]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for SDP(0)_ORD_LINT(0..7)[RING_DROP_STATE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_ord_lint_ena_w1sx_s cn; */
};
typedef union cavm_sdpx_ord_lint_ena_w1sx cavm_sdpx_ord_lint_ena_w1sx_t;

static inline uint64_t CAVM_SDPX_ORD_LINT_ENA_W1SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_ORD_LINT_ENA_W1SX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810080f00ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_ORD_LINT_ENA_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_ORD_LINT_ENA_W1SX(a,b) cavm_sdpx_ord_lint_ena_w1sx_t
#define bustype_CAVM_SDPX_ORD_LINT_ENA_W1SX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_ORD_LINT_ENA_W1SX(a,b) "SDPX_ORD_LINT_ENA_W1SX"
#define device_bar_CAVM_SDPX_ORD_LINT_ENA_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_ORD_LINT_ENA_W1SX(a,b) (a)
#define arguments_CAVM_SDPX_ORD_LINT_ENA_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_ord_lint_w1s#
 *
 * SDP Output Drop Status Set Register
 * This register sets interrupt bits.
 */
union cavm_sdpx_ord_lint_w1sx
{
    uint64_t u;
    struct cavm_sdpx_ord_lint_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_ORD_LINT(0..7)[RING_DROP_STATE]. */
#else /* Word 0 - Little Endian */
        uint64_t ring_drop_state       : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_ORD_LINT(0..7)[RING_DROP_STATE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_ord_lint_w1sx_s cn; */
};
typedef union cavm_sdpx_ord_lint_w1sx cavm_sdpx_ord_lint_w1sx_t;

static inline uint64_t CAVM_SDPX_ORD_LINT_W1SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_ORD_LINT_W1SX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810080d00ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_ORD_LINT_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_ORD_LINT_W1SX(a,b) cavm_sdpx_ord_lint_w1sx_t
#define bustype_CAVM_SDPX_ORD_LINT_W1SX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_ORD_LINT_W1SX(a,b) "SDPX_ORD_LINT_W1SX"
#define device_bar_CAVM_SDPX_ORD_LINT_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_ORD_LINT_W1SX(a,b) (a)
#define arguments_CAVM_SDPX_ORD_LINT_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_out_bp_en#_w1c
 *
 * SDP Packet Output Backpressure W1C Register
 * This register enables sending backpressure to NIX TX.
 * SDP()_OUT_BP_EN(0)_W1C sets rings 0..63.
 * SDP()_OUT_BP_EN(1)_W1C sets rings 64..127.
 */
union cavm_sdpx_out_bp_enx_w1c
{
    uint64_t u;
    struct cavm_sdpx_out_bp_enx_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enb                   : 64; /**< [ 63:  0](R/W1C/H) When set, enables the channel-level backpressure to be sent to NIX TX. Backpressure is sent
                                                                 to the NIX TX on the channels 0x100-0x13F (index 0) and 0x140-17F (index 1).
                                                                 See SDP()_OUT_WMARK[WMARK].
                                                                 A read of this register will return the current value of the enables for those channels. */
#else /* Word 0 - Little Endian */
        uint64_t enb                   : 64; /**< [ 63:  0](R/W1C/H) When set, enables the channel-level backpressure to be sent to NIX TX. Backpressure is sent
                                                                 to the NIX TX on the channels 0x100-0x13F (index 0) and 0x140-17F (index 1).
                                                                 See SDP()_OUT_WMARK[WMARK].
                                                                 A read of this register will return the current value of the enables for those channels. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_out_bp_enx_w1c_s cn; */
};
typedef union cavm_sdpx_out_bp_enx_w1c cavm_sdpx_out_bp_enx_w1c_t;

static inline uint64_t CAVM_SDPX_OUT_BP_ENX_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_OUT_BP_ENX_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810081400ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_OUT_BP_ENX_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_OUT_BP_ENX_W1C(a,b) cavm_sdpx_out_bp_enx_w1c_t
#define bustype_CAVM_SDPX_OUT_BP_ENX_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_OUT_BP_ENX_W1C(a,b) "SDPX_OUT_BP_ENX_W1C"
#define device_bar_CAVM_SDPX_OUT_BP_ENX_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_OUT_BP_ENX_W1C(a,b) (a)
#define arguments_CAVM_SDPX_OUT_BP_ENX_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_out_bp_en#_w1s
 *
 * SDP Packet Output Backpressure W1S Register
 * This register reads or sets bits.
 */
union cavm_sdpx_out_bp_enx_w1s
{
    uint64_t u;
    struct cavm_sdpx_out_bp_enx_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enb                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_OUT_BP_EN(0..7)_W1C[ENB]. */
#else /* Word 0 - Little Endian */
        uint64_t enb                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets SDP(0)_OUT_BP_EN(0..7)_W1C[ENB]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_out_bp_enx_w1s_s cn; */
};
typedef union cavm_sdpx_out_bp_enx_w1s cavm_sdpx_out_bp_enx_w1s_t;

static inline uint64_t CAVM_SDPX_OUT_BP_ENX_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_OUT_BP_ENX_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810081500ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_OUT_BP_ENX_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_OUT_BP_ENX_W1S(a,b) cavm_sdpx_out_bp_enx_w1s_t
#define bustype_CAVM_SDPX_OUT_BP_ENX_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_OUT_BP_ENX_W1S(a,b) "SDPX_OUT_BP_ENX_W1S"
#define device_bar_CAVM_SDPX_OUT_BP_ENX_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_OUT_BP_ENX_W1S(a,b) (a)
#define arguments_CAVM_SDPX_OUT_BP_ENX_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_out_bp_timer#
 *
 * SDP Output Packet Backpressure Timer Register
 * These registers hold timers that increment every 1024 cycles when a SDP out packet ring
 * buffers fall below SDP()_OUT_WMARK[WMARK] and SDP starts asserting backpressure to NIX TX
 * if SDP()_OUT_BP_EN()_W1S[ENB] is set.
 * IF SDP stops asserting backpressure to NIX TX for a SDP out packet ring, the
 * associated SDP()_OUT_BP_TIMER()[TIMER] will clear.
 *
 * This register is indexed by ring and would normally be accessed from an AP core where all
 * 256 rings can be indexed.
 * A PF would index this register based upon the settings of SDP()_EPF()_RINFO[SRN]
 * and SDP()_MAC()_PF_RING_CTL[SRN].
 * These register are for debug purposes only.
 */
union cavm_sdpx_out_bp_timerx
{
    uint64_t u;
    struct cavm_sdpx_out_bp_timerx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t timer                 : 32; /**< [ 31:  0](RO/H) Timer that is compared to SDP(0)_OUT_BP_TIMER_CTL[TIMER_LIMIT] to put ring in drop state. */
#else /* Word 0 - Little Endian */
        uint64_t timer                 : 32; /**< [ 31:  0](RO/H) Timer that is compared to SDP(0)_OUT_BP_TIMER_CTL[TIMER_LIMIT] to put ring in drop state. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_out_bp_timerx_s cn; */
};
typedef union cavm_sdpx_out_bp_timerx cavm_sdpx_out_bp_timerx_t;

static inline uint64_t CAVM_SDPX_OUT_BP_TIMERX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_OUT_BP_TIMERX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01810061000ll + 0x100000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_OUT_BP_TIMERX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_OUT_BP_TIMERX(a,b) cavm_sdpx_out_bp_timerx_t
#define bustype_CAVM_SDPX_OUT_BP_TIMERX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_OUT_BP_TIMERX(a,b) "SDPX_OUT_BP_TIMERX"
#define device_bar_CAVM_SDPX_OUT_BP_TIMERX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_OUT_BP_TIMERX(a,b) (a)
#define arguments_CAVM_SDPX_OUT_BP_TIMERX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_out_bp_timer_ctl
 *
 * SDP Output Packet Backpressure Timer Control Register
 * This register defines a timer limit to detect bad SDP output rings.
 * SDP()_OUT_BP_TIMER()[TIMER] will start to increment when a SDP out packet ring buffers
 * fall below SDP()_OUT_WMARK[WMARK] and SDP starts asserting backpressure to NIX TX if
 * SDP()_OUT_BP_EN()_W1C[ENB] is set.
 *
 * IF SDP stops asserting backpressure to NIX TX for a SDP out packet ring the
 * associated SDP()_OUT_BP_TIMER()[TIMER] will clear.
 *
 * If SDP()_OUT_BP_TIMER()[TIMER] reaches [TIMER_LIMIT] the associated bit in
 * SDP()_OUT_DROP_STATE()[STATE] will be set for that ring and an interrupt bit will be
 * set in SDP()_ORD_LINT().
 */
union cavm_sdpx_out_bp_timer_ctl
{
    uint64_t u;
    struct cavm_sdpx_out_bp_timer_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t timer_limit           : 32; /**< [ 31:  0](R/W) If the WMARK backpressure timer exceeds [TIMER_LIMIT] an interrupt bit will be
                                                                 set in SDP()_ORD_LINT(). If 0x0 this feature is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t timer_limit           : 32; /**< [ 31:  0](R/W) If the WMARK backpressure timer exceeds [TIMER_LIMIT] an interrupt bit will be
                                                                 set in SDP()_ORD_LINT(). If 0x0 this feature is disabled. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_out_bp_timer_ctl_s cn; */
};
typedef union cavm_sdpx_out_bp_timer_ctl cavm_sdpx_out_bp_timer_ctl_t;

static inline uint64_t CAVM_SDPX_OUT_BP_TIMER_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_OUT_BP_TIMER_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810060010ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_OUT_BP_TIMER_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_OUT_BP_TIMER_CTL(a) cavm_sdpx_out_bp_timer_ctl_t
#define bustype_CAVM_SDPX_OUT_BP_TIMER_CTL(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_OUT_BP_TIMER_CTL(a) "SDPX_OUT_BP_TIMER_CTL"
#define device_bar_CAVM_SDPX_OUT_BP_TIMER_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_OUT_BP_TIMER_CTL(a) (a)
#define arguments_CAVM_SDPX_OUT_BP_TIMER_CTL(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_out_drop_state#
 *
 * SDP Output Packet Drop State Register
 * These registers holds the SDP Output ring drop state bitwise vectors for all SDP Output
 * rings.  At reset all rings start out with STATE=1 and will drop all packets.
 * Once a ring has wrote SDP()_R()_OUT_SLIST_DBELL with sufficient buffers to go above
 * SDP()_OUT_WMARK[WMARK] SDP will set the appropriate bit in STATE to 0.  This will allow
 * SDP to stop dropping packets for that ring.
 * If a ring is in STATE=0 the following conditions can cause a ring to transition to
 * STATE=1 and start dropping packets again.
 *
 * * SDP()_R()_OUT_ENABLE[ENB] bit is 0.
 * * A packet is received from NIX TX and there are no corresponding buffers available
 *   for that output ring to send the packet. See SDP()_R()_OUT_CONTROL[DROP_CNT].
 * * SDP()_OUT_BP_TIMER()[TIMER] for a ring has reached SDP()_OUT_BP_TIMER_CTL[TIMER_LIMIT]
 *   and SDP()_OUT_BP_TIMER_CTL[TIMER_LIMIT] is nonzero.
 */
union cavm_sdpx_out_drop_statex
{
    uint64_t u;
    struct cavm_sdpx_out_drop_statex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t state                 : 64; /**< [ 63:  0](RO/H) Bit vector drop state. A value of 1 implies that a ring is in drop state and will
                                                                 drop all packets that it receives from NIX TX destined for that ring.  A value of 0
                                                                 implies that SDP will stop dropping packets and send EBP backpressure before buffers
                                                                 become too low to send packets.  When a ring transitions from 0 to 1, the corresponding
                                                                 interrupt bit in SDP()_ORD_LINT() will be set. */
#else /* Word 0 - Little Endian */
        uint64_t state                 : 64; /**< [ 63:  0](RO/H) Bit vector drop state. A value of 1 implies that a ring is in drop state and will
                                                                 drop all packets that it receives from NIX TX destined for that ring.  A value of 0
                                                                 implies that SDP will stop dropping packets and send EBP backpressure before buffers
                                                                 become too low to send packets.  When a ring transitions from 0 to 1, the corresponding
                                                                 interrupt bit in SDP()_ORD_LINT() will be set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_out_drop_statex_s cn; */
};
typedef union cavm_sdpx_out_drop_statex cavm_sdpx_out_drop_statex_t;

static inline uint64_t CAVM_SDPX_OUT_DROP_STATEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_OUT_DROP_STATEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=7)))
        return 0xc01810060100ll + 0x100000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("SDPX_OUT_DROP_STATEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_OUT_DROP_STATEX(a,b) cavm_sdpx_out_drop_statex_t
#define bustype_CAVM_SDPX_OUT_DROP_STATEX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_OUT_DROP_STATEX(a,b) "SDPX_OUT_DROP_STATEX"
#define device_bar_CAVM_SDPX_OUT_DROP_STATEX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_OUT_DROP_STATEX(a,b) (a)
#define arguments_CAVM_SDPX_OUT_DROP_STATEX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_out_mcast_ctl
 *
 * SDP Output Packet Mcast Control Register
 * This register contain control and state for MCAST packets.
 */
union cavm_sdpx_out_mcast_ctl
{
    uint64_t u;
    struct cavm_sdpx_out_mcast_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t idle                  : 1;  /**< [  0:  0](RO/H) IDLE is set if all multicast packets received by SDP have had there table look up completed.
                                                                 Software would normally query this first and then the specific
                                                                 SDP()_R()_OUT_CONTROL[IDLE] bits of the chain to see if all packets of a MCAST chain
                                                                 have been sent. */
#else /* Word 0 - Little Endian */
        uint64_t idle                  : 1;  /**< [  0:  0](RO/H) IDLE is set if all multicast packets received by SDP have had there table look up completed.
                                                                 Software would normally query this first and then the specific
                                                                 SDP()_R()_OUT_CONTROL[IDLE] bits of the chain to see if all packets of a MCAST chain
                                                                 have been sent. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_out_mcast_ctl_s cn; */
};
typedef union cavm_sdpx_out_mcast_ctl cavm_sdpx_out_mcast_ctl_t;

static inline uint64_t CAVM_SDPX_OUT_MCAST_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_OUT_MCAST_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810060200ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_OUT_MCAST_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_OUT_MCAST_CTL(a) cavm_sdpx_out_mcast_ctl_t
#define bustype_CAVM_SDPX_OUT_MCAST_CTL(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_OUT_MCAST_CTL(a) "SDPX_OUT_MCAST_CTL"
#define device_bar_CAVM_SDPX_OUT_MCAST_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_OUT_MCAST_CTL(a) (a)
#define arguments_CAVM_SDPX_OUT_MCAST_CTL(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_pf_msix_pba#
 *
 * SDP MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the SDP_PF_INT_VEC_E
 * enumeration.
 */
union cavm_sdpx_pf_msix_pbax
{
    uint64_t u;
    struct cavm_sdpx_pf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated SDP()_PF_MSIX_VEC()_CTL, enumerated by
                                                                 SDP_PF_INT_VEC_E. Bits that have no associated SDP_PF_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated SDP()_PF_MSIX_VEC()_CTL, enumerated by
                                                                 SDP_PF_INT_VEC_E. Bits that have no associated SDP_PF_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_pf_msix_pbax_s cn; */
};
typedef union cavm_sdpx_pf_msix_pbax cavm_sdpx_pf_msix_pbax_t;

static inline uint64_t CAVM_SDPX_PF_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_PF_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b==0)))
        return 0xc018800f0000ll + 0x100000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("SDPX_PF_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_PF_MSIX_PBAX(a,b) cavm_sdpx_pf_msix_pbax_t
#define bustype_CAVM_SDPX_PF_MSIX_PBAX(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_PF_MSIX_PBAX(a,b) "SDPX_PF_MSIX_PBAX"
#define device_bar_CAVM_SDPX_PF_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_SDPX_PF_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_SDPX_PF_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_pf_msix_vec#_addr
 *
 * SDP MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the SDP_PF_INT_VEC_E enumeration.
 */
union cavm_sdpx_pf_msix_vecx_addr
{
    uint64_t u;
    struct cavm_sdpx_pf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's SDP()_PF_MSIX_VEC()_ADDR, SDP()_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of SDP()_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_SDP_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set.

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

                                                                 1 = This vector's SDP()_PF_MSIX_VEC()_ADDR, SDP()_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of SDP()_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_SDP_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set.

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
    /* struct cavm_sdpx_pf_msix_vecx_addr_s cn; */
};
typedef union cavm_sdpx_pf_msix_vecx_addr cavm_sdpx_pf_msix_vecx_addr_t;

static inline uint64_t CAVM_SDPX_PF_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_PF_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01880000000ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_PF_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_PF_MSIX_VECX_ADDR(a,b) cavm_sdpx_pf_msix_vecx_addr_t
#define bustype_CAVM_SDPX_PF_MSIX_VECX_ADDR(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_PF_MSIX_VECX_ADDR(a,b) "SDPX_PF_MSIX_VECX_ADDR"
#define device_bar_CAVM_SDPX_PF_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_SDPX_PF_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_SDPX_PF_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_pf_msix_vec#_ctl
 *
 * SDP MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the SDP_PF_INT_VEC_E enumeration.
 */
union cavm_sdpx_pf_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_sdpx_pf_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_pf_msix_vecx_ctl_s cn; */
};
typedef union cavm_sdpx_pf_msix_vecx_ctl cavm_sdpx_pf_msix_vecx_ctl_t;

static inline uint64_t CAVM_SDPX_PF_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_PF_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=15)))
        return 0xc01880000008ll + 0x100000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0xf);
    __cavm_csr_fatal("SDPX_PF_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_PF_MSIX_VECX_CTL(a,b) cavm_sdpx_pf_msix_vecx_ctl_t
#define bustype_CAVM_SDPX_PF_MSIX_VECX_CTL(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_PF_MSIX_VECX_CTL(a,b) "SDPX_PF_MSIX_VECX_CTL"
#define device_bar_CAVM_SDPX_PF_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_SDPX_PF_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_SDPX_PF_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_pkind_valid
 *
 * SDP Packet PKIND Valid Register
 * Enables bits per PKIND that are allowed to be sent to PKI specified in the
 * SDP_INSTR_HDR_S[PKIND] packet instruction field.
 */
union cavm_sdpx_pkind_valid
{
    uint64_t u;
    struct cavm_sdpx_pkind_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enb                   : 64; /**< [ 63:  0](R/W) Enables bits for 64 possible pkinds.  If set to a 1, the corresponding
                                                                 SDP_INSTR_HDR_S[PKIND] is allowed to be passed to PKI.  If set to a 0,
                                                                 the SDP_INSTR_HDR_S[PKIND] will be changed to the pkind set in
                                                                 SDP()_GBL_CONTROL[BPKIND] when sent to PKI. */
#else /* Word 0 - Little Endian */
        uint64_t enb                   : 64; /**< [ 63:  0](R/W) Enables bits for 64 possible pkinds.  If set to a 1, the corresponding
                                                                 SDP_INSTR_HDR_S[PKIND] is allowed to be passed to PKI.  If set to a 0,
                                                                 the SDP_INSTR_HDR_S[PKIND] will be changed to the pkind set in
                                                                 SDP()_GBL_CONTROL[BPKIND] when sent to PKI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_pkind_valid_s cn; */
};
typedef union cavm_sdpx_pkind_valid cavm_sdpx_pkind_valid_t;

static inline uint64_t CAVM_SDPX_PKIND_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_PKIND_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080210ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_PKIND_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_PKIND_VALID(a) cavm_sdpx_pkind_valid_t
#define bustype_CAVM_SDPX_PKIND_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_PKIND_VALID(a) "SDPX_PKIND_VALID"
#define device_bar_CAVM_SDPX_PKIND_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_PKIND_VALID(a) (a)
#define arguments_CAVM_SDPX_PKIND_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) sdp#_r#_drop_byte_cnt
 *
 * SDP Packet Dropped Byte Count Register
 * This register contains byte counts per ring that have been read into SDP but dropped
 * The counter will wrap when it reaches its maximum value. It should be cleared
 * before the ring is enabled for an accurate count.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_drop_byte_cnt
{
    uint64_t u;
    struct cavm_sdpx_rx_drop_byte_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t cnt                   : 45; /**< [ 44:  0](R/W/H) Byte count, can be reset by software by writing SDP()_R()_DROP_PKT_CNT[CNT]
                                                                 with 0xFFFFFFFFF. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 45; /**< [ 44:  0](R/W/H) Byte count, can be reset by software by writing SDP()_R()_DROP_PKT_CNT[CNT]
                                                                 with 0xFFFFFFFFF. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_drop_byte_cnt_s cn; */
};
typedef union cavm_sdpx_rx_drop_byte_cnt cavm_sdpx_rx_drop_byte_cnt_t;

static inline uint64_t CAVM_SDPX_RX_DROP_BYTE_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_DROP_BYTE_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000250ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_DROP_BYTE_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_DROP_BYTE_CNT(a,b) cavm_sdpx_rx_drop_byte_cnt_t
#define bustype_CAVM_SDPX_RX_DROP_BYTE_CNT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_DROP_BYTE_CNT(a,b) "SDPX_RX_DROP_BYTE_CNT"
#define device_bar_CAVM_SDPX_RX_DROP_BYTE_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_DROP_BYTE_CNT(a,b) (a)
#define arguments_CAVM_SDPX_RX_DROP_BYTE_CNT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_drop_pkt_cnt
 *
 * SDP Packet Dropped Packet count Register
 * This register contains packet counts per ring that have been read into SDP, but dropped.
 * The counter will wrap when it reaches its maximum value.  It should be cleared
 * before the ring is enabled for an accurate count.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_drop_pkt_cnt
{
    uint64_t u;
    struct cavm_sdpx_rx_drop_pkt_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t cnt                   : 45; /**< [ 44:  0](R/W/H) Packet count, can be written by software to any value.  If a value of 0xFFFFFFFFF is
                                                                 written to this field, it will cause this field as well as SDP()_R()_DROP_BYTE_CNT to
                                                                 clear. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 45; /**< [ 44:  0](R/W/H) Packet count, can be written by software to any value.  If a value of 0xFFFFFFFFF is
                                                                 written to this field, it will cause this field as well as SDP()_R()_DROP_BYTE_CNT to
                                                                 clear. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_drop_pkt_cnt_s cn; */
};
typedef union cavm_sdpx_rx_drop_pkt_cnt cavm_sdpx_rx_drop_pkt_cnt_t;

static inline uint64_t CAVM_SDPX_RX_DROP_PKT_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_DROP_PKT_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000240ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_DROP_PKT_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_DROP_PKT_CNT(a,b) cavm_sdpx_rx_drop_pkt_cnt_t
#define bustype_CAVM_SDPX_RX_DROP_PKT_CNT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_DROP_PKT_CNT(a,b) "SDPX_RX_DROP_PKT_CNT"
#define device_bar_CAVM_SDPX_RX_DROP_PKT_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_DROP_PKT_CNT(a,b) (a)
#define arguments_CAVM_SDPX_RX_DROP_PKT_CNT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_err_type
 *
 * SDP Ring Error Type Register
 * These registers indicate which type of error(s) have been detected when
 * SDP()_EPF()_ORE_RINT, or SDP()_EPF()_IRE_RINT is
 * set. Multiple bits can be set at the same time if multiple errors have occurred for
 * that ring.
 *
 * These registers are not affected by VF FLR, PF FLR or MAC Reset.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_err_type
{
    uint64_t u;
    struct cavm_sdpx_rx_err_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_37_63        : 27;
        uint64_t drop_timer            : 1;  /**< [ 36: 36](R/W1C/H) SDP()_OUT_BP_TIMER() reached SDP()_OUT_BP_TIMER_CTL[TIMER_LIMIT] causing ring to go into
                                                                 drop state. */
        uint64_t port_dis              : 1;  /**< [ 35: 35](R/W1C/H) Output port was in non-drop state and enabled, then was disabled causing ring to
                                                                 go into drop state. */
        uint64_t dbell_empty           : 1;  /**< [ 34: 34](R/W1C/H) A packet is received from NIX TX and there are no corresponding buffers available
                                                                 for that output ring to send the packet causing ring to go into drop state..
                                                                 See SDP()_R()_OUT_CONTROL[DROP_CNT]. */
        uint64_t oring_drop_cnt_err    : 1;  /**< [ 33: 33](R/W1C/H) SDP()_R()_OUT_CONTROL[DROP_CNT] was misprogrammed allowing an output packet
                                                                 to be sent greater then buffers available.
                                                                 Will disabled output ring. */
        uint64_t oring_dma_err         : 1;  /**< [ 32: 32](R/W1C/H) DMA read error or poison response on output pointer pair fetch.
                                                                 Will disabled output ring */
        uint64_t reserved_9_31         : 23;
        uint64_t illegal_dir_gthr      : 1;  /**< [  8:  8](R/W1C/H) Illegal Direct gather instruction.
                                                                 Direct gather has been removed and instructions that have SDP_INSTR_HDR_S[G]=1 and
                                                                 SDP_INSTR_HDR_S[GSZ]=0x0 are illegal. */
        uint64_t illegal_fsz           : 1;  /**< [  7:  7](R/W1C/H) Illegal FSZ specified in instruction.
                                                                 For direct gather, FSZ must be \<= 32 for 64B instructions and 0 for 32B instructions.
                                                                 For direct data/indirect gather, FSZ must be \<= 55 for 64B instructions and \<= 23 for 32B
                                                                 instructions. This check is done before any length checks. */
        uint64_t pkt_dma_err           : 1;  /**< [  6:  6](R/W1C/H) DMA read error response on packet fetch. */
        uint64_t inst_dma_err          : 1;  /**< [  5:  5](R/W1C/H) DMA read error or poison response on instruction fetch. */
        uint64_t pkt_toosmall          : 1;  /**< [  4:  4](R/W1C/H) Attempted packet read with LEN=0 or LEN \< FSZ. */
        uint64_t dir_len_toosmall      : 1;  /**< [  3:  3](R/W1C/H) Direct gather combined LEN fields are less than the packet length specified. */
        uint64_t ind_dma_err           : 1;  /**< [  2:  2](R/W1C/H) DMA read error or poison response on indirect gather list fetch.  This could also be caused by
                                                                 an unaligned gather list, in which case SDP()_DIAG[IN_IND_UNALIGNED] will also be set. */
        uint64_t ind_zero_det          : 1;  /**< [  1:  1](R/W1C/H) Indirect gather list contains length of 0. */
        uint64_t ind_toosmall          : 1;  /**< [  0:  0](R/W1C/H) Indirect gather list length specified less than (packet length - FSZ) in instruction. */
#else /* Word 0 - Little Endian */
        uint64_t ind_toosmall          : 1;  /**< [  0:  0](R/W1C/H) Indirect gather list length specified less than (packet length - FSZ) in instruction. */
        uint64_t ind_zero_det          : 1;  /**< [  1:  1](R/W1C/H) Indirect gather list contains length of 0. */
        uint64_t ind_dma_err           : 1;  /**< [  2:  2](R/W1C/H) DMA read error or poison response on indirect gather list fetch.  This could also be caused by
                                                                 an unaligned gather list, in which case SDP()_DIAG[IN_IND_UNALIGNED] will also be set. */
        uint64_t dir_len_toosmall      : 1;  /**< [  3:  3](R/W1C/H) Direct gather combined LEN fields are less than the packet length specified. */
        uint64_t pkt_toosmall          : 1;  /**< [  4:  4](R/W1C/H) Attempted packet read with LEN=0 or LEN \< FSZ. */
        uint64_t inst_dma_err          : 1;  /**< [  5:  5](R/W1C/H) DMA read error or poison response on instruction fetch. */
        uint64_t pkt_dma_err           : 1;  /**< [  6:  6](R/W1C/H) DMA read error response on packet fetch. */
        uint64_t illegal_fsz           : 1;  /**< [  7:  7](R/W1C/H) Illegal FSZ specified in instruction.
                                                                 For direct gather, FSZ must be \<= 32 for 64B instructions and 0 for 32B instructions.
                                                                 For direct data/indirect gather, FSZ must be \<= 55 for 64B instructions and \<= 23 for 32B
                                                                 instructions. This check is done before any length checks. */
        uint64_t illegal_dir_gthr      : 1;  /**< [  8:  8](R/W1C/H) Illegal Direct gather instruction.
                                                                 Direct gather has been removed and instructions that have SDP_INSTR_HDR_S[G]=1 and
                                                                 SDP_INSTR_HDR_S[GSZ]=0x0 are illegal. */
        uint64_t reserved_9_31         : 23;
        uint64_t oring_dma_err         : 1;  /**< [ 32: 32](R/W1C/H) DMA read error or poison response on output pointer pair fetch.
                                                                 Will disabled output ring */
        uint64_t oring_drop_cnt_err    : 1;  /**< [ 33: 33](R/W1C/H) SDP()_R()_OUT_CONTROL[DROP_CNT] was misprogrammed allowing an output packet
                                                                 to be sent greater then buffers available.
                                                                 Will disabled output ring. */
        uint64_t dbell_empty           : 1;  /**< [ 34: 34](R/W1C/H) A packet is received from NIX TX and there are no corresponding buffers available
                                                                 for that output ring to send the packet causing ring to go into drop state..
                                                                 See SDP()_R()_OUT_CONTROL[DROP_CNT]. */
        uint64_t port_dis              : 1;  /**< [ 35: 35](R/W1C/H) Output port was in non-drop state and enabled, then was disabled causing ring to
                                                                 go into drop state. */
        uint64_t drop_timer            : 1;  /**< [ 36: 36](R/W1C/H) SDP()_OUT_BP_TIMER() reached SDP()_OUT_BP_TIMER_CTL[TIMER_LIMIT] causing ring to go into
                                                                 drop state. */
        uint64_t reserved_37_63        : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_err_type_s cn; */
};
typedef union cavm_sdpx_rx_err_type cavm_sdpx_rx_err_type_t;

static inline uint64_t CAVM_SDPX_RX_ERR_TYPE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_ERR_TYPE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000400ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_ERR_TYPE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_ERR_TYPE(a,b) cavm_sdpx_rx_err_type_t
#define bustype_CAVM_SDPX_RX_ERR_TYPE(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_ERR_TYPE(a,b) "SDPX_RX_ERR_TYPE"
#define device_bar_CAVM_SDPX_RX_ERR_TYPE(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_ERR_TYPE(a,b) (a)
#define arguments_CAVM_SDPX_RX_ERR_TYPE(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_byte_cnt
 *
 * SDP Packet Input Byte Count Register
 * This register contains byte counts per ring that have been read into SDP.
 * The counter will wrap when it reaches its maximum value. It should be cleared
 * before the ring is enabled for an accurate count.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_byte_cnt
{
    uint64_t u;
    struct cavm_sdpx_rx_in_byte_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Byte count, can be reset by software by writing SDP()_R()_IN_PKT_CNT[CNT]
                                                                 with 0xFFFFFFFFF. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Byte count, can be reset by software by writing SDP()_R()_IN_PKT_CNT[CNT]
                                                                 with 0xFFFFFFFFF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_byte_cnt_s cn; */
};
typedef union cavm_sdpx_rx_in_byte_cnt cavm_sdpx_rx_in_byte_cnt_t;

static inline uint64_t CAVM_SDPX_RX_IN_BYTE_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_BYTE_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000090ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_BYTE_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_BYTE_CNT(a,b) cavm_sdpx_rx_in_byte_cnt_t
#define bustype_CAVM_SDPX_RX_IN_BYTE_CNT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_BYTE_CNT(a,b) "SDPX_RX_IN_BYTE_CNT"
#define device_bar_CAVM_SDPX_RX_IN_BYTE_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_BYTE_CNT(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_BYTE_CNT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_cnts
 *
 * SDP Input Instruction Ring Counts Register
 * This register contains the counters for the input instruction rings.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_cnts
{
    uint64_t u;
    struct cavm_sdpx_rx_in_cnts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t send_ism              : 1;  /**< [ 63: 63](WO/H) A write of 1 will cause a ISM message to be sent with the current value of [CNT].
                                                                 Hardware will ignore the written value of [CNT] if [SEND_ISM] is set and will NOT
                                                                 subtract the amount written to [CNT]. ISM messages must be enabled in
                                                                 SDP()_R()_IN_CNTS_ISM.EN.  Hardware will also ignore a write of 1 to the [RESEND] bit
                                                                 if 1 is written to this field.
                                                                 Note this is orthogonal to normal ISM messages that will always be sent before a counts
                                                                 interrupt if enabled. */
        uint64_t out_int               : 1;  /**< [ 62: 62](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_OUT_CNTS[CNT] \> SDP()_R()_OUT_INT_LEVELS[CNT] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_CNTS[TIMER] \> SDP()_R()_OUT_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_INT_MDRT_CTL1[ENABLE]==1 &
                                                                    SDP()_R()_OUT_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_OUT_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_OUT_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t in_int                : 1;  /**< [ 61: 61](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_IN_CNTS[CNT] \> SDP()_R()_IN_INT_LEVELS[CNT] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_CNTS[TIMER] \> SDP()_R()_IN_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_INT_MDRT_CTL1[ENABLE]=1 &
                                                                    SDP()_R()_IN_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_IN_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_IN_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t mbox_int              : 1;  /**< [ 60: 60](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_MBOX_PF_VF_INT[INTR] is set

                                                                 To clear the bit, write SDP()_R()_MBOX_PF_VF_INT[INTR] with 1.
                                                                 This bit is also cleared due to an FLR. */
        uint64_t resend                : 1;  /**< [ 59: 59](WO/H) A write of 1 will resend an MSI-X interrupt message and a corresponding ISM message if enabled
                                                                 if any of the following conditions are true for the respective ring:
                                                                  * SDP()_R()_IN_CNTS[CNT] \> SDP()_R()_IN_INT_LEVELS[CNT] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_CNTS[TIMER] \> SDP()_R()_IN_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.

                                                                 If SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]=0 a write of
                                                                 [RESEND] will clear [IN_INT].  This is generally used when
                                                                 SDP()_R()_IN_INT_MDRT_CTL1[ENABLE]==1 to prepare for the next MDRT
                                                                 timer interrupt event.

                                                                 If [SEND_ISM] is also written to a 1 writes of 1 to [RESEND] will be ignored. */
        uint64_t reserved_54_58        : 5;
        uint64_t timer                 : 22; /**< [ 53: 32](RO/H) Timer, incremented every 1024 coprocessor-clock cycles when [CNT] is
                                                                 not zero. The hardware clears [TIMER] when [CNT] is written to a
                                                                 nonzero value. The first increment of this count can occur between 0 to
                                                                 1023 coprocessor-clock cycles after [CNT] becomes nonzero. */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) Packet counter. Hardware adds to [CNT] as it reads packets. On a write
                                                                 to this CSR, hardware subtracts the amount written to the [CNT] field from
                                                                 [CNT], which will clear SDP()_R()_IN_CNTS[IN_INT] if [CNT] becomes \<=
                                                                 SDP()_R()_IN_INT_LEVELS[CNT]. This register should be cleared before
                                                                 enabling a ring by reading the current value and writing it back. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) Packet counter. Hardware adds to [CNT] as it reads packets. On a write
                                                                 to this CSR, hardware subtracts the amount written to the [CNT] field from
                                                                 [CNT], which will clear SDP()_R()_IN_CNTS[IN_INT] if [CNT] becomes \<=
                                                                 SDP()_R()_IN_INT_LEVELS[CNT]. This register should be cleared before
                                                                 enabling a ring by reading the current value and writing it back. */
        uint64_t timer                 : 22; /**< [ 53: 32](RO/H) Timer, incremented every 1024 coprocessor-clock cycles when [CNT] is
                                                                 not zero. The hardware clears [TIMER] when [CNT] is written to a
                                                                 nonzero value. The first increment of this count can occur between 0 to
                                                                 1023 coprocessor-clock cycles after [CNT] becomes nonzero. */
        uint64_t reserved_54_58        : 5;
        uint64_t resend                : 1;  /**< [ 59: 59](WO/H) A write of 1 will resend an MSI-X interrupt message and a corresponding ISM message if enabled
                                                                 if any of the following conditions are true for the respective ring:
                                                                  * SDP()_R()_IN_CNTS[CNT] \> SDP()_R()_IN_INT_LEVELS[CNT] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_CNTS[TIMER] \> SDP()_R()_IN_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.

                                                                 If SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]=0 a write of
                                                                 [RESEND] will clear [IN_INT].  This is generally used when
                                                                 SDP()_R()_IN_INT_MDRT_CTL1[ENABLE]==1 to prepare for the next MDRT
                                                                 timer interrupt event.

                                                                 If [SEND_ISM] is also written to a 1 writes of 1 to [RESEND] will be ignored. */
        uint64_t mbox_int              : 1;  /**< [ 60: 60](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_MBOX_PF_VF_INT[INTR] is set

                                                                 To clear the bit, write SDP()_R()_MBOX_PF_VF_INT[INTR] with 1.
                                                                 This bit is also cleared due to an FLR. */
        uint64_t in_int                : 1;  /**< [ 61: 61](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_IN_CNTS[CNT] \> SDP()_R()_IN_INT_LEVELS[CNT] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_CNTS[TIMER] \> SDP()_R()_IN_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_INT_MDRT_CTL1[ENABLE]=1 &
                                                                    SDP()_R()_IN_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_IN_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_IN_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t out_int               : 1;  /**< [ 62: 62](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_OUT_CNTS[CNT] \> SDP()_R()_OUT_INT_LEVELS[CNT] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_CNTS[TIMER] \> SDP()_R()_OUT_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_INT_MDRT_CTL1[ENABLE]==1 &
                                                                    SDP()_R()_OUT_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_OUT_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_OUT_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t send_ism              : 1;  /**< [ 63: 63](WO/H) A write of 1 will cause a ISM message to be sent with the current value of [CNT].
                                                                 Hardware will ignore the written value of [CNT] if [SEND_ISM] is set and will NOT
                                                                 subtract the amount written to [CNT]. ISM messages must be enabled in
                                                                 SDP()_R()_IN_CNTS_ISM.EN.  Hardware will also ignore a write of 1 to the [RESEND] bit
                                                                 if 1 is written to this field.
                                                                 Note this is orthogonal to normal ISM messages that will always be sent before a counts
                                                                 interrupt if enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_cnts_s cn; */
};
typedef union cavm_sdpx_rx_in_cnts cavm_sdpx_rx_in_cnts_t;

static inline uint64_t CAVM_SDPX_RX_IN_CNTS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_CNTS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000050ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_CNTS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_CNTS(a,b) cavm_sdpx_rx_in_cnts_t
#define bustype_CAVM_SDPX_RX_IN_CNTS(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_CNTS(a,b) "SDPX_RX_IN_CNTS"
#define device_bar_CAVM_SDPX_RX_IN_CNTS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_CNTS(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_CNTS(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_cnts_ism
 *
 * SDP Ring Input Counts Status Message Register
 * This register configures input count status messages.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_cnts_ism
{
    uint64_t u;
    struct cavm_sdpx_rx_in_cnts_ism_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PCI address hardware will write status messages to. See [EN]. */
        uint64_t msix_dis              : 1;  /**< [  1:  1](R/W) Disables MSIX interrupt and setting PBA bits for input packet interrupts
                                                                 when only using ISM messages for completion status. */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable writing input counts messages. When set, before sending an input counts
                                                                 interrupt MSI to the host, hardware will write the value of value of
                                                                 SDP()_R()_IN_CNTS[CNT] to the 32-bits at [ADDR]. This does not cause an
                                                                 interrupt; instead software may use this inside the standard
                                                                 input-counts-initiated interrupt handler to appropriately handle the interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable writing input counts messages. When set, before sending an input counts
                                                                 interrupt MSI to the host, hardware will write the value of value of
                                                                 SDP()_R()_IN_CNTS[CNT] to the 32-bits at [ADDR]. This does not cause an
                                                                 interrupt; instead software may use this inside the standard
                                                                 input-counts-initiated interrupt handler to appropriately handle the interrupt. */
        uint64_t msix_dis              : 1;  /**< [  1:  1](R/W) Disables MSIX interrupt and setting PBA bits for input packet interrupts
                                                                 when only using ISM messages for completion status. */
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PCI address hardware will write status messages to. See [EN]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_cnts_ism_s cn; */
};
typedef union cavm_sdpx_rx_in_cnts_ism cavm_sdpx_rx_in_cnts_ism_t;

static inline uint64_t CAVM_SDPX_RX_IN_CNTS_ISM(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_CNTS_ISM(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000520ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_CNTS_ISM", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_CNTS_ISM(a,b) cavm_sdpx_rx_in_cnts_ism_t
#define bustype_CAVM_SDPX_RX_IN_CNTS_ISM(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_CNTS_ISM(a,b) "SDPX_RX_IN_CNTS_ISM"
#define device_bar_CAVM_SDPX_RX_IN_CNTS_ISM(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_CNTS_ISM(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_CNTS_ISM(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_control
 *
 * SDP Input Instruction Ring ConLMACtrol Register
 * This register is the control for read operations on the input instruction rings.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.  Also, this register cannot be written
 * while either of the following conditions is true:
 *   * [IDLE] is clear.
 *   * Or, SDP()_R()_IN_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_control
{
    uint64_t u;
    struct cavm_sdpx_rx_in_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t rpvf                  : 4;  /**< [ 51: 48](RO/H) The number of rings assigned to this VF.
                                                                 Read only copy of SDP()_EPF()_RINFO[RPVF] */
        uint64_t reserved_29_47        : 19;
        uint64_t idle                  : 1;  /**< [ 28: 28](RO/H) Asserted when this ring has no packets in-flight. */
        uint64_t reserved_27           : 1;
        uint64_t rdsize                : 2;  /**< [ 26: 25](R/W) Number of instructions to be read in one read request. Two-bit values are:
                                                                 0x0 = 1 instruction.
                                                                 0x1 = 2 instructions.
                                                                 0x2 = 4 instructions.
                                                                 0x3 = 8 instructions. */
        uint64_t is64b                 : 1;  /**< [ 24: 24](R/W) If 1, the ring uses 64-byte instructions.
                                                                 If 0, the ring uses 32-byte instructions. */
        uint64_t reserved_9_23         : 15;
        uint64_t d_nsr                 : 1;  /**< [  8:  8](R/W/H) [D_NSR] is ADDRTYPE\<1\> for first direct and gather DPTR reads. ADDRTYPE\<1\> is the
                                                                 no-snoop attribute for PCIe. */
        uint64_t d_esr                 : 2;  /**< [  7:  6](R/W/H) [D_ESR] is ES\<1:0\> for first direct and gather DPTR reads.
                                                                 ES\<1:0\> is the endian-swap attribute for these MAC memory space reads.
                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t d_ror                 : 1;  /**< [  5:  5](R/W/H) [D_ROR] is ADDRTYPE\<0\> for first direct and gather DPTR reads. ADDRTYPE\<0\> is the
                                                                 relaxed-order attribute for PCIe. */
        uint64_t reserved_4            : 1;
        uint64_t nsr                   : 1;  /**< [  3:  3](R/W/H) [NSR] is ADDRTYPE\<1\> for input instruction reads (from
                                                                 SDP()_R()_IN_INSTR_BADDR) and first indirect DPTR reads. ADDRTYPE\<1\>
                                                                 is the no-snoop attribute for PCIe. */
        uint64_t esr                   : 2;  /**< [  2:  1](R/W/H) [ESR] is ES\<1:0\> for input instruction reads (from
                                                                 SDP()_R()_IN_INSTR_BADDR) and first indirect DPTR reads. ES\<1:0\> is
                                                                 the endian-swap attribute for these MAC memory space reads.
                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t ror                   : 1;  /**< [  0:  0](R/W/H) [ROR] is ADDRTYPE\<0\> for input instruction reads (from
                                                                 SDP()_R()_IN_INSTR_BADDR) and first indirect DPTR reads.
                                                                 ADDRTYPE\<0\> is the relaxed-order attribute for PCIe. */
#else /* Word 0 - Little Endian */
        uint64_t ror                   : 1;  /**< [  0:  0](R/W/H) [ROR] is ADDRTYPE\<0\> for input instruction reads (from
                                                                 SDP()_R()_IN_INSTR_BADDR) and first indirect DPTR reads.
                                                                 ADDRTYPE\<0\> is the relaxed-order attribute for PCIe. */
        uint64_t esr                   : 2;  /**< [  2:  1](R/W/H) [ESR] is ES\<1:0\> for input instruction reads (from
                                                                 SDP()_R()_IN_INSTR_BADDR) and first indirect DPTR reads. ES\<1:0\> is
                                                                 the endian-swap attribute for these MAC memory space reads.
                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t nsr                   : 1;  /**< [  3:  3](R/W/H) [NSR] is ADDRTYPE\<1\> for input instruction reads (from
                                                                 SDP()_R()_IN_INSTR_BADDR) and first indirect DPTR reads. ADDRTYPE\<1\>
                                                                 is the no-snoop attribute for PCIe. */
        uint64_t reserved_4            : 1;
        uint64_t d_ror                 : 1;  /**< [  5:  5](R/W/H) [D_ROR] is ADDRTYPE\<0\> for first direct and gather DPTR reads. ADDRTYPE\<0\> is the
                                                                 relaxed-order attribute for PCIe. */
        uint64_t d_esr                 : 2;  /**< [  7:  6](R/W/H) [D_ESR] is ES\<1:0\> for first direct and gather DPTR reads.
                                                                 ES\<1:0\> is the endian-swap attribute for these MAC memory space reads.
                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t d_nsr                 : 1;  /**< [  8:  8](R/W/H) [D_NSR] is ADDRTYPE\<1\> for first direct and gather DPTR reads. ADDRTYPE\<1\> is the
                                                                 no-snoop attribute for PCIe. */
        uint64_t reserved_9_23         : 15;
        uint64_t is64b                 : 1;  /**< [ 24: 24](R/W) If 1, the ring uses 64-byte instructions.
                                                                 If 0, the ring uses 32-byte instructions. */
        uint64_t rdsize                : 2;  /**< [ 26: 25](R/W) Number of instructions to be read in one read request. Two-bit values are:
                                                                 0x0 = 1 instruction.
                                                                 0x1 = 2 instructions.
                                                                 0x2 = 4 instructions.
                                                                 0x3 = 8 instructions. */
        uint64_t reserved_27           : 1;
        uint64_t idle                  : 1;  /**< [ 28: 28](RO/H) Asserted when this ring has no packets in-flight. */
        uint64_t reserved_29_47        : 19;
        uint64_t rpvf                  : 4;  /**< [ 51: 48](RO/H) The number of rings assigned to this VF.
                                                                 Read only copy of SDP()_EPF()_RINFO[RPVF] */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_control_s cn; */
};
typedef union cavm_sdpx_rx_in_control cavm_sdpx_rx_in_control_t;

static inline uint64_t CAVM_SDPX_RX_IN_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000000ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_CONTROL(a,b) cavm_sdpx_rx_in_control_t
#define bustype_CAVM_SDPX_RX_IN_CONTROL(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_CONTROL(a,b) "SDPX_RX_IN_CONTROL"
#define device_bar_CAVM_SDPX_RX_IN_CONTROL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_CONTROL(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_enable
 *
 * SDP Input Instruction Ring Enable Register
 * This register is the enable for read operations on the input instruction rings.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_enable
{
    uint64_t u;
    struct cavm_sdpx_rx_in_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enb                   : 1;  /**< [  0:  0](R/W/H) Enable for the input ring.  Various errors and FLR events can clear this bit.
                                                                 Software can also clear this bit at anytime. The bit may not be set unless
                                                                 SDP()_R()_IN_CONTROL[IDLE] == 0. */
#else /* Word 0 - Little Endian */
        uint64_t enb                   : 1;  /**< [  0:  0](R/W/H) Enable for the input ring.  Various errors and FLR events can clear this bit.
                                                                 Software can also clear this bit at anytime. The bit may not be set unless
                                                                 SDP()_R()_IN_CONTROL[IDLE] == 0. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_enable_s cn; */
};
typedef union cavm_sdpx_rx_in_enable cavm_sdpx_rx_in_enable_t;

static inline uint64_t CAVM_SDPX_RX_IN_ENABLE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_ENABLE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000010ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_ENABLE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_ENABLE(a,b) cavm_sdpx_rx_in_enable_t
#define bustype_CAVM_SDPX_RX_IN_ENABLE(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_ENABLE(a,b) "SDPX_RX_IN_ENABLE"
#define device_bar_CAVM_SDPX_RX_IN_ENABLE(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_ENABLE(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_ENABLE(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_instr_baddr
 *
 * SDP Input Instruction Ring Base Address Register
 * This register contains the base address for the input instruction ring.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.  Also, this register cannot be written
 * while either of the following conditions is true:
 *   * SDP()_R()_IN_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_IN_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 127 rings can be indexed.
 */
union cavm_sdpx_rx_in_instr_baddr
{
    uint64_t u;
    struct cavm_sdpx_rx_in_instr_baddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 60; /**< [ 63:  4](R/W) Base address for input instruction ring. Must be 16-byte aligned. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t addr                  : 60; /**< [ 63:  4](R/W) Base address for input instruction ring. Must be 16-byte aligned. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_instr_baddr_s cn; */
};
typedef union cavm_sdpx_rx_in_instr_baddr cavm_sdpx_rx_in_instr_baddr_t;

static inline uint64_t CAVM_SDPX_RX_IN_INSTR_BADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INSTR_BADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000020ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INSTR_BADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INSTR_BADDR(a,b) cavm_sdpx_rx_in_instr_baddr_t
#define bustype_CAVM_SDPX_RX_IN_INSTR_BADDR(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INSTR_BADDR(a,b) "SDPX_RX_IN_INSTR_BADDR"
#define device_bar_CAVM_SDPX_RX_IN_INSTR_BADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INSTR_BADDR(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INSTR_BADDR(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_instr_dbell
 *
 * SDP Input Instruction Ring Input Doorbell Registers
 * This register contains the doorbell and base-address offset for the next read operation.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_instr_dbell
{
    uint64_t u;
    struct cavm_sdpx_rx_in_instr_dbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aoff                  : 32; /**< [ 63: 32](RO/H) Address offset. The offset from the SDP()_R()_IN_INSTR_BADDR where the
                                                                 next pointer is read. A write of 0xFFFFFFFF to [DBELL] clears [DBELL] and [AOFF]. */
        uint64_t dbell                 : 32; /**< [ 31:  0](R/W/H) Pointer list doorbell count. Write operations to this field increments the present
                                                                 value here. Read operations return the present value. The value of this field is
                                                                 decremented as read operations are issued for instructions. A write of 0xFFFFFFFF
                                                                 to this field clears [DBELL] and [AOFF].  This register should be cleared before
                                                                 enabling a ring. */
#else /* Word 0 - Little Endian */
        uint64_t dbell                 : 32; /**< [ 31:  0](R/W/H) Pointer list doorbell count. Write operations to this field increments the present
                                                                 value here. Read operations return the present value. The value of this field is
                                                                 decremented as read operations are issued for instructions. A write of 0xFFFFFFFF
                                                                 to this field clears [DBELL] and [AOFF].  This register should be cleared before
                                                                 enabling a ring. */
        uint64_t aoff                  : 32; /**< [ 63: 32](RO/H) Address offset. The offset from the SDP()_R()_IN_INSTR_BADDR where the
                                                                 next pointer is read. A write of 0xFFFFFFFF to [DBELL] clears [DBELL] and [AOFF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_instr_dbell_s cn; */
};
typedef union cavm_sdpx_rx_in_instr_dbell cavm_sdpx_rx_in_instr_dbell_t;

static inline uint64_t CAVM_SDPX_RX_IN_INSTR_DBELL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INSTR_DBELL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000040ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INSTR_DBELL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INSTR_DBELL(a,b) cavm_sdpx_rx_in_instr_dbell_t
#define bustype_CAVM_SDPX_RX_IN_INSTR_DBELL(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INSTR_DBELL(a,b) "SDPX_RX_IN_INSTR_DBELL"
#define device_bar_CAVM_SDPX_RX_IN_INSTR_DBELL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INSTR_DBELL(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INSTR_DBELL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_instr_rsize
 *
 * SDP Input Instruction Ring Size Register
 * This register contains the input instruction ring size.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.  Also, this register cannot be written
 * while either of the following conditions is true:
 *   * SDP()_R()_IN_CONTROL[IDLE] is clear.
 *   * or, SDP()_R()_IN_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_instr_rsize
{
    uint64_t u;
    struct cavm_sdpx_rx_in_instr_rsize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rsize                 : 32; /**< [ 31:  0](R/W) Ring size (number of instructions). */
#else /* Word 0 - Little Endian */
        uint64_t rsize                 : 32; /**< [ 31:  0](R/W) Ring size (number of instructions). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_instr_rsize_s cn; */
};
typedef union cavm_sdpx_rx_in_instr_rsize cavm_sdpx_rx_in_instr_rsize_t;

static inline uint64_t CAVM_SDPX_RX_IN_INSTR_RSIZE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INSTR_RSIZE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000030ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INSTR_RSIZE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INSTR_RSIZE(a,b) cavm_sdpx_rx_in_instr_rsize_t
#define bustype_CAVM_SDPX_RX_IN_INSTR_RSIZE(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INSTR_RSIZE(a,b) "SDPX_RX_IN_INSTR_RSIZE"
#define device_bar_CAVM_SDPX_RX_IN_INSTR_RSIZE(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INSTR_RSIZE(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INSTR_RSIZE(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_int_levels
 *
 * SDP Input Instruction Interrupt Levels Register
 * This register contains input instruction interrupt levels.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_int_levels
{
    uint64_t u;
    struct cavm_sdpx_rx_in_int_levels_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bmode                 : 1;  /**< [ 63: 63](R/W) Determines whether SDP()_R()_IN_CNTS[CNT] is a byte or packet counter. When
                                                                 [BMODE]=1, SDP()_R()_IN_CNTS[CNT] is a byte counter, else SDP()_R()_IN_CNTS[CNT]
                                                                 is a packet counter. */
        uint64_t time_cnt_ena          : 1;  /**< [ 62: 62](R/W) Enables generating MSIX-X interrupts whenever SDP()_R()_IN_CNTS[TIMER] \> [TIMET]
                                                                 or SDP()_R()_IN_CNTS[CNT] \> [CNT] conditions are met. */
        uint64_t max_len_ena           : 1;  /**< [ 61: 61](R/W) Maximum packet length enable. If set, An MSI-X interrupt will be generated for
                                                                 any packet with length greater than [MAX_LEN] KBytes. */
        uint64_t max_len               : 7;  /**< [ 60: 54](R/W) Maximum packet length not to generate interrupt (in KB). IF [MAX_LEN_ENA] is set
                                                                 an MSI-X interrupt will be generated for any packet with length greater than
                                                                 [MAX_LEN] KBytes. */
        uint64_t timet                 : 22; /**< [ 53: 32](R/W) Input port counter time interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_IN_CNTS[TIMER] \> [TIMET] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [TIMET], it should also subsequently write
                                                                 the corresponding SDP()_R()_IN_CNTS CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_IN_CNTS[IN_INT]. */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W) Input packet counter interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_IN_CNTS[CNT] \> [CNT] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [CNT], it should also subsequently write
                                                                 the corresponding SDP()_R()_IN_CNTS[CNT] CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_IN_CNTS[IN_INT] */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W) Input packet counter interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_IN_CNTS[CNT] \> [CNT] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [CNT], it should also subsequently write
                                                                 the corresponding SDP()_R()_IN_CNTS[CNT] CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_IN_CNTS[IN_INT] */
        uint64_t timet                 : 22; /**< [ 53: 32](R/W) Input port counter time interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_IN_CNTS[TIMER] \> [TIMET] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [TIMET], it should also subsequently write
                                                                 the corresponding SDP()_R()_IN_CNTS CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_IN_CNTS[IN_INT]. */
        uint64_t max_len               : 7;  /**< [ 60: 54](R/W) Maximum packet length not to generate interrupt (in KB). IF [MAX_LEN_ENA] is set
                                                                 an MSI-X interrupt will be generated for any packet with length greater than
                                                                 [MAX_LEN] KBytes. */
        uint64_t max_len_ena           : 1;  /**< [ 61: 61](R/W) Maximum packet length enable. If set, An MSI-X interrupt will be generated for
                                                                 any packet with length greater than [MAX_LEN] KBytes. */
        uint64_t time_cnt_ena          : 1;  /**< [ 62: 62](R/W) Enables generating MSIX-X interrupts whenever SDP()_R()_IN_CNTS[TIMER] \> [TIMET]
                                                                 or SDP()_R()_IN_CNTS[CNT] \> [CNT] conditions are met. */
        uint64_t bmode                 : 1;  /**< [ 63: 63](R/W) Determines whether SDP()_R()_IN_CNTS[CNT] is a byte or packet counter. When
                                                                 [BMODE]=1, SDP()_R()_IN_CNTS[CNT] is a byte counter, else SDP()_R()_IN_CNTS[CNT]
                                                                 is a packet counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_int_levels_s cn; */
};
typedef union cavm_sdpx_rx_in_int_levels cavm_sdpx_rx_in_int_levels_t;

static inline uint64_t CAVM_SDPX_RX_IN_INT_LEVELS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INT_LEVELS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000060ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INT_LEVELS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INT_LEVELS(a,b) cavm_sdpx_rx_in_int_levels_t
#define bustype_CAVM_SDPX_RX_IN_INT_LEVELS(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INT_LEVELS(a,b) "SDPX_RX_IN_INT_LEVELS"
#define device_bar_CAVM_SDPX_RX_IN_INT_LEVELS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INT_LEVELS(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INT_LEVELS(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_int_mdrt_ctl0
 *
 * SDP Input Instruction Interrupt Moderation Control 0 Register
 * This register is used for interrupt moderation.
 * See SDP()_R()_IN_INT_MDRT_CTL1.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_int_mdrt_ctl0
{
    uint64_t u;
    struct cavm_sdpx_rx_in_int_mdrt_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t hi_timer              : 22; /**< [ 53: 32](R/W) High timer level. */
        uint64_t reserved_22_31        : 10;
        uint64_t lo_timer              : 22; /**< [ 21:  0](R/W) Low timer level. */
#else /* Word 0 - Little Endian */
        uint64_t lo_timer              : 22; /**< [ 21:  0](R/W) Low timer level. */
        uint64_t reserved_22_31        : 10;
        uint64_t hi_timer              : 22; /**< [ 53: 32](R/W) High timer level. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_int_mdrt_ctl0_s cn; */
};
typedef union cavm_sdpx_rx_in_int_mdrt_ctl0 cavm_sdpx_rx_in_int_mdrt_ctl0_t;

static inline uint64_t CAVM_SDPX_RX_IN_INT_MDRT_CTL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INT_MDRT_CTL0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000280ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INT_MDRT_CTL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INT_MDRT_CTL0(a,b) cavm_sdpx_rx_in_int_mdrt_ctl0_t
#define bustype_CAVM_SDPX_RX_IN_INT_MDRT_CTL0(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INT_MDRT_CTL0(a,b) "SDPX_RX_IN_INT_MDRT_CTL0"
#define device_bar_CAVM_SDPX_RX_IN_INT_MDRT_CTL0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INT_MDRT_CTL0(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INT_MDRT_CTL0(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_int_mdrt_ctl1
 *
 * SDP Input Instruction Interrupt Moderation Control 1 Register
 * This register is used for interrupt moderation. For each ring the user sets a pair
 * of [LO_RATE] bytes and SDP()_R()_IN_INT_MDRT_CTL0[LO_TIMER] time, and a pair
 * of [HI_RATE] bytes and SDP()_R()_IN_INT_MDRT_CTL0[HI_TIMER] time. The logic
 * will also take as inputs the current byte rate and the current timer value. If the
 * current byte rate is smaller or equal to [LO_RATE] the logic will issue an interrupt
 * if the current timer value is higher than Lo_Timer. Similarly if the current byte
 * rate is greater than [HI_RATE] the logic will issue an interrupt if the current
 * timer value is greater than Hi_Timer. Otherwise, the logic will calculate if the
 * current timer is above the timer level that corresponds to the current byte rate,
 * based on the Byte_Rate to Timer_Level linear relationship and in that case it will
 * issue an interrupt.
 *
 * The Byte_Rate is the moving average of the number of bytes per 1024 cycles and is
 * recalculated for each ring every 1024 cycles based on the old value and the byte
 * count during the last 1024 cycles segment:
 *
 * _ Current_Byte_Rate = (Old_Byte_Rate * (256 - 2^[WEIGHT]) + Byte_Cnt * 2^[WEIGHT]) / 256.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_int_mdrt_ctl1
{
    uint64_t u;
    struct cavm_sdpx_rx_in_int_mdrt_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable interrupt moderation. */
        uint64_t reserved_44_62        : 19;
        uint64_t weight                : 4;  /**< [ 43: 40](R/W) Weight:
                                                                 0x0 = Weight of 1.
                                                                 0x1 = Weight of 2.
                                                                 0x2 = Weight of 4.
                                                                 0x3 = Weight of 8.
                                                                 0x4 = Weight of 16.
                                                                 0x5 = Weight of 32.
                                                                 0x6 = Weight of 64.
                                                                 0x7 = Weight of 128.
                                                                 0x8 = Weight of 256.
                                                                 _ else = Reserved. */
        uint64_t reserved_37_39        : 3;
        uint64_t hi_rate               : 17; /**< [ 36: 20](R/W) High byte rate. */
        uint64_t reserved_17_19        : 3;
        uint64_t lo_rate               : 17; /**< [ 16:  0](R/W) Low byte rate. */
#else /* Word 0 - Little Endian */
        uint64_t lo_rate               : 17; /**< [ 16:  0](R/W) Low byte rate. */
        uint64_t reserved_17_19        : 3;
        uint64_t hi_rate               : 17; /**< [ 36: 20](R/W) High byte rate. */
        uint64_t reserved_37_39        : 3;
        uint64_t weight                : 4;  /**< [ 43: 40](R/W) Weight:
                                                                 0x0 = Weight of 1.
                                                                 0x1 = Weight of 2.
                                                                 0x2 = Weight of 4.
                                                                 0x3 = Weight of 8.
                                                                 0x4 = Weight of 16.
                                                                 0x5 = Weight of 32.
                                                                 0x6 = Weight of 64.
                                                                 0x7 = Weight of 128.
                                                                 0x8 = Weight of 256.
                                                                 _ else = Reserved. */
        uint64_t reserved_44_62        : 19;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable interrupt moderation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_int_mdrt_ctl1_s cn; */
};
typedef union cavm_sdpx_rx_in_int_mdrt_ctl1 cavm_sdpx_rx_in_int_mdrt_ctl1_t;

static inline uint64_t CAVM_SDPX_RX_IN_INT_MDRT_CTL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INT_MDRT_CTL1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc018200002a0ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INT_MDRT_CTL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INT_MDRT_CTL1(a,b) cavm_sdpx_rx_in_int_mdrt_ctl1_t
#define bustype_CAVM_SDPX_RX_IN_INT_MDRT_CTL1(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INT_MDRT_CTL1(a,b) "SDPX_RX_IN_INT_MDRT_CTL1"
#define device_bar_CAVM_SDPX_RX_IN_INT_MDRT_CTL1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INT_MDRT_CTL1(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INT_MDRT_CTL1(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_int_mdrt_dbg
 *
 * SDP Input Instruction Interrupt Moderation Debug Register
 * This register is used for interrupt moderation.
 * See SDP()_R()_IN_INT_MDRT_CTL1.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_int_mdrt_dbg
{
    uint64_t u;
    struct cavm_sdpx_rx_in_int_mdrt_dbg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t avg_rate              : 17; /**< [ 16:  0](R/W/H) Average byte rate. */
#else /* Word 0 - Little Endian */
        uint64_t avg_rate              : 17; /**< [ 16:  0](R/W/H) Average byte rate. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_int_mdrt_dbg_s cn; */
};
typedef union cavm_sdpx_rx_in_int_mdrt_dbg cavm_sdpx_rx_in_int_mdrt_dbg_t;

static inline uint64_t CAVM_SDPX_RX_IN_INT_MDRT_DBG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_INT_MDRT_DBG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc018200002c0ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_INT_MDRT_DBG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_INT_MDRT_DBG(a,b) cavm_sdpx_rx_in_int_mdrt_dbg_t
#define bustype_CAVM_SDPX_RX_IN_INT_MDRT_DBG(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_INT_MDRT_DBG(a,b) "SDPX_RX_IN_INT_MDRT_DBG"
#define device_bar_CAVM_SDPX_RX_IN_INT_MDRT_DBG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_INT_MDRT_DBG(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_INT_MDRT_DBG(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_in_pkt_cnt
 *
 * SDP Packet Input Packet Count Register
 * This register contains packet counts per ring that have been read into SDP.
 * The counter will wrap when it reaches its maximum value.  It should be cleared
 * before the ring is enabled for an accurate count.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_in_pkt_cnt
{
    uint64_t u;
    struct cavm_sdpx_rx_in_pkt_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t cnt                   : 36; /**< [ 35:  0](R/W/H) Packet count, can be written by software to any value.  If a value of 0xFFFFFFFFF is
                                                                 written to this field, it will cause this field as well as SDP()_R()_IN_BYTE_CNT to
                                                                 clear. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 36; /**< [ 35:  0](R/W/H) Packet count, can be written by software to any value.  If a value of 0xFFFFFFFFF is
                                                                 written to this field, it will cause this field as well as SDP()_R()_IN_BYTE_CNT to
                                                                 clear. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_in_pkt_cnt_s cn; */
};
typedef union cavm_sdpx_rx_in_pkt_cnt cavm_sdpx_rx_in_pkt_cnt_t;

static inline uint64_t CAVM_SDPX_RX_IN_PKT_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_IN_PKT_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000080ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_IN_PKT_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_IN_PKT_CNT(a,b) cavm_sdpx_rx_in_pkt_cnt_t
#define bustype_CAVM_SDPX_RX_IN_PKT_CNT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_IN_PKT_CNT(a,b) "SDPX_RX_IN_PKT_CNT"
#define device_bar_CAVM_SDPX_RX_IN_PKT_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_IN_PKT_CNT(a,b) (a)
#define arguments_CAVM_SDPX_RX_IN_PKT_CNT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_mbox_ism
 *
 * SDP Ring Mailbox Interrupt Status Message Register
 * This register configures mailbox status messages.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_mbox_ism
{
    uint64_t u;
    struct cavm_sdpx_rx_mbox_ism_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PCI address hardware will write status messages to. See [EN]. */
        uint64_t msix_dis              : 1;  /**< [  1:  1](R/W) Disables MSIX interrupt and setting PBA bits for MBOX interrupts
                                                                 when only using ISM messages for completion status. */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable writing mailbox pending messages. When set, before sending a mailbox
                                                                 interrupt MSI to the host (from SDP()_R()_MBOX_PF_VF_INT[INTR] being set),
                                                                 hardware will write a one to the 32-bits at [ADDR]. This does not cause an
                                                                 interrupt; instead software may use this inside the standard mailbox-initiated
                                                                 interrupt handler to appropriately handle the interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable writing mailbox pending messages. When set, before sending a mailbox
                                                                 interrupt MSI to the host (from SDP()_R()_MBOX_PF_VF_INT[INTR] being set),
                                                                 hardware will write a one to the 32-bits at [ADDR]. This does not cause an
                                                                 interrupt; instead software may use this inside the standard mailbox-initiated
                                                                 interrupt handler to appropriately handle the interrupt. */
        uint64_t msix_dis              : 1;  /**< [  1:  1](R/W) Disables MSIX interrupt and setting PBA bits for MBOX interrupts
                                                                 when only using ISM messages for completion status. */
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PCI address hardware will write status messages to. See [EN]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_mbox_ism_s cn; */
};
typedef union cavm_sdpx_rx_mbox_ism cavm_sdpx_rx_mbox_ism_t;

static inline uint64_t CAVM_SDPX_RX_MBOX_ISM(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_MBOX_ISM(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000500ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_MBOX_ISM", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_MBOX_ISM(a,b) cavm_sdpx_rx_mbox_ism_t
#define bustype_CAVM_SDPX_RX_MBOX_ISM(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_MBOX_ISM(a,b) "SDPX_RX_MBOX_ISM"
#define device_bar_CAVM_SDPX_RX_MBOX_ISM(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_MBOX_ISM(a,b) (a)
#define arguments_CAVM_SDPX_RX_MBOX_ISM(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_mbox_pf_vf_data
 *
 * SDP PF to VF Mailbox Data Registers
 * These registers are used for communication of data from the PF to VF.
 * A write to SDP()_MBOX_PF_VF_DATA() from the PF will also write to
 * SDP()_R()_MBOX_PF_VF_DATA[DATA] and cause the corresponding bit in
 * SDP()_R()_MBOX_PF_VF_INT[INTR] to be set, along with other bits in
 * SDP()_R()_OUT_CNTS[MBOX_INT] and SDP()_R()_IN_CNTS[MBOX_INT].
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_mbox_pf_vf_data
{
    uint64_t u;
    struct cavm_sdpx_rx_mbox_pf_vf_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from PF to VF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from PF to VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_mbox_pf_vf_data_s cn; */
};
typedef union cavm_sdpx_rx_mbox_pf_vf_data cavm_sdpx_rx_mbox_pf_vf_data_t;

static inline uint64_t CAVM_SDPX_RX_MBOX_PF_VF_DATA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_MBOX_PF_VF_DATA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000210ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_MBOX_PF_VF_DATA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_MBOX_PF_VF_DATA(a,b) cavm_sdpx_rx_mbox_pf_vf_data_t
#define bustype_CAVM_SDPX_RX_MBOX_PF_VF_DATA(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_MBOX_PF_VF_DATA(a,b) "SDPX_RX_MBOX_PF_VF_DATA"
#define device_bar_CAVM_SDPX_RX_MBOX_PF_VF_DATA(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_MBOX_PF_VF_DATA(a,b) (a)
#define arguments_CAVM_SDPX_RX_MBOX_PF_VF_DATA(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_mbox_pf_vf_int
 *
 * SDP Packet PF to VF Mailbox Interrupt Register
 * These registers contain interrupt status and enable for the PF to VF mailbox communication
 * registers. A write to SDP()_MBOX_VF_PF_DATA() from the PF will cause the [INTR] bit
 * in this register to set, along with corresponding bits in
 * SDP()_R()_OUT_CNTS[MBOX_INT] and SDP()_R()_IN_CNTS[MBOX_INT].
 * All of these bits are cleared by writing 1 to the [INTR] bit in this register.
 * If the [ENAB] bit is set, then an MSI-X interrupt will also be generated when the [INTR] bit
 * is set. This register is cleared also due to an FLR.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_mbox_pf_vf_int
{
    uint64_t u;
    struct cavm_sdpx_rx_mbox_pf_vf_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t enab                  : 1;  /**< [  1:  1](R/W) PF to VF mailbox interrupt enable. */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt signal. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt signal. */
        uint64_t enab                  : 1;  /**< [  1:  1](R/W) PF to VF mailbox interrupt enable. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_mbox_pf_vf_int_s cn; */
};
typedef union cavm_sdpx_rx_mbox_pf_vf_int cavm_sdpx_rx_mbox_pf_vf_int_t;

static inline uint64_t CAVM_SDPX_RX_MBOX_PF_VF_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_MBOX_PF_VF_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000220ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_MBOX_PF_VF_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_MBOX_PF_VF_INT(a,b) cavm_sdpx_rx_mbox_pf_vf_int_t
#define bustype_CAVM_SDPX_RX_MBOX_PF_VF_INT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_MBOX_PF_VF_INT(a,b) "SDPX_RX_MBOX_PF_VF_INT"
#define device_bar_CAVM_SDPX_RX_MBOX_PF_VF_INT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_MBOX_PF_VF_INT(a,b) (a)
#define arguments_CAVM_SDPX_RX_MBOX_PF_VF_INT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_mbox_vf_pf_data
 *
 * SDP VF to PF Mailbox Data Registers
 * These registers are used for communication of data from the VF to PF.
 * A write by the VF to this register will also write to SDP()_MBOX_VF_PF_DATA()
 * and cause the corresponding bit in  SDP()_EPF()_MBOX_RINT() to be set to be set,
 * and an MSI-X message to be generated.
 * To clear the interrupt condition, the PF should write a 1 to SDP()_R()_MBOX_PF_VF_INT[INTR].
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_mbox_vf_pf_data
{
    uint64_t u;
    struct cavm_sdpx_rx_mbox_vf_pf_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from VF to PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Communication data from VF to PF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_mbox_vf_pf_data_s cn; */
};
typedef union cavm_sdpx_rx_mbox_vf_pf_data cavm_sdpx_rx_mbox_vf_pf_data_t;

static inline uint64_t CAVM_SDPX_RX_MBOX_VF_PF_DATA(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_MBOX_VF_PF_DATA(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000230ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_MBOX_VF_PF_DATA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_MBOX_VF_PF_DATA(a,b) cavm_sdpx_rx_mbox_vf_pf_data_t
#define bustype_CAVM_SDPX_RX_MBOX_VF_PF_DATA(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_MBOX_VF_PF_DATA(a,b) "SDPX_RX_MBOX_VF_PF_DATA"
#define device_bar_CAVM_SDPX_RX_MBOX_VF_PF_DATA(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_MBOX_VF_PF_DATA(a,b) (a)
#define arguments_CAVM_SDPX_RX_MBOX_VF_PF_DATA(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_byte_cnt
 *
 * SDP Packet Output Byte Count Register
 * This register contains byte counts per ring that have been written to memory by SDP.
 * The counter will wrap when it reaches its maximum value.  It should be cleared
 * before the ring is enabled for an accurate count.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_byte_cnt
{
    uint64_t u;
    struct cavm_sdpx_rx_out_byte_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Byte count, can be reset by software by writing SDP()_R()_OUT_PKT_CNT[CNT]
                                                                 with 0xFFFFFFFFF. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 48; /**< [ 47:  0](R/W/H) Byte count, can be reset by software by writing SDP()_R()_OUT_PKT_CNT[CNT]
                                                                 with 0xFFFFFFFFF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_byte_cnt_s cn; */
};
typedef union cavm_sdpx_rx_out_byte_cnt cavm_sdpx_rx_out_byte_cnt_t;

static inline uint64_t CAVM_SDPX_RX_OUT_BYTE_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_BYTE_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000190ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_BYTE_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_BYTE_CNT(a,b) cavm_sdpx_rx_out_byte_cnt_t
#define bustype_CAVM_SDPX_RX_OUT_BYTE_CNT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_BYTE_CNT(a,b) "SDPX_RX_OUT_BYTE_CNT"
#define device_bar_CAVM_SDPX_RX_OUT_BYTE_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_BYTE_CNT(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_BYTE_CNT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_cnts
 *
 * SDP Packet Output Counts Register
 * This register contains the counters for SDP output ports.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_cnts
{
    uint64_t u;
    struct cavm_sdpx_rx_out_cnts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t send_ism              : 1;  /**< [ 63: 63](WO/H) A write of 1 will cause a ISM message to be sent with the current value of [CNT].
                                                                 Hardware will ignore the written value of [CNT] if [SEND_ISM] is set and will NOT
                                                                 subtract the amount written to [CNT]. ISM messages must be enabled in
                                                                 SDP()_R()_OUT_CNTS_ISM[EN].
                                                                 Note this is orthogonal to normal ISM messages that will always be sent before a counts
                                                                 interrupt if enabled. */
        uint64_t out_int               : 1;  /**< [ 62: 62](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_OUT_CNTS[CNT] \> SDP()_R()_OUT_INT_LEVELS[CNT] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_CNTS[TIMER] \> SDP()_R()_OUT_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_INT_MDRT_CTL1[ENABLE]=1 &
                                                                    SDP()_R()_OUT_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_OUT_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_OUT_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t in_int                : 1;  /**< [ 61: 61](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_IN_CNTS[CNT] \> SDP()_R()_IN_INT_LEVELS[CNT] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_CNTS[TIMER] \> SDP()_R()_IN_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_INT_MDRT_CTL1[ENABLE]=1 &
                                                                    SDP()_R()_IN_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_IN_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_IN_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t mbox_int              : 1;  /**< [ 60: 60](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_MBOX_PF_VF_INT[INTR] is set.

                                                                 To clear the bit, write SDP()_R()_MBOX_PF_VF_INT[INTR] with 1.
                                                                 This bit is also cleared due to an FLR. */
        uint64_t resend                : 1;  /**< [ 59: 59](WO/H) A write of 1 will resend an MSI-X interrupt message and resend an ISM
                                                                 message when SDP()_R()_IN_CNTS_ISM.EN is set,
                                                                 if any of the following conditions are true for the respective ring R():
                                                                  * SDP()_R()_OUT_CNTS[CNT]   \> SDP()_R()_OUT_INT_LEVELS[CNT] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * SDP()_R()_OUT_CNTS[TIMER] \> SDP()_R()_OUT_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.

                                                                 If SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]=0 a write of
                                                                 [RESEND] will clear [OUT_INT].  This is generally used when
                                                                 SDP()_R()_OUT_INT_MDRT_CTL1[ENABLE]==1 to prepare for the next MDRT
                                                                 timer interrupt event.

                                                                 If [SEND_ISM] is also written to a 1 writes of 1 to the [RESEND]
                                                                 bit will be ignored. */
        uint64_t reserved_54_58        : 5;
        uint64_t timer                 : 22; /**< [ 53: 32](RO/H) Timer, incremented every 1024 coprocessor-clock cycles when [CNT] is
                                                                 not zero. The hardware clears [TIMER] when [CNT] is written to a
                                                                 nonzero value. The first increment of this count can occur between 0 to
                                                                 1023 coprocessor-clock cycles after [CNT] becomes nonzero. */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) Packet counter. Hardware adds to [CNT] as it sends packets out. On a write
                                                                 to this CSR with [SEND_ISM] set to 0, hardware subtracts the amount written
                                                                 to the [CNT] field from [CNT], which will clear SDP()_R()_OUT_CNTS[OUT_INT] if ([CNT]
                                                                 becomes \<= SDP()_R()_OUT_INT_LEVELS[CNT] and SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]
                                                                 is set). When SDP()_R()_OUT_INT_LEVELS[BMODE] is clear,
                                                                 the hardware adds 1 to [CNT] per packet. When SDP()_R()_OUT_INT_LEVELS[BMODE] is
                                                                 set, the hardware adds the packet length to [CNT] per packet. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) Packet counter. Hardware adds to [CNT] as it sends packets out. On a write
                                                                 to this CSR with [SEND_ISM] set to 0, hardware subtracts the amount written
                                                                 to the [CNT] field from [CNT], which will clear SDP()_R()_OUT_CNTS[OUT_INT] if ([CNT]
                                                                 becomes \<= SDP()_R()_OUT_INT_LEVELS[CNT] and SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]
                                                                 is set). When SDP()_R()_OUT_INT_LEVELS[BMODE] is clear,
                                                                 the hardware adds 1 to [CNT] per packet. When SDP()_R()_OUT_INT_LEVELS[BMODE] is
                                                                 set, the hardware adds the packet length to [CNT] per packet. */
        uint64_t timer                 : 22; /**< [ 53: 32](RO/H) Timer, incremented every 1024 coprocessor-clock cycles when [CNT] is
                                                                 not zero. The hardware clears [TIMER] when [CNT] is written to a
                                                                 nonzero value. The first increment of this count can occur between 0 to
                                                                 1023 coprocessor-clock cycles after [CNT] becomes nonzero. */
        uint64_t reserved_54_58        : 5;
        uint64_t resend                : 1;  /**< [ 59: 59](WO/H) A write of 1 will resend an MSI-X interrupt message and resend an ISM
                                                                 message when SDP()_R()_IN_CNTS_ISM.EN is set,
                                                                 if any of the following conditions are true for the respective ring R():
                                                                  * SDP()_R()_OUT_CNTS[CNT]   \> SDP()_R()_OUT_INT_LEVELS[CNT] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * SDP()_R()_OUT_CNTS[TIMER] \> SDP()_R()_OUT_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.

                                                                 If SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]=0 a write of
                                                                 [RESEND] will clear [OUT_INT].  This is generally used when
                                                                 SDP()_R()_OUT_INT_MDRT_CTL1[ENABLE]==1 to prepare for the next MDRT
                                                                 timer interrupt event.

                                                                 If [SEND_ISM] is also written to a 1 writes of 1 to the [RESEND]
                                                                 bit will be ignored. */
        uint64_t mbox_int              : 1;  /**< [ 60: 60](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_MBOX_PF_VF_INT[INTR] is set.

                                                                 To clear the bit, write SDP()_R()_MBOX_PF_VF_INT[INTR] with 1.
                                                                 This bit is also cleared due to an FLR. */
        uint64_t in_int                : 1;  /**< [ 61: 61](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_IN_CNTS[CNT] \> SDP()_R()_IN_INT_LEVELS[CNT] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_CNTS[TIMER] \> SDP()_R()_IN_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_IN_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_IN_INT_MDRT_CTL1[ENABLE]=1 &
                                                                    SDP()_R()_IN_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_IN_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_IN_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t out_int               : 1;  /**< [ 62: 62](RO/H) Returns a 1 when:
                                                                  * SDP()_R()_OUT_CNTS[CNT] \> SDP()_R()_OUT_INT_LEVELS[CNT] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_CNTS[TIMER] \> SDP()_R()_OUT_INT_LEVELS[TIMET] &
                                                                    SDP()_R()_OUT_INT_LEVELS[TIME_CNT_ENA]==1.
                                                                  * Or, SDP()_R()_OUT_INT_MDRT_CTL1[ENABLE]=1 &
                                                                    SDP()_R()_OUT_CNTS[TIMER] has reached an interrupt threshold based
                                                                    on the values in the SDP()_R()_OUT_INT_MDRT_CTL* registers.
                                                                 To clear the bit, the SDP()_R()_OUT_CNTS register must be written to clear the
                                                                 underlying condition. */
        uint64_t send_ism              : 1;  /**< [ 63: 63](WO/H) A write of 1 will cause a ISM message to be sent with the current value of [CNT].
                                                                 Hardware will ignore the written value of [CNT] if [SEND_ISM] is set and will NOT
                                                                 subtract the amount written to [CNT]. ISM messages must be enabled in
                                                                 SDP()_R()_OUT_CNTS_ISM[EN].
                                                                 Note this is orthogonal to normal ISM messages that will always be sent before a counts
                                                                 interrupt if enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_cnts_s cn; */
};
typedef union cavm_sdpx_rx_out_cnts cavm_sdpx_rx_out_cnts_t;

static inline uint64_t CAVM_SDPX_RX_OUT_CNTS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_CNTS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000100ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_CNTS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_CNTS(a,b) cavm_sdpx_rx_out_cnts_t
#define bustype_CAVM_SDPX_RX_OUT_CNTS(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_CNTS(a,b) "SDPX_RX_OUT_CNTS"
#define device_bar_CAVM_SDPX_RX_OUT_CNTS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_CNTS(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_CNTS(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_cnts_ism
 *
 * SDP Ring Output Counts Status Message Register
 * This register configures output count status messages.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_cnts_ism
{
    uint64_t u;
    struct cavm_sdpx_rx_out_cnts_ism_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PCI address hardware will write status messages to. See [EN]. */
        uint64_t msix_dis              : 1;  /**< [  1:  1](R/W) Disables MSIX interrupt and setting PBA bits for output packet interrupts
                                                                 when only using ISM messages for completion status. */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable writing output counts messages. When set, before sending an output counts
                                                                 interrupt MSI to the host, hardware will write the value of value of
                                                                 SDP()_R()_OUT_CNTS[CNT] to the 32-bits at [ADDR]. This does not cause an
                                                                 interrupt; instead software may use this inside the standard
                                                                 output-counts-initiated interrupt handler to appropriately handle the interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Enable writing output counts messages. When set, before sending an output counts
                                                                 interrupt MSI to the host, hardware will write the value of value of
                                                                 SDP()_R()_OUT_CNTS[CNT] to the 32-bits at [ADDR]. This does not cause an
                                                                 interrupt; instead software may use this inside the standard
                                                                 output-counts-initiated interrupt handler to appropriately handle the interrupt. */
        uint64_t msix_dis              : 1;  /**< [  1:  1](R/W) Disables MSIX interrupt and setting PBA bits for output packet interrupts
                                                                 when only using ISM messages for completion status. */
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PCI address hardware will write status messages to. See [EN]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_cnts_ism_s cn; */
};
typedef union cavm_sdpx_rx_out_cnts_ism cavm_sdpx_rx_out_cnts_ism_t;

static inline uint64_t CAVM_SDPX_RX_OUT_CNTS_ISM(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_CNTS_ISM(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000510ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_CNTS_ISM", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_CNTS_ISM(a,b) cavm_sdpx_rx_out_cnts_ism_t
#define bustype_CAVM_SDPX_RX_OUT_CNTS_ISM(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_CNTS_ISM(a,b) "SDPX_RX_OUT_CNTS_ISM"
#define device_bar_CAVM_SDPX_RX_OUT_CNTS_ISM(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_CNTS_ISM(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_CNTS_ISM(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_control
 *
 * SDP Packet Output Control Register
 * This register contains control bits for output packet rings.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.  Also, this register cannot be written
 * while either of the following conditions is true:
 *   * SDP()_R()_OUT_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_OUT_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_control
{
    uint64_t u;
    struct cavm_sdpx_rx_out_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t idle                  : 1;  /**< [ 40: 40](RO/H) Asserted when this ring has no packets in-flight. If SDP()_OUT_MCAST_CTL[IDLE] is also 1 there are
                                                                 also no multicast packets that are destined for this ring in flight. */
        uint64_t drop_cnt              : 4;  /**< [ 39: 36](R/W) Minimum number of buffers needed to send an outbound packet.
                                                                 This value is in multiples of 16 and should be greater than 0.
                                                                 If a packet is received by SDP Output from NIXTX and the
                                                                 SDP()_R()_OUT_SLIST_DBELL[DBELL] \< [DROP_CNT], SDP will set
                                                                 SDP()_OUT_DROP_STATE()[STATE] to 1 and drop this packet and future packets
                                                                 until SDP()_OUT_DROP_STATE()[STATE] goes to a 0.
                                                                 [DROP_CNT] * 16 should be set to a value less than SDP()_OUT_WMARK[WMARK].
                                                                 If SDP()_OUT_BP_EN()_W1C[ENB] is set to 0 (not enabled) for this ring, then
                                                                 ([DROP_CNT] * 16) \> (Largest Packet Expected) / SDP()_R()_OUT_CONTROL[BSIZE].
                                                                 Note if this field is set to 0 SDP will treat it as if it was written to 1. */
        uint64_t es_i                  : 2;  /**< [ 35: 34](R/W) [ES_I] is ES\<1:0\> for info buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ES\<1:0\> is the
                                                                 endian-swap attribute for these MAC memory space writes.

                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t nsr_i                 : 1;  /**< [ 33: 33](R/W) [NSR_I] is ADDRTYPE\<1\> for info buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<1\> is
                                                                 the no-snoop attribute for PCIe. */
        uint64_t ror_i                 : 1;  /**< [ 32: 32](R/W) [ROR_I] is ADDRTYPE\<0\> for info buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<0\> is
                                                                 the relaxed-order attribute for PCIe. */
        uint64_t es_d                  : 2;  /**< [ 31: 30](R/W) [ES_D] is ES\<1:0\> for data buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ES\<1:0\> is the
                                                                 endian-swap attribute for these MAC memory space writes.

                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t nsr_d                 : 1;  /**< [ 29: 29](R/W) [NSR_D] is ADDRTYPE\<1\> for data buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<1\> is
                                                                 the no-snoop attribute for PCIe. */
        uint64_t ror_d                 : 1;  /**< [ 28: 28](R/W) [ROR_D] is ADDRTYPE\<0\> for data buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<0\> is
                                                                 the relaxed-order attribute for PCIe. */
        uint64_t es_p                  : 2;  /**< [ 27: 26](R/W) [ES_P] is ES\<1:0\> for the packet output ring reads that fetch buffer/info pointer pairs
                                                                 (from SDP()_R()_OUT_SLIST_BADDR[ADDR]+). ES\<1:0\> is the endian-swap attribute for these
                                                                 MAC memory space reads.

                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t nsr_p                 : 1;  /**< [ 25: 25](R/W) [NSR_P] is ADDRTYPE\<1\> for the packet output ring reads that fetch buffer/info pointer
                                                                 pairs (from SDP()_R()_OUT_SLIST_BADDR[ADDR]+). ADDRTYPE\<1\> is the no-snoop attribute for PCIe. */
        uint64_t ror_p                 : 1;  /**< [ 24: 24](R/W) [ROR_P] is ADDRTYPE\<0\> for the packet output ring reads that fetch buffer/info pointer
                                                                 pairs (from SDP()_R()_OUT_SLIST_BADDR[ADDR]+). ADDRTYPE\<0\> is the relaxed-order attribute
                                                                 for PCIe. */
        uint64_t imode                 : 1;  /**< [ 23: 23](R/W) When IMODE=1, packet output ring is in info-pointer mode; otherwise the packet output ring
                                                                 is in buffer-pointer-only mode. */
        uint64_t isize                 : 7;  /**< [ 22: 16](R/W/H) Info bytes size (bytes) for the output port. Legal sizes are 0 to 120. Not used
                                                                 in buffer-pointer-only mode.  If a value is written that is between 120-127 then
                                                                 a value of 120 will be forced by hardware. */
        uint64_t bsize                 : 16; /**< [ 15:  0](R/W/H) Buffer size (bytes) for the output ring.  The minimum size is 128 bytes; if a value
                                                                 smaller than 128 is written, hardware will force a value of 128. */
#else /* Word 0 - Little Endian */
        uint64_t bsize                 : 16; /**< [ 15:  0](R/W/H) Buffer size (bytes) for the output ring.  The minimum size is 128 bytes; if a value
                                                                 smaller than 128 is written, hardware will force a value of 128. */
        uint64_t isize                 : 7;  /**< [ 22: 16](R/W/H) Info bytes size (bytes) for the output port. Legal sizes are 0 to 120. Not used
                                                                 in buffer-pointer-only mode.  If a value is written that is between 120-127 then
                                                                 a value of 120 will be forced by hardware. */
        uint64_t imode                 : 1;  /**< [ 23: 23](R/W) When IMODE=1, packet output ring is in info-pointer mode; otherwise the packet output ring
                                                                 is in buffer-pointer-only mode. */
        uint64_t ror_p                 : 1;  /**< [ 24: 24](R/W) [ROR_P] is ADDRTYPE\<0\> for the packet output ring reads that fetch buffer/info pointer
                                                                 pairs (from SDP()_R()_OUT_SLIST_BADDR[ADDR]+). ADDRTYPE\<0\> is the relaxed-order attribute
                                                                 for PCIe. */
        uint64_t nsr_p                 : 1;  /**< [ 25: 25](R/W) [NSR_P] is ADDRTYPE\<1\> for the packet output ring reads that fetch buffer/info pointer
                                                                 pairs (from SDP()_R()_OUT_SLIST_BADDR[ADDR]+). ADDRTYPE\<1\> is the no-snoop attribute for PCIe. */
        uint64_t es_p                  : 2;  /**< [ 27: 26](R/W) [ES_P] is ES\<1:0\> for the packet output ring reads that fetch buffer/info pointer pairs
                                                                 (from SDP()_R()_OUT_SLIST_BADDR[ADDR]+). ES\<1:0\> is the endian-swap attribute for these
                                                                 MAC memory space reads.

                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t ror_d                 : 1;  /**< [ 28: 28](R/W) [ROR_D] is ADDRTYPE\<0\> for data buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<0\> is
                                                                 the relaxed-order attribute for PCIe. */
        uint64_t nsr_d                 : 1;  /**< [ 29: 29](R/W) [NSR_D] is ADDRTYPE\<1\> for data buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<1\> is
                                                                 the no-snoop attribute for PCIe. */
        uint64_t es_d                  : 2;  /**< [ 31: 30](R/W) [ES_D] is ES\<1:0\> for data buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ES\<1:0\> is the
                                                                 endian-swap attribute for these MAC memory space writes.

                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t ror_i                 : 1;  /**< [ 32: 32](R/W) [ROR_I] is ADDRTYPE\<0\> for info buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<0\> is
                                                                 the relaxed-order attribute for PCIe. */
        uint64_t nsr_i                 : 1;  /**< [ 33: 33](R/W) [NSR_I] is ADDRTYPE\<1\> for info buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ADDRTYPE\<1\> is
                                                                 the no-snoop attribute for PCIe. */
        uint64_t es_i                  : 2;  /**< [ 35: 34](R/W) [ES_I] is ES\<1:0\> for info buffer write operations to buffer/info
                                                                 pair MAC memory space addresses fetched from packet output ring. ES\<1:0\> is the
                                                                 endian-swap attribute for these MAC memory space writes.

                                                                 Enumerated by SDP_ENDIANSWAP_E. */
        uint64_t drop_cnt              : 4;  /**< [ 39: 36](R/W) Minimum number of buffers needed to send an outbound packet.
                                                                 This value is in multiples of 16 and should be greater than 0.
                                                                 If a packet is received by SDP Output from NIXTX and the
                                                                 SDP()_R()_OUT_SLIST_DBELL[DBELL] \< [DROP_CNT], SDP will set
                                                                 SDP()_OUT_DROP_STATE()[STATE] to 1 and drop this packet and future packets
                                                                 until SDP()_OUT_DROP_STATE()[STATE] goes to a 0.
                                                                 [DROP_CNT] * 16 should be set to a value less than SDP()_OUT_WMARK[WMARK].
                                                                 If SDP()_OUT_BP_EN()_W1C[ENB] is set to 0 (not enabled) for this ring, then
                                                                 ([DROP_CNT] * 16) \> (Largest Packet Expected) / SDP()_R()_OUT_CONTROL[BSIZE].
                                                                 Note if this field is set to 0 SDP will treat it as if it was written to 1. */
        uint64_t idle                  : 1;  /**< [ 40: 40](RO/H) Asserted when this ring has no packets in-flight. If SDP()_OUT_MCAST_CTL[IDLE] is also 1 there are
                                                                 also no multicast packets that are destined for this ring in flight. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_control_s cn; */
};
typedef union cavm_sdpx_rx_out_control cavm_sdpx_rx_out_control_t;

static inline uint64_t CAVM_SDPX_RX_OUT_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000150ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_CONTROL(a,b) cavm_sdpx_rx_out_control_t
#define bustype_CAVM_SDPX_RX_OUT_CONTROL(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_CONTROL(a,b) "SDPX_RX_OUT_CONTROL"
#define device_bar_CAVM_SDPX_RX_OUT_CONTROL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_CONTROL(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_enable
 *
 * SDP Packet Output Enable Register
 * This register is the enable for the output pointer rings.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_enable
{
    uint64_t u;
    struct cavm_sdpx_rx_out_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enb                   : 1;  /**< [  0:  0](R/W/H) Enable for the output ring i. This bit can be cleared by hardware if certain
                                                                 errors occur or an FLR is indicated by the remote host. It can be cleared by
                                                                 software at any time. It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
#else /* Word 0 - Little Endian */
        uint64_t enb                   : 1;  /**< [  0:  0](R/W/H) Enable for the output ring i. This bit can be cleared by hardware if certain
                                                                 errors occur or an FLR is indicated by the remote host. It can be cleared by
                                                                 software at any time. It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_enable_s cn; */
};
typedef union cavm_sdpx_rx_out_enable cavm_sdpx_rx_out_enable_t;

static inline uint64_t CAVM_SDPX_RX_OUT_ENABLE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_ENABLE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000170ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_ENABLE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_ENABLE(a,b) cavm_sdpx_rx_out_enable_t
#define bustype_CAVM_SDPX_RX_OUT_ENABLE(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_ENABLE(a,b) "SDPX_RX_OUT_ENABLE"
#define device_bar_CAVM_SDPX_RX_OUT_ENABLE(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_ENABLE(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_ENABLE(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_int_levels
 *
 * SDP Packet Output Interrupt Levels Register
 * This register contains SDP output packet interrupt levels.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_int_levels
{
    uint64_t u;
    struct cavm_sdpx_rx_out_int_levels_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bmode                 : 1;  /**< [ 63: 63](R/W) Determines whether SDP()_R()_OUT_CNTS[CNT] is a byte or packet counter. When
                                                                 [BMODE]=1, SDP()_R()_OUT_CNTS[CNT] is a byte counter, else SDP()_R()_OUT_CNTS[CNT]
                                                                 is a packet counter. */
        uint64_t time_cnt_ena          : 1;  /**< [ 62: 62](R/W) Enables generating MSIX-X interrupts whenever SDP()_R()_OUT_CNTS[TIMER] \> [TIMET]
                                                                 or SDP()_R()_OUT_CNTS[CNT] \> [CNT] conditions are met. */
        uint64_t max_len_ena           : 1;  /**< [ 61: 61](R/W) Maximum packet length enable. If set, An MSI-X interrupt will be generated for
                                                                 any packet with length greater than [MAX_LEN] KBytes. */
        uint64_t max_len               : 7;  /**< [ 60: 54](R/W) Maximum packet Length not to generate interrupt (in KB). IF [MAX_LEN_ENA] is set
                                                                 an MSI-X interrupt will be generated for any packet with length greater than
                                                                 [MAX_LEN] KBytes. */
        uint64_t timet                 : 22; /**< [ 53: 32](R/W) Output port counter time interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_OUT_CNTS[TIMER] \> [TIMET] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [TIMET], it should also subsequently write
                                                                 the corresponding SDP()_R()_OUT_CNTS CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_OUT_CNTS[OUT_INT]. */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W) Output port counter interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_OUT_CNTS[CNT] \> [CNT] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [CNT], it should also subsequently write
                                                                 the corresponding SDP()_R()_OUT_CNTS CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_OUT_CNTS[OUT_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W) Output port counter interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_OUT_CNTS[CNT] \> [CNT] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [CNT], it should also subsequently write
                                                                 the corresponding SDP()_R()_OUT_CNTS CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_OUT_CNTS[OUT_INT]. */
        uint64_t timet                 : 22; /**< [ 53: 32](R/W) Output port counter time interrupt threshold. An MSI-X interrupt will be generated
                                                                 whenever SDP()_R()_OUT_CNTS[TIMER] \> [TIMET] and [TIME_CNT_ENA] is set.
                                                                 Whenever software changes the value of [TIMET], it should also subsequently write
                                                                 the corresponding SDP()_R()_OUT_CNTS CSR (with a value of zero if desired) to
                                                                 ensure that the hardware correspondingly updates SDP()_R()_OUT_CNTS[OUT_INT]. */
        uint64_t max_len               : 7;  /**< [ 60: 54](R/W) Maximum packet Length not to generate interrupt (in KB). IF [MAX_LEN_ENA] is set
                                                                 an MSI-X interrupt will be generated for any packet with length greater than
                                                                 [MAX_LEN] KBytes. */
        uint64_t max_len_ena           : 1;  /**< [ 61: 61](R/W) Maximum packet length enable. If set, An MSI-X interrupt will be generated for
                                                                 any packet with length greater than [MAX_LEN] KBytes. */
        uint64_t time_cnt_ena          : 1;  /**< [ 62: 62](R/W) Enables generating MSIX-X interrupts whenever SDP()_R()_OUT_CNTS[TIMER] \> [TIMET]
                                                                 or SDP()_R()_OUT_CNTS[CNT] \> [CNT] conditions are met. */
        uint64_t bmode                 : 1;  /**< [ 63: 63](R/W) Determines whether SDP()_R()_OUT_CNTS[CNT] is a byte or packet counter. When
                                                                 [BMODE]=1, SDP()_R()_OUT_CNTS[CNT] is a byte counter, else SDP()_R()_OUT_CNTS[CNT]
                                                                 is a packet counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_int_levels_s cn; */
};
typedef union cavm_sdpx_rx_out_int_levels cavm_sdpx_rx_out_int_levels_t;

static inline uint64_t CAVM_SDPX_RX_OUT_INT_LEVELS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_INT_LEVELS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000110ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_INT_LEVELS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_INT_LEVELS(a,b) cavm_sdpx_rx_out_int_levels_t
#define bustype_CAVM_SDPX_RX_OUT_INT_LEVELS(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_INT_LEVELS(a,b) "SDPX_RX_OUT_INT_LEVELS"
#define device_bar_CAVM_SDPX_RX_OUT_INT_LEVELS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_INT_LEVELS(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_INT_LEVELS(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_int_mdrt_ctl0
 *
 * SDP Output Instruction Interrupt Moderation Control 0 Register
 */
union cavm_sdpx_rx_out_int_mdrt_ctl0
{
    uint64_t u;
    struct cavm_sdpx_rx_out_int_mdrt_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t hi_timer              : 22; /**< [ 53: 32](R/W) High timer level. */
        uint64_t reserved_22_31        : 10;
        uint64_t lo_timer              : 22; /**< [ 21:  0](R/W) Low timer level. */
#else /* Word 0 - Little Endian */
        uint64_t lo_timer              : 22; /**< [ 21:  0](R/W) Low timer level. */
        uint64_t reserved_22_31        : 10;
        uint64_t hi_timer              : 22; /**< [ 53: 32](R/W) High timer level. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_int_mdrt_ctl0_s cn; */
};
typedef union cavm_sdpx_rx_out_int_mdrt_ctl0 cavm_sdpx_rx_out_int_mdrt_ctl0_t;

static inline uint64_t CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000380ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_INT_MDRT_CTL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(a,b) cavm_sdpx_rx_out_int_mdrt_ctl0_t
#define bustype_CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(a,b) "SDPX_RX_OUT_INT_MDRT_CTL0"
#define device_bar_CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_INT_MDRT_CTL0(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_int_mdrt_ctl1
 *
 * SDP Output Instruction Interrupt Moderation Control 1 Register
 */
union cavm_sdpx_rx_out_int_mdrt_ctl1
{
    uint64_t u;
    struct cavm_sdpx_rx_out_int_mdrt_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable interrupt moderation. */
        uint64_t reserved_44_62        : 19;
        uint64_t weight                : 4;  /**< [ 43: 40](R/W) Weight:
                                                                 0x0 = Weight of 1.
                                                                 0x1 = Weight of 2.
                                                                 0x2 = Weight of 4.
                                                                 0x3 = Weight of 8.
                                                                 0x4 = Weight of 16.
                                                                 0x5 = Weight of 32.
                                                                 0x6 = Weight of 64.
                                                                 0x7 = Weight of 128.
                                                                 0x8 = Weight of 256.
                                                                 _ else = Reserved. */
        uint64_t reserved_37_39        : 3;
        uint64_t hi_rate               : 17; /**< [ 36: 20](R/W) High byte rate. */
        uint64_t reserved_17_19        : 3;
        uint64_t lo_rate               : 17; /**< [ 16:  0](R/W) Low byte rate. */
#else /* Word 0 - Little Endian */
        uint64_t lo_rate               : 17; /**< [ 16:  0](R/W) Low byte rate. */
        uint64_t reserved_17_19        : 3;
        uint64_t hi_rate               : 17; /**< [ 36: 20](R/W) High byte rate. */
        uint64_t reserved_37_39        : 3;
        uint64_t weight                : 4;  /**< [ 43: 40](R/W) Weight:
                                                                 0x0 = Weight of 1.
                                                                 0x1 = Weight of 2.
                                                                 0x2 = Weight of 4.
                                                                 0x3 = Weight of 8.
                                                                 0x4 = Weight of 16.
                                                                 0x5 = Weight of 32.
                                                                 0x6 = Weight of 64.
                                                                 0x7 = Weight of 128.
                                                                 0x8 = Weight of 256.
                                                                 _ else = Reserved. */
        uint64_t reserved_44_62        : 19;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable interrupt moderation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_int_mdrt_ctl1_s cn; */
};
typedef union cavm_sdpx_rx_out_int_mdrt_ctl1 cavm_sdpx_rx_out_int_mdrt_ctl1_t;

static inline uint64_t CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc018200003a0ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_INT_MDRT_CTL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(a,b) cavm_sdpx_rx_out_int_mdrt_ctl1_t
#define bustype_CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(a,b) "SDPX_RX_OUT_INT_MDRT_CTL1"
#define device_bar_CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_INT_MDRT_CTL1(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_int_mdrt_dbg
 *
 * SDP Output Instruction Interrupt Moderation Debug Register
 */
union cavm_sdpx_rx_out_int_mdrt_dbg
{
    uint64_t u;
    struct cavm_sdpx_rx_out_int_mdrt_dbg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t avg_rate              : 17; /**< [ 16:  0](R/W/H) Average byte rate. */
#else /* Word 0 - Little Endian */
        uint64_t avg_rate              : 17; /**< [ 16:  0](R/W/H) Average byte rate. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_int_mdrt_dbg_s cn; */
};
typedef union cavm_sdpx_rx_out_int_mdrt_dbg cavm_sdpx_rx_out_int_mdrt_dbg_t;

static inline uint64_t CAVM_SDPX_RX_OUT_INT_MDRT_DBG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_INT_MDRT_DBG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc018200003c0ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_INT_MDRT_DBG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_INT_MDRT_DBG(a,b) cavm_sdpx_rx_out_int_mdrt_dbg_t
#define bustype_CAVM_SDPX_RX_OUT_INT_MDRT_DBG(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_INT_MDRT_DBG(a,b) "SDPX_RX_OUT_INT_MDRT_DBG"
#define device_bar_CAVM_SDPX_RX_OUT_INT_MDRT_DBG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_INT_MDRT_DBG(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_INT_MDRT_DBG(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_pkt_cnt
 *
 * SDP Packet Output Packet Count Register
 * This register contains packet counts per ring that have been written to memory by SDP.
 * The counter will wrap when it reaches its maximum value.  It should be cleared
 * before the ring is enabled for an accurate count.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_pkt_cnt
{
    uint64_t u;
    struct cavm_sdpx_rx_out_pkt_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t cnt                   : 36; /**< [ 35:  0](R/W/H) Packet count, can be written by software to any value.  If a value of 0xFFFFFFFFF is
                                                                 written to this field, it will cause this field as well as SDP()_R()_OUT_BYTE_CNT to
                                                                 clear. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 36; /**< [ 35:  0](R/W/H) Packet count, can be written by software to any value.  If a value of 0xFFFFFFFFF is
                                                                 written to this field, it will cause this field as well as SDP()_R()_OUT_BYTE_CNT to
                                                                 clear. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_pkt_cnt_s cn; */
};
typedef union cavm_sdpx_rx_out_pkt_cnt cavm_sdpx_rx_out_pkt_cnt_t;

static inline uint64_t CAVM_SDPX_RX_OUT_PKT_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_PKT_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000180ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_PKT_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_PKT_CNT(a,b) cavm_sdpx_rx_out_pkt_cnt_t
#define bustype_CAVM_SDPX_RX_OUT_PKT_CNT(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_PKT_CNT(a,b) "SDPX_RX_OUT_PKT_CNT"
#define device_bar_CAVM_SDPX_RX_OUT_PKT_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_PKT_CNT(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_PKT_CNT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_slist_baddr
 *
 * SDP Packet Ring Base Address Register
 * This register contains the base address for the output ring.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.  Also, this register cannot be written
 * while either of the following conditions is true:
 *   * SDP()_R()_OUT_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_OUT_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_slist_baddr
{
    uint64_t u;
    struct cavm_sdpx_rx_out_slist_baddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 60; /**< [ 63:  4](R/W) Base address for the output ring, which is an array with
                                                                 SDP()_R()_OUT_SLIST_RSIZE[RSIZE] entries, each entry being a
                                                                 SDP_BUF_INFO_PAIR_S.

                                                                 SDP()_R()_OUT_SLIST_BADDR contains a byte address that must be 16-byte
                                                                 aligned, so SDP()_R()_OUT_SLIST_BADDR\<3:0\> must be zero. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t addr                  : 60; /**< [ 63:  4](R/W) Base address for the output ring, which is an array with
                                                                 SDP()_R()_OUT_SLIST_RSIZE[RSIZE] entries, each entry being a
                                                                 SDP_BUF_INFO_PAIR_S.

                                                                 SDP()_R()_OUT_SLIST_BADDR contains a byte address that must be 16-byte
                                                                 aligned, so SDP()_R()_OUT_SLIST_BADDR\<3:0\> must be zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_slist_baddr_s cn; */
};
typedef union cavm_sdpx_rx_out_slist_baddr cavm_sdpx_rx_out_slist_baddr_t;

static inline uint64_t CAVM_SDPX_RX_OUT_SLIST_BADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_SLIST_BADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000120ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_SLIST_BADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_SLIST_BADDR(a,b) cavm_sdpx_rx_out_slist_baddr_t
#define bustype_CAVM_SDPX_RX_OUT_SLIST_BADDR(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_SLIST_BADDR(a,b) "SDPX_RX_OUT_SLIST_BADDR"
#define device_bar_CAVM_SDPX_RX_OUT_SLIST_BADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_SLIST_BADDR(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_SLIST_BADDR(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_slist_dbell
 *
 * SDP Packet Base-Address Offset and Doorbell Registers
 * This register contains the doorbell and base-address offset for the next read operation.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_slist_dbell
{
    uint64_t u;
    struct cavm_sdpx_rx_out_slist_dbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aoff                  : 32; /**< [ 63: 32](RO/H) Address offset. The offset from the SDP()_R()_OUT_SLIST_BADDR where the next pointer
                                                                 is read.
                                                                 A write of 0xFFFFFFFF to [DBELL] clears [DBELL] and [AOFF]. */
        uint64_t dbell                 : 32; /**< [ 31:  0](R/W/H) Pointer pair list doorbell count. Write operations to this field increments the present
                                                                 value here. Read operations return the present value. The value of this field is
                                                                 decremented as read operations are issued for scatter pointers. A write of 0xFFFFFFFF
                                                                 to this field clears [DBELL] and [AOFF]. The value of this field is in number of
                                                                 SDP_BUF_INFO_PAIR_S's.  This register should be cleared before enabling a ring. */
#else /* Word 0 - Little Endian */
        uint64_t dbell                 : 32; /**< [ 31:  0](R/W/H) Pointer pair list doorbell count. Write operations to this field increments the present
                                                                 value here. Read operations return the present value. The value of this field is
                                                                 decremented as read operations are issued for scatter pointers. A write of 0xFFFFFFFF
                                                                 to this field clears [DBELL] and [AOFF]. The value of this field is in number of
                                                                 SDP_BUF_INFO_PAIR_S's.  This register should be cleared before enabling a ring. */
        uint64_t aoff                  : 32; /**< [ 63: 32](RO/H) Address offset. The offset from the SDP()_R()_OUT_SLIST_BADDR where the next pointer
                                                                 is read.
                                                                 A write of 0xFFFFFFFF to [DBELL] clears [DBELL] and [AOFF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_slist_dbell_s cn; */
};
typedef union cavm_sdpx_rx_out_slist_dbell cavm_sdpx_rx_out_slist_dbell_t;

static inline uint64_t CAVM_SDPX_RX_OUT_SLIST_DBELL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_SLIST_DBELL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000140ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_SLIST_DBELL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_SLIST_DBELL(a,b) cavm_sdpx_rx_out_slist_dbell_t
#define bustype_CAVM_SDPX_RX_OUT_SLIST_DBELL(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_SLIST_DBELL(a,b) "SDPX_RX_OUT_SLIST_DBELL"
#define device_bar_CAVM_SDPX_RX_OUT_SLIST_DBELL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_SLIST_DBELL(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_SLIST_DBELL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_slist_rsize
 *
 * SDP Packet Ring Size Register
 * This register contains the output packet ring size.
 * This register is not affected by reset (including FLR) and must be initialized
 * by the VF prior to enabling the ring.  Also, this register cannot be written
 * while either of the following conditions is true:
 *   * SDP()_R()_OUT_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_OUT_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_slist_rsize
{
    uint64_t u;
    struct cavm_sdpx_rx_out_slist_rsize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rsize                 : 32; /**< [ 31:  0](R/W/H) Ring size (number of SDP_BUF_INFO_PAIR_S's). This value must be 16 or
                                                                 greater. If a value is written that is less than 16, then hardware
                                                                 will force a value of 16 to be written. */
#else /* Word 0 - Little Endian */
        uint64_t rsize                 : 32; /**< [ 31:  0](R/W/H) Ring size (number of SDP_BUF_INFO_PAIR_S's). This value must be 16 or
                                                                 greater. If a value is written that is less than 16, then hardware
                                                                 will force a value of 16 to be written. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_slist_rsize_s cn; */
};
typedef union cavm_sdpx_rx_out_slist_rsize cavm_sdpx_rx_out_slist_rsize_t;

static inline uint64_t CAVM_SDPX_RX_OUT_SLIST_RSIZE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_SLIST_RSIZE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000130ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_SLIST_RSIZE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_SLIST_RSIZE(a,b) cavm_sdpx_rx_out_slist_rsize_t
#define bustype_CAVM_SDPX_RX_OUT_SLIST_RSIZE(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_SLIST_RSIZE(a,b) "SDPX_RX_OUT_SLIST_RSIZE"
#define device_bar_CAVM_SDPX_RX_OUT_SLIST_RSIZE(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_SLIST_RSIZE(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_SLIST_RSIZE(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_out_wmark
 *
 * SDP Output Packet Watermark Register
 * This register defines a minimum pointer pair threshold required in order to send output
 * packets to the SDP. If the port's DBELL count is less than this threshold,
 * the corresponding bit in SDP()_OUT_DROP_STATE() is clear, and
 * the corresponding bit in SDP()_OUT_BP_EN()_W1S is set, back-pressure is
 * indicated to NIX TX.
 *
 * In the event that a packet arrives at SDP while the corresponding bit in
 * SDP()_OUT_DROP_STATE() is 0 and there are no buffers available to store it,
 * SDP will set the corresponding bit in SDP()_OUT_DROP_STATE()
 * to 1 and discard remaining packets destined for the port.
 * This should not happen except for a mis-programmed threshold value.
 *
 * This register is not affected by reset (including FLR) and must be initialize by the
 * VF prior to enabling the ring. Also this
 * register cannot be written while either of the following conditions is true:
 *   * SDP()_R()_OUT_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_OUT_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_out_wmark
{
    uint64_t u;
    struct cavm_sdpx_rx_out_wmark_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t wmark                 : 32; /**< [ 31:  0](R/W) Threshold value in pointer-pairs. */
#else /* Word 0 - Little Endian */
        uint64_t wmark                 : 32; /**< [ 31:  0](R/W) Threshold value in pointer-pairs. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_out_wmark_s cn; */
};
typedef union cavm_sdpx_rx_out_wmark cavm_sdpx_rx_out_wmark_t;

static inline uint64_t CAVM_SDPX_RX_OUT_WMARK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_OUT_WMARK(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000160ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_OUT_WMARK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_OUT_WMARK(a,b) cavm_sdpx_rx_out_wmark_t
#define bustype_CAVM_SDPX_RX_OUT_WMARK(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_OUT_WMARK(a,b) "SDPX_RX_OUT_WMARK"
#define device_bar_CAVM_SDPX_RX_OUT_WMARK(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_OUT_WMARK(a,b) (a)
#define arguments_CAVM_SDPX_RX_OUT_WMARK(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_r#_tlp
 *
 * SDP Ring TLP info Register
 * This register is the per ring steering tag, Pasid and controls and TLP PH info.
 * The information in these rings are added on to the DMA read or write command bus.
 *
 * This register  must be initialize by the VF prior to enabling the ring. Also this
 * register cannot be written while either of the following conditions is true:
 *   * SDP()_R()_OUT_CONTROL[IDLE] is clear.
 *   * Or, SDP()_R()_OUT_ENABLE[ENB] is set.
 *
 * This register is indexed by ring.
 * From a VF the amount of rings that can be indexed is controlled by SDP()_EPF()_RINFO[RPVF].
 * From a PF the amount of rings that can be indexed is controlled by
 * SDP()_MAC()_PF_RING_CTL[RPPF].
 * From an AP core all 128 rings can be indexed.
 */
union cavm_sdpx_rx_tlp
{
    uint64_t u;
    struct cavm_sdpx_rx_tlp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t pasid                 : 20; /**< [ 40: 21](R/W) processor space id  information per ring .It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t st                    : 16; /**< [ 20:  5](R/W) TLP steering tag.It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t ste                   : 1;  /**< [  4:  4](R/W) TLP steering tage enable. */
        uint64_t pasid_ctrl            : 2;  /**< [  3:  2](R/W) Pasid Control selects between no pasid, Pasid with EXE bit set or pasid with PRIV bit set.
                                                                 00 = No pasid
                                                                 01 = PASID used EXE-0 and PRIV- 0
                                                                 10 = PASID priviliged mode EXE-0, PRIV-1
                                                                 11 = PASID Execute mode , EXE=1, PRIV-0
                                                                 It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t ph                    : 2;  /**< [  1:  0](R/W) TLP processing hint per Ring. It cannot be updated unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
#else /* Word 0 - Little Endian */
        uint64_t ph                    : 2;  /**< [  1:  0](R/W) TLP processing hint per Ring. It cannot be updated unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t pasid_ctrl            : 2;  /**< [  3:  2](R/W) Pasid Control selects between no pasid, Pasid with EXE bit set or pasid with PRIV bit set.
                                                                 00 = No pasid
                                                                 01 = PASID used EXE-0 and PRIV- 0
                                                                 10 = PASID priviliged mode EXE-0, PRIV-1
                                                                 11 = PASID Execute mode , EXE=1, PRIV-0
                                                                 It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t ste                   : 1;  /**< [  4:  4](R/W) TLP steering tage enable. */
        uint64_t st                    : 16; /**< [ 20:  5](R/W) TLP steering tag.It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t pasid                 : 20; /**< [ 40: 21](R/W) processor space id  information per ring .It cannot be set unless SDP()_R()_OUT_CONTROL[IDLE] == 0. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_rx_tlp_s cn; */
};
typedef union cavm_sdpx_rx_tlp cavm_sdpx_rx_tlp_t;

static inline uint64_t CAVM_SDPX_RX_TLP(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_RX_TLP(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a==0) && (b<=511)))
        return 0xc01820000038ll + 0x100000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x1ff);
    __cavm_csr_fatal("SDPX_RX_TLP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_RX_TLP(a,b) cavm_sdpx_rx_tlp_t
#define bustype_CAVM_SDPX_RX_TLP(a,b) CSR_TYPE_ARF
#define basename_CAVM_SDPX_RX_TLP(a,b) "SDPX_RX_TLP"
#define device_bar_CAVM_SDPX_RX_TLP(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_RX_TLP(a,b) (a)
#define arguments_CAVM_SDPX_RX_TLP(a,b) (a),(b),-1,-1

/**
 * Register (ARF) sdp#_sctl
 *
 * SDP Secure Control Register
 */
union cavm_sdpx_sctl
{
    uint64_t u;
    struct cavm_sdpx_sctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t scen                  : 1;  /**< [  0:  0](SR/W) Allow SDP window transactions to request secure-world accesses.

                                                                 0 = SDP()_WIN_RD_ADDR[SECEN], SDP()_WIN_WR_ADDR[SECEN] are ignored and treated
                                                                 as if zero. Window transactions onto NCB are nonsecure, though the SMMU may
                                                                 later promote them to secure.

                                                                 1 = SDP()_WIN_RD_ADDR[SECEN], SDP()_WIN_WR_ADDR[SECEN] are honored. Window
                                                                 transactions may request nonsecure or secure world. This bit should not be set
                                                                 in secure boot applications. */
#else /* Word 0 - Little Endian */
        uint64_t scen                  : 1;  /**< [  0:  0](SR/W) Allow SDP window transactions to request secure-world accesses.

                                                                 0 = SDP()_WIN_RD_ADDR[SECEN], SDP()_WIN_WR_ADDR[SECEN] are ignored and treated
                                                                 as if zero. Window transactions onto NCB are nonsecure, though the SMMU may
                                                                 later promote them to secure.

                                                                 1 = SDP()_WIN_RD_ADDR[SECEN], SDP()_WIN_WR_ADDR[SECEN] are honored. Window
                                                                 transactions may request nonsecure or secure world. This bit should not be set
                                                                 in secure boot applications. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdpx_sctl_s cn; */
};
typedef union cavm_sdpx_sctl cavm_sdpx_sctl_t;

static inline uint64_t CAVM_SDPX_SCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDPX_SCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0xc01810080310ll + 0x100000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SDPX_SCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SDPX_SCTL(a) cavm_sdpx_sctl_t
#define bustype_CAVM_SDPX_SCTL(a) CSR_TYPE_ARF
#define basename_CAVM_SDPX_SCTL(a) "SDPX_SCTL"
#define device_bar_CAVM_SDPX_SCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SDPX_SCTL(a) (a)
#define arguments_CAVM_SDPX_SCTL(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SDP_H__ */
