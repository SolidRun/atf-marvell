#ifndef __CAVM_CSRS_DPI_H__
#define __CAVM_CSRS_DPI_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * DPI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dpi_af_int_vec_e
 *
 * DPI MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_DMA_CCX_INT(a) (0 + (a))
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_EPFX_MISC_LINT(a) (0x68 + (a))
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_EPFX_P_VF_LINT(a) (0x60 + (a))
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_EPFX_VF_LINT(a) (0x64 + (a))
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_NCBO_ERR_INT (0x6d)
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_PF_RAS (0x6c)
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_REQQX_INT(a) (0x40 + (a))
#define CAVM_DPI_AF_INT_VEC_E_DPI_AF_RVU_INT (0x6e)

/**
 * Enumeration dpi_cs_e
 *
 * DPI Completion Status Enumeration
 * Enumerates the completion status return values.
 */
#define CAVM_DPI_CS_E_ERRRSP (3)
#define CAVM_DPI_CS_E_NOERR (0)
#define CAVM_DPI_CS_E_RDFLT (4)
#define CAVM_DPI_CS_E_RDRST (1)
#define CAVM_DPI_CS_E_WRFLT (5)
#define CAVM_DPI_CS_E_WRRST (2)

/**
 * Enumeration dpi_endianswap_e
 *
 * DPI Endian Swap Mode Enumeration
 * Enumerates the endian swap modes that DPI supports.
 */
#define CAVM_DPI_ENDIANSWAP_E_BYTE_SWAP_32B (2)
#define CAVM_DPI_ENDIANSWAP_E_BYTE_SWAP_64B (1)
#define CAVM_DPI_ENDIANSWAP_E_LW_SWAP_64B (3)
#define CAVM_DPI_ENDIANSWAP_E_PASS_THRU (0)

/**
 * Enumeration dpi_hdr_pt_e
 *
 * DPI Header Pointer Type Enumeration
 * Enumerates the pointer type in DPI_DMA_INSTR_HDR_S[PT].
 */
#define CAVM_DPI_HDR_PT_E_CNT (3)
#define CAVM_DPI_HDR_PT_E_WQP (2)
#define CAVM_DPI_HDR_PT_E_ZBW_CA (0)
#define CAVM_DPI_HDR_PT_E_ZBW_NC (1)

/**
 * Enumeration dpi_hdr_pt_wqp_e
 *
 * DPI DMA Instruction Header Work Queue Pointer \<2:0\> Enumeration
 *
 * The DPI_DMA_INSTR_HDR_S[PTR]\<2:0\> encoding when DPI_DMA_INSTR_HDR_S[PT] is
 * DPI_HDR_PT_E::WQP.
 */
#define CAVM_DPI_HDR_PT_WQP_E_NOSTATUS (0)
#define CAVM_DPI_HDR_PT_WQP_E_STATUSCA (1)
#define CAVM_DPI_HDR_PT_WQP_E_STATUSNC (3)

/**
 * Enumeration dpi_hdr_xtype_e
 *
 * DPI Transfer Type Enumeration
 * Enumerates the pointer type in DPI_DMA_INSTR_HDR_S[XTYPE].
 */
#define CAVM_DPI_HDR_XTYPE_E_EXTERNAL (3)
#define CAVM_DPI_HDR_XTYPE_E_INBOUND (1)
#define CAVM_DPI_HDR_XTYPE_E_INTERNAL (2)
#define CAVM_DPI_HDR_XTYPE_E_OUTBOUND (0)

/**
 * Enumeration dpi_lf_int_vec_e
 *
 * DPI MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_DPI_LF_INT_VEC_E_DPI_LF_INT (0)

/**
 * Structure dpi_dma_func_sel_s
 *
 * DPI DMA Function Selector Structure
 * DPI DMA function selector for MACs.
 */
union cavm_dpi_dma_func_sel_s
{
    uint32_t u;
    struct cavm_dpi_dma_func_sel_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t pf                    : 4;  /**< [ 15: 12] Selects the PCIe physical function within the referenced MAC.

                                                                 [PF] must select a valid physical function in a PCIe MAC.

                                                                 [PF] must be zero for any non-PCIe MAC. */
        uint32_t func                  : 12; /**< [ 11:  0] Selects the function within the physical function [PF]
                                                                 within the referenced MAC.

                                                                 0x0 = The physical function [PF].
                                                                 0x1 = The first virtual function within the physical function [PF].
                                                                 0x2 = The second virtual function within the physical function [PF].
                                                                 0x3 = ...

                                                                 When [FUNC] is nonzero, it must select a valid virtual
                                                                 function.

                                                                 [FUNC] must be zero for any MAC that isn't PCIe, doesn't
                                                                 support the PCIe SR-IOV standard, or doesn't have PCIe SR-IOV
                                                                 enabled. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 12; /**< [ 11:  0] Selects the function within the physical function [PF]
                                                                 within the referenced MAC.

                                                                 0x0 = The physical function [PF].
                                                                 0x1 = The first virtual function within the physical function [PF].
                                                                 0x2 = The second virtual function within the physical function [PF].
                                                                 0x3 = ...

                                                                 When [FUNC] is nonzero, it must select a valid virtual
                                                                 function.

                                                                 [FUNC] must be zero for any MAC that isn't PCIe, doesn't
                                                                 support the PCIe SR-IOV standard, or doesn't have PCIe SR-IOV
                                                                 enabled. */
        uint32_t pf                    : 4;  /**< [ 15: 12] Selects the PCIe physical function within the referenced MAC.

                                                                 [PF] must select a valid physical function in a PCIe MAC.

                                                                 [PF] must be zero for any non-PCIe MAC. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpi_dma_func_sel_s_s cn; */
};

/**
 * Structure dpi_dma_instr_hdr_s
 *
 * DPI DMA Instruction Header Structure
 * DPI DMA Instruction Header Format.
 */
union cavm_dpi_dma_instr_hdr_s
{
    uint64_t u[4];
    struct cavm_dpi_dma_instr_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t lport                 : 2;  /**< [ 61: 60] Port for the last pointers block.

                                                                 DPI sends MAC memory space reads and writes for the MAC addresses
                                                                 in the last pointers block to the MAC selected by [LPORT]
                                                                 while processing DPI_HDR_XTYPE_E::OUTBOUND, DPI_HDR_XTYPE_E::INBOUND,
                                                                 and DPI_HDR_XTYPE_E::EXTERNAL instructions.

                                                                 [LPORT]\<0\> normally determines the NCB DPI uses for DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions.

                                                                 [LPORT]\<1\> must be zero for DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions. */
        uint64_t reserved_58_59        : 2;
        uint64_t fport                 : 2;  /**< [ 57: 56] Port for the first pointers block.

                                                                 DPI sends MAC memory space reads for the MAC addresses in the first
                                                                 pointers block to the MAC selected by [FPORT] while processing
                                                                 a DPI_HDR_XTYPE_E::EXTERNAL DPI DMA instruction.

                                                                 [FPORT]\<0\> normally determines the NCB DPI uses for
                                                                 DPI_HDR_XTYPE_E::OUTBOUND and DPI_HDR_XTYPE_E::INBOUND instructions.

                                                                 [FPORT]\<0\> normally determines the NCB DPI uses for DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions.

                                                                 [FPORT]\<1\> must be zero for DPI_HDR_XTYPE_E::OUTBOUND,
                                                                 DPI_HDR_XTYPE_E::INBOUND, and DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions. */
        uint64_t pt                    : 2;  /**< [ 55: 54] Pointer type. Enumerated by DPI_HDR_PT_E. Indicates how [PTR] is used
                                                                 upon completion of the DPI DMA instruction: byte write, SSO
                                                                 work add, or counter add.

                                                                 If no completion indication is desired for the DPI DMA instruction,
                                                                 software should set [PT]=DPI_HDR_PT_E::ZBW_CA and [PTR]=0. */
        uint64_t reserved_52_53        : 2;
        uint64_t xtype                 : 2;  /**< [ 51: 50] Transfer type of the instruction. Enumerated by DPI_HDR_XTYPE_E. Each DPI DMA
                                                                 instruction can be DPI_HDR_XTYPE_E::OUTBOUND (LLC/DRAM-\>MAC),
                                                                 DPI_HDR_XTYPE_E::INBOUND (MAC-\>LLC/DRAM), DPI_HDR_XTYPE_E::INTERNAL
                                                                 (LLC/DRAM-\>LLC/DRAM), or DPI_HDR_XTYPE_E::EXTERNAL (MAC-\>MAC). */
        uint64_t aura                  : 20; /**< [ 49: 30] NPA guest-aura.  The NPA guest-aura DPI uses for all NPA transactions for the
                                                                 DPI DMA instruction. [AURA] can only be used when
                                                                 [XTYPE]=DPI_HDR_XTYPE_E::OUTBOUND, and must be zero otherwise.

                                                                 For the NPA to not discard the request, NPA must map [AURA] to be
                                                                 valid inside the PF/function DPI()_DMA()_IDS[SSO_PF_FUNC].

                                                                 During an DPI_HDR_XTYPE_E::OUTBOUND DPI DMA instruction, [FL], [II],
                                                                 and DPI_DMA_PTR_S[I] determine whether DPI frees a
                                                                 DPI_DMA_PTR_S[PTR] to [AURA] in NPA. */
        uint64_t func                  : 16; /**< [ 29: 14] [FUNC] selects the function within the MAC selected by [LPORT]
                                                                 when [PVFE] is set. Defined by DPI_DMA_FUNC_SEL_S. */
        uint64_t reserved_13           : 1;
        uint64_t pvfe                  : 1;  /**< [ 12: 12] Function enable. When [PVFE] is set, DPI directs all MAC reads/writes
                                                                 to the function (physical or virtual) that [FUNC] selects within
                                                                 MAC/port [LPORT]. When [PVFE] is clear, DPI directs all MAC reads/writes
                                                                 to physical function 0 within the MACs/ports [LPORT] or [FPORT]. [PVFE] must not be set when
                                                                 [XTYPE] is DPI_HDR_XTYPE_E::INTERNAL or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL. [PVFE] can only be set when MAC/PORT
                                                                 [LPORT] is a PCIe MAC that either has multiple physical functions or
                                                                 has SR-IOV enabled. */
        uint64_t reserved_10_11        : 2;
        uint64_t nlst                  : 4;  /**< [  9:  6] The number of pointers in the last pointers block. Valid values are 1 through 15.

                                                                 The last pointers block includes [NFST] DPI_DMA_PTR_S local pointers and is [NFST] *
                                                                 2 64-bit words.

                                                                 Note that the sum of the number of 64-bit words in the last pointers block
                                                                 and first pointers block must never exceed 60. */
        uint64_t reserved_4_5          : 2;
        uint64_t nfst                  : 4;  /**< [  3:  0] The number of pointers in the first pointers block. Valid values are 1 through 15.

                                                                 The first pointers block includes [NFST] DPI_DMA_PTR_S local pointers and is [NFST]
                                                                 * 2 64-bit words.

                                                                 Note that the sum of the number of 64-bit words in the last pointers block
                                                                 and first pointers block must never exceed 60. */
#else /* Word 0 - Little Endian */
        uint64_t nfst                  : 4;  /**< [  3:  0] The number of pointers in the first pointers block. Valid values are 1 through 15.

                                                                 The first pointers block includes [NFST] DPI_DMA_PTR_S local pointers and is [NFST]
                                                                 * 2 64-bit words.

                                                                 Note that the sum of the number of 64-bit words in the last pointers block
                                                                 and first pointers block must never exceed 60. */
        uint64_t reserved_4_5          : 2;
        uint64_t nlst                  : 4;  /**< [  9:  6] The number of pointers in the last pointers block. Valid values are 1 through 15.

                                                                 The last pointers block includes [NFST] DPI_DMA_PTR_S local pointers and is [NFST] *
                                                                 2 64-bit words.

                                                                 Note that the sum of the number of 64-bit words in the last pointers block
                                                                 and first pointers block must never exceed 60. */
        uint64_t reserved_10_11        : 2;
        uint64_t pvfe                  : 1;  /**< [ 12: 12] Function enable. When [PVFE] is set, DPI directs all MAC reads/writes
                                                                 to the function (physical or virtual) that [FUNC] selects within
                                                                 MAC/port [LPORT]. When [PVFE] is clear, DPI directs all MAC reads/writes
                                                                 to physical function 0 within the MACs/ports [LPORT] or [FPORT]. [PVFE] must not be set when
                                                                 [XTYPE] is DPI_HDR_XTYPE_E::INTERNAL or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL. [PVFE] can only be set when MAC/PORT
                                                                 [LPORT] is a PCIe MAC that either has multiple physical functions or
                                                                 has SR-IOV enabled. */
        uint64_t reserved_13           : 1;
        uint64_t func                  : 16; /**< [ 29: 14] [FUNC] selects the function within the MAC selected by [LPORT]
                                                                 when [PVFE] is set. Defined by DPI_DMA_FUNC_SEL_S. */
        uint64_t aura                  : 20; /**< [ 49: 30] NPA guest-aura.  The NPA guest-aura DPI uses for all NPA transactions for the
                                                                 DPI DMA instruction. [AURA] can only be used when
                                                                 [XTYPE]=DPI_HDR_XTYPE_E::OUTBOUND, and must be zero otherwise.

                                                                 For the NPA to not discard the request, NPA must map [AURA] to be
                                                                 valid inside the PF/function DPI()_DMA()_IDS[SSO_PF_FUNC].

                                                                 During an DPI_HDR_XTYPE_E::OUTBOUND DPI DMA instruction, [FL], [II],
                                                                 and DPI_DMA_PTR_S[I] determine whether DPI frees a
                                                                 DPI_DMA_PTR_S[PTR] to [AURA] in NPA. */
        uint64_t xtype                 : 2;  /**< [ 51: 50] Transfer type of the instruction. Enumerated by DPI_HDR_XTYPE_E. Each DPI DMA
                                                                 instruction can be DPI_HDR_XTYPE_E::OUTBOUND (LLC/DRAM-\>MAC),
                                                                 DPI_HDR_XTYPE_E::INBOUND (MAC-\>LLC/DRAM), DPI_HDR_XTYPE_E::INTERNAL
                                                                 (LLC/DRAM-\>LLC/DRAM), or DPI_HDR_XTYPE_E::EXTERNAL (MAC-\>MAC). */
        uint64_t reserved_52_53        : 2;
        uint64_t pt                    : 2;  /**< [ 55: 54] Pointer type. Enumerated by DPI_HDR_PT_E. Indicates how [PTR] is used
                                                                 upon completion of the DPI DMA instruction: byte write, SSO
                                                                 work add, or counter add.

                                                                 If no completion indication is desired for the DPI DMA instruction,
                                                                 software should set [PT]=DPI_HDR_PT_E::ZBW_CA and [PTR]=0. */
        uint64_t fport                 : 2;  /**< [ 57: 56] Port for the first pointers block.

                                                                 DPI sends MAC memory space reads for the MAC addresses in the first
                                                                 pointers block to the MAC selected by [FPORT] while processing
                                                                 a DPI_HDR_XTYPE_E::EXTERNAL DPI DMA instruction.

                                                                 [FPORT]\<0\> normally determines the NCB DPI uses for
                                                                 DPI_HDR_XTYPE_E::OUTBOUND and DPI_HDR_XTYPE_E::INBOUND instructions.

                                                                 [FPORT]\<0\> normally determines the NCB DPI uses for DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions.

                                                                 [FPORT]\<1\> must be zero for DPI_HDR_XTYPE_E::OUTBOUND,
                                                                 DPI_HDR_XTYPE_E::INBOUND, and DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions. */
        uint64_t reserved_58_59        : 2;
        uint64_t lport                 : 2;  /**< [ 61: 60] Port for the last pointers block.

                                                                 DPI sends MAC memory space reads and writes for the MAC addresses
                                                                 in the last pointers block to the MAC selected by [LPORT]
                                                                 while processing DPI_HDR_XTYPE_E::OUTBOUND, DPI_HDR_XTYPE_E::INBOUND,
                                                                 and DPI_HDR_XTYPE_E::EXTERNAL instructions.

                                                                 [LPORT]\<0\> normally determines the NCB DPI uses for DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions.

                                                                 [LPORT]\<1\> must be zero for DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t ptr                   : 64; /**< [127: 64] Completion pointer. Usage determined by [PT] value. The DPI_HDR_PT_E
                                                                 enumeration describes the supported [PT] values and the [PTR] usage
                                                                 and requirements in each case.
                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility. */
#else /* Word 1 - Little Endian */
        uint64_t ptr                   : 64; /**< [127: 64] Completion pointer. Usage determined by [PT] value. The DPI_HDR_PT_E
                                                                 enumeration describes the supported [PT] values and the [PTR] usage
                                                                 and requirements in each case.
                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_179_191      : 13;
        uint64_t csel                  : 1;  /**< [178:178] Counter and interrupt select. See [CA] and [FI]. [CSEL] selects which of two counters
                                                                 (SDP()_EPF()_DMA_CNT()[CNT]) and/or two interrupt bits (SDP()_EPF()_DMA_RINT[DMAFI])
                                                                 DPI can modify during DPI_HDR_XTYPE_E::OUTBOUND or DPI_HDR_XTYPE_E::EXTERNAL
                                                                 instruction execution.

                                                                 For DPI_HDR_XTYPE_E::INBOUND or DPI_HDR_XTYPE_E::INTERNAL DPI DMA
                                                                 instructions, [CSEL] must be zero. */
        uint64_t ca                    : 1;  /**< [177:177] Add to a counter that can interrupt a remote host.

                                                                 When [CA] = 1, DPI updates a selected counter after it completes the DMA
                                                                 DPI_HDR_XTYPE_E::OUTBOUND or DPI_HDR_XTYPE_E::EXTERNAL instruction.

                                                                 _ If [CSEL] = 0, DPI updates SDP()_EPF()_DMA_CNT(0)[CNT].
                                                                 _ If [CSEL] = 1, DPI updates SDP()_EPF()_DMA_CNT(1)[CNT].

                                                                 Note that these updates may indirectly cause
                                                                 SDP()_EPF()_DMA_RINT[DCNT,DTIME] to become set for all MACs
                                                                 (depending on the SDP()_EPF()_DMA_INT_LEVEL() settings), so may cause interrupts to
                                                                 be sent to a remote MAC host.

                                                                 If DPI()_DMA_CONTROL[O_ADD1] = 1, DPI updates the counter by 1.

                                                                 If DPI()_DMA_CONTROL[O_ADD1] = 0, DPI updates the counter by the total bytes in
                                                                 the transfer.

                                                                 When [CA] = 0, DPI does not update any SDP()_EPF()_DMA_CNT()[CNT].

                                                                 For DPI_HDR_XTYPE_E::INBOUND or DPI_HDR_XTYPE_E::INTERNAL DPI DMA
                                                                 instructions, [CA] must never be set, and DPI never adds to any
                                                                 SDP()_EPF()_DMA_CNT()[CNT]. */
        uint64_t fi                    : 1;  /**< [176:176] Force interrupt to a remote host.

                                                                 When [FI] is set for a (DPI_HDR_XTYPE_E::OUTBOUND or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL) DPI DMA instruction, DPI sets an
                                                                 interrupt bit after completing instruction. If [CSEL] = 0, DPI sets
                                                                 SDP()_EPF()_DMA_RINT[DMAFI]\<0\> for all MACs, else DPI sets
                                                                 SDP()_EPF()_DMA_RINT[DMAFI]\<1\> for all MACs. This may
                                                                 cause an interrupt to be sent to a remote host.

                                                                 For DPI_HDR_XTYPE_E::INBOUND or DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions, [II] must be clear, and DPI never sets DMAFI interrupt bits. */
        uint64_t ii                    : 1;  /**< [175:175] Ignore I. Determines if DPI_DMA_PTR_S[I]'s influence whether
                                                                 DPI frees a DPI_DMA_PTR_S[PTR] during DPI_HDR_XTYPE_E::OUTBOUND
                                                                 instruction processing.

                                                                 If [II] is set, [FL] solely determines whether DPI frees, and
                                                                 all DPI_DMA_PTR_S[PTR]'s in the DPI_HDR_XTYPE_E::OUTBOUND
                                                                 instruction are either freed or not.

                                                                 If [II] is clear, ([FL] XOR DPI_DMA_PTR_S[I]) determines
                                                                 whether DPI frees a given DPI_DMA_PTR_S[PTR] in the
                                                                 DPI_HDR_XTYPE_E::OUTBOUND instruction, and each .

                                                                 For DPI_HDR_XTYPE_E::INBOUND, DPI_HDR_XTYPE_E::INTERNAL, or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL instructions, [II] must be clear,
                                                                 and DPI never frees local buffers. */
        uint64_t fl                    : 1;  /**< [174:174] Determines whether DPI frees a DPI_DMA_PTR_S[PTR] during
                                                                 DPI_HDR_XTYPE_E::OUTBOUND instruction processing
                                                                 (along with [II] and DPI_DMA_PTR_S[I]).

                                                                 During DPI_HDR_XTYPE_E::OUTBOUND instruction processing, DPI frees a
                                                                 DPI_DMA_PTR_S[PTR] to [AURA] in NPA when:

                                                                 _ [FL] XOR (![II] AND DPI_DMA_PTR_S[I])

                                                                 For DPI_HDR_XTYPE_E::INBOUND, DPI_HDR_XTYPE_E::INTERNAL, or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL instructions, [FL] must be clear,
                                                                 and DPI never frees local buffers. */
        uint64_t reserved_172_173      : 2;
        uint64_t grp                   : 10; /**< [171:162] SSO guest-group. Sent to SSO upon instruction completion when [PT] = DPI_HDR_PT_E::WQP.
                                                                 For the SSO to not discard the add-work request.

                                                                 [GRP] must be zero when [PT] != DPI_HDR_PT_E::WQP. */
        uint64_t tt                    : 2;  /**< [161:160] SSO tag type. Sent to SSO upon instruction completion when [PT] = DPI_HDR_PT_E::WQP.

                                                                 [TT] must be zero when [PT] != DPI_HDR_PT_E::WQP. */
        uint64_t tag                   : 32; /**< [159:128] SSO Tag. */
#else /* Word 2 - Little Endian */
        uint64_t tag                   : 32; /**< [159:128] SSO Tag. */
        uint64_t tt                    : 2;  /**< [161:160] SSO tag type. Sent to SSO upon instruction completion when [PT] = DPI_HDR_PT_E::WQP.

                                                                 [TT] must be zero when [PT] != DPI_HDR_PT_E::WQP. */
        uint64_t grp                   : 10; /**< [171:162] SSO guest-group. Sent to SSO upon instruction completion when [PT] = DPI_HDR_PT_E::WQP.
                                                                 For the SSO to not discard the add-work request.

                                                                 [GRP] must be zero when [PT] != DPI_HDR_PT_E::WQP. */
        uint64_t reserved_172_173      : 2;
        uint64_t fl                    : 1;  /**< [174:174] Determines whether DPI frees a DPI_DMA_PTR_S[PTR] during
                                                                 DPI_HDR_XTYPE_E::OUTBOUND instruction processing
                                                                 (along with [II] and DPI_DMA_PTR_S[I]).

                                                                 During DPI_HDR_XTYPE_E::OUTBOUND instruction processing, DPI frees a
                                                                 DPI_DMA_PTR_S[PTR] to [AURA] in NPA when:

                                                                 _ [FL] XOR (![II] AND DPI_DMA_PTR_S[I])

                                                                 For DPI_HDR_XTYPE_E::INBOUND, DPI_HDR_XTYPE_E::INTERNAL, or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL instructions, [FL] must be clear,
                                                                 and DPI never frees local buffers. */
        uint64_t ii                    : 1;  /**< [175:175] Ignore I. Determines if DPI_DMA_PTR_S[I]'s influence whether
                                                                 DPI frees a DPI_DMA_PTR_S[PTR] during DPI_HDR_XTYPE_E::OUTBOUND
                                                                 instruction processing.

                                                                 If [II] is set, [FL] solely determines whether DPI frees, and
                                                                 all DPI_DMA_PTR_S[PTR]'s in the DPI_HDR_XTYPE_E::OUTBOUND
                                                                 instruction are either freed or not.

                                                                 If [II] is clear, ([FL] XOR DPI_DMA_PTR_S[I]) determines
                                                                 whether DPI frees a given DPI_DMA_PTR_S[PTR] in the
                                                                 DPI_HDR_XTYPE_E::OUTBOUND instruction, and each .

                                                                 For DPI_HDR_XTYPE_E::INBOUND, DPI_HDR_XTYPE_E::INTERNAL, or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL instructions, [II] must be clear,
                                                                 and DPI never frees local buffers. */
        uint64_t fi                    : 1;  /**< [176:176] Force interrupt to a remote host.

                                                                 When [FI] is set for a (DPI_HDR_XTYPE_E::OUTBOUND or
                                                                 DPI_HDR_XTYPE_E::EXTERNAL) DPI DMA instruction, DPI sets an
                                                                 interrupt bit after completing instruction. If [CSEL] = 0, DPI sets
                                                                 SDP()_EPF()_DMA_RINT[DMAFI]\<0\> for all MACs, else DPI sets
                                                                 SDP()_EPF()_DMA_RINT[DMAFI]\<1\> for all MACs. This may
                                                                 cause an interrupt to be sent to a remote host.

                                                                 For DPI_HDR_XTYPE_E::INBOUND or DPI_HDR_XTYPE_E::INTERNAL
                                                                 instructions, [II] must be clear, and DPI never sets DMAFI interrupt bits. */
        uint64_t ca                    : 1;  /**< [177:177] Add to a counter that can interrupt a remote host.

                                                                 When [CA] = 1, DPI updates a selected counter after it completes the DMA
                                                                 DPI_HDR_XTYPE_E::OUTBOUND or DPI_HDR_XTYPE_E::EXTERNAL instruction.

                                                                 _ If [CSEL] = 0, DPI updates SDP()_EPF()_DMA_CNT(0)[CNT].
                                                                 _ If [CSEL] = 1, DPI updates SDP()_EPF()_DMA_CNT(1)[CNT].

                                                                 Note that these updates may indirectly cause
                                                                 SDP()_EPF()_DMA_RINT[DCNT,DTIME] to become set for all MACs
                                                                 (depending on the SDP()_EPF()_DMA_INT_LEVEL() settings), so may cause interrupts to
                                                                 be sent to a remote MAC host.

                                                                 If DPI()_DMA_CONTROL[O_ADD1] = 1, DPI updates the counter by 1.

                                                                 If DPI()_DMA_CONTROL[O_ADD1] = 0, DPI updates the counter by the total bytes in
                                                                 the transfer.

                                                                 When [CA] = 0, DPI does not update any SDP()_EPF()_DMA_CNT()[CNT].

                                                                 For DPI_HDR_XTYPE_E::INBOUND or DPI_HDR_XTYPE_E::INTERNAL DPI DMA
                                                                 instructions, [CA] must never be set, and DPI never adds to any
                                                                 SDP()_EPF()_DMA_CNT()[CNT]. */
        uint64_t csel                  : 1;  /**< [178:178] Counter and interrupt select. See [CA] and [FI]. [CSEL] selects which of two counters
                                                                 (SDP()_EPF()_DMA_CNT()[CNT]) and/or two interrupt bits (SDP()_EPF()_DMA_RINT[DMAFI])
                                                                 DPI can modify during DPI_HDR_XTYPE_E::OUTBOUND or DPI_HDR_XTYPE_E::EXTERNAL
                                                                 instruction execution.

                                                                 For DPI_HDR_XTYPE_E::INBOUND or DPI_HDR_XTYPE_E::INTERNAL DPI DMA
                                                                 instructions, [CSEL] must be zero. */
        uint64_t reserved_179_191      : 13;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_192_255      : 64;
#else /* Word 3 - Little Endian */
        uint64_t reserved_192_255      : 64;
#endif /* Word 3 - End */
    } s;
    /* struct cavm_dpi_dma_instr_hdr_s_s cn; */
};

/**
 * Structure dpi_dma_ptr_s
 *
 * DPI DMA Local Pointer Structure
 * DPI DMA Local Pointer Format.
 */
union cavm_dpi_dma_ptr_s
{
    uint64_t u[2];
    struct cavm_dpi_dma_ptr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t i                     : 1;  /**< [ 63: 63] Invert free. Only used with LLC/DRAM pointers.

                                                                 This bit gives the software the ability to free buffers
                                                                 independently for a DPI_HDR_XTYPE_E::OUTBOUND DMA transfer when
                                                                 DPI_DMA_INSTR_HDR_S[II] is clear. See DPI_DMA_INSTR_HDR_S[II] and
                                                                 DPI_DMA_INSTR_HDR_S[FL].

                                                                 [I] is not used by DPI when DPI_DMA_INSTR_HDR_S[II] is set. [I] must not be set,
                                                                 and DPI never frees buffers for DPI_HDR_XTYPE_E::INBOUND and
                                                                 DPI_HDR_XTYPE_E::INTERNAL DPI DMA instructions. */
        uint64_t f                     : 1;  /**< [ 62: 62] Full-block write operations are allowed.
                                                                 Only used with LLC/DRAM pointers.

                                                                 When set, the hardware is permitted to write all the bytes in the cache blocks
                                                                 covered by [PTR] .. [PTR] + [LENGTH] - 1. This can improve memory system performance
                                                                 when the write misses in the LLC.

                                                                 [F] can only be set for LLC/DRAM pointers that can be written to:

                                                                 * The DPI_DMA_PTR_S's in the first-pointers area that are write pointers
                                                                   for DPI_HDR_XTYPE_E::INBOUND DPI DMA instructions.

                                                                 * The DPI_DMA_PTR_S's in the last-pointers area that are always write
                                                                   pointers (when present for DPI_HDR_XTYPE_E::INTERNAL DPI DMA instructions).

                                                                 [F] must not be set for LLC/DRAM pointers that are not written to:

                                                                 * The DPI_DMA_PTR_S's in the first-pointers area for DPI_HDR_XTYPE_E::OUTBOUND
                                                                   and DPI_HDR_XTYPE_E::INTERNAL DPI DMA instructions. */
        uint64_t ac                    : 1;  /**< [ 61: 61] Allocate LLC.  Only used with LLC/DRAM Pointers.
                                                                 This is a hint to DPI that the cache blocks should be allocated in
                                                                 the LLC (if they were not already). Should typically be set to allocate the
                                                                 referenced cache blocks into the LLC.

                                                                 When the LLC/DRAM pointer is a source of data (e.g. a DPI_HDR_XTYPE_E::OUTBOUND
                                                                 DPI DMA instruction), the referenced cache blocks are not allocated into the LLC
                                                                 as part of completing the DMA (when not already present in the LLC) if [AC]
                                                                 is clear.

                                                                 When the LLC/DRAM pointer is a destination for data (e.g. a
                                                                 DPI_HDR_XTYPE_E::INBOUND DPI DMA instruction), the referenced cache blocks are
                                                                 not allocated into the cache as part of completing the DMA (when not already
                                                                 present in the LLC) if [AC] is clear, and either:

                                                                 * the entire cache block is written by this LLC/DRAM pointer, or

                                                                 * [F] is set so that the entire cache block can be written. */
        uint64_t bed                   : 1;  /**< [ 60: 60] Reserved. */
        uint64_t reserved_24_59        : 36;
        uint64_t length                : 24; /**< [ 23:  0] Size in bytes of the contiguous space specified by PTR. A SIZE value of 0x0 is
                                                                 illegal.

                                                                 Note that the sum of the sizes in the first-pointers area must always exactly
                                                                 equal the sum of the sizes/lengths in the last-pointers area. */
#else /* Word 0 - Little Endian */
        uint64_t length                : 24; /**< [ 23:  0] Size in bytes of the contiguous space specified by PTR. A SIZE value of 0x0 is
                                                                 illegal.

                                                                 Note that the sum of the sizes in the first-pointers area must always exactly
                                                                 equal the sum of the sizes/lengths in the last-pointers area. */
        uint64_t reserved_24_59        : 36;
        uint64_t bed                   : 1;  /**< [ 60: 60] Reserved. */
        uint64_t ac                    : 1;  /**< [ 61: 61] Allocate LLC.  Only used with LLC/DRAM Pointers.
                                                                 This is a hint to DPI that the cache blocks should be allocated in
                                                                 the LLC (if they were not already). Should typically be set to allocate the
                                                                 referenced cache blocks into the LLC.

                                                                 When the LLC/DRAM pointer is a source of data (e.g. a DPI_HDR_XTYPE_E::OUTBOUND
                                                                 DPI DMA instruction), the referenced cache blocks are not allocated into the LLC
                                                                 as part of completing the DMA (when not already present in the LLC) if [AC]
                                                                 is clear.

                                                                 When the LLC/DRAM pointer is a destination for data (e.g. a
                                                                 DPI_HDR_XTYPE_E::INBOUND DPI DMA instruction), the referenced cache blocks are
                                                                 not allocated into the cache as part of completing the DMA (when not already
                                                                 present in the LLC) if [AC] is clear, and either:

                                                                 * the entire cache block is written by this LLC/DRAM pointer, or

                                                                 * [F] is set so that the entire cache block can be written. */
        uint64_t f                     : 1;  /**< [ 62: 62] Full-block write operations are allowed.
                                                                 Only used with LLC/DRAM pointers.

                                                                 When set, the hardware is permitted to write all the bytes in the cache blocks
                                                                 covered by [PTR] .. [PTR] + [LENGTH] - 1. This can improve memory system performance
                                                                 when the write misses in the LLC.

                                                                 [F] can only be set for LLC/DRAM pointers that can be written to:

                                                                 * The DPI_DMA_PTR_S's in the first-pointers area that are write pointers
                                                                   for DPI_HDR_XTYPE_E::INBOUND DPI DMA instructions.

                                                                 * The DPI_DMA_PTR_S's in the last-pointers area that are always write
                                                                   pointers (when present for DPI_HDR_XTYPE_E::INTERNAL DPI DMA instructions).

                                                                 [F] must not be set for LLC/DRAM pointers that are not written to:

                                                                 * The DPI_DMA_PTR_S's in the first-pointers area for DPI_HDR_XTYPE_E::OUTBOUND
                                                                   and DPI_HDR_XTYPE_E::INTERNAL DPI DMA instructions. */
        uint64_t i                     : 1;  /**< [ 63: 63] Invert free. Only used with LLC/DRAM pointers.

                                                                 This bit gives the software the ability to free buffers
                                                                 independently for a DPI_HDR_XTYPE_E::OUTBOUND DMA transfer when
                                                                 DPI_DMA_INSTR_HDR_S[II] is clear. See DPI_DMA_INSTR_HDR_S[II] and
                                                                 DPI_DMA_INSTR_HDR_S[FL].

                                                                 [I] is not used by DPI when DPI_DMA_INSTR_HDR_S[II] is set. [I] must not be set,
                                                                 and DPI never frees buffers for DPI_HDR_XTYPE_E::INBOUND and
                                                                 DPI_HDR_XTYPE_E::INTERNAL DPI DMA instructions. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t ptr                   : 64; /**< [127: 64] For LLC/DRAM - bits \<52:0\> used for byte pointer. Points to where the packet data
                                                                 starts. PTR can be any byte alignment. */
#else /* Word 1 - Little Endian */
        uint64_t ptr                   : 64; /**< [127: 64] For LLC/DRAM - bits \<52:0\> used for byte pointer. Points to where the packet data
                                                                 starts. PTR can be any byte alignment. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_dpi_dma_ptr_s_s cn; */
};

/**
 * Register (RVU_PF_BAR0) dpi#_af_bar2_alias#
 *
 * DPI Admin Function  BAR2 Alias Registers
 * These registers alias to the DPI BAR2 registers for the PF and function
 * selected by DPI_AF_BAR2_SEL[PF_FUNC].
 */
union cavm_dpix_af_bar2_aliasx
{
    uint64_t u;
    struct cavm_dpix_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_bar2_aliasx_s cn; */
};
typedef union cavm_dpix_af_bar2_aliasx cavm_dpix_af_bar2_aliasx_t;

static inline uint64_t CAVM_DPIX_AF_BAR2_ALIASX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_BAR2_ALIASX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=131071))
        return 0x840189100000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1ffff);
    __cavm_csr_fatal("DPIX_AF_BAR2_ALIASX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_BAR2_ALIASX(a,b) cavm_dpix_af_bar2_aliasx_t
#define bustype_CAVM_DPIX_AF_BAR2_ALIASX(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_BAR2_ALIASX(a,b) "DPIX_AF_BAR2_ALIASX"
#define device_bar_CAVM_DPIX_AF_BAR2_ALIASX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_BAR2_ALIASX(a,b) (a)
#define arguments_CAVM_DPIX_AF_BAR2_ALIASX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_bar2_sel
 *
 * DPI Admin Function BAR2 Select Register
 * This register configures BAR2 accesses from the DPI_AF_BAR2_ALIAS() registers in BAR0.
 */
union cavm_dpix_af_bar2_sel
{
    uint64_t u;
    struct cavm_dpix_af_bar2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_bar2_sel_s cn; */
};
typedef union cavm_dpix_af_bar2_sel cavm_dpix_af_bar2_sel_t;

static inline uint64_t CAVM_DPIX_AF_BAR2_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_BAR2_SEL(uint64_t a)
{
    if (a<=1)
        return 0x840189000000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_BAR2_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_BAR2_SEL(a) cavm_dpix_af_bar2_sel_t
#define bustype_CAVM_DPIX_AF_BAR2_SEL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_BAR2_SEL(a) "DPIX_AF_BAR2_SEL"
#define device_bar_CAVM_DPIX_AF_BAR2_SEL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_BAR2_SEL(a) (a)
#define arguments_CAVM_DPIX_AF_BAR2_SEL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_blk_rst
 *
 * DPI AF Block Reset Registers
 */
union cavm_dpix_af_blk_rst
{
    uint64_t u;
    struct cavm_dpix_af_blk_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, the block is busy completing reset. No access except the reading of
                                                                 this bit should occur to the block until this is clear. */
        uint64_t reserved_1_62         : 62;
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (block_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (block_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
        uint64_t reserved_1_62         : 62;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, the block is busy completing reset. No access except the reading of
                                                                 this bit should occur to the block until this is clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_blk_rst_s cn; */
};
typedef union cavm_dpix_af_blk_rst cavm_dpix_af_blk_rst_t;

static inline uint64_t CAVM_DPIX_AF_BLK_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_BLK_RST(uint64_t a)
{
    if (a<=1)
        return 0x840180010000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_BLK_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_BLK_RST(a) cavm_dpix_af_blk_rst_t
#define bustype_CAVM_DPIX_AF_BLK_RST(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_BLK_RST(a) "DPIX_AF_BLK_RST"
#define device_bar_CAVM_DPIX_AF_BLK_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_BLK_RST(a) (a)
#define arguments_CAVM_DPIX_AF_BLK_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_csclk_active_pc
 *
 * DPI Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 */
union cavm_dpix_af_csclk_active_pc
{
    uint64_t u;
    struct cavm_dpix_af_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_csclk_active_pc_s cn; */
};
typedef union cavm_dpix_af_csclk_active_pc cavm_dpix_af_csclk_active_pc_t;

static inline uint64_t CAVM_DPIX_AF_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_CSCLK_ACTIVE_PC(uint64_t a)
{
    if (a<=1)
        return 0x840180010010ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_CSCLK_ACTIVE_PC(a) cavm_dpix_af_csclk_active_pc_t
#define bustype_CAVM_DPIX_AF_CSCLK_ACTIVE_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_CSCLK_ACTIVE_PC(a) "DPIX_AF_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_DPIX_AF_CSCLK_ACTIVE_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_DPIX_AF_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ctl
 *
 * DPI Control Register
 * This register provides the control bits for DPI.
 */
union cavm_dpix_af_ctl
{
    uint64_t u;
    struct cavm_dpix_af_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t force_ebo_clks_on     : 1;  /**< [ 10: 10](R/W) When set this will force conditional clocks in DPI's EBO bus unconditionally on.
                                                                 For diagnostic use only. */
        uint64_t force_ncb_clks_on     : 1;  /**< [  9:  9](R/W) When set this will force conditional clocks in DPI's NCB bus unconditionally on.
                                                                 For diagnostic use only. */
        uint64_t force_clks_on         : 1;  /**< [  8:  8](R/W) When set this will force conditional clocks in DPI unconditionally on. For diagnostic use only. */
        uint64_t reserved_2_7          : 6;
        uint64_t rd_psn_ign            : 1;  /**< [  1:  1](R/W) Read poison ignore.

                                                                 When [RD_PSN_IGN] is clear,
                                                                 poisons received on a NCB instruction response are fatal and set interrupt
                                                                 DPI()_REQQ()_INT[INSTR_PSN] and DPI()_PF_RAS[NCB_CMD_PSN],
                                                                 poisons received on a NCB DMA data response are propagated into RDB data
                                                                 structures and set interrupt DPI()_PF_RAS[NCB_DAT_PSN],
                                                                 and poisons returned on EBI data response are propagated into RDB data
                                                                 structures and set interrupt DPI()_PF_RAS[EBI_DAT_PSN].

                                                                 When [RD_PSN_IGN] is set,
                                                                 poisons received on a NCB instruction response are ignored and set interrupt
                                                                 DPI()_PF_RAS[NCB_CMD_PSN],
                                                                 poisons received on a NCB DMA data response are ignored and set interrupt
                                                                 DPI()_PF_RAS[NCB_DAT_PSN],
                                                                 and poisons returned on EBI data response are ignored and set interrupt DPI()_PF_RAS[EBI_DAT_PSN]. */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Turns on the DMA and packet state machines. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Turns on the DMA and packet state machines. */
        uint64_t rd_psn_ign            : 1;  /**< [  1:  1](R/W) Read poison ignore.

                                                                 When [RD_PSN_IGN] is clear,
                                                                 poisons received on a NCB instruction response are fatal and set interrupt
                                                                 DPI()_REQQ()_INT[INSTR_PSN] and DPI()_PF_RAS[NCB_CMD_PSN],
                                                                 poisons received on a NCB DMA data response are propagated into RDB data
                                                                 structures and set interrupt DPI()_PF_RAS[NCB_DAT_PSN],
                                                                 and poisons returned on EBI data response are propagated into RDB data
                                                                 structures and set interrupt DPI()_PF_RAS[EBI_DAT_PSN].

                                                                 When [RD_PSN_IGN] is set,
                                                                 poisons received on a NCB instruction response are ignored and set interrupt
                                                                 DPI()_PF_RAS[NCB_CMD_PSN],
                                                                 poisons received on a NCB DMA data response are ignored and set interrupt
                                                                 DPI()_PF_RAS[NCB_DAT_PSN],
                                                                 and poisons returned on EBI data response are ignored and set interrupt DPI()_PF_RAS[EBI_DAT_PSN]. */
        uint64_t reserved_2_7          : 6;
        uint64_t force_clks_on         : 1;  /**< [  8:  8](R/W) When set this will force conditional clocks in DPI unconditionally on. For diagnostic use only. */
        uint64_t force_ncb_clks_on     : 1;  /**< [  9:  9](R/W) When set this will force conditional clocks in DPI's NCB bus unconditionally on.
                                                                 For diagnostic use only. */
        uint64_t force_ebo_clks_on     : 1;  /**< [ 10: 10](R/W) When set this will force conditional clocks in DPI's EBO bus unconditionally on.
                                                                 For diagnostic use only. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ctl_s cn; */
};
typedef union cavm_dpix_af_ctl cavm_dpix_af_ctl_t;

static inline uint64_t CAVM_DPIX_AF_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_CTL(uint64_t a)
{
    if (a<=1)
        return 0x840180010018ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_CTL(a) cavm_dpix_af_ctl_t
#define bustype_CAVM_DPIX_AF_CTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_CTL(a) "DPIX_AF_CTL"
#define device_bar_CAVM_DPIX_AF_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_CTL(a) (a)
#define arguments_CAVM_DPIX_AF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_err_rsp_status
 *
 * DPI DMA Error Response Status Register
 */
union cavm_dpix_af_dmax_err_rsp_status
{
    uint64_t u;
    struct cavm_dpix_af_dmax_err_rsp_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t status                : 6;  /**< [  5:  0](R/W1C/H) [STATUS] captures the ErrorResponse status of the last 6 instructions for each
                                                                 instruction queue. [STATUS]\<5\> represents the status for first instruction in
                                                                 instruction order while [STATUS]\<0\> represents the last or most recent
                                                                 instruction. If [STATUS]\<n\> is set, then the Nth instruction in the given queue
                                                                 experienced an ErrorResponse. Otherwise, it completed normally. */
#else /* Word 0 - Little Endian */
        uint64_t status                : 6;  /**< [  5:  0](R/W1C/H) [STATUS] captures the ErrorResponse status of the last 6 instructions for each
                                                                 instruction queue. [STATUS]\<5\> represents the status for first instruction in
                                                                 instruction order while [STATUS]\<0\> represents the last or most recent
                                                                 instruction. If [STATUS]\<n\> is set, then the Nth instruction in the given queue
                                                                 experienced an ErrorResponse. Otherwise, it completed normally. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_err_rsp_status_s cn; */
};
typedef union cavm_dpix_af_dmax_err_rsp_status cavm_dpix_af_dmax_err_rsp_status_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000038ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_ERR_RSP_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(a,b) cavm_dpix_af_dmax_err_rsp_status_t
#define bustype_CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(a,b) "DPIX_AF_DMAX_ERR_RSP_STATUS"
#define device_bar_CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_ERR_RSP_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_ibuff_csize
 *
 * DPI DMA Instruction-Buffer Chunk Size Registers
 * These registers provide configuration for each DMA instruction queue. These register
 * should only be written to when the specified queue is disabled
 * (DPI()_VDMA()_EN[QEN]).
 */
union cavm_dpix_af_dmax_ibuff_csize
{
    uint64_t u;
    struct cavm_dpix_af_dmax_ibuff_csize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t npa_buff_free         : 1;  /**< [ 16: 16](R/W) This bit controls the return of the buffer to NPA. 1 to return to NPA and 0 to not return. */
        uint64_t reserved_14_15        : 2;
        uint64_t csize                 : 14; /**< [ 13:  0](R/W) The size in 8-byte words of the DMA instruction chunk. This value should only be written
                                                                 at known times in order to prevent corruption of the instruction queue. */
#else /* Word 0 - Little Endian */
        uint64_t csize                 : 14; /**< [ 13:  0](R/W) The size in 8-byte words of the DMA instruction chunk. This value should only be written
                                                                 at known times in order to prevent corruption of the instruction queue. */
        uint64_t reserved_14_15        : 2;
        uint64_t npa_buff_free         : 1;  /**< [ 16: 16](R/W) This bit controls the return of the buffer to NPA. 1 to return to NPA and 0 to not return. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_ibuff_csize_s cn; */
};
typedef union cavm_dpix_af_dmax_ibuff_csize cavm_dpix_af_dmax_ibuff_csize_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000000ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_IBUFF_CSIZE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(a,b) cavm_dpix_af_dmax_ibuff_csize_t
#define bustype_CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(a,b) "DPIX_AF_DMAX_IBUFF_CSIZE"
#define device_bar_CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_IBUFF_CSIZE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_ids
 *
 * DPI DMA Request ID Registers
 * These registers configure the stream ids, PF functions and aura values for each request queue.
 */
union cavm_dpix_af_dmax_ids
{
    uint64_t u;
    struct cavm_dpix_af_dmax_ids_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t npa_pf_func           : 16; /**< [ 31: 16](R/W) NPA RVU physical and virtual function. Format specified by RVU_PF_FUNC_S. */
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 this ring's SSO add works are sent. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 this ring's SSO add works are sent. Format specified by RVU_PF_FUNC_S. */
        uint64_t npa_pf_func           : 16; /**< [ 31: 16](R/W) NPA RVU physical and virtual function. Format specified by RVU_PF_FUNC_S. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_ids_s cn; */
};
typedef union cavm_dpix_af_dmax_ids cavm_dpix_af_dmax_ids_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_IDS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_IDS(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000018ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_IDS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_IDS(a,b) cavm_dpix_af_dmax_ids_t
#define bustype_CAVM_DPIX_AF_DMAX_IDS(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_IDS(a,b) "DPIX_AF_DMAX_IDS"
#define device_bar_CAVM_DPIX_AF_DMAX_IDS(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_IDS(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_IDS(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_ids2
 *
 * DPI DMA Request ID 2 Registers
 * These registers configure the NPA auras for each request queue.
 */
union cavm_dpix_af_dmax_ids2
{
    uint64_t u;
    struct cavm_dpix_af_dmax_ids2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t inst_aura             : 20; /**< [ 19:  0](R/W) Instruction NPA aura. The NPA guest-aura that the instruction chunk for
                                                                 DMA operations page will be returned to when freed. */
#else /* Word 0 - Little Endian */
        uint64_t inst_aura             : 20; /**< [ 19:  0](R/W) Instruction NPA aura. The NPA guest-aura that the instruction chunk for
                                                                 DMA operations page will be returned to when freed. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_ids2_s cn; */
};
typedef union cavm_dpix_af_dmax_ids2 cavm_dpix_af_dmax_ids2_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_IDS2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_IDS2(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000020ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_IDS2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_IDS2(a,b) cavm_dpix_af_dmax_ids2_t
#define bustype_CAVM_DPIX_AF_DMAX_IDS2(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_IDS2(a,b) "DPIX_AF_DMAX_IDS2"
#define device_bar_CAVM_DPIX_AF_DMAX_IDS2(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_IDS2(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_IDS2(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_pri
 *
 * DPI DMA Instruction Queue Priority Register
 */
union cavm_dpix_af_dmax_pri
{
    uint64_t u;
    struct cavm_dpix_af_dmax_pri_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t pri_th_en             : 1;  /**< [  1:  1](R/W) Controls whether low priority queues use the
                                                                 DPI_REQQ_GENBUFF_TH_LIMIT[LOPRI_LIMIT] setting. If PRI_TH_EN is set, the request
                                                                 logic uses the
                                                                 DPI_REQQ_GENBUFF_TH_LIMIT[LOPRI_LIMIT] during arbitration. If PRI_TH_EN is
                                                                 clear, the arbitration ignores the DPI_REQQ_GENBUFF_TH_LIMIT[LOPRI_LIMIT] and
                                                                 uses the DPI_REQQ_GENBUFF_TH_LIMIT settings as a high priority queue. */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Priority of the instruction queue. Choices are 0=High priority or 1=Low
                                                                 Priority. Refer to the DPI_DMA_ARB_CONTROL register for the effect of
                                                                 setting an instruction queue priority. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Priority of the instruction queue. Choices are 0=High priority or 1=Low
                                                                 Priority. Refer to the DPI_DMA_ARB_CONTROL register for the effect of
                                                                 setting an instruction queue priority. */
        uint64_t pri_th_en             : 1;  /**< [  1:  1](R/W) Controls whether low priority queues use the
                                                                 DPI_REQQ_GENBUFF_TH_LIMIT[LOPRI_LIMIT] setting. If PRI_TH_EN is set, the request
                                                                 logic uses the
                                                                 DPI_REQQ_GENBUFF_TH_LIMIT[LOPRI_LIMIT] during arbitration. If PRI_TH_EN is
                                                                 clear, the arbitration ignores the DPI_REQQ_GENBUFF_TH_LIMIT[LOPRI_LIMIT] and
                                                                 uses the DPI_REQQ_GENBUFF_TH_LIMIT settings as a high priority queue. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_pri_s cn; */
};
typedef union cavm_dpix_af_dmax_pri cavm_dpix_af_dmax_pri_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_PRI(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_PRI(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000040ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_PRI", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_PRI(a,b) cavm_dpix_af_dmax_pri_t
#define bustype_CAVM_DPIX_AF_DMAX_PRI(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_PRI(a,b) "DPIX_AF_DMAX_PRI"
#define device_bar_CAVM_DPIX_AF_DMAX_PRI(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_PRI(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_PRI(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_qrst
 *
 * DPI DMA Instruction Queue Reset Register
 */
union cavm_dpix_af_dmax_qrst
{
    uint64_t u;
    struct cavm_dpix_af_dmax_qrst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t qrst                  : 1;  /**< [  0:  0](R/W1/H) Resets the instruction queue to clear out the local cache, reset the pointer
                                                                 inside the chunk, and clear the doorbell count. Has no effect unless the
                                                                 corresponding DPI()_DMA_ENG()_EN[QEN]=0 and DPI()_VDMA()_SADDR[IDLE]=1.
                                                                 Software must wait for this bit to clear before reenabling the request queue.
                                                                 It takes time for the request cache to drain and return any outstanding request queue buffers
                                                                 and return them to the free list. Each Engine may have some number of instructions in
                                                                 it's FIFO after the reset is completed. These in-flight instructions are executed and completed. */
#else /* Word 0 - Little Endian */
        uint64_t qrst                  : 1;  /**< [  0:  0](R/W1/H) Resets the instruction queue to clear out the local cache, reset the pointer
                                                                 inside the chunk, and clear the doorbell count. Has no effect unless the
                                                                 corresponding DPI()_DMA_ENG()_EN[QEN]=0 and DPI()_VDMA()_SADDR[IDLE]=1.
                                                                 Software must wait for this bit to clear before reenabling the request queue.
                                                                 It takes time for the request cache to drain and return any outstanding request queue buffers
                                                                 and return them to the free list. Each Engine may have some number of instructions in
                                                                 it's FIFO after the reset is completed. These in-flight instructions are executed and completed. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_qrst_s cn; */
};
typedef union cavm_dpix_af_dmax_qrst cavm_dpix_af_dmax_qrst_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_QRST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_QRST(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000030ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_QRST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_QRST(a,b) cavm_dpix_af_dmax_qrst_t
#define bustype_CAVM_DPIX_AF_DMAX_QRST(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_QRST(a,b) "DPIX_AF_DMAX_QRST"
#define device_bar_CAVM_DPIX_AF_DMAX_QRST(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_QRST(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_QRST(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_reqbnk0
 *
 * DPI DMA Request State Bank 0 Registers
 * These registers provide the current contents of the request state machine, bank 0.
 */
union cavm_dpix_af_dmax_reqbnk0
{
    uint64_t u;
    struct cavm_dpix_af_dmax_reqbnk0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t csize_csr             : 14; /**< [ 45: 32](RO/H) Chunk size. */
        uint64_t dbell_cnt             : 32; /**< [ 31:  0](RO/H) Doorbell count. */
#else /* Word 0 - Little Endian */
        uint64_t dbell_cnt             : 32; /**< [ 31:  0](RO/H) Doorbell count. */
        uint64_t csize_csr             : 14; /**< [ 45: 32](RO/H) Chunk size. */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_reqbnk0_s cn; */
};
typedef union cavm_dpix_af_dmax_reqbnk0 cavm_dpix_af_dmax_reqbnk0_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_REQBNK0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_REQBNK0(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000008ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_REQBNK0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_REQBNK0(a,b) cavm_dpix_af_dmax_reqbnk0_t
#define bustype_CAVM_DPIX_AF_DMAX_REQBNK0(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_REQBNK0(a,b) "DPIX_AF_DMAX_REQBNK0"
#define device_bar_CAVM_DPIX_AF_DMAX_REQBNK0(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_REQBNK0(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_REQBNK0(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma#_reqbnk1
 *
 * DPI DMA Request State Bank 1 Registers
 * These registers provide the current contents of the request state machine, bank 1.
 */
union cavm_dpix_af_dmax_reqbnk1
{
    uint64_t u;
    struct cavm_dpix_af_dmax_reqbnk1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t csize_off             : 14; /**< [ 60: 47](RO/H) Chunk size offset. */
        uint64_t caddr_val             : 1;  /**< [ 46: 46](RO/H) Chunk address valid. Used when loading new chunk. */
        uint64_t saddr                 : 46; /**< [ 45:  0](RO/H) Starting address. The 128-byte aligned starting or chunk address. [SADDR] is address bit
                                                                 of the starting instructions address. */
#else /* Word 0 - Little Endian */
        uint64_t saddr                 : 46; /**< [ 45:  0](RO/H) Starting address. The 128-byte aligned starting or chunk address. [SADDR] is address bit
                                                                 of the starting instructions address. */
        uint64_t caddr_val             : 1;  /**< [ 46: 46](RO/H) Chunk address valid. Used when loading new chunk. */
        uint64_t csize_off             : 14; /**< [ 60: 47](RO/H) Chunk size offset. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dmax_reqbnk1_s cn; */
};
typedef union cavm_dpix_af_dmax_reqbnk1 cavm_dpix_af_dmax_reqbnk1_t;

static inline uint64_t CAVM_DPIX_AF_DMAX_REQBNK1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMAX_REQBNK1(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180000010ll + 0x10000000ll * ((a) & 0x1) + 0x800ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_DMAX_REQBNK1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMAX_REQBNK1(a,b) cavm_dpix_af_dmax_reqbnk1_t
#define bustype_CAVM_DPIX_AF_DMAX_REQBNK1(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMAX_REQBNK1(a,b) "DPIX_AF_DMAX_REQBNK1"
#define device_bar_CAVM_DPIX_AF_DMAX_REQBNK1(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMAX_REQBNK1(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMAX_REQBNK1(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_arb_control
 *
 * DPI DMA Arbiter Control Register
 * This register controls request control arbiter modes.
 */
union cavm_dpix_af_dma_arb_control
{
    uint64_t u;
    struct cavm_dpix_af_dma_arb_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t rd_eng_ae_th          : 4;  /**< [ 27: 24](R/W) Read Engine almost empty threshold setting. When the value of the read engine
                                                                 instruction FIFO falls below this setting the almost empty flag is asserted.
                                                                 When the read engine FIFO is not almost empty, the upstream arbitration logic
                                                                 only allows high-priority traffic. When the read engine FIFO is almost empty,
                                                                 both low and high priority traffic is enabled to enter the read engine
                                                                 instruction FIFO. */
        uint64_t reserved_18_23        : 6;
        uint64_t mode                  : 1;  /**< [ 17: 17](R/W) Arbiter Mode.
                                                                 0 = Strict priority. High priority DMA commands are processed before
                                                                 low priority DMA commands.
                                                                 1 = Weighted round-robin mode. Operation further controlled by [WRR_MODE] and
                                                                 [HI_WT]/[LO_WT]. */
        uint64_t wrr_mode              : 1;  /**< [ 16: 16](R/W) Weighted round-robin mode.
                                                                 0 = Strict priority, high priority DMA commands are serviced until Hi priority
                                                                 credits are exhausted.
                                                                 1 = WRR mode. High and Low priority DMA commands are serviced round-robin until
                                                                 high or low priority credits defined by HI_WT and LO_WT are exhausted. */
        uint64_t reserved_15           : 1;
        uint64_t hi_wt                 : 7;  /**< [ 14:  8](R/W) High priority weight. [HI_WT]=N+1 (1-128). Used when [MODE]=1 (WRR). */
        uint64_t reserved_7            : 1;
        uint64_t lo_wt                 : 7;  /**< [  6:  0](R/W) Low priority weight. [LO_WT]=N+1 (1-128) Used when [MODE]=1 (WRR). */
#else /* Word 0 - Little Endian */
        uint64_t lo_wt                 : 7;  /**< [  6:  0](R/W) Low priority weight. [LO_WT]=N+1 (1-128) Used when [MODE]=1 (WRR). */
        uint64_t reserved_7            : 1;
        uint64_t hi_wt                 : 7;  /**< [ 14:  8](R/W) High priority weight. [HI_WT]=N+1 (1-128). Used when [MODE]=1 (WRR). */
        uint64_t reserved_15           : 1;
        uint64_t wrr_mode              : 1;  /**< [ 16: 16](R/W) Weighted round-robin mode.
                                                                 0 = Strict priority, high priority DMA commands are serviced until Hi priority
                                                                 credits are exhausted.
                                                                 1 = WRR mode. High and Low priority DMA commands are serviced round-robin until
                                                                 high or low priority credits defined by HI_WT and LO_WT are exhausted. */
        uint64_t mode                  : 1;  /**< [ 17: 17](R/W) Arbiter Mode.
                                                                 0 = Strict priority. High priority DMA commands are processed before
                                                                 low priority DMA commands.
                                                                 1 = Weighted round-robin mode. Operation further controlled by [WRR_MODE] and
                                                                 [HI_WT]/[LO_WT]. */
        uint64_t reserved_18_23        : 6;
        uint64_t rd_eng_ae_th          : 4;  /**< [ 27: 24](R/W) Read Engine almost empty threshold setting. When the value of the read engine
                                                                 instruction FIFO falls below this setting the almost empty flag is asserted.
                                                                 When the read engine FIFO is not almost empty, the upstream arbitration logic
                                                                 only allows high-priority traffic. When the read engine FIFO is almost empty,
                                                                 both low and high priority traffic is enabled to enter the read engine
                                                                 instruction FIFO. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_arb_control_s cn; */
};
typedef union cavm_dpix_af_dma_arb_control cavm_dpix_af_dma_arb_control_t;

static inline uint64_t CAVM_DPIX_AF_DMA_ARB_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_ARB_CONTROL(uint64_t a)
{
    if (a<=1)
        return 0x840180010028ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_DMA_ARB_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_ARB_CONTROL(a) cavm_dpix_af_dma_arb_control_t
#define bustype_CAVM_DPIX_AF_DMA_ARB_CONTROL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_ARB_CONTROL(a) "DPIX_AF_DMA_ARB_CONTROL"
#define device_bar_CAVM_DPIX_AF_DMA_ARB_CONTROL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_ARB_CONTROL(a) (a)
#define arguments_CAVM_DPIX_AF_DMA_ARB_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_cc#_cnt
 *
 * DPI DMA Per-Process Instruction Completion Counter Register
 * These registers provide a per-process instruction completion counter.
 */
union cavm_dpix_af_dma_ccx_cnt
{
    uint64_t u;
    struct cavm_dpix_af_dma_ccx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cnt                   : 16; /**< [ 15:  0](R/W/H) DPI DMA per-process instruction completion counter. DPI can increment a counter upon
                                                                 completion of a DPI DMA instruction. DPI subtracts the value written
                                                                 from [CNT] on a software write. A nonzero [CNT] asserts the corresponding
                                                                 DPI()_DMA_CC()_INT bit.

                                                                 DPI increments the [CNT] selected by DPI_DMA_INSTR_HDR_S[PTR] by one after completing
                                                                 a DPI_DMA_INSTR_HDR_S[PT]=DPI_HDR_PT_E::CNT DPI DMA instruction. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 16; /**< [ 15:  0](R/W/H) DPI DMA per-process instruction completion counter. DPI can increment a counter upon
                                                                 completion of a DPI DMA instruction. DPI subtracts the value written
                                                                 from [CNT] on a software write. A nonzero [CNT] asserts the corresponding
                                                                 DPI()_DMA_CC()_INT bit.

                                                                 DPI increments the [CNT] selected by DPI_DMA_INSTR_HDR_S[PTR] by one after completing
                                                                 a DPI_DMA_INSTR_HDR_S[PT]=DPI_HDR_PT_E::CNT DPI DMA instruction. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_ccx_cnt_s cn; */
};
typedef union cavm_dpix_af_dma_ccx_cnt cavm_dpix_af_dma_ccx_cnt_t;

static inline uint64_t CAVM_DPIX_AF_DMA_CCX_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_CCX_CNT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x840180012000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("DPIX_AF_DMA_CCX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_CCX_CNT(a,b) cavm_dpix_af_dma_ccx_cnt_t
#define bustype_CAVM_DPIX_AF_DMA_CCX_CNT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_CCX_CNT(a,b) "DPIX_AF_DMA_CCX_CNT"
#define device_bar_CAVM_DPIX_AF_DMA_CCX_CNT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_CCX_CNT(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMA_CCX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_cc#_int
 *
 * DPI DMA Per-Process Instruction Completion Interrupt Register
 * This register contains per-process completion interrupt bits.
 */
union cavm_dpix_af_dma_ccx_int
{
    uint64_t u;
    struct cavm_dpix_af_dma_ccx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) DPI DMA per-process instruction completion interrupt. See DPI_AF_DMA_CC()_CNT.

                                                                 If these interrupts are enabled, typically the DPI_AF_DMA_CC()_INT interrupts
                                                                 would not be used and should not be enabled. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) DPI DMA per-process instruction completion interrupt. See DPI_AF_DMA_CC()_CNT.

                                                                 If these interrupts are enabled, typically the DPI_AF_DMA_CC()_INT interrupts
                                                                 would not be used and should not be enabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_ccx_int_s cn; */
};
typedef union cavm_dpix_af_dma_ccx_int cavm_dpix_af_dma_ccx_int_t;

static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x840180011000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("DPIX_AF_DMA_CCX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_CCX_INT(a,b) cavm_dpix_af_dma_ccx_int_t
#define bustype_CAVM_DPIX_AF_DMA_CCX_INT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_CCX_INT(a,b) "DPIX_AF_DMA_CCX_INT"
#define device_bar_CAVM_DPIX_AF_DMA_CCX_INT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_CCX_INT(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMA_CCX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_cc#_int_ena_w1c
 *
 * DPI DMA Per-Process Instruction Completion Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_dma_ccx_int_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_dma_ccx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_DMA_CC(0..63)_INT[COMPLETE]. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_DMA_CC(0..63)_INT[COMPLETE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_ccx_int_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_dma_ccx_int_ena_w1c cavm_dpix_af_dma_ccx_int_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x840180011800ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("DPIX_AF_DMA_CCX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(a,b) cavm_dpix_af_dma_ccx_int_ena_w1c_t
#define bustype_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(a,b) "DPIX_AF_DMA_CCX_INT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_cc#_int_ena_w1s
 *
 * DPI DMA Per-Process Instruction Completion Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_dma_ccx_int_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_dma_ccx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_DMA_CC(0..63)_INT[COMPLETE]. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_DMA_CC(0..63)_INT[COMPLETE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_ccx_int_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_dma_ccx_int_ena_w1s cavm_dpix_af_dma_ccx_int_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x840180011c00ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("DPIX_AF_DMA_CCX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(a,b) cavm_dpix_af_dma_ccx_int_ena_w1s_t
#define bustype_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(a,b) "DPIX_AF_DMA_CCX_INT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMA_CCX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_cc#_int_w1s
 *
 * DPI DMA Per-Process Instruction Completion Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_dpix_af_dma_ccx_int_w1s
{
    uint64_t u;
    struct cavm_dpix_af_dma_ccx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_DMA_CC(0..63)_INT[COMPLETE]. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_DMA_CC(0..63)_INT[COMPLETE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_ccx_int_w1s_s cn; */
};
typedef union cavm_dpix_af_dma_ccx_int_w1s cavm_dpix_af_dma_ccx_int_w1s_t;

static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_CCX_INT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x840180011400ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("DPIX_AF_DMA_CCX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_CCX_INT_W1S(a,b) cavm_dpix_af_dma_ccx_int_w1s_t
#define bustype_CAVM_DPIX_AF_DMA_CCX_INT_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_CCX_INT_W1S(a,b) "DPIX_AF_DMA_CCX_INT_W1S"
#define device_bar_CAVM_DPIX_AF_DMA_CCX_INT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_CCX_INT_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMA_CCX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_control
 *
 * DPI DMA Control Register
 * This register controls the operation of DMA input and output.
 */
union cavm_dpix_af_dma_control
{
    uint64_t u;
    struct cavm_dpix_af_dma_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t port1_en              : 1;  /**< [ 57: 57](R/W) Enables port 1 of EBUS when set. If clear, Inbound/External instructions with
                                                                 FPORT=1 or Outbound/External instructions with LPORT=1 alias to FPORT=0/LPORT=0 */
        uint64_t pkt_en                : 1;  /**< [ 56: 56](R/W) Enables the packet interface.
                                                                 When [PKT_EN]=1, software must enable engines 4 and 5. [DMA_ENB]\<5\>=1 and [DMA_ENB]\<4\>=1. */
        uint64_t uo_dis                : 1;  /**< [ 55: 55](R/W) Disables the use of the unordered mode for EBUS packet reads. */
        uint64_t reserved_54           : 1;
        uint64_t dma_enb               : 6;  /**< [ 53: 48](R/W) DMA engine enable. Enables the operation of the DMA engine. After being enabled an engine
                                                                 should not be disabled while processing instructions.
                                                                 Engines 4 and 5 are only used for SDP Packet transfers, When [PKT_EN]=1, then
                                                                 software must enable both
                                                                 engine 4 and 5. [DMA_ENB]\<5\>=1 and [DMA_ENB]\<4\>=1. */
        uint64_t wqecsdis              : 1;  /**< [ 47: 47](R/W) Work queue completion status disable. See DPI_HDR_PT_WQP_E.

                                                                 When [WQECSDIS] is set, DPI never writes completion status into a work queue entry. */
        uint64_t wqecsoff              : 7;  /**< [ 46: 40](R/W) Work queue completion status byte offset. For a DPI_HDR_PT_WQP_E::STATUSCA
                                                                 or DPI_HDR_PT_WQP_E::STATUSNC DPI DMA instruction, DPI writes a
                                                                 non-DPI_CS_E::NOERR (i.e. nonzero) completion status byte to
                                                                 LLC/DRAM address
                                                                    (DPI_DMA_INSTR_HDR_S[PTR] & 0xFFFFFFFFFFFFFFF8) + [WQECSOFF]

                                                                 With the reset value 0x7, DPI will write WORD0\<7:0\> of the WQE. */
        uint64_t zbwcsen               : 1;  /**< [ 39: 39](R/W) Zero-byte-write completion status enable.
                                                                 See DPI_HDR_PT_E::ZBW_CA and DPI_HDR_PT_E::ZBW_NC. */
        uint64_t wqecsmode             : 2;  /**< [ 38: 37](R/W) WQE completion status mode. Relevant for DPI DMA instructions with
                                                                 DPI_DMA_INSTR_HDR_S[PT]=DPI_HDR_PT_E::WQP when [WQECSDIS]=0.
                                                                 0x0 = Normal behavior. DPI will not write the completion status byte for
                                                                       DPI_HDR_PT_E::WQP DPI DMA instructions with DPI_CS_E::NOERR (i.e. zero)
                                                                       completion status, regardless of the DPI_HDR_PT_WQP_E selection of
                                                                       DPI_DMA_INSTR_HDR_S[PTR]\<2:0\>. DPI will write the completion
                                                                       status byte for all other DPI_CS_E (i.e. nonzero) values
                                                                       when DPI_DMA_INSTR_HDR_S[PTR]\<2:0\> is DPI_HDR_PT_WQP_E::STATUSCA
                                                                       or DPI_HDR_PT_WQP_E::STATUSNC and [WQECSDIS] is clear.
                                                                 0x1 = DPI will perform the completion status byte write for all
                                                                       DPI_HDR_PT_E::WQP DPI DMA instructions when DPI_DMA_INSTR_HDR_S[PTR]\<2:0\>
                                                                       is DPI_HDR_PT_WQP_E::STATUSCA or DPI_HDR_PT_WQP_E::STATUSNC
                                                                       and [WQECSDIS] is clear, regardless of the DPI_CS_E completion
                                                                       status value for the instruction.
                                                                 0x2 = DPI will not wait for the completion status write commit before issuing
                                                                       SSO work queue add.
                                                                 0x3 = Both debug modes specified above (under 0x1 and 0x2) are enabled. */
        uint64_t reserved_33_36        : 4;
        uint64_t ldwb                  : 1;  /**< [ 32: 32](R/W) Load-don't-write-back. When set, the hardware is able to issue LDWB commands for pointers
                                                                 that are being freed. As a result, the line will not be written back when replaced.
                                                                 When clear, the hardware issues regular load commands to the cache which cause the
                                                                 line to be written back before being replaced. */
        uint64_t reserved_20_31        : 12;
        uint64_t o_add1                : 1;  /**< [ 19: 19](R/W) Add one.
                                                                 0 = The number of bytes in the DMA transfer is added to SDP()_EPF()_DMA_CNT().
                                                                 1 = Add 1 to the SDP()_EPF()_DMA_CNT() DMA counters. */
        uint64_t o_ro                  : 1;  /**< [ 18: 18](R/W) If [O_MODE]=1 (DPTR format 0), [O_RO] is the relaxed ordering mode attribute
                                                                 for PCIe DMA transactions.

                                                                 If [O_MODE]=0 (DPTR format 1), [O_RO] is MACADD\<60\> in the PCIe MAC address and
                                                                 the relaxed ordering mode attribute comes from DPTR\<60\> in the DMA MAC pointer. */
        uint64_t o_ns                  : 1;  /**< [ 17: 17](R/W) If [O_MODE]=1 (DPTR format 0), [O_NS] is the no snoop attribute for PCIe DMA
                                                                 transactions.

                                                                 If [O_MODE]=0 (DPTR format 1), [O_NS] is MACADD\<61\> in the PCIe MAC Address and
                                                                 the no snoop mode attribute comes from DPTR\<61\> in the DMA MAC pointer. */
        uint64_t o_es                  : 2;  /**< [ 16: 15](R/W) Reserved. */
        uint64_t o_mode                : 1;  /**< [ 14: 14](R/W) Select DPTR format mode.
                                                                 0 = DPTR format 1 is used. Use register values for address; use pointer values for ES, NS,
                                                                 RO.
                                                                 1 = DPTR format 0 is used. Use pointer values for address; use register values for ES, NS,
                                                                 RO. */
        uint64_t reserved_1_13         : 13;
        uint64_t db_mode               : 1;  /**< [  0:  0](R/W) DMA Burst Write Mode
                                                                 0 = Enables 1KB DMA write transfers between RDB and EBO, NCB and SDP.
                                                                 1 = DMA write tranfers performed in MPS bursts between RDB and EBO, NCB and SDP. */
#else /* Word 0 - Little Endian */
        uint64_t db_mode               : 1;  /**< [  0:  0](R/W) DMA Burst Write Mode
                                                                 0 = Enables 1KB DMA write transfers between RDB and EBO, NCB and SDP.
                                                                 1 = DMA write tranfers performed in MPS bursts between RDB and EBO, NCB and SDP. */
        uint64_t reserved_1_13         : 13;
        uint64_t o_mode                : 1;  /**< [ 14: 14](R/W) Select DPTR format mode.
                                                                 0 = DPTR format 1 is used. Use register values for address; use pointer values for ES, NS,
                                                                 RO.
                                                                 1 = DPTR format 0 is used. Use pointer values for address; use register values for ES, NS,
                                                                 RO. */
        uint64_t o_es                  : 2;  /**< [ 16: 15](R/W) Reserved. */
        uint64_t o_ns                  : 1;  /**< [ 17: 17](R/W) If [O_MODE]=1 (DPTR format 0), [O_NS] is the no snoop attribute for PCIe DMA
                                                                 transactions.

                                                                 If [O_MODE]=0 (DPTR format 1), [O_NS] is MACADD\<61\> in the PCIe MAC Address and
                                                                 the no snoop mode attribute comes from DPTR\<61\> in the DMA MAC pointer. */
        uint64_t o_ro                  : 1;  /**< [ 18: 18](R/W) If [O_MODE]=1 (DPTR format 0), [O_RO] is the relaxed ordering mode attribute
                                                                 for PCIe DMA transactions.

                                                                 If [O_MODE]=0 (DPTR format 1), [O_RO] is MACADD\<60\> in the PCIe MAC address and
                                                                 the relaxed ordering mode attribute comes from DPTR\<60\> in the DMA MAC pointer. */
        uint64_t o_add1                : 1;  /**< [ 19: 19](R/W) Add one.
                                                                 0 = The number of bytes in the DMA transfer is added to SDP()_EPF()_DMA_CNT().
                                                                 1 = Add 1 to the SDP()_EPF()_DMA_CNT() DMA counters. */
        uint64_t reserved_20_31        : 12;
        uint64_t ldwb                  : 1;  /**< [ 32: 32](R/W) Load-don't-write-back. When set, the hardware is able to issue LDWB commands for pointers
                                                                 that are being freed. As a result, the line will not be written back when replaced.
                                                                 When clear, the hardware issues regular load commands to the cache which cause the
                                                                 line to be written back before being replaced. */
        uint64_t reserved_33_36        : 4;
        uint64_t wqecsmode             : 2;  /**< [ 38: 37](R/W) WQE completion status mode. Relevant for DPI DMA instructions with
                                                                 DPI_DMA_INSTR_HDR_S[PT]=DPI_HDR_PT_E::WQP when [WQECSDIS]=0.
                                                                 0x0 = Normal behavior. DPI will not write the completion status byte for
                                                                       DPI_HDR_PT_E::WQP DPI DMA instructions with DPI_CS_E::NOERR (i.e. zero)
                                                                       completion status, regardless of the DPI_HDR_PT_WQP_E selection of
                                                                       DPI_DMA_INSTR_HDR_S[PTR]\<2:0\>. DPI will write the completion
                                                                       status byte for all other DPI_CS_E (i.e. nonzero) values
                                                                       when DPI_DMA_INSTR_HDR_S[PTR]\<2:0\> is DPI_HDR_PT_WQP_E::STATUSCA
                                                                       or DPI_HDR_PT_WQP_E::STATUSNC and [WQECSDIS] is clear.
                                                                 0x1 = DPI will perform the completion status byte write for all
                                                                       DPI_HDR_PT_E::WQP DPI DMA instructions when DPI_DMA_INSTR_HDR_S[PTR]\<2:0\>
                                                                       is DPI_HDR_PT_WQP_E::STATUSCA or DPI_HDR_PT_WQP_E::STATUSNC
                                                                       and [WQECSDIS] is clear, regardless of the DPI_CS_E completion
                                                                       status value for the instruction.
                                                                 0x2 = DPI will not wait for the completion status write commit before issuing
                                                                       SSO work queue add.
                                                                 0x3 = Both debug modes specified above (under 0x1 and 0x2) are enabled. */
        uint64_t zbwcsen               : 1;  /**< [ 39: 39](R/W) Zero-byte-write completion status enable.
                                                                 See DPI_HDR_PT_E::ZBW_CA and DPI_HDR_PT_E::ZBW_NC. */
        uint64_t wqecsoff              : 7;  /**< [ 46: 40](R/W) Work queue completion status byte offset. For a DPI_HDR_PT_WQP_E::STATUSCA
                                                                 or DPI_HDR_PT_WQP_E::STATUSNC DPI DMA instruction, DPI writes a
                                                                 non-DPI_CS_E::NOERR (i.e. nonzero) completion status byte to
                                                                 LLC/DRAM address
                                                                    (DPI_DMA_INSTR_HDR_S[PTR] & 0xFFFFFFFFFFFFFFF8) + [WQECSOFF]

                                                                 With the reset value 0x7, DPI will write WORD0\<7:0\> of the WQE. */
        uint64_t wqecsdis              : 1;  /**< [ 47: 47](R/W) Work queue completion status disable. See DPI_HDR_PT_WQP_E.

                                                                 When [WQECSDIS] is set, DPI never writes completion status into a work queue entry. */
        uint64_t dma_enb               : 6;  /**< [ 53: 48](R/W) DMA engine enable. Enables the operation of the DMA engine. After being enabled an engine
                                                                 should not be disabled while processing instructions.
                                                                 Engines 4 and 5 are only used for SDP Packet transfers, When [PKT_EN]=1, then
                                                                 software must enable both
                                                                 engine 4 and 5. [DMA_ENB]\<5\>=1 and [DMA_ENB]\<4\>=1. */
        uint64_t reserved_54           : 1;
        uint64_t uo_dis                : 1;  /**< [ 55: 55](R/W) Disables the use of the unordered mode for EBUS packet reads. */
        uint64_t pkt_en                : 1;  /**< [ 56: 56](R/W) Enables the packet interface.
                                                                 When [PKT_EN]=1, software must enable engines 4 and 5. [DMA_ENB]\<5\>=1 and [DMA_ENB]\<4\>=1. */
        uint64_t port1_en              : 1;  /**< [ 57: 57](R/W) Enables port 1 of EBUS when set. If clear, Inbound/External instructions with
                                                                 FPORT=1 or Outbound/External instructions with LPORT=1 alias to FPORT=0/LPORT=0 */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_control_s cn; */
};
typedef union cavm_dpix_af_dma_control cavm_dpix_af_dma_control_t;

static inline uint64_t CAVM_DPIX_AF_DMA_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_CONTROL(uint64_t a)
{
    if (a<=1)
        return 0x840180010020ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_DMA_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_CONTROL(a) cavm_dpix_af_dma_control_t
#define bustype_CAVM_DPIX_AF_DMA_CONTROL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_CONTROL(a) "DPIX_AF_DMA_CONTROL"
#define device_bar_CAVM_DPIX_AF_DMA_CONTROL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_CONTROL(a) (a)
#define arguments_CAVM_DPIX_AF_DMA_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_eng#_en
 *
 * DPI DMA-Engine MOLR Registers
 * These registers provide control for the DMA engines.
 */
union cavm_dpix_af_dma_engx_en
{
    uint64_t u;
    struct cavm_dpix_af_dma_engx_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t eng_molr              : 10; /**< [ 41: 32](R/W) Per-engine maximum outstanding read request. 0x0 means no maximum per engine
                                                                 (although it will be still limited by the per port MOLR value.) */
        uint64_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_31         : 32;
        uint64_t eng_molr              : 10; /**< [ 41: 32](R/W) Per-engine maximum outstanding read request. 0x0 means no maximum per engine
                                                                 (although it will be still limited by the per port MOLR value.) */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_engx_en_s cn; */
};
typedef union cavm_dpix_af_dma_engx_en cavm_dpix_af_dma_engx_en_t;

static inline uint64_t CAVM_DPIX_AF_DMA_ENGX_EN(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_ENGX_EN(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=5))
        return 0x840180010040ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("DPIX_AF_DMA_ENGX_EN", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_ENGX_EN(a,b) cavm_dpix_af_dma_engx_en_t
#define bustype_CAVM_DPIX_AF_DMA_ENGX_EN(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_ENGX_EN(a,b) "DPIX_AF_DMA_ENGX_EN"
#define device_bar_CAVM_DPIX_AF_DMA_ENGX_EN(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_ENGX_EN(a,b) (a)
#define arguments_CAVM_DPIX_AF_DMA_ENGX_EN(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_dma_intl_sel
 *
 * DPI Internal DMA Engine Select Register
 * This register controls the engine select for internal DMAs.
 */
union cavm_dpix_af_dma_intl_sel
{
    uint64_t u;
    struct cavm_dpix_af_dma_intl_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eng                   : 32; /**< [ 31:  0](R/W) Engine select 0/1 for each instruction queue for internal only DMAs. Each bit
                                                                 corresponds to an instruction queue. This can only be changed prior to enabling
                                                                 the DPI engines. */
#else /* Word 0 - Little Endian */
        uint64_t eng                   : 32; /**< [ 31:  0](R/W) Engine select 0/1 for each instruction queue for internal only DMAs. Each bit
                                                                 corresponds to an instruction queue. This can only be changed prior to enabling
                                                                 the DPI engines. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_dma_intl_sel_s cn; */
};
typedef union cavm_dpix_af_dma_intl_sel cavm_dpix_af_dma_intl_sel_t;

static inline uint64_t CAVM_DPIX_AF_DMA_INTL_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_DMA_INTL_SEL(uint64_t a)
{
    if (a<=1)
        return 0x840180010030ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_DMA_INTL_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_DMA_INTL_SEL(a) cavm_dpix_af_dma_intl_sel_t
#define bustype_CAVM_DPIX_AF_DMA_INTL_SEL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_DMA_INTL_SEL(a) "DPIX_AF_DMA_INTL_SEL"
#define device_bar_CAVM_DPIX_AF_DMA_INTL_SEL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_DMA_INTL_SEL(a) (a)
#define arguments_CAVM_DPIX_AF_DMA_INTL_SEL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ebo_wr_arb_ctrl
 *
 * DPI EBO Write Arbiter Control Register
 * This register controls the weights/credits allocated to SDP outbound write traffic
 * and DPI Outbound/External Write traffic.  The ratio between SDP_OUT_WT and
 * DMA_EBO_WT determine the bandwidth ratio between both data paths when both are
 * requesting access and the EBO write path is backed up.
 */
union cavm_dpix_af_ebo_wr_arb_ctrl
{
    uint64_t u;
    struct cavm_dpix_af_ebo_wr_arb_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sdp_out_wt            : 8;  /**< [ 15:  8](R/W) SDP Write weight used in DWRR arbitration. The weight is in number of cycles on
                                                                 the EBO data bus. When an SDP write is granted the number of cycles requested is
                                                                 subtraced from the arbiter's credit counter. An arbiter refresh adds SDP_OUT_WT
                                                                 credits to the credit counter. Software should program the weight to a value greater than
                                                                 the MPS/32. Example - MPS=1, which is 256B. The min value should be \> 256/32 or \> 8. */
        uint64_t dma_ebo_wt            : 8;  /**< [  7:  0](R/W) DPI DMA EBO Write weight used in DWRR arbitration. The weight is in number of
                                                                 cycles on the EBO data bus. When a DPI DMA EBO write is granted the number of
                                                                 cycles requested is subtraced from the arbiter's credit counter. An arbiter
                                                                 refresh adds DMA_EBO_WT credits to the credit counter. Software should program the
                                                                 weight to a value greater than the MPS/32. Example - MPS=1, which is 256B.
                                                                 The min value should be \> 256/32 or \> 8. */
#else /* Word 0 - Little Endian */
        uint64_t dma_ebo_wt            : 8;  /**< [  7:  0](R/W) DPI DMA EBO Write weight used in DWRR arbitration. The weight is in number of
                                                                 cycles on the EBO data bus. When a DPI DMA EBO write is granted the number of
                                                                 cycles requested is subtraced from the arbiter's credit counter. An arbiter
                                                                 refresh adds DMA_EBO_WT credits to the credit counter. Software should program the
                                                                 weight to a value greater than the MPS/32. Example - MPS=1, which is 256B.
                                                                 The min value should be \> 256/32 or \> 8. */
        uint64_t sdp_out_wt            : 8;  /**< [ 15:  8](R/W) SDP Write weight used in DWRR arbitration. The weight is in number of cycles on
                                                                 the EBO data bus. When an SDP write is granted the number of cycles requested is
                                                                 subtraced from the arbiter's credit counter. An arbiter refresh adds SDP_OUT_WT
                                                                 credits to the credit counter. Software should program the weight to a value greater than
                                                                 the MPS/32. Example - MPS=1, which is 256B. The min value should be \> 256/32 or \> 8. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ebo_wr_arb_ctrl_s cn; */
};
typedef union cavm_dpix_af_ebo_wr_arb_ctrl cavm_dpix_af_ebo_wr_arb_ctrl_t;

static inline uint64_t CAVM_DPIX_AF_EBO_WR_ARB_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EBO_WR_ARB_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x840180010038ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_EBO_WR_ARB_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EBO_WR_ARB_CTRL(a) cavm_dpix_af_ebo_wr_arb_ctrl_t
#define bustype_CAVM_DPIX_AF_EBO_WR_ARB_CTRL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EBO_WR_ARB_CTRL(a) "DPIX_AF_EBO_WR_ARB_CTRL"
#define device_bar_CAVM_DPIX_AF_EBO_WR_ARB_CTRL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EBO_WR_ARB_CTRL(a) (a)
#define arguments_CAVM_DPIX_AF_EBO_WR_ARB_CTRL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ebus_port#_cfg
 *
 * DPI EBus Port Configuration Register
 * This register configures the max read request size, max payload size, and max number of EBUS
 * tags in use.
 */
union cavm_dpix_af_ebus_portx_cfg
{
    uint64_t u;
    struct cavm_dpix_af_ebus_portx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t port_dis              : 1;  /**< [ 21: 21](R/W) Disable Ebus port control. One bit per port.
                                                                 0 = EBUS Port is in use, default.
                                                                 1 = EBUS Port not in use, disables clock enable from the EBUS port. */
        uint64_t exact_rd_dis          : 1;  /**< [ 20: 20](R/W) Exact read mode disable.
                                                                 0 = DPI will issue a 32-bit read request to the PEM when the size and alignment
                                                                 ensure that the request will not cross a 32-bit boundary.
                                                                 1 = DPI will always use a minimum 64-bit read request to the PEM. */
        uint64_t reserved_18_19        : 2;
        uint64_t molr                  : 10; /**< [ 17:  8](R/W) Maximum outstanding load requests. Limits the number of outstanding load requests on the
                                                                 port by restricting the number of tags available to this port. This value
                                                                 can range from 0 to 512. The maximum number of load requests across all ports is 512.  Setting MOLR
                                                                 to a value of zero halts all read traffic to the port. There are no restrictions on when this
                                                                 value can be changed. */
        uint64_t mps_lim               : 1;  /**< [  7:  7](R/W) MAC memory space write requests cannot cross the (naturally-aligned) MPS boundary.
                                                                 When clear, DPI is allowed to issue a MAC memory- space read that crosses the naturally-
                                                                 aligned boundary of size defined by MPS. (DPI will still only cross the boundary when it
                                                                 would eliminate a write by doing so.)

                                                                 When set, DPI will never issue a MAC memory space write that crosses the naturally-aligned
                                                                 boundary of size defined by MPS. */
        uint64_t mps                   : 3;  /**< [  6:  4](R/W) Maximum payload size.
                                                                 0x0 = 128B.
                                                                 0x1 = 256B.
                                                                 0x2 = 512B.
                                                                 0x3 = 1024B.

                                                                 Larger sizes are not supported. If [MPS] = 0x2 or 0x3, outbound packet writes
                                                                 will use the 512B/1024B size but DMA is limited to 256B.

                                                                 The MPS size must not exceed the size selected by PCIE*_CFG030[MPS]. */
        uint64_t mrrs_lim              : 1;  /**< [  3:  3](R/W) MAC memory space read requests cannot cross the (naturally-aligned) MRRS boundary.

                                                                 When clear, DPI is allowed to issue a MAC memory-space read that crosses the naturally-
                                                                 aligned boundary of size defined by MRRS. (DPI will still only cross the boundary when it
                                                                 would eliminate a read by doing so.)

                                                                 When set, DPI will never issue a MAC memory space read that crosses the naturally-aligned
                                                                 boundary of size defined by MRRS. */
        uint64_t mrrs                  : 3;  /**< [  2:  0](R/W) Maximum read-request size.
                                                                 0x0 = 128B.
                                                                 0x1 = 256B.
                                                                 0x2 = 512B.
                                                                 0x3 = 1024B.

                                                                 Larger sizes are not supported.

                                                                 The MRRS size must not exceed the size selected by PCIE*_CFG030[MRRS]. */
#else /* Word 0 - Little Endian */
        uint64_t mrrs                  : 3;  /**< [  2:  0](R/W) Maximum read-request size.
                                                                 0x0 = 128B.
                                                                 0x1 = 256B.
                                                                 0x2 = 512B.
                                                                 0x3 = 1024B.

                                                                 Larger sizes are not supported.

                                                                 The MRRS size must not exceed the size selected by PCIE*_CFG030[MRRS]. */
        uint64_t mrrs_lim              : 1;  /**< [  3:  3](R/W) MAC memory space read requests cannot cross the (naturally-aligned) MRRS boundary.

                                                                 When clear, DPI is allowed to issue a MAC memory-space read that crosses the naturally-
                                                                 aligned boundary of size defined by MRRS. (DPI will still only cross the boundary when it
                                                                 would eliminate a read by doing so.)

                                                                 When set, DPI will never issue a MAC memory space read that crosses the naturally-aligned
                                                                 boundary of size defined by MRRS. */
        uint64_t mps                   : 3;  /**< [  6:  4](R/W) Maximum payload size.
                                                                 0x0 = 128B.
                                                                 0x1 = 256B.
                                                                 0x2 = 512B.
                                                                 0x3 = 1024B.

                                                                 Larger sizes are not supported. If [MPS] = 0x2 or 0x3, outbound packet writes
                                                                 will use the 512B/1024B size but DMA is limited to 256B.

                                                                 The MPS size must not exceed the size selected by PCIE*_CFG030[MPS]. */
        uint64_t mps_lim               : 1;  /**< [  7:  7](R/W) MAC memory space write requests cannot cross the (naturally-aligned) MPS boundary.
                                                                 When clear, DPI is allowed to issue a MAC memory- space read that crosses the naturally-
                                                                 aligned boundary of size defined by MPS. (DPI will still only cross the boundary when it
                                                                 would eliminate a write by doing so.)

                                                                 When set, DPI will never issue a MAC memory space write that crosses the naturally-aligned
                                                                 boundary of size defined by MPS. */
        uint64_t molr                  : 10; /**< [ 17:  8](R/W) Maximum outstanding load requests. Limits the number of outstanding load requests on the
                                                                 port by restricting the number of tags available to this port. This value
                                                                 can range from 0 to 512. The maximum number of load requests across all ports is 512.  Setting MOLR
                                                                 to a value of zero halts all read traffic to the port. There are no restrictions on when this
                                                                 value can be changed. */
        uint64_t reserved_18_19        : 2;
        uint64_t exact_rd_dis          : 1;  /**< [ 20: 20](R/W) Exact read mode disable.
                                                                 0 = DPI will issue a 32-bit read request to the PEM when the size and alignment
                                                                 ensure that the request will not cross a 32-bit boundary.
                                                                 1 = DPI will always use a minimum 64-bit read request to the PEM. */
        uint64_t port_dis              : 1;  /**< [ 21: 21](R/W) Disable Ebus port control. One bit per port.
                                                                 0 = EBUS Port is in use, default.
                                                                 1 = EBUS Port not in use, disables clock enable from the EBUS port. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ebus_portx_cfg_s cn; */
};
typedef union cavm_dpix_af_ebus_portx_cfg cavm_dpix_af_ebus_portx_cfg_t;

static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_CFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x840180010100ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DPIX_AF_EBUS_PORTX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EBUS_PORTX_CFG(a,b) cavm_dpix_af_ebus_portx_cfg_t
#define bustype_CAVM_DPIX_AF_EBUS_PORTX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EBUS_PORTX_CFG(a,b) "DPIX_AF_EBUS_PORTX_CFG"
#define device_bar_CAVM_DPIX_AF_EBUS_PORTX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EBUS_PORTX_CFG(a,b) (a)
#define arguments_CAVM_DPIX_AF_EBUS_PORTX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ebus_port#_err
 *
 * DPI EBus Port Error Address Registers
 * This register logs the address associated with the reported EBus error response.
 */
union cavm_dpix_af_ebus_portx_err
{
    uint64_t u;
    struct cavm_dpix_af_ebus_portx_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 59; /**< [ 63:  5](RO/H) Address of the failed load request. Address is locked along with the
                                                                 DPI()_EBUS_PORT()_ERR_INFO register. See the
                                                                 DPI()_EBUS_PORT()_ERR_INFO[LOCK] description for further information. */
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t addr                  : 59; /**< [ 63:  5](RO/H) Address of the failed load request. Address is locked along with the
                                                                 DPI()_EBUS_PORT()_ERR_INFO register. See the
                                                                 DPI()_EBUS_PORT()_ERR_INFO[LOCK] description for further information. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ebus_portx_err_s cn; */
};
typedef union cavm_dpix_af_ebus_portx_err cavm_dpix_af_ebus_portx_err_t;

static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_ERR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_ERR(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x840180010280ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DPIX_AF_EBUS_PORTX_ERR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EBUS_PORTX_ERR(a,b) cavm_dpix_af_ebus_portx_err_t
#define bustype_CAVM_DPIX_AF_EBUS_PORTX_ERR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EBUS_PORTX_ERR(a,b) "DPIX_AF_EBUS_PORTX_ERR"
#define device_bar_CAVM_DPIX_AF_EBUS_PORTX_ERR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EBUS_PORTX_ERR(a,b) (a)
#define arguments_CAVM_DPIX_AF_EBUS_PORTX_ERR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ebus_port#_err_info
 *
 * DPI EBus Port Error Info Registers
 * This register logs information associated with the reported EBUS error response.
 */
union cavm_dpix_af_ebus_portx_err_info
{
    uint64_t u;
    struct cavm_dpix_af_ebus_portx_err_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pvf                   : 16; /**< [ 31: 16](RO/H) Physical/virtual function that caused the ErrorResponse. DPI_DMA_FUNC_SEL_S format. */
        uint64_t reserved_9_15         : 7;
        uint64_t lock                  : 1;  /**< [  8:  8](RO/H) DPI()_EBUS_PORT()_ERR and DPI()_EBUS_PORT()_ERR_INFO have captured and locked contents.
                                                                 When CNXXXX first detects an ErrorResponse, the TYPE, REQQ, and ADDR of the error is saved
                                                                 and an internal lock state is set so the data associated with the initial error is
                                                                 preserved.

                                                                 Subsequent ErrorResponses will optionally raise an interrupt, but will not
                                                                 modify [TYPE], [REQQ], nor DPI()_EBUS_PORT()_ERR[ADDR] until the internal lock
                                                                 state is cleared.

                                                                 Software can clear the internal lock state by writing a one to the appropriate
                                                                 bit in either DPI()_REQ_ERR_RSP or DPI()_PKT_ERR_RSP depending on [TYPE]. Once
                                                                 the internal lock state is cleared, the next ErrorResponse will set [TYPE],
                                                                 [REQQ], nor DPI()_EBUS_PORT()_ERR[ADDR] for the new transaction. */
        uint64_t reserved_6_7          : 2;
        uint64_t type                  : 1;  /**< [  5:  5](RO/H) Type of transaction that caused the ErrorResponse.
                                                                 0 = DMA Instruction.
                                                                 1 = PKT Instruction. */
        uint64_t reqq                  : 5;  /**< [  4:  0](RO/H) Request queue that made the failed load request. */
#else /* Word 0 - Little Endian */
        uint64_t reqq                  : 5;  /**< [  4:  0](RO/H) Request queue that made the failed load request. */
        uint64_t type                  : 1;  /**< [  5:  5](RO/H) Type of transaction that caused the ErrorResponse.
                                                                 0 = DMA Instruction.
                                                                 1 = PKT Instruction. */
        uint64_t reserved_6_7          : 2;
        uint64_t lock                  : 1;  /**< [  8:  8](RO/H) DPI()_EBUS_PORT()_ERR and DPI()_EBUS_PORT()_ERR_INFO have captured and locked contents.
                                                                 When CNXXXX first detects an ErrorResponse, the TYPE, REQQ, and ADDR of the error is saved
                                                                 and an internal lock state is set so the data associated with the initial error is
                                                                 preserved.

                                                                 Subsequent ErrorResponses will optionally raise an interrupt, but will not
                                                                 modify [TYPE], [REQQ], nor DPI()_EBUS_PORT()_ERR[ADDR] until the internal lock
                                                                 state is cleared.

                                                                 Software can clear the internal lock state by writing a one to the appropriate
                                                                 bit in either DPI()_REQ_ERR_RSP or DPI()_PKT_ERR_RSP depending on [TYPE]. Once
                                                                 the internal lock state is cleared, the next ErrorResponse will set [TYPE],
                                                                 [REQQ], nor DPI()_EBUS_PORT()_ERR[ADDR] for the new transaction. */
        uint64_t reserved_9_15         : 7;
        uint64_t pvf                   : 16; /**< [ 31: 16](RO/H) Physical/virtual function that caused the ErrorResponse. DPI_DMA_FUNC_SEL_S format. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ebus_portx_err_info_s cn; */
};
typedef union cavm_dpix_af_ebus_portx_err_info cavm_dpix_af_ebus_portx_err_info_t;

static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x840180010200ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DPIX_AF_EBUS_PORTX_ERR_INFO", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(a,b) cavm_dpix_af_ebus_portx_err_info_t
#define bustype_CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(a,b) "DPIX_AF_EBUS_PORTX_ERR_INFO"
#define device_bar_CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(a,b) (a)
#define arguments_CAVM_DPIX_AF_EBUS_PORTX_ERR_INFO(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ebus_port#_scfg
 *
 * DPI EBus Port Secure Configuration Register
 * This register configures write virtual, bar 0 disable and window disable bits for the EBUS port.
 */
union cavm_dpix_af_ebus_portx_scfg
{
    uint64_t u;
    struct cavm_dpix_af_ebus_portx_scfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t wvirt                 : 1;  /**< [  2:  2](SR/W) Write virtual.
                                                                   0 = Addresses are physical addresses.
                                                                   1 = Addresses in SDP()_WIN_WR_ADDR and SDP()_WIN_RD_ADDR are virtual addresses.

                                                                   As virtual addresses allow the improved security provided by the SMMU, it is
                                                                   recommended this bit typically be set. */
        uint64_t wind_d                : 1;  /**< [  1:  1](SR/W) Window disable. When set, disables access to the window registers from the MAC. */
        uint64_t bar0_d                : 1;  /**< [  0:  0](SR/W) BAR0 disable. When set, disables access from the MAC to SDP BAR0 registers. */
#else /* Word 0 - Little Endian */
        uint64_t bar0_d                : 1;  /**< [  0:  0](SR/W) BAR0 disable. When set, disables access from the MAC to SDP BAR0 registers. */
        uint64_t wind_d                : 1;  /**< [  1:  1](SR/W) Window disable. When set, disables access to the window registers from the MAC. */
        uint64_t wvirt                 : 1;  /**< [  2:  2](SR/W) Write virtual.
                                                                   0 = Addresses are physical addresses.
                                                                   1 = Addresses in SDP()_WIN_WR_ADDR and SDP()_WIN_RD_ADDR are virtual addresses.

                                                                   As virtual addresses allow the improved security provided by the SMMU, it is
                                                                   recommended this bit typically be set. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ebus_portx_scfg_s cn; */
};
typedef union cavm_dpix_af_ebus_portx_scfg cavm_dpix_af_ebus_portx_scfg_t;

static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_SCFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EBUS_PORTX_SCFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x840180010180ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("DPIX_AF_EBUS_PORTX_SCFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EBUS_PORTX_SCFG(a,b) cavm_dpix_af_ebus_portx_scfg_t
#define bustype_CAVM_DPIX_AF_EBUS_PORTX_SCFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EBUS_PORTX_SCFG(a,b) "DPIX_AF_EBUS_PORTX_SCFG"
#define device_bar_CAVM_DPIX_AF_EBUS_PORTX_SCFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EBUS_PORTX_SCFG(a,b) (a)
#define arguments_CAVM_DPIX_AF_EBUS_PORTX_SCFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ebus_recal
 *
 * DPI EBus Port Recalibration Register
 * This register is used for triggering EBus EBI recalibration.
 */
union cavm_dpix_af_ebus_recal
{
    uint64_t u;
    struct cavm_dpix_af_ebus_recal_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ebus_recal            : 1;  /**< [  0:  0](WO) A write of 1 will trigger an EBI recalibration. For diagnostic purposes only. */
#else /* Word 0 - Little Endian */
        uint64_t ebus_recal            : 1;  /**< [  0:  0](WO) A write of 1 will trigger an EBI recalibration. For diagnostic purposes only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ebus_recal_s cn; */
};
typedef union cavm_dpix_af_ebus_recal cavm_dpix_af_ebus_recal_t;

static inline uint64_t CAVM_DPIX_AF_EBUS_RECAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EBUS_RECAL(uint64_t a)
{
    if (a<=1)
        return 0x8401800100f0ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_EBUS_RECAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EBUS_RECAL(a) cavm_dpix_af_ebus_recal_t
#define bustype_CAVM_DPIX_AF_EBUS_RECAL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EBUS_RECAL(a) "DPIX_AF_EBUS_RECAL"
#define device_bar_CAVM_DPIX_AF_EBUS_RECAL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EBUS_RECAL(a) (a)
#define arguments_CAVM_DPIX_AF_EBUS_RECAL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_eng#_buf
 *
 * DPI DMA Engine Buffer Registers
 * These registers provide control for the buffering per DMA engine.
 */
union cavm_dpix_af_engx_buf
{
    uint64_t u;
    struct cavm_dpix_af_engx_buf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t base                  : 7;  /**< [ 22: 16](RO/H) The base address in 1 Kbyte blocks of the DMA engine FIFO. */
        uint64_t reserved_7_15         : 9;
        uint64_t blks                  : 7;  /**< [  6:  0](R/W) The size of the DMA engine FIFO in KBytes. The sum of the allocated FIFOs across all six
                                                                 DPI_AF_ENG(ENG)_BUF[BLKS] registers must not exceed the overall RDB memory size of
                                                                 128 KB. If the value of 0 is used, the corresponding engine enable in
                                                                 DPI()_DMA_CONTROL[DMA_ENB] must also be cleared.

                                                                 0x00 = Engine disabled.
                                                                 0x01 = 1 KB FIFO.
                                                                 0x02 = 2 KB FIFO.
                                                                 0x03 = 3 KB FIFO.
                                                                 0x04 = 4 KB FIFO.
                                                                 ..
                                                                 0x3F = 63 KB FIFO.
                                                                 0x40 = 64 KB FIFO. */
#else /* Word 0 - Little Endian */
        uint64_t blks                  : 7;  /**< [  6:  0](R/W) The size of the DMA engine FIFO in KBytes. The sum of the allocated FIFOs across all six
                                                                 DPI_AF_ENG(ENG)_BUF[BLKS] registers must not exceed the overall RDB memory size of
                                                                 128 KB. If the value of 0 is used, the corresponding engine enable in
                                                                 DPI()_DMA_CONTROL[DMA_ENB] must also be cleared.

                                                                 0x00 = Engine disabled.
                                                                 0x01 = 1 KB FIFO.
                                                                 0x02 = 2 KB FIFO.
                                                                 0x03 = 3 KB FIFO.
                                                                 0x04 = 4 KB FIFO.
                                                                 ..
                                                                 0x3F = 63 KB FIFO.
                                                                 0x40 = 64 KB FIFO. */
        uint64_t reserved_7_15         : 9;
        uint64_t base                  : 7;  /**< [ 22: 16](RO/H) The base address in 1 Kbyte blocks of the DMA engine FIFO. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_engx_buf_s cn; */
};
typedef union cavm_dpix_af_engx_buf cavm_dpix_af_engx_buf_t;

static inline uint64_t CAVM_DPIX_AF_ENGX_BUF(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_ENGX_BUF(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=5))
        return 0x840180010080ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("DPIX_AF_ENGX_BUF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_ENGX_BUF(a,b) cavm_dpix_af_engx_buf_t
#define bustype_CAVM_DPIX_AF_ENGX_BUF(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_ENGX_BUF(a,b) "DPIX_AF_ENGX_BUF"
#define device_bar_CAVM_DPIX_AF_ENGX_BUF(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_ENGX_BUF(a,b) (a)
#define arguments_CAVM_DPIX_AF_ENGX_BUF(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_misc_lint
 *
 * DPI EPF Interrupt Summary Register
 * This register contains the different interrupt-summary bits for one MAC in the DPI.
 *
 * Note: EPF(0) is mapped to MAC0, EPF(1) is mapped to MAC2.
 */
union cavm_dpix_af_epfx_misc_lint
{
    uint64_t u;
    struct cavm_dpix_af_epfx_misc_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1C/H) A FLR occurred for the PF on the corresponding MAC. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) An error response was received for a PF DMA transaction read. Additional
                                                                 information is captured in DPI()_EBUS_PORT()_ERR_INFO and
                                                                 DPI()_EBUS_PORT()_ERR[ADDR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Set when an error response is received for a PF PP transaction read. Additional
                                                                 information is captured in DPI()_EBUS_PORT()_ERR_INFO and
                                                                 DPI()_EBUS_PORT()_ERR[ADDR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Received unsupported N-TLP for window register from the corresponding MAC. This
                                                                 occurs when the window registers are disabled and a window register access occurs. */
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
                                                                 occurs when the window registers are disabled and a window register access occurs. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Set when an error response is received for a PF PP transaction read. Additional
                                                                 information is captured in DPI()_EBUS_PORT()_ERR_INFO and
                                                                 DPI()_EBUS_PORT()_ERR[ADDR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) An error response was received for a PF DMA transaction read. Additional
                                                                 information is captured in DPI()_EBUS_PORT()_ERR_INFO and
                                                                 DPI()_EBUS_PORT()_ERR[ADDR]. */
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1C/H) A FLR occurred for the PF on the corresponding MAC. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_misc_lint_s cn; */
};
typedef union cavm_dpix_af_epfx_misc_lint cavm_dpix_af_epfx_misc_lint_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014a00ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_MISC_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_MISC_LINT(a,b) cavm_dpix_af_epfx_misc_lint_t
#define bustype_CAVM_DPIX_AF_EPFX_MISC_LINT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_MISC_LINT(a,b) "DPIX_AF_EPFX_MISC_LINT"
#define device_bar_CAVM_DPIX_AF_EPFX_MISC_LINT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_MISC_LINT(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_MISC_LINT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_misc_lint_ena_w1c
 *
 * DPI EPF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_epfx_misc_lint_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_epfx_misc_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[FLR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[DMAPF_ERR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[PPPF_ERR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_WI]. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_B0]. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_B0]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_WI]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[PPPF_ERR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[DMAPF_ERR]. */
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_MISC_LINT[FLR]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_misc_lint_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_epfx_misc_lint_ena_w1c cavm_dpix_af_epfx_misc_lint_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014a10ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_MISC_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(a,b) cavm_dpix_af_epfx_misc_lint_ena_w1c_t
#define bustype_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(a,b) "DPIX_AF_EPFX_MISC_LINT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_misc_lint_ena_w1s
 *
 * DPI EPF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_epfx_misc_lint_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_epfx_misc_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[FLR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[DMAPF_ERR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[PPPF_ERR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_WI]. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_B0]. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UP_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_B0]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[UN_WI]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[PPPF_ERR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[DMAPF_ERR]. */
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_MISC_LINT[FLR]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_misc_lint_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_epfx_misc_lint_ena_w1s cavm_dpix_af_epfx_misc_lint_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014a18ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_MISC_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(a,b) cavm_dpix_af_epfx_misc_lint_ena_w1s_t
#define bustype_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(a,b) "DPIX_AF_EPFX_MISC_LINT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_MISC_LINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_misc_lint_w1s
 *
 * DPI EPF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_dpix_af_epfx_misc_lint_w1s
{
    uint64_t u;
    struct cavm_dpix_af_epfx_misc_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[FLR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[DMAPF_ERR]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[PPPF_ERR]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UN_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UN_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UP_WI]. */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UP_B0]. */
#else /* Word 0 - Little Endian */
        uint64_t up_b0                 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UP_B0]. */
        uint64_t up_wi                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UP_WI]. */
        uint64_t un_b0                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UN_B0]. */
        uint64_t un_wi                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[UN_WI]. */
        uint64_t pppf_err              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[PPPF_ERR]. */
        uint64_t dmapf_err             : 1;  /**< [  5:  5](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[DMAPF_ERR]. */
        uint64_t flr                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_MISC_LINT[FLR]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_misc_lint_w1s_s cn; */
};
typedef union cavm_dpix_af_epfx_misc_lint_w1s cavm_dpix_af_epfx_misc_lint_w1s_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014a08ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_MISC_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(a,b) cavm_dpix_af_epfx_misc_lint_w1s_t
#define bustype_CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(a,b) "DPIX_AF_EPFX_MISC_LINT_W1S"
#define device_bar_CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_MISC_LINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_p_vf_lint
 *
 * DPI DMA Error Response VF Bit Array Registers
 * When an error response is received for a VF PP transaction read, the appropriate VF indexed
 * bit is set.  The appropriate PF should read the appropriate register.
 * These registers are only valid for PEM0 PF0 and PEM2 PF0.
 * Each EPF supports 64 VFs.
 *
 * Note: EPF(0) is mapped to MAC0, EPF(1) ise mapped to MAC2.
 */
union cavm_dpix_af_epfx_p_vf_lint
{
    uint64_t u;
    struct cavm_dpix_af_epfx_p_vf_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) When an error response is received for a VF PP transaction read, the appropriate VF
                                                                 indexed bit is set. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) When an error response is received for a VF PP transaction read, the appropriate VF
                                                                 indexed bit is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_p_vf_lint_s cn; */
};
typedef union cavm_dpix_af_epfx_p_vf_lint cavm_dpix_af_epfx_p_vf_lint_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014c00ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_P_VF_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_P_VF_LINT(a,b) cavm_dpix_af_epfx_p_vf_lint_t
#define bustype_CAVM_DPIX_AF_EPFX_P_VF_LINT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_P_VF_LINT(a,b) "DPIX_AF_EPFX_P_VF_LINT"
#define device_bar_CAVM_DPIX_AF_EPFX_P_VF_LINT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_P_VF_LINT(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_P_VF_LINT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_p_vf_lint_ena_w1c
 *
 * DPI DMA Error Response VF Bit Array Local Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_epfx_p_vf_lint_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_epfx_p_vf_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_P_VF_LINT[VF_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_P_VF_LINT[VF_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_p_vf_lint_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_epfx_p_vf_lint_ena_w1c cavm_dpix_af_epfx_p_vf_lint_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180015000ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_P_VF_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(a,b) cavm_dpix_af_epfx_p_vf_lint_ena_w1c_t
#define bustype_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(a,b) "DPIX_AF_EPFX_P_VF_LINT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_p_vf_lint_ena_w1s
 *
 * DPI DMA Error Response VF Bit Array Local Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_epfx_p_vf_lint_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_epfx_p_vf_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_P_VF_LINT[VF_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_P_VF_LINT[VF_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_p_vf_lint_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_epfx_p_vf_lint_ena_w1s cavm_dpix_af_epfx_p_vf_lint_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180015200ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_P_VF_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(a,b) cavm_dpix_af_epfx_p_vf_lint_ena_w1s_t
#define bustype_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(a,b) "DPIX_AF_EPFX_P_VF_LINT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_P_VF_LINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_p_vf_lint_w1s
 *
 * DPI DMA Error Response VF Bit Array Set Registers
 * This register sets interrupt bits.
 */
union cavm_dpix_af_epfx_p_vf_lint_w1s
{
    uint64_t u;
    struct cavm_dpix_af_epfx_p_vf_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_P_VF_LINT[VF_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_P_VF_LINT[VF_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_p_vf_lint_w1s_s cn; */
};
typedef union cavm_dpix_af_epfx_p_vf_lint_w1s cavm_dpix_af_epfx_p_vf_lint_w1s_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014e00ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_P_VF_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(a,b) cavm_dpix_af_epfx_p_vf_lint_w1s_t
#define bustype_CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(a,b) "DPIX_AF_EPFX_P_VF_LINT_W1S"
#define device_bar_CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_P_VF_LINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_vf_lint
 *
 * DPI DMA Error Response VF Bit Array Registers
 * When an error response is received for a VF DMA transaction read, the appropriate VF indexed
 * bit is set.  The appropriate PF should read the appropriate register.
 * These registers are only valid for PEM0 PF0 and PEM2 PF0.
 * Each EPF supports 64 VFs.
 *
 * Note: EPF(0) is mapped to MAC0, EPF(1) is mapped to MAC2.
 */
union cavm_dpix_af_epfx_vf_lint
{
    uint64_t u;
    struct cavm_dpix_af_epfx_vf_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) When an error response is received for a VF DMA transaction read, the appropriate VF
                                                                 indexed bit is set. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) When an error response is received for a VF DMA transaction read, the appropriate VF
                                                                 indexed bit is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_vf_lint_s cn; */
};
typedef union cavm_dpix_af_epfx_vf_lint cavm_dpix_af_epfx_vf_lint_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014000ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_VF_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_VF_LINT(a,b) cavm_dpix_af_epfx_vf_lint_t
#define bustype_CAVM_DPIX_AF_EPFX_VF_LINT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_VF_LINT(a,b) "DPIX_AF_EPFX_VF_LINT"
#define device_bar_CAVM_DPIX_AF_EPFX_VF_LINT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_VF_LINT(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_VF_LINT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_vf_lint_ena_w1c
 *
 * DPI DMA Error Response VF Bit Array Local Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_epfx_vf_lint_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_epfx_vf_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_VF_LINT[VF_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for DPI_AF_EPF(0..3)_VF_LINT[VF_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_vf_lint_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_epfx_vf_lint_ena_w1c cavm_dpix_af_epfx_vf_lint_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014400ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_VF_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(a,b) cavm_dpix_af_epfx_vf_lint_ena_w1c_t
#define bustype_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(a,b) "DPIX_AF_EPFX_VF_LINT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_vf_lint_ena_w1s
 *
 * DPI DMA Error Response VF Bit Array Local Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_epfx_vf_lint_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_epfx_vf_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_VF_LINT[VF_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for DPI_AF_EPF(0..3)_VF_LINT[VF_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_vf_lint_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_epfx_vf_lint_ena_w1s cavm_dpix_af_epfx_vf_lint_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014600ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_VF_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(a,b) cavm_dpix_af_epfx_vf_lint_ena_w1s_t
#define bustype_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(a,b) "DPIX_AF_EPFX_VF_LINT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_VF_LINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_epf#_vf_lint_w1s
 *
 * DPI DMA Error Response VF Bit Array Set Registers
 * This register sets interrupt bits.
 */
union cavm_dpix_af_epfx_vf_lint_w1s
{
    uint64_t u;
    struct cavm_dpix_af_epfx_vf_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_VF_LINT[VF_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t vf_int                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets DPI_AF_EPF(0..3)_VF_LINT[VF_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_epfx_vf_lint_w1s_s cn; */
};
typedef union cavm_dpix_af_epfx_vf_lint_w1s cavm_dpix_af_epfx_vf_lint_w1s_t;

static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_EPFX_VF_LINT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x840180014200ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("DPIX_AF_EPFX_VF_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_EPFX_VF_LINT_W1S(a,b) cavm_dpix_af_epfx_vf_lint_w1s_t
#define bustype_CAVM_DPIX_AF_EPFX_VF_LINT_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_EPFX_VF_LINT_W1S(a,b) "DPIX_AF_EPFX_VF_LINT_W1S"
#define device_bar_CAVM_DPIX_AF_EPFX_VF_LINT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_EPFX_VF_LINT_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_EPFX_VF_LINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_info_reg
 *
 * DPI Information Register
 */
union cavm_dpix_af_info_reg
{
    uint64_t u;
    struct cavm_dpix_af_info_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ncb                   : 1;  /**< [  1:  1](R/W1C/H) NCB register access. This bit gets set in normal operation when software reads a DPI
                                                                 register through the NCB interface. */
        uint64_t rsl                   : 1;  /**< [  0:  0](R/W1C/H) RSL register access. This bit is set in normal operation when software reads a DPI
                                                                 register through the RSL interface. */
#else /* Word 0 - Little Endian */
        uint64_t rsl                   : 1;  /**< [  0:  0](R/W1C/H) RSL register access. This bit is set in normal operation when software reads a DPI
                                                                 register through the RSL interface. */
        uint64_t ncb                   : 1;  /**< [  1:  1](R/W1C/H) NCB register access. This bit gets set in normal operation when software reads a DPI
                                                                 register through the NCB interface. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_dpix_af_info_reg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t reserved_2_3          : 2;
        uint64_t ncb                   : 1;  /**< [  1:  1](R/W1C/H) NCB register access. This bit gets set in normal operation when software reads a DPI
                                                                 register through the NCB interface. */
        uint64_t rsl                   : 1;  /**< [  0:  0](R/W1C/H) RSL register access. This bit is set in normal operation when software reads a DPI
                                                                 register through the RSL interface. */
#else /* Word 0 - Little Endian */
        uint64_t rsl                   : 1;  /**< [  0:  0](R/W1C/H) RSL register access. This bit is set in normal operation when software reads a DPI
                                                                 register through the RSL interface. */
        uint64_t ncb                   : 1;  /**< [  1:  1](R/W1C/H) NCB register access. This bit gets set in normal operation when software reads a DPI
                                                                 register through the NCB interface. */
        uint64_t reserved_2_3          : 2;
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dpix_af_info_reg cavm_dpix_af_info_reg_t;

static inline uint64_t CAVM_DPIX_AF_INFO_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_INFO_REG(uint64_t a)
{
    if (a<=1)
        return 0x840180010300ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_INFO_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_INFO_REG(a) cavm_dpix_af_info_reg_t
#define bustype_CAVM_DPIX_AF_INFO_REG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_INFO_REG(a) "DPIX_AF_INFO_REG"
#define device_bar_CAVM_DPIX_AF_INFO_REG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_INFO_REG(a) (a)
#define arguments_CAVM_DPIX_AF_INFO_REG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_lf_rst
 *
 * DPI AF LF Reset Register
 * This register initiates LF resets.
 */
union cavm_dpix_af_lf_rst
{
    uint64_t u;
    struct cavm_dpix_af_lf_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_5_11         : 7;
        uint64_t lf                    : 5;  /**< [  4:  0](R/W) Local function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 5;  /**< [  4:  0](R/W) Local function that is reset when [EXEC] is set. */
        uint64_t reserved_5_11         : 7;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_lf_rst_s cn; */
};
typedef union cavm_dpix_af_lf_rst cavm_dpix_af_lf_rst_t;

static inline uint64_t CAVM_DPIX_AF_LF_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_LF_RST(uint64_t a)
{
    if (a<=1)
        return 0x840180010008ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_LF_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_LF_RST(a) cavm_dpix_af_lf_rst_t
#define bustype_CAVM_DPIX_AF_LF_RST(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_LF_RST(a) "DPIX_AF_LF_RST"
#define device_bar_CAVM_DPIX_AF_LF_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_LF_RST(a) (a)
#define arguments_CAVM_DPIX_AF_LF_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ncb#_cfg
 *
 * DPI NCB Configuration Register
 */
union cavm_dpix_af_ncbx_cfg
{
    uint64_t u;
    struct cavm_dpix_af_ncbx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t rd_fifo_threshold     : 6;  /**< [ 21: 16](R/W) NCB read response data FIFO priority threshold. Allows the RDB memory arbiter to switch
                                                                 priority away from reads to NCB writes to ensure the NCB response FIFO does not overflow.
                                                                 This value can range from 0 to 32, 0x0 disables this feature. */
        uint64_t reserved_10_15        : 6;
        uint64_t molr                  : 10; /**< [  9:  0](R/W) Max outstanding load requests. Limits the number of outstanding load requests on the NCB
                                                                 bus. This value can range from 1 to 511. Setting a value of zero halts all read
                                                                 traffic on NCB. There are no restrictions on when this value can be changed. */
#else /* Word 0 - Little Endian */
        uint64_t molr                  : 10; /**< [  9:  0](R/W) Max outstanding load requests. Limits the number of outstanding load requests on the NCB
                                                                 bus. This value can range from 1 to 511. Setting a value of zero halts all read
                                                                 traffic on NCB. There are no restrictions on when this value can be changed. */
        uint64_t reserved_10_15        : 6;
        uint64_t rd_fifo_threshold     : 6;  /**< [ 21: 16](R/W) NCB read response data FIFO priority threshold. Allows the RDB memory arbiter to switch
                                                                 priority away from reads to NCB writes to ensure the NCB response FIFO does not overflow.
                                                                 This value can range from 0 to 32, 0x0 disables this feature. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ncbx_cfg_s cn; */
};
typedef union cavm_dpix_af_ncbx_cfg cavm_dpix_af_ncbx_cfg_t;

static inline uint64_t CAVM_DPIX_AF_NCBX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_NCBX_CFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x8401800100d0ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("DPIX_AF_NCBX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_NCBX_CFG(a,b) cavm_dpix_af_ncbx_cfg_t
#define bustype_CAVM_DPIX_AF_NCBX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_NCBX_CFG(a,b) "DPIX_AF_NCBX_CFG"
#define device_bar_CAVM_DPIX_AF_NCBX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_NCBX_CFG(a,b) (a)
#define arguments_CAVM_DPIX_AF_NCBX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ncbo_err_info
 *
 * DPI NCBO Error Info Register
 * DPI is a CLASS A NCB device, it does not support certain CLASS B NCBO instructions.
 * If DPI receives a CLASS B instruction that it does not support, it will drop the
 * instruction, return zeros for a LD instruction, return credits, raise an error by
 * setting the bit in DPI_AF_NCBO_ERR_INT[CLB_ERR].
 */
union cavm_dpix_af_ncbo_err_info
{
    uint64_t u;
    struct cavm_dpix_af_ncbo_err_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ncbo_ctype            : 8;  /**< [ 62: 55](RO/H) The type of NCBO command type not supported by DPI */
        uint64_t reserved_52_54        : 3;
        uint64_t ncbo_addr             : 52; /**< [ 51:  0](RO/H) Records the 52 bit address of the NCBO instruction that is being dropped due
                                                                 to being unsupported by DPI. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_addr             : 52; /**< [ 51:  0](RO/H) Records the 52 bit address of the NCBO instruction that is being dropped due
                                                                 to being unsupported by DPI. */
        uint64_t reserved_52_54        : 3;
        uint64_t ncbo_ctype            : 8;  /**< [ 62: 55](RO/H) The type of NCBO command type not supported by DPI */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ncbo_err_info_s cn; */
};
typedef union cavm_dpix_af_ncbo_err_info cavm_dpix_af_ncbo_err_info_t;

static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INFO(uint64_t a)
{
    if (a<=1)
        return 0x840180017200ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_NCBO_ERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_NCBO_ERR_INFO(a) cavm_dpix_af_ncbo_err_info_t
#define bustype_CAVM_DPIX_AF_NCBO_ERR_INFO(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_NCBO_ERR_INFO(a) "DPIX_AF_NCBO_ERR_INFO"
#define device_bar_CAVM_DPIX_AF_NCBO_ERR_INFO(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_NCBO_ERR_INFO(a) (a)
#define arguments_CAVM_DPIX_AF_NCBO_ERR_INFO(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ncbo_err_int
 *
 * DPI NCBO CLASS B Error Interrupt Register
 */
union cavm_dpix_af_ncbo_err_int
{
    uint64_t u;
    struct cavm_dpix_af_ncbo_err_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1C/H) Interrupt bit set when DPI detects an unsupported CLASS B NCBO instruction */
#else /* Word 0 - Little Endian */
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1C/H) Interrupt bit set when DPI detects an unsupported CLASS B NCBO instruction */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ncbo_err_int_s cn; */
};
typedef union cavm_dpix_af_ncbo_err_int cavm_dpix_af_ncbo_err_int_t;

static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT(uint64_t a)
{
    if (a<=1)
        return 0x840180017300ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_NCBO_ERR_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_NCBO_ERR_INT(a) cavm_dpix_af_ncbo_err_int_t
#define bustype_CAVM_DPIX_AF_NCBO_ERR_INT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_NCBO_ERR_INT(a) "DPIX_AF_NCBO_ERR_INT"
#define device_bar_CAVM_DPIX_AF_NCBO_ERR_INT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_NCBO_ERR_INT(a) (a)
#define arguments_CAVM_DPIX_AF_NCBO_ERR_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ncbo_err_int_ena_w1c
 *
 * DPI NCBO CLASS B Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_ncbo_err_int_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_ncbo_err_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_NCBO_ERR_INT[CLB_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_NCBO_ERR_INT[CLB_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ncbo_err_int_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_ncbo_err_int_ena_w1c cavm_dpix_af_ncbo_err_int_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x840180017310ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_NCBO_ERR_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(a) cavm_dpix_af_ncbo_err_int_ena_w1c_t
#define bustype_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(a) "DPIX_AF_NCBO_ERR_INT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(a) (a)
#define arguments_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ncbo_err_int_ena_w1s
 *
 * DPI NCBO CLASS B Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_ncbo_err_int_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_ncbo_err_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_NCBO_ERR_INT[CLB_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_NCBO_ERR_INT[CLB_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ncbo_err_int_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_ncbo_err_int_ena_w1s cavm_dpix_af_ncbo_err_int_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840180017318ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_NCBO_ERR_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(a) cavm_dpix_af_ncbo_err_int_ena_w1s_t
#define bustype_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(a) "DPIX_AF_NCBO_ERR_INT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(a) (a)
#define arguments_CAVM_DPIX_AF_NCBO_ERR_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_ncbo_err_int_w1s
 *
 * DPI NCBO CLASS B Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_dpix_af_ncbo_err_int_w1s
{
    uint64_t u;
    struct cavm_dpix_af_ncbo_err_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_NCBO_ERR_INT[CLB_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t clb_err               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_NCBO_ERR_INT[CLB_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_ncbo_err_int_w1s_s cn; */
};
typedef union cavm_dpix_af_ncbo_err_int_w1s cavm_dpix_af_ncbo_err_int_w1s_t;

static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_NCBO_ERR_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840180017308ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_NCBO_ERR_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_NCBO_ERR_INT_W1S(a) cavm_dpix_af_ncbo_err_int_w1s_t
#define bustype_CAVM_DPIX_AF_NCBO_ERR_INT_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_NCBO_ERR_INT_W1S(a) "DPIX_AF_NCBO_ERR_INT_W1S"
#define device_bar_CAVM_DPIX_AF_NCBO_ERR_INT_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_NCBO_ERR_INT_W1S(a) (a)
#define arguments_CAVM_DPIX_AF_NCBO_ERR_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_pf_ras
 *
 * DPI PF RAS Register
 * This register contains PF RAS error flags for DPI.
 */
union cavm_dpix_af_pf_ras
{
    uint64_t u;
    struct cavm_dpix_af_pf_ras_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1C/H) Poison received on a NCB instruction response. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1C/H) Poison received on a NCB data response. */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1C/H) Poison returned on a EBI data response. */
#else /* Word 0 - Little Endian */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1C/H) Poison returned on a EBI data response. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1C/H) Poison received on a NCB data response. */
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1C/H) Poison received on a NCB instruction response. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_pf_ras_s cn; */
};
typedef union cavm_dpix_af_pf_ras cavm_dpix_af_pf_ras_t;

static inline uint64_t CAVM_DPIX_AF_PF_RAS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_PF_RAS(uint64_t a)
{
    if (a<=1)
        return 0x840180010308ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_PF_RAS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_PF_RAS(a) cavm_dpix_af_pf_ras_t
#define bustype_CAVM_DPIX_AF_PF_RAS(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_PF_RAS(a) "DPIX_AF_PF_RAS"
#define device_bar_CAVM_DPIX_AF_PF_RAS(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_PF_RAS(a) (a)
#define arguments_CAVM_DPIX_AF_PF_RAS(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_pf_ras_ena_w1c
 *
 * DPI PF RAS Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_pf_ras_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_pf_ras_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DPI_AF_PF_RAS[NCB_CMD_PSN]. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DPI_AF_PF_RAS[NCB_DAT_PSN]. */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_PF_RAS[EBI_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_PF_RAS[EBI_DAT_PSN]. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DPI_AF_PF_RAS[NCB_DAT_PSN]. */
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DPI_AF_PF_RAS[NCB_CMD_PSN]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_pf_ras_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_pf_ras_ena_w1c cavm_dpix_af_pf_ras_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_PF_RAS_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_PF_RAS_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x840180010318ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_PF_RAS_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_PF_RAS_ENA_W1C(a) cavm_dpix_af_pf_ras_ena_w1c_t
#define bustype_CAVM_DPIX_AF_PF_RAS_ENA_W1C(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_PF_RAS_ENA_W1C(a) "DPIX_AF_PF_RAS_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_PF_RAS_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_PF_RAS_ENA_W1C(a) (a)
#define arguments_CAVM_DPIX_AF_PF_RAS_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_pf_ras_ena_w1s
 *
 * DPI PF RAS Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_pf_ras_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_pf_ras_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DPI_AF_PF_RAS[NCB_CMD_PSN]. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DPI_AF_PF_RAS[NCB_DAT_PSN]. */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_PF_RAS[EBI_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_PF_RAS[EBI_DAT_PSN]. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DPI_AF_PF_RAS[NCB_DAT_PSN]. */
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DPI_AF_PF_RAS[NCB_CMD_PSN]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_pf_ras_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_pf_ras_ena_w1s cavm_dpix_af_pf_ras_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_PF_RAS_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_PF_RAS_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840180010320ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_PF_RAS_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_PF_RAS_ENA_W1S(a) cavm_dpix_af_pf_ras_ena_w1s_t
#define bustype_CAVM_DPIX_AF_PF_RAS_ENA_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_PF_RAS_ENA_W1S(a) "DPIX_AF_PF_RAS_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_PF_RAS_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_PF_RAS_ENA_W1S(a) (a)
#define arguments_CAVM_DPIX_AF_PF_RAS_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_pf_ras_w1s
 *
 * DPI PF RAS Register
 * This register sets interrupt bits.
 */
union cavm_dpix_af_pf_ras_w1s
{
    uint64_t u;
    struct cavm_dpix_af_pf_ras_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DPI_AF_PF_RAS[NCB_CMD_PSN]. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DPI_AF_PF_RAS[NCB_DAT_PSN]. */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_PF_RAS[EBI_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ebi_dat_psn           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_PF_RAS[EBI_DAT_PSN]. */
        uint64_t ncb_dat_psn           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DPI_AF_PF_RAS[NCB_DAT_PSN]. */
        uint64_t ncb_cmd_psn           : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DPI_AF_PF_RAS[NCB_CMD_PSN]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_pf_ras_w1s_s cn; */
};
typedef union cavm_dpix_af_pf_ras_w1s cavm_dpix_af_pf_ras_w1s_t;

static inline uint64_t CAVM_DPIX_AF_PF_RAS_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_PF_RAS_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840180010310ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_PF_RAS_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_PF_RAS_W1S(a) cavm_dpix_af_pf_ras_w1s_t
#define bustype_CAVM_DPIX_AF_PF_RAS_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_PF_RAS_W1S(a) "DPIX_AF_PF_RAS_W1S"
#define device_bar_CAVM_DPIX_AF_PF_RAS_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_PF_RAS_W1S(a) (a)
#define arguments_CAVM_DPIX_AF_PF_RAS_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_pkt_err_rsp
 *
 * DPI Packet Error Response Register
 */
union cavm_dpix_af_pkt_err_rsp
{
    uint64_t u;
    struct cavm_dpix_af_pkt_err_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t pkterr                : 1;  /**< [  0:  0](R/W1C/H) Indicates that an ErrorResponse was received from the I/O subsystem. */
#else /* Word 0 - Little Endian */
        uint64_t pkterr                : 1;  /**< [  0:  0](R/W1C/H) Indicates that an ErrorResponse was received from the I/O subsystem. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_pkt_err_rsp_s cn; */
};
typedef union cavm_dpix_af_pkt_err_rsp cavm_dpix_af_pkt_err_rsp_t;

static inline uint64_t CAVM_DPIX_AF_PKT_ERR_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_PKT_ERR_RSP(uint64_t a)
{
    if (a<=1)
        return 0x8401800100c0ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_PKT_ERR_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_PKT_ERR_RSP(a) cavm_dpix_af_pkt_err_rsp_t
#define bustype_CAVM_DPIX_AF_PKT_ERR_RSP(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_PKT_ERR_RSP(a) "DPIX_AF_PKT_ERR_RSP"
#define device_bar_CAVM_DPIX_AF_PKT_ERR_RSP(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_PKT_ERR_RSP(a) (a)
#define arguments_CAVM_DPIX_AF_PKT_ERR_RSP(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_req_err_rsp
 *
 * DPI Instruction Queue Error Response Register
 */
union cavm_dpix_af_req_err_rsp
{
    uint64_t u;
    struct cavm_dpix_af_req_err_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t qerr                  : 32; /**< [ 31:  0](R/W1C/H) Indicates which instruction queue received an ErrorResponse from the I/O
                                                                 subsystem and also sets interrupt bit
                                                                 DPI_REQQ()_INT[ERR_RSP].
                                                                 Clearing this bit, clears the internal lock state for the DPI_EBUS_PORT(0..1)_ERR_INFO register. */
#else /* Word 0 - Little Endian */
        uint64_t qerr                  : 32; /**< [ 31:  0](R/W1C/H) Indicates which instruction queue received an ErrorResponse from the I/O
                                                                 subsystem and also sets interrupt bit
                                                                 DPI_REQQ()_INT[ERR_RSP].
                                                                 Clearing this bit, clears the internal lock state for the DPI_EBUS_PORT(0..1)_ERR_INFO register. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_req_err_rsp_s cn; */
};
typedef union cavm_dpix_af_req_err_rsp cavm_dpix_af_req_err_rsp_t;

static inline uint64_t CAVM_DPIX_AF_REQ_ERR_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQ_ERR_RSP(uint64_t a)
{
    if (a<=1)
        return 0x8401800100b0ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_REQ_ERR_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQ_ERR_RSP(a) cavm_dpix_af_req_err_rsp_t
#define bustype_CAVM_DPIX_AF_REQ_ERR_RSP(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQ_ERR_RSP(a) "DPIX_AF_REQ_ERR_RSP"
#define device_bar_CAVM_DPIX_AF_REQ_ERR_RSP(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQ_ERR_RSP(a) (a)
#define arguments_CAVM_DPIX_AF_REQ_ERR_RSP(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_req_err_rsp_en
 *
 * DPI Instruction Queue ErrorResponse Enable Register
 */
union cavm_dpix_af_req_err_rsp_en
{
    uint64_t u;
    struct cavm_dpix_af_req_err_rsp_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en                    : 32; /**< [ 31:  0](R/W) Indicates which instruction queues should stop dispatching instructions when an
                                                                 ErrorResponse is received from the I/O subsystem. Software is required to disable and reset
                                                                 the instruction queue prior to re-enabling and sending new instructions. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 32; /**< [ 31:  0](R/W) Indicates which instruction queues should stop dispatching instructions when an
                                                                 ErrorResponse is received from the I/O subsystem. Software is required to disable and reset
                                                                 the instruction queue prior to re-enabling and sending new instructions. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_req_err_rsp_en_s cn; */
};
typedef union cavm_dpix_af_req_err_rsp_en cavm_dpix_af_req_err_rsp_en_t;

static inline uint64_t CAVM_DPIX_AF_REQ_ERR_RSP_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQ_ERR_RSP_EN(uint64_t a)
{
    if (a<=1)
        return 0x8401800100b8ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_REQ_ERR_RSP_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQ_ERR_RSP_EN(a) cavm_dpix_af_req_err_rsp_en_t
#define bustype_CAVM_DPIX_AF_REQ_ERR_RSP_EN(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQ_ERR_RSP_EN(a) "DPIX_AF_REQ_ERR_RSP_EN"
#define device_bar_CAVM_DPIX_AF_REQ_ERR_RSP_EN(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQ_ERR_RSP_EN(a) (a)
#define arguments_CAVM_DPIX_AF_REQ_ERR_RSP_EN(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_reqq#_int
 *
 * DPI DMA Per Instruction Queue Interrupt Register
 * This register contains per-request queue error interrupts.
 */
union cavm_dpix_af_reqqx_int
{
    uint64_t u;
    struct cavm_dpix_af_reqqx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1C/H) Indicates which instruction queue received a timeout when instruction never completes
                                                                 on that queue resulting in a stall. This error will also disable the corresponding
                                                                 instruction queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST]
                                                                 before reenabling. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1C/H) Indicates which instruction queue received an ErrorResponse from the I/O subsystem.
                                                                 Software must disable the queue and reset it if DPI_REQ_ERR_RSP_EN[EN] is set, before
                                                                 processing further instructions on that queue. The ErrorResponse also sets the
                                                                 DPI_REQ_ERR_RSP[QERR] bit. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1C/H) NCB poison on instruction read. This error will also disable the corresponding instruction
                                                                 queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST] before
                                                                 reenabling. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1C/H) Checks on Instruction words during fill detected an error. Checks include:
                                                                   * NFST or NLST value in header is zero.
                                                                   * Read or write pointer length is zero.
                                                                   * Total byte count for all read pointers is not equal to total for all write pointers.

                                                                 This error will also disable the corresponding instruction queue (DPI()_VDMA()_EN[QEN])
                                                                 and must be reset with DPI()_DMA()_QRST[QRST] before reenabling. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1C/H) Instruction fill returned all zeros for starting address of next chunk. This error will
                                                                 also disable the corresponding instruction queue (DPI()_VDMA()_EN[QEN]) and must be reset
                                                                 with DPI()_DMA()_QRST[QRST] before reenabling. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1C/H) Instruction fill doorbell overflow error. This error will also disable the corresponding
                                                                 instruction queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST]
                                                                 before reenabling. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1C/H) NCB fault on completion status or zero byte write. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1C/H) NCB fault on DMA data write. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1C/H) NCB fault on DMA data read. */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1C/H) NCB fault on instruction read. This error will also disable the corresponding instruction
                                                                 queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST] before
                                                                 reenabling. */
#else /* Word 0 - Little Endian */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1C/H) NCB fault on instruction read. This error will also disable the corresponding instruction
                                                                 queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST] before
                                                                 reenabling. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1C/H) NCB fault on DMA data read. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1C/H) NCB fault on DMA data write. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1C/H) NCB fault on completion status or zero byte write. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1C/H) Instruction fill doorbell overflow error. This error will also disable the corresponding
                                                                 instruction queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST]
                                                                 before reenabling. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1C/H) Instruction fill returned all zeros for starting address of next chunk. This error will
                                                                 also disable the corresponding instruction queue (DPI()_VDMA()_EN[QEN]) and must be reset
                                                                 with DPI()_DMA()_QRST[QRST] before reenabling. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1C/H) Checks on Instruction words during fill detected an error. Checks include:
                                                                   * NFST or NLST value in header is zero.
                                                                   * Read or write pointer length is zero.
                                                                   * Total byte count for all read pointers is not equal to total for all write pointers.

                                                                 This error will also disable the corresponding instruction queue (DPI()_VDMA()_EN[QEN])
                                                                 and must be reset with DPI()_DMA()_QRST[QRST] before reenabling. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1C/H) NCB poison on instruction read. This error will also disable the corresponding instruction
                                                                 queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST] before
                                                                 reenabling. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1C/H) Indicates which instruction queue received an ErrorResponse from the I/O subsystem.
                                                                 Software must disable the queue and reset it if DPI_REQ_ERR_RSP_EN[EN] is set, before
                                                                 processing further instructions on that queue. The ErrorResponse also sets the
                                                                 DPI_REQ_ERR_RSP[QERR] bit. */
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1C/H) Indicates which instruction queue received a timeout when instruction never completes
                                                                 on that queue resulting in a stall. This error will also disable the corresponding
                                                                 instruction queue (DPI()_VDMA()_EN[QEN]) and must be reset with DPI()_DMA()_QRST[QRST]
                                                                 before reenabling. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_reqqx_int_s cn; */
};
typedef union cavm_dpix_af_reqqx_int cavm_dpix_af_reqqx_int_t;

static inline uint64_t CAVM_DPIX_AF_REQQX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQQX_INT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180012c00ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_REQQX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQQX_INT(a,b) cavm_dpix_af_reqqx_int_t
#define bustype_CAVM_DPIX_AF_REQQX_INT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQQX_INT(a,b) "DPIX_AF_REQQX_INT"
#define device_bar_CAVM_DPIX_AF_REQQX_INT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQQX_INT(a,b) (a)
#define arguments_CAVM_DPIX_AF_REQQX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_reqq#_int_ena_w1c
 *
 * DPI DMA Per Instruction Queue Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_reqqx_int_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_reqqx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_TIMEOUT]. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[ERR_RSP]. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INSTR_PSN]. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_FILL_INVAL]. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_ADDR_NULL]. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_DBO]. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[CSFLT]. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[WRFLT]. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[RDFLT]. */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INSTRFLT]. */
#else /* Word 0 - Little Endian */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INSTRFLT]. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[RDFLT]. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[WRFLT]. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[CSFLT]. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_DBO]. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_ADDR_NULL]. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_FILL_INVAL]. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INSTR_PSN]. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[ERR_RSP]. */
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for DPI_AF_REQQ(0..31)_INT[INST_TIMEOUT]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_reqqx_int_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_reqqx_int_ena_w1c cavm_dpix_af_reqqx_int_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_REQQX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQQX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180013800ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_REQQX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQQX_INT_ENA_W1C(a,b) cavm_dpix_af_reqqx_int_ena_w1c_t
#define bustype_CAVM_DPIX_AF_REQQX_INT_ENA_W1C(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQQX_INT_ENA_W1C(a,b) "DPIX_AF_REQQX_INT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_REQQX_INT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQQX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_DPIX_AF_REQQX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_reqq#_int_ena_w1s
 *
 * DPI DMA Per Instruction Queue Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_reqqx_int_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_reqqx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_TIMEOUT]. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[ERR_RSP]. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INSTR_PSN]. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_FILL_INVAL]. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_ADDR_NULL]. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_DBO]. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[CSFLT]. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[WRFLT]. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[RDFLT]. */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INSTRFLT]. */
#else /* Word 0 - Little Endian */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INSTRFLT]. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[RDFLT]. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[WRFLT]. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[CSFLT]. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_DBO]. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_ADDR_NULL]. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_FILL_INVAL]. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INSTR_PSN]. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[ERR_RSP]. */
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for DPI_AF_REQQ(0..31)_INT[INST_TIMEOUT]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_reqqx_int_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_reqqx_int_ena_w1s cavm_dpix_af_reqqx_int_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_REQQX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQQX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180013c00ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_REQQX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQQX_INT_ENA_W1S(a,b) cavm_dpix_af_reqqx_int_ena_w1s_t
#define bustype_CAVM_DPIX_AF_REQQX_INT_ENA_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQQX_INT_ENA_W1S(a,b) "DPIX_AF_REQQX_INT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_REQQX_INT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQQX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_REQQX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_reqq#_int_w1s
 *
 * DPI DMA Per Instruction Queue Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_dpix_af_reqqx_int_w1s
{
    uint64_t u;
    struct cavm_dpix_af_reqqx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_TIMEOUT]. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[ERR_RSP]. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INSTR_PSN]. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_FILL_INVAL]. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_ADDR_NULL]. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_DBO]. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[CSFLT]. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[WRFLT]. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[RDFLT]. */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INSTRFLT]. */
#else /* Word 0 - Little Endian */
        uint64_t instrflt              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INSTRFLT]. */
        uint64_t rdflt                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[RDFLT]. */
        uint64_t wrflt                 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[WRFLT]. */
        uint64_t csflt                 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[CSFLT]. */
        uint64_t inst_dbo              : 1;  /**< [  4:  4](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_DBO]. */
        uint64_t inst_addr_null        : 1;  /**< [  5:  5](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_ADDR_NULL]. */
        uint64_t inst_fill_inval       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_FILL_INVAL]. */
        uint64_t instr_psn             : 1;  /**< [  7:  7](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INSTR_PSN]. */
        uint64_t err_rsp               : 1;  /**< [  8:  8](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[ERR_RSP]. */
        uint64_t inst_timeout          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets DPI_AF_REQQ(0..31)_INT[INST_TIMEOUT]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_reqqx_int_w1s_s cn; */
};
typedef union cavm_dpix_af_reqqx_int_w1s cavm_dpix_af_reqqx_int_w1s_t;

static inline uint64_t CAVM_DPIX_AF_REQQX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQQX_INT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180013000ll + 0x10000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_AF_REQQX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQQX_INT_W1S(a,b) cavm_dpix_af_reqqx_int_w1s_t
#define bustype_CAVM_DPIX_AF_REQQX_INT_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQQX_INT_W1S(a,b) "DPIX_AF_REQQX_INT_W1S"
#define device_bar_CAVM_DPIX_AF_REQQX_INT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQQX_INT_W1S(a,b) (a)
#define arguments_CAVM_DPIX_AF_REQQX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_reqq_genbuff_th_limit
 *
 * DPI REQQ General Buffer High Threshold Configuration Register
 * The register throttles the general buffer limit based on the comparison of the used buffer with
 * threshold. The values for the fields in this register should be such that
 * [HITH_LIMIT] \<= [MEDTH_LIMIT] \<= [LOTH_LIMIT] \<= LIMIT \< LOTH(low threshold) \<
 * MEDTH(Medium threshold) \< HITH(High threshold)
 */
union cavm_dpix_af_reqq_genbuff_th_limit
{
    uint64_t u;
    struct cavm_dpix_af_reqq_genbuff_th_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t lopri_limit           : 6;  /**< [ 61: 56](R/W) Limits the number of the General buffers allocated to a low priority request queue.
                                                                 Priority set using DPI_DMA()_PRI[PRI]. */
        uint64_t reserved_54_55        : 2;
        uint64_t loth                  : 6;  /**< [ 53: 48](R/W) Request queue general buffer high threshold. Sets the low threshold for the
                                                                 number of general buffers to act as the max count. */
        uint64_t reserved_46_47        : 2;
        uint64_t loth_limit            : 6;  /**< [ 45: 40](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer low threshold. */
        uint64_t reserved_38_39        : 2;
        uint64_t medth                 : 6;  /**< [ 37: 32](R/W) Request queue general buffer high threshold. Sets the medium threshold for the
                                                                 number of general buffers
                                                                 to act as the max count. */
        uint64_t reserved_30_31        : 2;
        uint64_t medth_limit           : 6;  /**< [ 29: 24](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer medium threshold. */
        uint64_t reserved_22_23        : 2;
        uint64_t hith                  : 6;  /**< [ 21: 16](R/W) Request queue general buffer high threshold. Sets the high threshold for the
                                                                 number of general buffers
                                                                 to act as the max count. */
        uint64_t reserved_14_15        : 2;
        uint64_t hith_limit            : 6;  /**< [ 13:  8](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer high threshold. */
        uint64_t reserved_6_7          : 2;
        uint64_t limit                 : 6;  /**< [  5:  0](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer threshold. */
#else /* Word 0 - Little Endian */
        uint64_t limit                 : 6;  /**< [  5:  0](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer threshold. */
        uint64_t reserved_6_7          : 2;
        uint64_t hith_limit            : 6;  /**< [ 13:  8](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer high threshold. */
        uint64_t reserved_14_15        : 2;
        uint64_t hith                  : 6;  /**< [ 21: 16](R/W) Request queue general buffer high threshold. Sets the high threshold for the
                                                                 number of general buffers
                                                                 to act as the max count. */
        uint64_t reserved_22_23        : 2;
        uint64_t medth_limit           : 6;  /**< [ 29: 24](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer medium threshold. */
        uint64_t reserved_30_31        : 2;
        uint64_t medth                 : 6;  /**< [ 37: 32](R/W) Request queue general buffer high threshold. Sets the medium threshold for the
                                                                 number of general buffers
                                                                 to act as the max count. */
        uint64_t reserved_38_39        : 2;
        uint64_t loth_limit            : 6;  /**< [ 45: 40](R/W) Limits the number of the General buffers allocated to request queues based on
                                                                 Maximum request buffer low threshold. */
        uint64_t reserved_46_47        : 2;
        uint64_t loth                  : 6;  /**< [ 53: 48](R/W) Request queue general buffer high threshold. Sets the low threshold for the
                                                                 number of general buffers to act as the max count. */
        uint64_t reserved_54_55        : 2;
        uint64_t lopri_limit           : 6;  /**< [ 61: 56](R/W) Limits the number of the General buffers allocated to a low priority request queue.
                                                                 Priority set using DPI_DMA()_PRI[PRI]. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_reqq_genbuff_th_limit_s cn; */
};
typedef union cavm_dpix_af_reqq_genbuff_th_limit cavm_dpix_af_reqq_genbuff_th_limit_t;

static inline uint64_t CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(uint64_t a)
{
    if (a<=1)
        return 0x840180017000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_REQQ_GENBUFF_TH_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(a) cavm_dpix_af_reqq_genbuff_th_limit_t
#define bustype_CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(a) "DPIX_AF_REQQ_GENBUFF_TH_LIMIT"
#define device_bar_CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(a) (a)
#define arguments_CAVM_DPIX_AF_REQQ_GENBUFF_TH_LIMIT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_reqq_instr_timer
 *
 * DPI Request Queue Instruction Timer Register
 * DPI uses a cut through method for instructions. If an instruction never completes, the traffic
 * to an engine stops indefinitely. This register on detecting a dbell coout zero starts
 * counting down and an error is declared. The corresponding queue needs a reset. Upon timeout
 * it will set DPI_REQQ(0..31)_INT.INST_TIMEOUT interrupt and clear the DPI_VDMA_EN[QEN] for the
 * instruction que that had the error. Force the logic to drop the current in-flight instruction.
 */
union cavm_dpix_af_reqq_instr_timer
{
    uint64_t u;
    struct cavm_dpix_af_reqq_instr_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t timer_en              : 1;  /**< [  8:  8](R/W) Timer enable bit, when set, the timer counts down when lockup detected. */
        uint64_t reserved_2_7          : 6;
        uint64_t timer_cfg             : 2;  /**< [  1:  0](R/W) Allows the ability to configure the countdown timer in 32us steps.
                                                                 0x0 = 32us.
                                                                 0x1 = 64us.
                                                                 0x2 = 96us.
                                                                 0x3 = 128us. */
#else /* Word 0 - Little Endian */
        uint64_t timer_cfg             : 2;  /**< [  1:  0](R/W) Allows the ability to configure the countdown timer in 32us steps.
                                                                 0x0 = 32us.
                                                                 0x1 = 64us.
                                                                 0x2 = 96us.
                                                                 0x3 = 128us. */
        uint64_t reserved_2_7          : 6;
        uint64_t timer_en              : 1;  /**< [  8:  8](R/W) Timer enable bit, when set, the timer counts down when lockup detected. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_reqq_instr_timer_s cn; */
};
typedef union cavm_dpix_af_reqq_instr_timer cavm_dpix_af_reqq_instr_timer_t;

static inline uint64_t CAVM_DPIX_AF_REQQ_INSTR_TIMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_REQQ_INSTR_TIMER(uint64_t a)
{
    if (a<=1)
        return 0x840180017010ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_REQQ_INSTR_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_REQQ_INSTR_TIMER(a) cavm_dpix_af_reqq_instr_timer_t
#define bustype_CAVM_DPIX_AF_REQQ_INSTR_TIMER(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_REQQ_INSTR_TIMER(a) "DPIX_AF_REQQ_INSTR_TIMER"
#define device_bar_CAVM_DPIX_AF_REQQ_INSTR_TIMER(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_REQQ_INSTR_TIMER(a) (a)
#define arguments_CAVM_DPIX_AF_REQQ_INSTR_TIMER(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_rvu_int
 *
 * DPI AF RVU Interrupt Register
 * This register contains RVU error interrupt summary bits.
 */
union cavm_dpix_af_rvu_int
{
    uint64_t u;
    struct cavm_dpix_af_rvu_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See DPI_PRIV_LF()_CFG. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See DPI_PRIV_LF()_CFG. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_rvu_int_s cn; */
};
typedef union cavm_dpix_af_rvu_int cavm_dpix_af_rvu_int_t;

static inline uint64_t CAVM_DPIX_AF_RVU_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_RVU_INT(uint64_t a)
{
    if (a<=1)
        return 0x840180017400ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_RVU_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_RVU_INT(a) cavm_dpix_af_rvu_int_t
#define bustype_CAVM_DPIX_AF_RVU_INT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_RVU_INT(a) "DPIX_AF_RVU_INT"
#define device_bar_CAVM_DPIX_AF_RVU_INT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_RVU_INT(a) (a)
#define arguments_CAVM_DPIX_AF_RVU_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_rvu_int_ena_w1c
 *
 * DPI AF RVU Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_af_rvu_int_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_af_rvu_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_rvu_int_ena_w1c_s cn; */
};
typedef union cavm_dpix_af_rvu_int_ena_w1c cavm_dpix_af_rvu_int_ena_w1c_t;

static inline uint64_t CAVM_DPIX_AF_RVU_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_RVU_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x840180017418ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_RVU_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_RVU_INT_ENA_W1C(a) cavm_dpix_af_rvu_int_ena_w1c_t
#define bustype_CAVM_DPIX_AF_RVU_INT_ENA_W1C(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_RVU_INT_ENA_W1C(a) "DPIX_AF_RVU_INT_ENA_W1C"
#define device_bar_CAVM_DPIX_AF_RVU_INT_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_RVU_INT_ENA_W1C(a) (a)
#define arguments_CAVM_DPIX_AF_RVU_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_rvu_int_ena_w1s
 *
 * DPI AF RVU Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_af_rvu_int_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_af_rvu_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_rvu_int_ena_w1s_s cn; */
};
typedef union cavm_dpix_af_rvu_int_ena_w1s cavm_dpix_af_rvu_int_ena_w1s_t;

static inline uint64_t CAVM_DPIX_AF_RVU_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_RVU_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840180017410ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_RVU_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_RVU_INT_ENA_W1S(a) cavm_dpix_af_rvu_int_ena_w1s_t
#define bustype_CAVM_DPIX_AF_RVU_INT_ENA_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_RVU_INT_ENA_W1S(a) "DPIX_AF_RVU_INT_ENA_W1S"
#define device_bar_CAVM_DPIX_AF_RVU_INT_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_RVU_INT_ENA_W1S(a) (a)
#define arguments_CAVM_DPIX_AF_RVU_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_rvu_int_w1s
 *
 * DPI AF RVU Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_dpix_af_rvu_int_w1s
{
    uint64_t u;
    struct cavm_dpix_af_rvu_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_rvu_int_w1s_s cn; */
};
typedef union cavm_dpix_af_rvu_int_w1s cavm_dpix_af_rvu_int_w1s_t;

static inline uint64_t CAVM_DPIX_AF_RVU_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_RVU_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840180017408ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_RVU_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_RVU_INT_W1S(a) cavm_dpix_af_rvu_int_w1s_t
#define bustype_CAVM_DPIX_AF_RVU_INT_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_RVU_INT_W1S(a) "DPIX_AF_RVU_INT_W1S"
#define device_bar_CAVM_DPIX_AF_RVU_INT_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_RVU_INT_W1S(a) (a)
#define arguments_CAVM_DPIX_AF_RVU_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_rvu_lf_cfg_debug
 *
 * DPI Privileged LF Configuration Debug Registers
 * This debug register allows software to lookup the reverse mapping from VF/PF
 * slot to LF. The forward mapping is programmed with DPI_PRIV_LF()_CFG.
 */
union cavm_dpix_af_rvu_lf_cfg_debug
{
    uint64_t u;
    struct cavm_dpix_af_rvu_lf_cfg_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t reserved_14_15        : 2;
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t reserved_14_15        : 2;
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_rvu_lf_cfg_debug_s cn; */
};
typedef union cavm_dpix_af_rvu_lf_cfg_debug cavm_dpix_af_rvu_lf_cfg_debug_t;

static inline uint64_t CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(uint64_t a)
{
    if (a<=1)
        return 0x840180017420ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_RVU_LF_CFG_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(a) cavm_dpix_af_rvu_lf_cfg_debug_t
#define bustype_CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(a) "DPIX_AF_RVU_LF_CFG_DEBUG"
#define device_bar_CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(a) (a)
#define arguments_CAVM_DPIX_AF_RVU_LF_CFG_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_stat0
 *
 * DPI Statistics Register 0
 * Packet and cycle counter.
 */
union cavm_dpix_af_stat0
{
    uint64_t u;
    struct cavm_dpix_af_stat0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t pcnt                  : 48; /**< [ 47:  0](RO/H) Increments when DPI_STAT_CTRL[EN]=1 and a DMA is completed for one of the enabled engines
                                                                 or one of the selected non engine stats. Clears when DPI_STAT_CTRL[EN] is written from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint64_t pcnt                  : 48; /**< [ 47:  0](RO/H) Increments when DPI_STAT_CTRL[EN]=1 and a DMA is completed for one of the enabled engines
                                                                 or one of the selected non engine stats. Clears when DPI_STAT_CTRL[EN] is written from 0 to 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_stat0_s cn; */
};
typedef union cavm_dpix_af_stat0 cavm_dpix_af_stat0_t;

static inline uint64_t CAVM_DPIX_AF_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_STAT0(uint64_t a)
{
    if (a<=1)
        return 0x840180010338ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_STAT0(a) cavm_dpix_af_stat0_t
#define bustype_CAVM_DPIX_AF_STAT0(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_STAT0(a) "DPIX_AF_STAT0"
#define device_bar_CAVM_DPIX_AF_STAT0(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_STAT0(a) (a)
#define arguments_CAVM_DPIX_AF_STAT0(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_stat1
 *
 * DPI Statistics Register 1
 * Packet byte count.
 */
union cavm_dpix_af_stat1
{
    uint64_t u;
    struct cavm_dpix_af_stat1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t bcnt                  : 48; /**< [ 47:  0](RO/H) DMA/PKT Byte counter - Increments when DPI_STAT_CTRL[EN]=1.
                                                                 If DPI_STAT_CTRL[MUX_SEL] = ENG , this register increments by the number of
                                                                 bytes a selected engine read or writes to it's destination.
                                                                 If DPI_STAT_CTRL[MUX_SEL] = OPKT, this register increments by the number of
                                                                 bytes the SDP OPKT path writes to the PEM port(s). Clears when DPI_STAT_CTRL[EN]
                                                                 is written from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint64_t bcnt                  : 48; /**< [ 47:  0](RO/H) DMA/PKT Byte counter - Increments when DPI_STAT_CTRL[EN]=1.
                                                                 If DPI_STAT_CTRL[MUX_SEL] = ENG , this register increments by the number of
                                                                 bytes a selected engine read or writes to it's destination.
                                                                 If DPI_STAT_CTRL[MUX_SEL] = OPKT, this register increments by the number of
                                                                 bytes the SDP OPKT path writes to the PEM port(s). Clears when DPI_STAT_CTRL[EN]
                                                                 is written from 0 to 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_stat1_s cn; */
};
typedef union cavm_dpix_af_stat1 cavm_dpix_af_stat1_t;

static inline uint64_t CAVM_DPIX_AF_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_STAT1(uint64_t a)
{
    if (a<=1)
        return 0x840180010340ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_STAT1(a) cavm_dpix_af_stat1_t
#define bustype_CAVM_DPIX_AF_STAT1(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_STAT1(a) "DPIX_AF_STAT1"
#define device_bar_CAVM_DPIX_AF_STAT1(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_STAT1(a) (a)
#define arguments_CAVM_DPIX_AF_STAT1(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_stat2
 *
 * DPI Statistics Register 2
 * Cycle count.
 */
union cavm_dpix_af_stat2
{
    uint64_t u;
    struct cavm_dpix_af_stat2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t ccnt                  : 48; /**< [ 47:  0](RO/H) Cycle counter - Increments when DPI_STAT_CTRL[EN]=1.
                                                                 Clears when DPI_STAT_CTRL[EN] is written from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint64_t ccnt                  : 48; /**< [ 47:  0](RO/H) Cycle counter - Increments when DPI_STAT_CTRL[EN]=1.
                                                                 Clears when DPI_STAT_CTRL[EN] is written from 0 to 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_stat2_s cn; */
};
typedef union cavm_dpix_af_stat2 cavm_dpix_af_stat2_t;

static inline uint64_t CAVM_DPIX_AF_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_STAT2(uint64_t a)
{
    if (a<=1)
        return 0x840180010348ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_STAT2(a) cavm_dpix_af_stat2_t
#define bustype_CAVM_DPIX_AF_STAT2(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_STAT2(a) "DPIX_AF_STAT2"
#define device_bar_CAVM_DPIX_AF_STAT2(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_STAT2(a) (a)
#define arguments_CAVM_DPIX_AF_STAT2(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_stat_ctrl
 *
 * DPI Statistics Control Register
 * Control and enable for statistics gathering.
 */
union cavm_dpix_af_stat_ctrl
{
    uint64_t u;
    struct cavm_dpix_af_stat_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t stat_sel              : 10; /**< [ 17:  8](R/W) Definition changes based on [MUX_SEL]. Each set bit enables the counter to
                                                                 increment when the signal is asserted.
                                                                 [MUX_SEL]:
                                                                 0 - OPKT - [7:6] - PortEn.
                                                                 1 - RDENG - [5:0] - EngEn.
                                                                             [7:6] - PortEn.
                                                                             [9:8] - Dst - Ebus =1, 0=ncb.
                                                                 2 - WRENG - same as RDENG.
                                                                 3 - NCBI - [0] - dma_rd.
                                                                            [1] - inst_rd.
                                                                            [2] - dma_wr.
                                                                            [3] - cmpl_wr.
                                                                            [4] - csr_rsp.
                                                                            [5] - win_req.
                                                                 4 - NCBO - [0] - req_cpl.
                                                                            [1] - dma_cpl.
                                                                            [2] - win_cpl.
                                                                            [3] - csr_req.
                                                                 5 - EBI -  [0] - rsp.
                                                                            [1] - csr.
                                                                            [2] - win.
                                                                            [7:6] - PortEn.
                                                                 6 - EB0 -  [0] - rd_req.
                                                                            [1] - wr_req.
                                                                            [2] - csr_req.
                                                                            [7:6] - PortEn.
                                                                 7 - NPA_LWA_CCNT - [0] - rdb_npa_inc.
                                                                                    [1] - req_npa_inc.
                                                                                    [2] - cow_lwa_inc.
                                                                                    [3] - cow_ccnt_inc. */
        uint64_t en                    : 1;  /**< [  7:  7](R/W) 1 - Enable Statistics counting
                                                                 0 - Disable Statistics counting
                                                                 Software should set this bit after programming the MUX_SEL.
                                                                 Clear this bit to stop stats counters, then read DPI_STAT0,DPI_STAT1 and DPI_STAT2 to get
                                                                 counts.
                                                                 Writing this bit from a 0 to a 1 clears the DPI_STAT0,DPI_STAT1 and DPI_STAT2 counters. */
        uint64_t reserved_3_6          : 4;
        uint64_t mux_sel               : 3;  /**< [  2:  0](R/W) Select source to collect statistics counts.
                                                                 0 - OPKT.
                                                                 1 - RDENG.
                                                                 2 - WRENG.
                                                                 3 - NCBI.
                                                                 4 - NCBO.
                                                                 5 - EBI.
                                                                 6 - EBO.
                                                                 7 - NPA_LWA_CCNT. */
#else /* Word 0 - Little Endian */
        uint64_t mux_sel               : 3;  /**< [  2:  0](R/W) Select source to collect statistics counts.
                                                                 0 - OPKT.
                                                                 1 - RDENG.
                                                                 2 - WRENG.
                                                                 3 - NCBI.
                                                                 4 - NCBO.
                                                                 5 - EBI.
                                                                 6 - EBO.
                                                                 7 - NPA_LWA_CCNT. */
        uint64_t reserved_3_6          : 4;
        uint64_t en                    : 1;  /**< [  7:  7](R/W) 1 - Enable Statistics counting
                                                                 0 - Disable Statistics counting
                                                                 Software should set this bit after programming the MUX_SEL.
                                                                 Clear this bit to stop stats counters, then read DPI_STAT0,DPI_STAT1 and DPI_STAT2 to get
                                                                 counts.
                                                                 Writing this bit from a 0 to a 1 clears the DPI_STAT0,DPI_STAT1 and DPI_STAT2 counters. */
        uint64_t stat_sel              : 10; /**< [ 17:  8](R/W) Definition changes based on [MUX_SEL]. Each set bit enables the counter to
                                                                 increment when the signal is asserted.
                                                                 [MUX_SEL]:
                                                                 0 - OPKT - [7:6] - PortEn.
                                                                 1 - RDENG - [5:0] - EngEn.
                                                                             [7:6] - PortEn.
                                                                             [9:8] - Dst - Ebus =1, 0=ncb.
                                                                 2 - WRENG - same as RDENG.
                                                                 3 - NCBI - [0] - dma_rd.
                                                                            [1] - inst_rd.
                                                                            [2] - dma_wr.
                                                                            [3] - cmpl_wr.
                                                                            [4] - csr_rsp.
                                                                            [5] - win_req.
                                                                 4 - NCBO - [0] - req_cpl.
                                                                            [1] - dma_cpl.
                                                                            [2] - win_cpl.
                                                                            [3] - csr_req.
                                                                 5 - EBI -  [0] - rsp.
                                                                            [1] - csr.
                                                                            [2] - win.
                                                                            [7:6] - PortEn.
                                                                 6 - EB0 -  [0] - rd_req.
                                                                            [1] - wr_req.
                                                                            [2] - csr_req.
                                                                            [7:6] - PortEn.
                                                                 7 - NPA_LWA_CCNT - [0] - rdb_npa_inc.
                                                                                    [1] - req_npa_inc.
                                                                                    [2] - cow_lwa_inc.
                                                                                    [3] - cow_ccnt_inc. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_stat_ctrl_s cn; */
};
typedef union cavm_dpix_af_stat_ctrl cavm_dpix_af_stat_ctrl_t;

static inline uint64_t CAVM_DPIX_AF_STAT_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_STAT_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x840180010330ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_STAT_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_STAT_CTRL(a) cavm_dpix_af_stat_ctrl_t
#define bustype_CAVM_DPIX_AF_STAT_CTRL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_STAT_CTRL(a) "DPIX_AF_STAT_CTRL"
#define device_bar_CAVM_DPIX_AF_STAT_CTRL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_STAT_CTRL(a) (a)
#define arguments_CAVM_DPIX_AF_STAT_CTRL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_af_wctl_fif_thr
 *
 * DPI Request Write Control Completion FIFO threshold Register
 */
union cavm_dpix_af_wctl_fif_thr
{
    uint64_t u;
    struct cavm_dpix_af_wctl_fif_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t wctl_thr              : 7;  /**< [  6:  0](R/W) This register is the threshold for the write control completion fifo count.
                                                                 If the count is greater than the threshold, then enqueue is prioritized and
                                                                 the fifo can pop. */
#else /* Word 0 - Little Endian */
        uint64_t wctl_thr              : 7;  /**< [  6:  0](R/W) This register is the threshold for the write control completion fifo count.
                                                                 If the count is greater than the threshold, then enqueue is prioritized and
                                                                 the fifo can pop. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_af_wctl_fif_thr_s cn; */
};
typedef union cavm_dpix_af_wctl_fif_thr cavm_dpix_af_wctl_fif_thr_t;

static inline uint64_t CAVM_DPIX_AF_WCTL_FIF_THR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_AF_WCTL_FIF_THR(uint64_t a)
{
    if (a<=1)
        return 0x840180017008ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_AF_WCTL_FIF_THR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_AF_WCTL_FIF_THR(a) cavm_dpix_af_wctl_fif_thr_t
#define bustype_CAVM_DPIX_AF_WCTL_FIF_THR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_AF_WCTL_FIF_THR(a) "DPIX_AF_WCTL_FIF_THR"
#define device_bar_CAVM_DPIX_AF_WCTL_FIF_THR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_AF_WCTL_FIF_THR(a) (a)
#define arguments_CAVM_DPIX_AF_WCTL_FIF_THR(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_int
 *
 * DPI DMA Per-Request Queue Instruction Completion Interrupt Register
 * This register contains per-request queue completion interrupt bits.
 */
union cavm_dpix_lf_int
{
    uint64_t u;
    struct cavm_dpix_lf_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) DPI DMA per-process instruction completion interrupt. See DPI()_VDMA()_CNT.

                                                                 If these interrupts are enabled, the DPI()_DMA_CC()_INT interrupts should not be enabled. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) DPI DMA per-process instruction completion interrupt. See DPI()_VDMA()_CNT.

                                                                 If these interrupts are enabled, the DPI()_DMA_CC()_INT interrupts should not be enabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_int_s cn; */
};
typedef union cavm_dpix_lf_int cavm_dpix_lf_int_t;

static inline uint64_t CAVM_DPIX_LF_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_INT(uint64_t a)
{
    if (a<=1)
        return 0x840201800100ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_INT(a) cavm_dpix_lf_int_t
#define bustype_CAVM_DPIX_LF_INT(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_INT(a) "DPIX_LF_INT"
#define device_bar_CAVM_DPIX_LF_INT(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_INT(a) (a)
#define arguments_CAVM_DPIX_LF_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_int_ena_w1c
 *
 * DPI DMA Per-Request Queue Instruction Completion Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_dpix_lf_int_ena_w1c
{
    uint64_t u;
    struct cavm_dpix_lf_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_LF_INT[COMPLETE]. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DPI_LF_INT[COMPLETE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_int_ena_w1c_s cn; */
};
typedef union cavm_dpix_lf_int_ena_w1c cavm_dpix_lf_int_ena_w1c_t;

static inline uint64_t CAVM_DPIX_LF_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x840201800110ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_INT_ENA_W1C(a) cavm_dpix_lf_int_ena_w1c_t
#define bustype_CAVM_DPIX_LF_INT_ENA_W1C(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_INT_ENA_W1C(a) "DPIX_LF_INT_ENA_W1C"
#define device_bar_CAVM_DPIX_LF_INT_ENA_W1C(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_INT_ENA_W1C(a) (a)
#define arguments_CAVM_DPIX_LF_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_int_ena_w1s
 *
 * DPI DMA Per-Request Queue Instruction Completion Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_dpix_lf_int_ena_w1s
{
    uint64_t u;
    struct cavm_dpix_lf_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_LF_INT[COMPLETE]. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DPI_LF_INT[COMPLETE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_int_ena_w1s_s cn; */
};
typedef union cavm_dpix_lf_int_ena_w1s cavm_dpix_lf_int_ena_w1s_t;

static inline uint64_t CAVM_DPIX_LF_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840201800118ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_INT_ENA_W1S(a) cavm_dpix_lf_int_ena_w1s_t
#define bustype_CAVM_DPIX_LF_INT_ENA_W1S(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_INT_ENA_W1S(a) "DPIX_LF_INT_ENA_W1S"
#define device_bar_CAVM_DPIX_LF_INT_ENA_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_INT_ENA_W1S(a) (a)
#define arguments_CAVM_DPIX_LF_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_int_w1s
 *
 * DPI DMA Per-Request Queue Instruction Completion Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_dpix_lf_int_w1s
{
    uint64_t u;
    struct cavm_dpix_lf_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_LF_INT[COMPLETE]. */
#else /* Word 0 - Little Endian */
        uint64_t complete              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DPI_LF_INT[COMPLETE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_int_w1s_s cn; */
};
typedef union cavm_dpix_lf_int_w1s cavm_dpix_lf_int_w1s_t;

static inline uint64_t CAVM_DPIX_LF_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840201800108ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_INT_W1S(a) cavm_dpix_lf_int_w1s_t
#define bustype_CAVM_DPIX_LF_INT_W1S(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_INT_W1S(a) "DPIX_LF_INT_W1S"
#define device_bar_CAVM_DPIX_LF_INT_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_INT_W1S(a) (a)
#define arguments_CAVM_DPIX_LF_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_cnt
 *
 * DPI DMA Per-Request Queue Instruction Completion Counter Register
 * These registers provide a per-request queue instruction completion counter.
 */
union cavm_dpix_lf_vdma_cnt
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cnt                   : 16; /**< [ 15:  0](R/W/H) DPI DMA per-request queue instruction completion counter. DPI can increment a counter upon
                                                                 completion of a DPI DMA instruction. DPI subtracts the value written
                                                                 from [CNT] on a software write. A nonzero [CNT] asserts the corresponding
                                                                 DPI()_VF()_INT bit.

                                                                 DPI increments the [CNT] for the corresponding request queue by one after completing
                                                                 a DPI_DMA_INSTR_HDR_S[PT]=DPI_HDR_PT_E::CNT DPI DMA instruction.

                                                                 Software may need to clear the counter after performing an instruction queue reset. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 16; /**< [ 15:  0](R/W/H) DPI DMA per-request queue instruction completion counter. DPI can increment a counter upon
                                                                 completion of a DPI DMA instruction. DPI subtracts the value written
                                                                 from [CNT] on a software write. A nonzero [CNT] asserts the corresponding
                                                                 DPI()_VF()_INT bit.

                                                                 DPI increments the [CNT] for the corresponding request queue by one after completing
                                                                 a DPI_DMA_INSTR_HDR_S[PT]=DPI_HDR_PT_E::CNT DPI DMA instruction.

                                                                 Software may need to clear the counter after performing an instruction queue reset. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_cnt_s cn; */
};
typedef union cavm_dpix_lf_vdma_cnt cavm_dpix_lf_vdma_cnt_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_CNT(uint64_t a)
{
    if (a<=1)
        return 0x840201800038ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_CNT(a) cavm_dpix_lf_vdma_cnt_t
#define bustype_CAVM_DPIX_LF_VDMA_CNT(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_CNT(a) "DPIX_LF_VDMA_CNT"
#define device_bar_CAVM_DPIX_LF_VDMA_CNT(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_CNT(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_CNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_counts
 *
 * DPI DMA Instruction Counts Registers
 * These registers provide values for determining the number of instructions in the local
 * instruction FIFO.
 */
union cavm_dpix_lf_vdma_counts
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_counts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t rsvd_buf_used_cnt     : 2;  /**< [ 41: 40](RO/H) Count of reserved buffers used. Specifies the number of reserved 64B buffers
                                                                 allocated for local instruction storage. */
        uint64_t reserved_39           : 1;
        uint64_t buf_used_cnt          : 7;  /**< [ 38: 32](RO/H) Buffer used count. Specifies the number of 64B buffers allocated for local instruction storage. */
        uint64_t dbell                 : 32; /**< [ 31:  0](RO/H) Doorbell. Specifies the number of available words of instructions to read. */
#else /* Word 0 - Little Endian */
        uint64_t dbell                 : 32; /**< [ 31:  0](RO/H) Doorbell. Specifies the number of available words of instructions to read. */
        uint64_t buf_used_cnt          : 7;  /**< [ 38: 32](RO/H) Buffer used count. Specifies the number of 64B buffers allocated for local instruction storage. */
        uint64_t reserved_39           : 1;
        uint64_t rsvd_buf_used_cnt     : 2;  /**< [ 41: 40](RO/H) Count of reserved buffers used. Specifies the number of reserved 64B buffers
                                                                 allocated for local instruction storage. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_counts_s cn; */
};
typedef union cavm_dpix_lf_vdma_counts cavm_dpix_lf_vdma_counts_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_COUNTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_COUNTS(uint64_t a)
{
    if (a<=1)
        return 0x840201800020ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_COUNTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_COUNTS(a) cavm_dpix_lf_vdma_counts_t
#define bustype_CAVM_DPIX_LF_VDMA_COUNTS(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_COUNTS(a) "DPIX_LF_VDMA_COUNTS"
#define device_bar_CAVM_DPIX_LF_VDMA_COUNTS(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_COUNTS(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_COUNTS(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_dbell
 *
 * DPI DMA Doorbell Registers
 * This is the door bell register for the eight DMA instruction queues.
 */
union cavm_dpix_lf_vdma_dbell
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_dbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t dbell                 : 16; /**< [ 15:  0](WO/H) Doorbell value. The value written to this register is added to the number of eight-byte
                                                                 words to be read and processed. */
#else /* Word 0 - Little Endian */
        uint64_t dbell                 : 16; /**< [ 15:  0](WO/H) Doorbell value. The value written to this register is added to the number of eight-byte
                                                                 words to be read and processed. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_dbell_s cn; */
};
typedef union cavm_dpix_lf_vdma_dbell cavm_dpix_lf_vdma_dbell_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_DBELL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_DBELL(uint64_t a)
{
    if (a<=1)
        return 0x840201800010ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_DBELL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_DBELL(a) cavm_dpix_lf_vdma_dbell_t
#define bustype_CAVM_DPIX_LF_VDMA_DBELL(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_DBELL(a) "DPIX_LF_VDMA_DBELL"
#define device_bar_CAVM_DPIX_LF_VDMA_DBELL(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_DBELL(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_DBELL(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_en
 *
 * DPI Request Global Enable Register
 */
union cavm_dpix_lf_vdma_en
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t qen                   : 1;  /**< [  0:  0](R/W/H) Controls if instruction queue is enabled and can dispatch instructions to a requesting engine. */
#else /* Word 0 - Little Endian */
        uint64_t qen                   : 1;  /**< [  0:  0](R/W/H) Controls if instruction queue is enabled and can dispatch instructions to a requesting engine. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_en_s cn; */
};
typedef union cavm_dpix_lf_vdma_en cavm_dpix_lf_vdma_en_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_EN(uint64_t a)
{
    if (a<=1)
        return 0x840201800000ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_EN(a) cavm_dpix_lf_vdma_en_t
#define bustype_CAVM_DPIX_LF_VDMA_EN(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_EN(a) "DPIX_LF_VDMA_EN"
#define device_bar_CAVM_DPIX_LF_VDMA_EN(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_EN(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_EN(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_iwbusy
 *
 * DPI DMA Instruction Word Busy Register
 */
union cavm_dpix_lf_vdma_iwbusy
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_iwbusy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t iwbusy                : 1;  /**< [  0:  0](RO/H) Indicates that there are valid instructions in the request queue local
                                                                 cache. These instructions will be dropped if DPI()_DMA()_QRST[QRST] is set for
                                                                 the corresponding request queue. */
#else /* Word 0 - Little Endian */
        uint64_t iwbusy                : 1;  /**< [  0:  0](RO/H) Indicates that there are valid instructions in the request queue local
                                                                 cache. These instructions will be dropped if DPI()_DMA()_QRST[QRST] is set for
                                                                 the corresponding request queue. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_iwbusy_s cn; */
};
typedef union cavm_dpix_lf_vdma_iwbusy cavm_dpix_lf_vdma_iwbusy_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_IWBUSY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_IWBUSY(uint64_t a)
{
    if (a<=1)
        return 0x840201800030ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_IWBUSY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_IWBUSY(a) cavm_dpix_lf_vdma_iwbusy_t
#define bustype_CAVM_DPIX_LF_VDMA_IWBUSY(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_IWBUSY(a) "DPIX_LF_VDMA_IWBUSY"
#define device_bar_CAVM_DPIX_LF_VDMA_IWBUSY(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_IWBUSY(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_IWBUSY(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_naddr
 *
 * DPI DMA Next Ichunk Address Registers
 * These registers provide the IOVA to read the next Ichunk data.
 */
union cavm_dpix_lf_vdma_naddr
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_naddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](RO/H) Address. Provides the next IOVA to read instructions.  For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](RO/H) Address. Provides the next IOVA to read instructions.  For diagnostic use only. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_naddr_s cn; */
};
typedef union cavm_dpix_lf_vdma_naddr cavm_dpix_lf_vdma_naddr_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_NADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_NADDR(uint64_t a)
{
    if (a<=1)
        return 0x840201800028ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_NADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_NADDR(a) cavm_dpix_lf_vdma_naddr_t
#define bustype_CAVM_DPIX_LF_VDMA_NADDR(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_NADDR(a) "DPIX_LF_VDMA_NADDR"
#define device_bar_CAVM_DPIX_LF_VDMA_NADDR(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_NADDR(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_NADDR(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_reqq_ctl
 *
 * DPI DMA Request Queue Control Register
 * This register contains the control bits for transactions on the eight request queues.
 */
union cavm_dpix_lf_vdma_reqq_ctl
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_reqq_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t des_be                : 1;  /**< [ 12: 12](R/W) Reserved. */
        uint64_t reserved_9_11         : 3;
        uint64_t st_cmd                : 1;  /**< [  8:  8](R/W) When DPI issues a store full line command to the NCB that is to be cached, this field
                                                                 select the type of store command to use:
                                                                 0 = STF.
                                                                 1 = STY. */
        uint64_t reserved_2_7          : 6;
        uint64_t ld_cmd                : 2;  /**< [  1:  0](R/W) When DPI issues a load command to the NCB that is to be cached, this field select the type
                                                                 of load command to use:
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd                : 2;  /**< [  1:  0](R/W) When DPI issues a load command to the NCB that is to be cached, this field select the type
                                                                 of load command to use:
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t reserved_2_7          : 6;
        uint64_t st_cmd                : 1;  /**< [  8:  8](R/W) When DPI issues a store full line command to the NCB that is to be cached, this field
                                                                 select the type of store command to use:
                                                                 0 = STF.
                                                                 1 = STY. */
        uint64_t reserved_9_11         : 3;
        uint64_t des_be                : 1;  /**< [ 12: 12](R/W) Reserved. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_reqq_ctl_s cn; */
};
typedef union cavm_dpix_lf_vdma_reqq_ctl cavm_dpix_lf_vdma_reqq_ctl_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_REQQ_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_REQQ_CTL(uint64_t a)
{
    if (a<=1)
        return 0x840201800008ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_REQQ_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_REQQ_CTL(a) cavm_dpix_lf_vdma_reqq_ctl_t
#define bustype_CAVM_DPIX_LF_VDMA_REQQ_CTL(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_REQQ_CTL(a) "DPIX_LF_VDMA_REQQ_CTL"
#define device_bar_CAVM_DPIX_LF_VDMA_REQQ_CTL(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_REQQ_CTL(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_REQQ_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) dpi#_lf_vdma_saddr
 *
 * DPI DMA Instruction-Buffer Starting-Address Registers
 * These registers provide the address to start reading instructions for the eight DMA
 * instruction queues. These register should only be written to when the specified queue is
 * disabled (DPI()_VDMA()_EN[QEN]).
 */
union cavm_dpix_lf_vdma_saddr
{
    uint64_t u;
    struct cavm_dpix_lf_vdma_saddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t idle                  : 1;  /**< [ 63: 63](RO/H) DMA request queue is idle. When asserted, the associated request queue is idle. */
        uint64_t reserved_53_62        : 10;
        uint64_t saddr                 : 46; /**< [ 52:  7](R/W/H) Starting address. The 128-byte aligned starting or chunk address. [SADDR] is address bit
                                                                 \<52:7\> of the starting instructions address. When new chunks are fetched by the hardware,
                                                                 SADDR is updated to reflect the address of the current chunk. A write to SADDR resets both
                                                                 the queue's doorbell (DPI()_VDMA()_COUNTS[DBELL]) and its tail pointer
                                                                 (DPI()_VDMA()_NADDR[ADDR]). */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t saddr                 : 46; /**< [ 52:  7](R/W/H) Starting address. The 128-byte aligned starting or chunk address. [SADDR] is address bit
                                                                 \<52:7\> of the starting instructions address. When new chunks are fetched by the hardware,
                                                                 SADDR is updated to reflect the address of the current chunk. A write to SADDR resets both
                                                                 the queue's doorbell (DPI()_VDMA()_COUNTS[DBELL]) and its tail pointer
                                                                 (DPI()_VDMA()_NADDR[ADDR]). */
        uint64_t reserved_53_62        : 10;
        uint64_t idle                  : 1;  /**< [ 63: 63](RO/H) DMA request queue is idle. When asserted, the associated request queue is idle. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_lf_vdma_saddr_s cn; */
};
typedef union cavm_dpix_lf_vdma_saddr cavm_dpix_lf_vdma_saddr_t;

static inline uint64_t CAVM_DPIX_LF_VDMA_SADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_LF_VDMA_SADDR(uint64_t a)
{
    if (a<=1)
        return 0x840201800018ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_LF_VDMA_SADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_LF_VDMA_SADDR(a) cavm_dpix_lf_vdma_saddr_t
#define bustype_CAVM_DPIX_LF_VDMA_SADDR(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_DPIX_LF_VDMA_SADDR(a) "DPIX_LF_VDMA_SADDR"
#define device_bar_CAVM_DPIX_LF_VDMA_SADDR(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_DPIX_LF_VDMA_SADDR(a) (a)
#define arguments_CAVM_DPIX_LF_VDMA_SADDR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_priv_af_int_cfg
 *
 * DPI Privileged AF Interrupt Configuration Registers
 */
union cavm_dpix_priv_af_int_cfg
{
    uint64_t u;
    struct cavm_dpix_priv_af_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by DPI_AF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 DPI_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 DPI_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by DPI_AF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_priv_af_int_cfg_s cn; */
};
typedef union cavm_dpix_priv_af_int_cfg cavm_dpix_priv_af_int_cfg_t;

static inline uint64_t CAVM_DPIX_PRIV_AF_INT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_PRIV_AF_INT_CFG(uint64_t a)
{
    if (a<=1)
        return 0x840180018100ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("DPIX_PRIV_AF_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_PRIV_AF_INT_CFG(a) cavm_dpix_priv_af_int_cfg_t
#define bustype_CAVM_DPIX_PRIV_AF_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_PRIV_AF_INT_CFG(a) "DPIX_PRIV_AF_INT_CFG"
#define device_bar_CAVM_DPIX_PRIV_AF_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_PRIV_AF_INT_CFG(a) (a)
#define arguments_CAVM_DPIX_PRIV_AF_INT_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_priv_lf#_cfg
 *
 * DPI Privileged LF Configuration Registers
 * These registers allow each DPI local function (LF) to be provisioned to a VF/PF
 * slot for RVU. See also DPI_AF_RVU_LF_CFG_DEBUG.
 */
union cavm_dpix_priv_lfx_cfg
{
    uint64_t u;
    struct cavm_dpix_priv_lfx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
        uint64_t reserved_24_62        : 39;
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
#else /* Word 0 - Little Endian */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t reserved_24_62        : 39;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_priv_lfx_cfg_s cn; */
};
typedef union cavm_dpix_priv_lfx_cfg cavm_dpix_priv_lfx_cfg_t;

static inline uint64_t CAVM_DPIX_PRIV_LFX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_PRIV_LFX_CFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180018000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_PRIV_LFX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_PRIV_LFX_CFG(a,b) cavm_dpix_priv_lfx_cfg_t
#define bustype_CAVM_DPIX_PRIV_LFX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_PRIV_LFX_CFG(a,b) "DPIX_PRIV_LFX_CFG"
#define device_bar_CAVM_DPIX_PRIV_LFX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_PRIV_LFX_CFG(a,b) (a)
#define arguments_CAVM_DPIX_PRIV_LFX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) dpi#_priv_lf#_int_cfg
 *
 * DPI Privileged LF Interrupt Configuration Registers
 */
union cavm_dpix_priv_lfx_int_cfg
{
    uint64_t u;
    struct cavm_dpix_priv_lfx_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by DPI_LF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 DPI_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 DPI_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 DPI_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 DPI_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by DPI_LF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dpix_priv_lfx_int_cfg_s cn; */
};
typedef union cavm_dpix_priv_lfx_int_cfg cavm_dpix_priv_lfx_int_cfg_t;

static inline uint64_t CAVM_DPIX_PRIV_LFX_INT_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DPIX_PRIV_LFX_INT_CFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=31))
        return 0x840180018200ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1f);
    __cavm_csr_fatal("DPIX_PRIV_LFX_INT_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DPIX_PRIV_LFX_INT_CFG(a,b) cavm_dpix_priv_lfx_int_cfg_t
#define bustype_CAVM_DPIX_PRIV_LFX_INT_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_DPIX_PRIV_LFX_INT_CFG(a,b) "DPIX_PRIV_LFX_INT_CFG"
#define device_bar_CAVM_DPIX_PRIV_LFX_INT_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_DPIX_PRIV_LFX_INT_CFG(a,b) (a)
#define arguments_CAVM_DPIX_PRIV_LFX_INT_CFG(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_DPI_H__ */
