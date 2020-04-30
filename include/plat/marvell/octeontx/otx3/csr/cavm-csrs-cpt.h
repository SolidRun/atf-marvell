#ifndef __CAVM_CSRS_CPT_H__
#define __CAVM_CSRS_CPT_H__
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
 * OcteonTX CPT.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration cpt_af_int_vec_e
 *
 * CPT AF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_CPT_AF_INT_VEC_E_FLTX(a) (0 + (a))
#define CAVM_CPT_AF_INT_VEC_E_RAS (3)
#define CAVM_CPT_AF_INT_VEC_E_RVU (2)

/**
 * Enumeration cpt_comp_e
 *
 * CPT Completion Enumeration
 * Enumerates the values of CPT_RES_S[COMPCODE].
 */
#define CAVM_CPT_COMP_E_FAULT (2)
#define CAVM_CPT_COMP_E_GOOD (1)
#define CAVM_CPT_COMP_E_HWERR (4)
#define CAVM_CPT_COMP_E_INSTERR (5)
#define CAVM_CPT_COMP_E_NOTDONE (0)
#define CAVM_CPT_COMP_E_SWERR (3)

/**
 * Enumeration cpt_engine_err_type_e
 *
 * CPT Engine Error Code Enumeration
 * Enumerates the values of CPT_AF_EXE_ERR_INFO[ERRCODE].
 */
#define CAVM_CPT_ENGINE_ERR_TYPE_E_BUS (0x20)
#define CAVM_CPT_ENGINE_ERR_TYPE_E_GE (8)
#define CAVM_CPT_ENGINE_ERR_TYPE_E_NOERR (0)
#define CAVM_CPT_ENGINE_ERR_TYPE_E_RF (1)
#define CAVM_CPT_ENGINE_ERR_TYPE_E_UC (2)
#define CAVM_CPT_ENGINE_ERR_TYPE_E_WD (4)

/**
 * Enumeration cpt_eop_e
 *
 * CPT EOP (EPCI Opcodes) Enumeration
 * This enumerates opcodes on the EPCI bus between the CPT controller and engines.
 */
#define CAVM_CPT_EOP_E_ATM_FAA64 (0x3b)
#define CAVM_CPT_EOP_E_DMA_RD_LDD (8)
#define CAVM_CPT_EOP_E_DMA_RD_LDE (0xb)
#define CAVM_CPT_EOP_E_DMA_RD_LDI (2)
#define CAVM_CPT_EOP_E_DMA_RD_LDT (1)
#define CAVM_CPT_EOP_E_DMA_RD_LDWB (0xd)
#define CAVM_CPT_EOP_E_DMA_RD_LDY (6)
#define CAVM_CPT_EOP_E_DMA_WR_STP (0x12)
#define CAVM_CPT_EOP_E_DMA_WR_STT (0x11)
#define CAVM_CPT_EOP_E_DMA_WR_STY (0xe)
#define CAVM_CPT_EOP_E_ERR_REQUEST (0xfb)
#define CAVM_CPT_EOP_E_MEMB (0xfd)
#define CAVM_CPT_EOP_E_NEW_WORK_REQ (0xff)
#define CAVM_CPT_EOP_E_RANDOM1_REQ (0x61)
#define CAVM_CPT_EOP_E_RANDOMP_REQ (0x62)
#define CAVM_CPT_EOP_E_RANDOM_REQ (0x60)
#define CAVM_CPT_EOP_E_UCODE_REQ (0xfc)

/**
 * Enumeration cpt_lf_int_vec_e
 *
 * CPT LF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_CPT_LF_INT_VEC_E_DONE (1)
#define CAVM_CPT_LF_INT_VEC_E_MISC (0)

/**
 * Enumeration cpt_psb_acc_e
 *
 * CPT Power Serial Bus Accumulator Enumeration
 * Enumerates the CPT accumulators for CPT PSB slaves, which correspond to index {b} of
 * PSBS_SYS()_ACCUM().
 */
#define CAVM_CPT_PSB_ACC_E_RSVD3 (3)
#define CAVM_CPT_PSB_ACC_E_STARTED_AE (2)
#define CAVM_CPT_PSB_ACC_E_STARTED_IE (1)
#define CAVM_CPT_PSB_ACC_E_STARTED_SE (0)

/**
 * Enumeration cpt_psb_event_e
 *
 * CPT Power Serial Bus Event Enumeration
 * Enumerates the event numbers for CPT PSB slaves, which correspond to index {b} of
 * PSBS_SYS()_EVENT()_CFG.
 */
#define CAVM_CPT_PSB_EVENT_E_BUSY_AE_BITX(a) (0x10 + (a))
#define CAVM_CPT_PSB_EVENT_E_BUSY_IE_BITX(a) (8 + (a))
#define CAVM_CPT_PSB_EVENT_E_BUSY_SE_BITX(a) (0 + (a))
#define CAVM_CPT_PSB_EVENT_E_STARTED_AE (0x22)
#define CAVM_CPT_PSB_EVENT_E_STARTED_IE (0x21)
#define CAVM_CPT_PSB_EVENT_E_STARTED_SE (0x20)

/**
 * Structure cpt_fc_write_s
 *
 * CPT Flow Control Write Structure
 * The structure CPT writes to memory when queue flow control is enabled. CPT writes the
 * CPT_FC_WRITE_S for a queue to this LF IOVA: CPT_LF_Q_BASE[ADDR] \<\< 7.
 *
 * CPT stores the two 64-bit words of this structure in memory in little-endian format
 * unless CPT_AF_LF()_PTR_CTL[INST_BE] is set. If CPT_AF_LF()_PTR_CTL[INST_BE] is set,
 * CPT swaps the bytes within each 64-bit word.
 */
union cavm_cpt_fc_write_s
{
    uint64_t u[2];
    struct cavm_cpt_fc_write_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t qsize                 : 32; /**< [ 31:  0] The memory queue size value. See also CPT_LF_CTL[FC_HYST_BITS,FC_UP_CROSSING,FC_ENA]
                                                                 and CPT_AF_CTL[FC_STYPE]. When enabled, CPT periodically stores a CPT_FC_WRITE_S
                                                                 for the queue to memory. CPT_LF_CTL[FC_HYST_BITS] controls how frequently CPT
                                                                 writes the CPT_FC_WRITE_S for the queue.

                                                                 [QSIZE] is the number of CPT_INST_S's in the queue in memory at the time
                                                                 of the last CPT_FC_WRITE_S write:
                                                                  (CPT_LF_Q_INST_PTR[XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) +
                                                                  CPT_LF_Q_INST_PTR[NQ_PTR] - CPT_LF_Q_INST_PTR[DQ_PTR]. */
#else /* Word 0 - Little Endian */
        uint64_t qsize                 : 32; /**< [ 31:  0] The memory queue size value. See also CPT_LF_CTL[FC_HYST_BITS,FC_UP_CROSSING,FC_ENA]
                                                                 and CPT_AF_CTL[FC_STYPE]. When enabled, CPT periodically stores a CPT_FC_WRITE_S
                                                                 for the queue to memory. CPT_LF_CTL[FC_HYST_BITS] controls how frequently CPT
                                                                 writes the CPT_FC_WRITE_S for the queue.

                                                                 [QSIZE] is the number of CPT_INST_S's in the queue in memory at the time
                                                                 of the last CPT_FC_WRITE_S write:
                                                                  (CPT_LF_Q_INST_PTR[XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) +
                                                                  CPT_LF_Q_INST_PTR[NQ_PTR] - CPT_LF_Q_INST_PTR[DQ_PTR]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_cpt_fc_write_s_s cn; */
};

/**
 * Structure cpt_inst_s
 *
 * CPT Instruction Structure
 * This structure specifies the CPT instruction layout.
 * _ CPT_INST_S's sent to CPT_LF_NQ() in CPT (via an LMTST in the usual case where
 * an AP initiates them) must always be in little-endian format, same as all other
 * CSR-like accesses.
 * _ CPT_INST_S's buffered by CPT (offset of CPT_LF_Q_BASE[ADDR]) are in an
 * implementation-defined format.
 */
union cavm_cpt_inst_s
{
    uint64_t u[8];
    struct cavm_cpt_inst_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nixtx_addr            : 60; /**< [ 63:  4] When [NIXTXL]!=0x0, [NIXTX_ADDR] must be nonzero, and must point to the
                                                                 LMTST portion of the descriptor that CPT may submit to NIX TX after
                                                                 completing the CPT_INST_S. When [NIXTXL]=0x0, [NIXTX_ADDR] is reserved
                                                                 and must be zero.

                                                                 [NIXTX_ADDR] is a 128-bit word address (i.e. \<3:0\> is missing from a byte
                                                                 address equivalent). The start of the LMTST portion of the NIX TX descriptor
                                                                 must be aligned to a 128-bit / 16 byte boundary.

                                                                 CPT doesn't modify the descriptor bytes that it passes to NIXTX. NIXTX
                                                                 will receive the bytes in the same format as they are in memory, including
                                                                 endianness.

                                                                 Upon an SMMU fault reading the descriptor from [NIXTX_ADDR], CPT sets
                                                                 CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on the descriptor read.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0. */
        uint64_t doneint               : 1;  /**< [  3:  3] Done interrupt.
                                                                 0 = No interrupts related to this instruction.
                                                                 1 = When the instruction completes, CPT_LF_DONE[DONE] will be incremented,
                                                                 and may cause an interrupt. (Except sometimes when [NIXTXL]!=0x0.)

                                                                 CPT increments CPT_LF_DONE[DONE] after it writes the CPT_RES_S (see
                                                                 [RES_ADDR]), but the increment is unordered relative any SSO submit (see
                                                                 [WQE_PTR]). CPT does not increment CPT_LF_DONE[DONE] when it sends a
                                                                 descriptor to NIX TX (see [NIXTXL]). [QORD] has no direct affect on when
                                                                 any CPT_LF_DONE[DONE] increment occurs.

                                                                 See also CPT_RES_S[DONEINT].

                                                                 Internal:
                                                                 CPT_LF_DONE[DONE] increment conceptually occurs after the CPT_RES_S write.
                                                                 We say [QORD] doesn't affect this increment order because it doesn't
                                                                 affect the CPT_RES_S write order. See the [RES_ADDR] internal comment. */
        uint64_t nixtxl                : 3;  /**< [  2:  0] When [NIXTXL]!=0x0, [NIXTXL]+1 is the length in 128-bit words of the LMTST
                                                                 portion of the NIX TX descriptor (pointed at by [NIXTX_ADDR]) that CPT may
                                                                 submit (via an effective LMTST) to NIX TX after executing the CPT_INST_S.
                                                                 The length of the LMTST portion of the NIX TX descriptor is a multiple of
                                                                 16 bytes between 32 and 128 bytes.

                                                                 CPT will NOT submit a descriptor to NIX TX for a CPT_INST_S in any of these
                                                                 conditions:
                                                                 * [NIXTXL]=0x0.
                                                                 * CPT_AF_LF()_CTL[NIXTX_EN] is clear (see below).
                                                                 * An SMMU fault occurs on the CPT_RES_S write to [RES_ADDR]. (CPT sets
                                                                 CPT_LF_MISC_INT[NWRP] in this case).
                                                                 * The final CPT_RES_S[COMPCODE]!=CPT_COMP_E::GOOD (i.e. CPT hardware detects
                                                                 an error for the CPT_INST_S).
                                                                 * The final CPT_RES_S[UC_COMPCODE]!=0x0 (i.e. CPT engine microcode detects an
                                                                 error for the CPT_INST_S).

                                                                 Otherwise, whenever [NIXTXL]!=0x0, CPT submits the LMTST portion of the
                                                                 descriptor from [NIXTX_ADDR] to NIX TX.

                                                                 Whenever CPT submits the LMTST portion of a descriptor to NIX TX for
                                                                 the CPT_INST_S:
                                                                 * CPT will NOT increment CPT_LF_DONE[DONE] for the CPT_INST_S,
                                                                   regardless of the [DONEINT] value, and.
                                                                 * CPT will NOT submit a WQE for the CPT_INST_S, regardless of the
                                                                   [WQE_PTR] value. (Note that NIX TX will submit a WQE after sending
                                                                   the packet if the NIX TX descriptor contains a NIX_SEND_WORK_S.).
                                                                 * [RES_ADDR] behavior is unmodified, i.e. CPT will write a CPT_RES_S
                                                                   when it sends NIX TX a descriptor. The CPT_RES_S write will complete
                                                                   before NIX TX receives the descriptor.

                                                                 If [NIXTXL]!=0x0, but CPT does not submit a descriptor to NIX TX,
                                                                 CPT [DONEINT] and [WQE_PTR] behavior is unchanged by [NIXTXL]: CPT may
                                                                 increment CPT_LF_DONE[DONE], and may submit a WQE to SSO.

                                                                 CPT initiates the final NIX descriptor submit after the CPT_RES_S write
                                                                 (see [RES_ADDR]).

                                                                 CPT_AF_LF()_CTL[NIXTX_EN] must be set when [NIXTXL]!=0x0. (NIX sets
                                                                 CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when the
                                                                 instruction violates this rule.)

                                                                 [QORD] must be set when [NIXTXL]!=0x0. (NIX sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when the instruction violates this
                                                                 rule.) If two CPT_INST_S's in the same CPT LF/queue are destined
                                                                 for the same NIX TX send queue, then their transmit order will
                                                                 match their CPT enqueue order. NIX_SEND_HDR_S[SQ] in the NIX TX descriptor
                                                                 selects the NIX TX send queue. */
#else /* Word 0 - Little Endian */
        uint64_t nixtxl                : 3;  /**< [  2:  0] When [NIXTXL]!=0x0, [NIXTXL]+1 is the length in 128-bit words of the LMTST
                                                                 portion of the NIX TX descriptor (pointed at by [NIXTX_ADDR]) that CPT may
                                                                 submit (via an effective LMTST) to NIX TX after executing the CPT_INST_S.
                                                                 The length of the LMTST portion of the NIX TX descriptor is a multiple of
                                                                 16 bytes between 32 and 128 bytes.

                                                                 CPT will NOT submit a descriptor to NIX TX for a CPT_INST_S in any of these
                                                                 conditions:
                                                                 * [NIXTXL]=0x0.
                                                                 * CPT_AF_LF()_CTL[NIXTX_EN] is clear (see below).
                                                                 * An SMMU fault occurs on the CPT_RES_S write to [RES_ADDR]. (CPT sets
                                                                 CPT_LF_MISC_INT[NWRP] in this case).
                                                                 * The final CPT_RES_S[COMPCODE]!=CPT_COMP_E::GOOD (i.e. CPT hardware detects
                                                                 an error for the CPT_INST_S).
                                                                 * The final CPT_RES_S[UC_COMPCODE]!=0x0 (i.e. CPT engine microcode detects an
                                                                 error for the CPT_INST_S).

                                                                 Otherwise, whenever [NIXTXL]!=0x0, CPT submits the LMTST portion of the
                                                                 descriptor from [NIXTX_ADDR] to NIX TX.

                                                                 Whenever CPT submits the LMTST portion of a descriptor to NIX TX for
                                                                 the CPT_INST_S:
                                                                 * CPT will NOT increment CPT_LF_DONE[DONE] for the CPT_INST_S,
                                                                   regardless of the [DONEINT] value, and.
                                                                 * CPT will NOT submit a WQE for the CPT_INST_S, regardless of the
                                                                   [WQE_PTR] value. (Note that NIX TX will submit a WQE after sending
                                                                   the packet if the NIX TX descriptor contains a NIX_SEND_WORK_S.).
                                                                 * [RES_ADDR] behavior is unmodified, i.e. CPT will write a CPT_RES_S
                                                                   when it sends NIX TX a descriptor. The CPT_RES_S write will complete
                                                                   before NIX TX receives the descriptor.

                                                                 If [NIXTXL]!=0x0, but CPT does not submit a descriptor to NIX TX,
                                                                 CPT [DONEINT] and [WQE_PTR] behavior is unchanged by [NIXTXL]: CPT may
                                                                 increment CPT_LF_DONE[DONE], and may submit a WQE to SSO.

                                                                 CPT initiates the final NIX descriptor submit after the CPT_RES_S write
                                                                 (see [RES_ADDR]).

                                                                 CPT_AF_LF()_CTL[NIXTX_EN] must be set when [NIXTXL]!=0x0. (NIX sets
                                                                 CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when the
                                                                 instruction violates this rule.)

                                                                 [QORD] must be set when [NIXTXL]!=0x0. (NIX sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when the instruction violates this
                                                                 rule.) If two CPT_INST_S's in the same CPT LF/queue are destined
                                                                 for the same NIX TX send queue, then their transmit order will
                                                                 match their CPT enqueue order. NIX_SEND_HDR_S[SQ] in the NIX TX descriptor
                                                                 selects the NIX TX send queue. */
        uint64_t doneint               : 1;  /**< [  3:  3] Done interrupt.
                                                                 0 = No interrupts related to this instruction.
                                                                 1 = When the instruction completes, CPT_LF_DONE[DONE] will be incremented,
                                                                 and may cause an interrupt. (Except sometimes when [NIXTXL]!=0x0.)

                                                                 CPT increments CPT_LF_DONE[DONE] after it writes the CPT_RES_S (see
                                                                 [RES_ADDR]), but the increment is unordered relative any SSO submit (see
                                                                 [WQE_PTR]). CPT does not increment CPT_LF_DONE[DONE] when it sends a
                                                                 descriptor to NIX TX (see [NIXTXL]). [QORD] has no direct affect on when
                                                                 any CPT_LF_DONE[DONE] increment occurs.

                                                                 See also CPT_RES_S[DONEINT].

                                                                 Internal:
                                                                 CPT_LF_DONE[DONE] increment conceptually occurs after the CPT_RES_S write.
                                                                 We say [QORD] doesn't affect this increment order because it doesn't
                                                                 affect the CPT_RES_S write order. See the [RES_ADDR] internal comment. */
        uint64_t nixtx_addr            : 60; /**< [ 63:  4] When [NIXTXL]!=0x0, [NIXTX_ADDR] must be nonzero, and must point to the
                                                                 LMTST portion of the descriptor that CPT may submit to NIX TX after
                                                                 completing the CPT_INST_S. When [NIXTXL]=0x0, [NIXTX_ADDR] is reserved
                                                                 and must be zero.

                                                                 [NIXTX_ADDR] is a 128-bit word address (i.e. \<3:0\> is missing from a byte
                                                                 address equivalent). The start of the LMTST portion of the NIX TX descriptor
                                                                 must be aligned to a 128-bit / 16 byte boundary.

                                                                 CPT doesn't modify the descriptor bytes that it passes to NIXTX. NIXTX
                                                                 will receive the bytes in the same format as they are in memory, including
                                                                 endianness.

                                                                 Upon an SMMU fault reading the descriptor from [NIXTX_ADDR], CPT sets
                                                                 CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on the descriptor read.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA. CPT always writes a CPT_RES_S to this location after it
                                                                 finishes executing the instruction. [RES_ADDR] must not be zero.

                                                                 CPT writes the CPT_RES_S before any submit to SSO (see [WQE_PTR]),
                                                                 before any final NIX TX descriptor submit (see [NIXTXL]), and before
                                                                 any CPT_LF_DONE[DONE] increment ((see [DONEINT]).

                                                                 CPT cannot write the CPT_RES_S until after it completes all LLC/DRAM writes
                                                                 related to executing the corresponding CPT_INST_S and clearing all possible
                                                                 SMMU faults, including faults from any required NIX TX descriptor reads. Otherwise,
                                                                 CPT may write the CPT_RES_S's in any order, but will typically write each soon
                                                                 after the engine completes execution of the corresponding CPT_INST_S.

                                                                 [QORD] has no direct affect on when CPT writes the CPT_RES_S. [NIXTXL]
                                                                 can delay CPT_RES_S writes due to potential SMMU faults on NIX TX
                                                                 descriptor reads, but otherwise may not affect CPT_RES_S write order.

                                                                 The CPT_RES_S must reside in a naturally-aligned 128-bit / 16-byte word.
                                                                 [RES_ADDR]\<3:0\> must always be zero.

                                                                 CPT_AF_LF()_PTR_CTL[INST_BE] determines the endianness of the write to
                                                                 [RES_ADDR].

                                                                 Upon an SMMU fault on the [RES_ADDR] write, CPT sets CPT_LF_MISC_INT[NWRP],
                                                                 prevents a NIX TX descriptor from being sent (see [NIXTXL]), and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0.

                                                                 In T93, CPT sends CPT_RES_S's to NCB in queue order when [QORD]=1. Despite
                                                                 this, it would be incorrect for this spec to say that CPT orders the
                                                                 CPT_RES_S's when [QORD]=1. This is because for AP software
                                                                 to see the stores in order, CPT would both need to send the CPT_RES_S's
                                                                 in order and wait for the commit of the prior one before sending the next
                                                                 CPT_RES_S. T93 CPT does not do this, so effectively the CPT_RES_S's are
                                                                 unordered despite the T93 CPT behavior, and hence the comment that [QORD]
                                                                 has no direct effect on CPT_RES_S order. */
#else /* Word 1 - Little Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA. CPT always writes a CPT_RES_S to this location after it
                                                                 finishes executing the instruction. [RES_ADDR] must not be zero.

                                                                 CPT writes the CPT_RES_S before any submit to SSO (see [WQE_PTR]),
                                                                 before any final NIX TX descriptor submit (see [NIXTXL]), and before
                                                                 any CPT_LF_DONE[DONE] increment ((see [DONEINT]).

                                                                 CPT cannot write the CPT_RES_S until after it completes all LLC/DRAM writes
                                                                 related to executing the corresponding CPT_INST_S and clearing all possible
                                                                 SMMU faults, including faults from any required NIX TX descriptor reads. Otherwise,
                                                                 CPT may write the CPT_RES_S's in any order, but will typically write each soon
                                                                 after the engine completes execution of the corresponding CPT_INST_S.

                                                                 [QORD] has no direct affect on when CPT writes the CPT_RES_S. [NIXTXL]
                                                                 can delay CPT_RES_S writes due to potential SMMU faults on NIX TX
                                                                 descriptor reads, but otherwise may not affect CPT_RES_S write order.

                                                                 The CPT_RES_S must reside in a naturally-aligned 128-bit / 16-byte word.
                                                                 [RES_ADDR]\<3:0\> must always be zero.

                                                                 CPT_AF_LF()_PTR_CTL[INST_BE] determines the endianness of the write to
                                                                 [RES_ADDR].

                                                                 Upon an SMMU fault on the [RES_ADDR] write, CPT sets CPT_LF_MISC_INT[NWRP],
                                                                 prevents a NIX TX descriptor from being sent (see [NIXTXL]), and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0.

                                                                 In T93, CPT sends CPT_RES_S's to NCB in queue order when [QORD]=1. Despite
                                                                 this, it would be incorrect for this spec to say that CPT orders the
                                                                 CPT_RES_S's when [QORD]=1. This is because for AP software
                                                                 to see the stores in order, CPT would both need to send the CPT_RES_S's
                                                                 in order and wait for the commit of the prior one before sending the next
                                                                 CPT_RES_S. T93 CPT does not do this, so effectively the CPT_RES_S's are
                                                                 unordered despite the T93 CPT behavior, and hence the comment that [QORD]
                                                                 has no direct effect on CPT_RES_S order. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t rvu_pf_func           : 16; /**< [191:176] Must be zero in the normal case when CPT_AF_LF()_CTL[PF_FUNC_INST]=0.

                                                                 RVU_PF_FUNC_S describes the format of [RVU_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[PF_FUNC_INST]. When CPT_AF_LF()_CTL[PF_FUNC_INST]=1,
                                                                 CPT executes the CPT_INST_S within the function [RVU_PF_FUNC]. When
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=0, as normal, CPT executes the CPT_INST_S
                                                                 within CPT_PRIV_LF()_CFG[PF_FUNC], the function the queue/LF belongs to.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC,SSO_PF_FUNC]. */
        uint64_t reserved_172_175      : 4;
        uint64_t grp                   : 10; /**< [171:162] If [WQE_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.

                                                                 For the SSO to not discard the add-work request, this group must be valid
                                                                 within the SSO's LF.

                                                                 [GRP] must be zero when [WQE_PTR]=0x0. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQE_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t tag                   : 32; /**< [159:128] If [WQE_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
#else /* Word 2 - Little Endian */
        uint64_t tag                   : 32; /**< [159:128] If [WQE_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQE_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t grp                   : 10; /**< [171:162] If [WQE_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.

                                                                 For the SSO to not discard the add-work request, this group must be valid
                                                                 within the SSO's LF.

                                                                 [GRP] must be zero when [WQE_PTR]=0x0. */
        uint64_t reserved_172_175      : 4;
        uint64_t rvu_pf_func           : 16; /**< [191:176] Must be zero in the normal case when CPT_AF_LF()_CTL[PF_FUNC_INST]=0.

                                                                 RVU_PF_FUNC_S describes the format of [RVU_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[PF_FUNC_INST]. When CPT_AF_LF()_CTL[PF_FUNC_INST]=1,
                                                                 CPT executes the CPT_INST_S within the function [RVU_PF_FUNC]. When
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=0, as normal, CPT executes the CPT_INST_S
                                                                 within CPT_PRIV_LF()_CFG[PF_FUNC], the function the queue/LF belongs to.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC,SSO_PF_FUNC]. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t wqe_ptr               : 61; /**< [255:195] If [WQE_PTR] is nonzero, it is a pointer to a work-queue entry that CPT submits
                                                                 work to SSO (except sometimes when [NIXTXL]!=0x0) after all context, output data,
                                                                 and result write operations are visible to other CNXXXX units and the cores.

                                                                 [WQE_PTR] is a 64-bit word address (i.e. \<2:0\> is missing from a byte
                                                                 address equivalent). The start of the WQE must be aligned to a 64-bit / 8 byte
                                                                 boundary.

                                                                 CPT adds the work to SSO after writing the CPT_RES_S (see [RES_ADDR]), but
                                                                 unordered relative to any CPT_LF_DONE[DONE] increment (see [DONEINT]). CPT does
                                                                 not add work to SSO when it sends a descriptor to NIX TX (see [NIXTXL]).

                                                                 CPT adds SSO work from CPT_INST_S's in the same LF/queue that have [QORD]=1
                                                                 in queue order. CPT may add to SSO in any order in all other situations, even
                                                                 amongst instructions in the same queue.

                                                                 [WQE_PTR] is opaque to CPT - CPT neither reads nor writes this address.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0. */
        uint64_t reserved_193_194      : 2;
        uint64_t qord                  : 1;  /**< [192:192] Queue ordering. When set, CPT adds the SSO WQE (see [WQE_PTR], [TAG], [TT],
                                                                 [GRP]) and submits to NIX TX (see [NIXTXL] and [NIXTX_ADDR]) in queue
                                                                 order.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. CPT sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when this rule is violated. CPT sends NIX
                                                                 TX descriptors in CPT LF/queue order.

                                                                 When [QORD]=1 and [WQE_PTR]!=0 for two CPT_INST_S's in the same queue, CPT
                                                                 executes the two SSO add works in order. If [QORD]=0 or if the instructions
                                                                 are in different queues, CPT may reorder the add works.

                                                                 [QORD] has no direct affect on when CPT writes the CPT_RES_S. See [RES_ADDR].

                                                                 When [QORD]=1, at least one of [WQE_PTR]!=0x0 or [NIXTXL]!=0x0 must be true.
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when this
                                                                 rule is violated.

                                                                 Internal:
                                                                 See the [RES_ADDR] internal description for details why the statement "QORD
                                                                 has no direct affect on when CPT writes the CPT_RES_S" is appropriate. */
#else /* Word 3 - Little Endian */
        uint64_t qord                  : 1;  /**< [192:192] Queue ordering. When set, CPT adds the SSO WQE (see [WQE_PTR], [TAG], [TT],
                                                                 [GRP]) and submits to NIX TX (see [NIXTXL] and [NIXTX_ADDR]) in queue
                                                                 order.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. CPT sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when this rule is violated. CPT sends NIX
                                                                 TX descriptors in CPT LF/queue order.

                                                                 When [QORD]=1 and [WQE_PTR]!=0 for two CPT_INST_S's in the same queue, CPT
                                                                 executes the two SSO add works in order. If [QORD]=0 or if the instructions
                                                                 are in different queues, CPT may reorder the add works.

                                                                 [QORD] has no direct affect on when CPT writes the CPT_RES_S. See [RES_ADDR].

                                                                 When [QORD]=1, at least one of [WQE_PTR]!=0x0 or [NIXTXL]!=0x0 must be true.
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when this
                                                                 rule is violated.

                                                                 Internal:
                                                                 See the [RES_ADDR] internal description for details why the statement "QORD
                                                                 has no direct affect on when CPT writes the CPT_RES_S" is appropriate. */
        uint64_t reserved_193_194      : 2;
        uint64_t wqe_ptr               : 61; /**< [255:195] If [WQE_PTR] is nonzero, it is a pointer to a work-queue entry that CPT submits
                                                                 work to SSO (except sometimes when [NIXTXL]!=0x0) after all context, output data,
                                                                 and result write operations are visible to other CNXXXX units and the cores.

                                                                 [WQE_PTR] is a 64-bit word address (i.e. \<2:0\> is missing from a byte
                                                                 address equivalent). The start of the WQE must be aligned to a 64-bit / 8 byte
                                                                 boundary.

                                                                 CPT adds the work to SSO after writing the CPT_RES_S (see [RES_ADDR]), but
                                                                 unordered relative to any CPT_LF_DONE[DONE] increment (see [DONEINT]). CPT does
                                                                 not add work to SSO when it sends a descriptor to NIX TX (see [NIXTXL]).

                                                                 CPT adds SSO work from CPT_INST_S's in the same LF/queue that have [QORD]=1
                                                                 in queue order. CPT may add to SSO in any order in all other situations, even
                                                                 amongst instructions in the same queue.

                                                                 [WQE_PTR] is opaque to CPT - CPT neither reads nor writes this address.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t opcode                : 16; /**< [319:304] Commonly interpreted by the engine microcode as an opcode describing the
                                                                 operation the engine will perform. The most-significant byte commonly the
                                                                 major opcode, and the least-significant byte commonly the minor opcode.
                                                                 See the microcode specifications. */
        uint64_t param1                : 16; /**< [303:288] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t param2                : 16; /**< [287:272] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t dlen                  : 16; /**< [271:256] Commonly interpreted by the engine microcode as the length of the data
                                                                 that [DPTR] points at. See the microcode specifications. */
#else /* Word 4 - Little Endian */
        uint64_t dlen                  : 16; /**< [271:256] Commonly interpreted by the engine microcode as the length of the data
                                                                 that [DPTR] points at. See the microcode specifications. */
        uint64_t param2                : 16; /**< [287:272] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t param1                : 16; /**< [303:288] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t opcode                : 16; /**< [319:304] Commonly interpreted by the engine microcode as an opcode describing the
                                                                 operation the engine will perform. The most-significant byte commonly the
                                                                 major opcode, and the least-significant byte commonly the minor opcode.
                                                                 See the microcode specifications. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t dptr                  : 64; /**< [383:320] Commonly interpreted by the engine microcode as a pointer to input data
                                                                 for the operation. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#else /* Word 5 - Little Endian */
        uint64_t dptr                  : 64; /**< [383:320] Commonly interpreted by the engine microcode as a pointer to input data
                                                                 for the operation. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t rptr                  : 64; /**< [447:384] Commonly interpreted by the engine microcode as a result pointer. See the
                                                                 microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#else /* Word 6 - Little Endian */
        uint64_t rptr                  : 64; /**< [447:384] Commonly interpreted by the engine microcode as a result pointer. See the
                                                                 microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t egrp                  : 3;  /**< [511:509] Engine group. Selects the CPT engine(s) allowed to process the CPT_INST_S.

                                                                 See CPT_AF_LF()_CTL[GRP]. CPT_AF_LF()_CTL[GRP\<x\>] must be set for the
                                                                 LF for the instruction to successfully execute, where x = [EGRP].

                                                                 See CPT_AF_EXE()_CTL2[GRP_EN]. CPT_AF_EXE(i)_CTL2[GRP_EN]\<x\> must be set
                                                                 for engine i to execute the instruction, where x = [EGRP].

                                                                 See CPT_AF_GRP()_THR[ENA]. CPT_AF_GRP(x)_THR[ENA] must be set to execute
                                                                 the instruction, where x = [EGRP].

                                                                 Internal:
                                                                 In T8x, CPT_AF_LF()_CTL[GRP] picks the engine-group, and there is no way
                                                                 for the CPT_INST_S to select it. We may want to support that at least as
                                                                 an option for backward compatibility. Ideally, we will also support
                                                                 (optionally on a queue-by-queue basis) CPT_INST_S[EGRP]. */
        uint64_t cptr                  : 61; /**< [508:448] Commonly interpreted by the engine microcode as a context pointer for
                                                                 the operation to be performed. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#else /* Word 7 - Little Endian */
        uint64_t cptr                  : 61; /**< [508:448] Commonly interpreted by the engine microcode as a context pointer for
                                                                 the operation to be performed. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
        uint64_t egrp                  : 3;  /**< [511:509] Engine group. Selects the CPT engine(s) allowed to process the CPT_INST_S.

                                                                 See CPT_AF_LF()_CTL[GRP]. CPT_AF_LF()_CTL[GRP\<x\>] must be set for the
                                                                 LF for the instruction to successfully execute, where x = [EGRP].

                                                                 See CPT_AF_EXE()_CTL2[GRP_EN]. CPT_AF_EXE(i)_CTL2[GRP_EN]\<x\> must be set
                                                                 for engine i to execute the instruction, where x = [EGRP].

                                                                 See CPT_AF_GRP()_THR[ENA]. CPT_AF_GRP(x)_THR[ENA] must be set to execute
                                                                 the instruction, where x = [EGRP].

                                                                 Internal:
                                                                 In T8x, CPT_AF_LF()_CTL[GRP] picks the engine-group, and there is no way
                                                                 for the CPT_INST_S to select it. We may want to support that at least as
                                                                 an option for backward compatibility. Ideally, we will also support
                                                                 (optionally on a queue-by-queue basis) CPT_INST_S[EGRP]. */
#endif /* Word 7 - End */
    } s;
    /* struct cavm_cpt_inst_s_s cn; */
};

/**
 * Structure cpt_res_s
 *
 * CPT Result Structure
 * The CPT coprocessor writes the result structure after it completes a CPT_INST_S
 * instruction. The result structure is exactly 16 bytes, and each instruction
 * completion produces exactly one result structure.
 *
 * CPT stores the two 64-bit words of this structure in memory in little-endian format
 * unless CPT_AF_LF()_PTR_CTL[INST_BE] is set. If CPT_AF_LF()_PTR_CTL[INST_BE] is set,
 * CPT swaps the bytes within each 64-bit word.
 */
union cavm_cpt_res_s
{
    uint64_t u[2];
    struct cavm_cpt_res_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. When set, CPT incremented CPT_LF_DONE[DONE] upon completing
                                                                 the CPT_INST_S, possibly causing an interrupt.

                                                                 See also CPT_INST_S[DONEINT]. [DONEINT] may differ from CPT_INST_S[DONEINT]. */
        uint64_t uc_compcode           : 8;  /**< [ 15:  8] The completion code generated by the microcode that executed the CPT_INST_S
                                                                 on the engine. See also [COMPCODE].

                                                                 When CPT_INST_S[NIXTXL]=0x0, engine microcode entirely defines the [UC_COMPCODE]
                                                                 value.

                                                                 When CPT_INST_S[NIXTXL]!=0x0, i.e. when CPT should submit a NIX TX descriptor,
                                                                 then CPT considers [UC_COMPCODE]!=0 an error indication, and will not
                                                                 submit the NIX TX descriptor.

                                                                 [UC_COMPCODE] is unpredictable when [COMPCODE] is anything other than
                                                                 CPT_COMP_E::GOOD. */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates hardware-detected completion/error status of CPT for
                                                                 the CPT_INST_S. Enumerated by CPT_COMP_E. See also [UC_COMPCODE].
                                                                 Software should determine success or failure of the instruction
                                                                 using both [COMPCODE] (hardware-detection) and [UC_COMPCODE]
                                                                 (software-detection).

                                                                 Core software may poll for completion of the CPT_INST_S by clearing
                                                                 the memory location that will eventually contain [COMPCODE] to zero
                                                                 before submitting the instruction to CPT. Once the core observes a
                                                                 nonzero [COMPCODE] value (i.e. something other than CPT_COMP_E::NOTDONE),
                                                                 CPT will have completed all LLC/DRAM write operations for the CPT_INST_S. */
#else /* Word 0 - Little Endian */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates hardware-detected completion/error status of CPT for
                                                                 the CPT_INST_S. Enumerated by CPT_COMP_E. See also [UC_COMPCODE].
                                                                 Software should determine success or failure of the instruction
                                                                 using both [COMPCODE] (hardware-detection) and [UC_COMPCODE]
                                                                 (software-detection).

                                                                 Core software may poll for completion of the CPT_INST_S by clearing
                                                                 the memory location that will eventually contain [COMPCODE] to zero
                                                                 before submitting the instruction to CPT. Once the core observes a
                                                                 nonzero [COMPCODE] value (i.e. something other than CPT_COMP_E::NOTDONE),
                                                                 CPT will have completed all LLC/DRAM write operations for the CPT_INST_S. */
        uint64_t uc_compcode           : 8;  /**< [ 15:  8] The completion code generated by the microcode that executed the CPT_INST_S
                                                                 on the engine. See also [COMPCODE].

                                                                 When CPT_INST_S[NIXTXL]=0x0, engine microcode entirely defines the [UC_COMPCODE]
                                                                 value.

                                                                 When CPT_INST_S[NIXTXL]!=0x0, i.e. when CPT should submit a NIX TX descriptor,
                                                                 then CPT considers [UC_COMPCODE]!=0 an error indication, and will not
                                                                 submit the NIX TX descriptor.

                                                                 [UC_COMPCODE] is unpredictable when [COMPCODE] is anything other than
                                                                 CPT_COMP_E::GOOD. */
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. When set, CPT incremented CPT_LF_DONE[DONE] upon completing
                                                                 the CPT_INST_S, possibly causing an interrupt.

                                                                 See also CPT_INST_S[DONEINT]. [DONEINT] may differ from CPT_INST_S[DONEINT]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_cpt_res_s_s cn; */
};

/**
 * Register (RVU_PF_BAR0) cpt#_af_active_cycles_pc
 *
 * CPT AF Active Cycles Register
 */
union cavm_cptx_af_active_cycles_pc
{
    uint64_t u;
    struct cavm_cptx_af_active_cycles_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the conditional clocks are active.
                                                                 Internal:
                                                                 Includes CPT internal or any engine clock being enabled. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the conditional clocks are active.
                                                                 Internal:
                                                                 Includes CPT internal or any engine clock being enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_active_cycles_pc_s cn; */
};
typedef union cavm_cptx_af_active_cycles_pc cavm_cptx_af_active_cycles_pc_t;

static inline uint64_t CAVM_CPTX_AF_ACTIVE_CYCLES_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_ACTIVE_CYCLES_PC(uint64_t a)
{
    if (a<=1)
        return 0x8400a001c000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_ACTIVE_CYCLES_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_ACTIVE_CYCLES_PC(a) cavm_cptx_af_active_cycles_pc_t
#define bustype_CAVM_CPTX_AF_ACTIVE_CYCLES_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_ACTIVE_CYCLES_PC(a) "CPTX_AF_ACTIVE_CYCLES_PC"
#define device_bar_CAVM_CPTX_AF_ACTIVE_CYCLES_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_ACTIVE_CYCLES_PC(a) (a)
#define arguments_CAVM_CPTX_AF_ACTIVE_CYCLES_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_bar2_alias#
 *
 * INTERNAL: CPT Admin Function  BAR2 Alias Registers
 *
 * These registers alias to the CPT BAR2 registers for the PF and function
 * selected by CPT_AF_BAR2_SEL[PF_FUNC].
 *
 * Internal:
 * Not implemented. Placeholder for bug33464.
 */
union cavm_cptx_af_bar2_aliasx
{
    uint64_t u;
    struct cavm_cptx_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_bar2_aliasx_s cn; */
};
typedef union cavm_cptx_af_bar2_aliasx cavm_cptx_af_bar2_aliasx_t;

static inline uint64_t CAVM_CPTX_AF_BAR2_ALIASX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_BAR2_ALIASX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=131071))
        return 0x8400a9100000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1ffff);
    __cavm_csr_fatal("CPTX_AF_BAR2_ALIASX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_BAR2_ALIASX(a,b) cavm_cptx_af_bar2_aliasx_t
#define bustype_CAVM_CPTX_AF_BAR2_ALIASX(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_BAR2_ALIASX(a,b) "CPTX_AF_BAR2_ALIASX"
#define device_bar_CAVM_CPTX_AF_BAR2_ALIASX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_BAR2_ALIASX(a,b) (a)
#define arguments_CAVM_CPTX_AF_BAR2_ALIASX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_bar2_sel
 *
 * INTERNAL: CPT Admin Function BAR2 Select Register
 *
 * This register configures BAR2 accesses from the CPT_AF_BAR2_ALIAS() registers in BAR0.
 * Internal:
 * Not implemented. Placeholder for bug33464.
 */
union cavm_cptx_af_bar2_sel
{
    uint64_t u;
    struct cavm_cptx_af_bar2_sel_s
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
    /* struct cavm_cptx_af_bar2_sel_s cn; */
};
typedef union cavm_cptx_af_bar2_sel cavm_cptx_af_bar2_sel_t;

static inline uint64_t CAVM_CPTX_AF_BAR2_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_BAR2_SEL(uint64_t a)
{
    if (a<=1)
        return 0x8400a9000000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_BAR2_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_BAR2_SEL(a) cavm_cptx_af_bar2_sel_t
#define bustype_CAVM_CPTX_AF_BAR2_SEL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_BAR2_SEL(a) "CPTX_AF_BAR2_SEL"
#define device_bar_CAVM_CPTX_AF_BAR2_SEL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_BAR2_SEL(a) (a)
#define arguments_CAVM_CPTX_AF_BAR2_SEL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_blk_rst
 *
 * CPT AF Block Reset Registers
 * Writing a 1 to CPT_AF_BLK_RST[RST] resets the CPT. After receiving a store to this CSR, the CPT
 * must not be sent any other operations for 2500 coprocessor-clock cycles.
 */
union cavm_cptx_af_blk_rst
{
    uint64_t u;
    struct cavm_cptx_af_blk_rst_s
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
    /* struct cavm_cptx_af_blk_rst_s cn; */
};
typedef union cavm_cptx_af_blk_rst cavm_cptx_af_blk_rst_t;

static inline uint64_t CAVM_CPTX_AF_BLK_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_BLK_RST(uint64_t a)
{
    if (a<=1)
        return 0x8400a0046000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_BLK_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_BLK_RST(a) cavm_cptx_af_blk_rst_t
#define bustype_CAVM_CPTX_AF_BLK_RST(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_BLK_RST(a) "CPTX_AF_BLK_RST"
#define device_bar_CAVM_CPTX_AF_BLK_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_BLK_RST(a) (a)
#define arguments_CAVM_CPTX_AF_BLK_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_bp#_test
 *
 * INTERNAL: CPT AF Backpressure Test Register
 */
union cavm_cptx_af_bpx_test
{
    uint64_t u;
    struct cavm_cptx_af_bpx_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.

                                                                 \<page\>
                                                                 CPT_AF_BP(0)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = credit backpressure in iom. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = credit backpressure in qpk. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = req epci3 data fifo backpressure. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = req epci2 data fifo backpressure. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = req epci1 data fifo backpressure. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = req epci0 data fifo backpressure. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = ifm to qpk backpressure. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = dne to icb backpressure. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = ifm to icb backpressure. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = iwb to nbr backpressure. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = rsp 4k fifo backpressure for epci3. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = rsp 4k fifo backpressure for epci2. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = rsp 4k fifo backpressure for epci1. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = rsp 4k fifo backpressure for epci0. Weight in [BP_CFG]\<0\>.

                                                                 \<page\>
                                                                 CPT_AF_BP(1)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = Reserved. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = Reserved. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = Reserved. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = Reserved. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = Reserved. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = Reserved. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = Reserved. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = Reserved. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = Reserved. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = Reserved. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = Reserved. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = Reserved. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = Reserved. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = ndb internal read req fifo. Weight in [BP_CFG]\<0\>. */
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.

                                                                 \<page\>
                                                                 CPT_AF_BP(0)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = credit backpressure in iom. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = credit backpressure in qpk. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = req epci3 data fifo backpressure. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = req epci2 data fifo backpressure. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = req epci1 data fifo backpressure. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = req epci0 data fifo backpressure. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = ifm to qpk backpressure. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = dne to icb backpressure. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = ifm to icb backpressure. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = iwb to nbr backpressure. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = rsp 4k fifo backpressure for epci3. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = rsp 4k fifo backpressure for epci2. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = rsp 4k fifo backpressure for epci1. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = rsp 4k fifo backpressure for epci0. Weight in [BP_CFG]\<0\>.

                                                                 \<page\>
                                                                 CPT_AF_BP(1)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = Reserved. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = Reserved. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = Reserved. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = Reserved. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = Reserved. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = Reserved. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = Reserved. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = Reserved. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = Reserved. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = Reserved. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = Reserved. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = Reserved. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = Reserved. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = ndb internal read req fifo. Weight in [BP_CFG]\<0\>. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_bpx_test_s cn; */
};
typedef union cavm_cptx_af_bpx_test cavm_cptx_af_bpx_test_t;

static inline uint64_t CAVM_CPTX_AF_BPX_TEST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_BPX_TEST(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a0005000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_BPX_TEST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_BPX_TEST(a,b) cavm_cptx_af_bpx_test_t
#define bustype_CAVM_CPTX_AF_BPX_TEST(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_BPX_TEST(a,b) "CPTX_AF_BPX_TEST"
#define device_bar_CAVM_CPTX_AF_BPX_TEST(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_BPX_TEST(a,b) (a)
#define arguments_CAVM_CPTX_AF_BPX_TEST(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_constants0
 *
 * CPT AF Constants Register
 * This register contains implementation-related parameters of CPT.
 */
union cavm_cptx_af_constants0
{
    uint64_t u;
    struct cavm_cptx_af_constants0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI buses. */
        uint64_t reserved_24_31        : 8;
        uint64_t grps                  : 8;  /**< [ 23: 16](RO) Number of engine groups implemented. */
        uint64_t reserved_8_15         : 8;
        uint64_t lf                    : 8;  /**< [  7:  0](RO) Number of LFs. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](RO) Number of LFs. */
        uint64_t reserved_8_15         : 8;
        uint64_t grps                  : 8;  /**< [ 23: 16](RO) Number of engine groups implemented. */
        uint64_t reserved_24_31        : 8;
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI buses. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_constants0_s cn; */
};
typedef union cavm_cptx_af_constants0 cavm_cptx_af_constants0_t;

static inline uint64_t CAVM_CPTX_AF_CONSTANTS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_CONSTANTS0(uint64_t a)
{
    if (a<=1)
        return 0x8400a0000000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_CONSTANTS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_CONSTANTS0(a) cavm_cptx_af_constants0_t
#define bustype_CAVM_CPTX_AF_CONSTANTS0(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_CONSTANTS0(a) "CPTX_AF_CONSTANTS0"
#define device_bar_CAVM_CPTX_AF_CONSTANTS0(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_CONSTANTS0(a) (a)
#define arguments_CAVM_CPTX_AF_CONSTANTS0(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_constants1
 *
 * CPT AF Constants Register
 * This register contains implementation-related parameters of CPT.
 */
union cavm_cptx_af_constants1
{
    uint64_t u;
    struct cavm_cptx_af_constants1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t ae                    : 16; /**< [ 47: 32](RO/H) Number of AEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t ie                    : 16; /**< [ 31: 16](RO/H) Number of IEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t se                    : 16; /**< [ 15:  0](RO/H) "Number of SEs. In CNXXXX, for CPT returns 0x40, or less if there are fuse-disables.

                                                                 _ #SE along with #IE and #AE specifies the supported engine indices for SE, IE and AE.

                                                                 Only the following bit indices are supported:
                                                                   _    0    .. #SE-1         = the SEs.
                                                                   _   #SE   .. #SE+#IE-1     = the IEs.
                                                                   _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs." */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 16; /**< [ 15:  0](RO/H) "Number of SEs. In CNXXXX, for CPT returns 0x40, or less if there are fuse-disables.

                                                                 _ #SE along with #IE and #AE specifies the supported engine indices for SE, IE and AE.

                                                                 Only the following bit indices are supported:
                                                                   _    0    .. #SE-1         = the SEs.
                                                                   _   #SE   .. #SE+#IE-1     = the IEs.
                                                                   _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs." */
        uint64_t ie                    : 16; /**< [ 31: 16](RO/H) Number of IEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t ae                    : 16; /**< [ 47: 32](RO/H) Number of AEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_constants1_s cn; */
};
typedef union cavm_cptx_af_constants1 cavm_cptx_af_constants1_t;

static inline uint64_t CAVM_CPTX_AF_CONSTANTS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_CONSTANTS1(uint64_t a)
{
    if (a<=1)
        return 0x8400a0001000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_CONSTANTS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_CONSTANTS1(a) cavm_cptx_af_constants1_t
#define bustype_CAVM_CPTX_AF_CONSTANTS1(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_CONSTANTS1(a) "CPTX_AF_CONSTANTS1"
#define device_bar_CAVM_CPTX_AF_CONSTANTS1(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_CONSTANTS1(a) (a)
#define arguments_CAVM_CPTX_AF_CONSTANTS1(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_cptclk_cnt
 *
 * CPT AF CPTCLK Counter Register
 */
union cavm_cptx_af_cptclk_cnt
{
    uint64_t u;
    struct cavm_cptx_af_cptclk_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) This counter is incremented every CPTCLK. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) This counter is incremented every CPTCLK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_cptclk_cnt_s cn; */
};
typedef union cavm_cptx_af_cptclk_cnt cavm_cptx_af_cptclk_cnt_t;

static inline uint64_t CAVM_CPTX_AF_CPTCLK_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_CPTCLK_CNT(uint64_t a)
{
    if (a<=1)
        return 0x8400a002a000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_CPTCLK_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_CPTCLK_CNT(a) cavm_cptx_af_cptclk_cnt_t
#define bustype_CAVM_CPTX_AF_CPTCLK_CNT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_CPTCLK_CNT(a) "CPTX_AF_CPTCLK_CNT"
#define device_bar_CAVM_CPTX_AF_CPTCLK_CNT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_CPTCLK_CNT(a) (a)
#define arguments_CAVM_CPTX_AF_CPTCLK_CNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ctl
 *
 * RVU Admin Function General Control Register
 */
union cavm_cptx_af_ctl
{
    uint64_t u;
    struct cavm_cptx_af_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t fc_stype              : 2;  /**< [  2:  1](R/W) Type of store to write the memory queue size in LLC/DRAM:
                                                                 0x0 = Store full cache line, allocate cache (STF).
                                                                 0x1 = Store full cache line, no allocate (STT).
                                                                 0x2 = Store partial cache line, allocate cache (STP).
                                                                 0x3 = Reserved.

                                                                 See CPT_LF_CTL[FC_ENA,FC_HYST_BITS,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When [FC_STYPE] is 0x0 or 0x1. software must reserve the entire
                                                                 cache block at address (CPT_LF_Q_BASE[ADDR] \<\< 7) for the memory size
                                                                 writes. */
        uint64_t rd_psn_ign            : 1;  /**< [  0:  0](R/W) Read poison ignore.

                                                                 0 = CPT treats received poison as if the transaction faulted.

                                                                 1 = CPT ignores received poison (i.e. acts as if there were no error).

                                                                 CPT always sets one of CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and one
                                                                 of CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE] when it receives poison
                                                                 in a read response, irrespective of the [RD_PSN_IGN] value.

                                                                 Internal:
                                                                 CPT always ignores poison received with a CSR/LMTST read/write (i.e.
                                                                 treats the CSR/LMTST read/write as when there is no error). (IOB handles
                                                                 most of these errors, and we didn't want this complexity distributed
                                                                 amongst the block.)

                                                                 So use the ncb_ct_t::CT_WRPOIS from all read responses to set
                                                                 CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and
                                                                 CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE], and conceptually convert
                                                                 ncb_ct_t::CT_WRPOIS to ncb_ct_t::RSPFLT for read responses when
                                                                 [RD_PSN_IGN]=0. Otherwise, treat ncb_ct_t::CT_WRPOIS cycle as
                                                                 normal NCB cycles. */
#else /* Word 0 - Little Endian */
        uint64_t rd_psn_ign            : 1;  /**< [  0:  0](R/W) Read poison ignore.

                                                                 0 = CPT treats received poison as if the transaction faulted.

                                                                 1 = CPT ignores received poison (i.e. acts as if there were no error).

                                                                 CPT always sets one of CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and one
                                                                 of CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE] when it receives poison
                                                                 in a read response, irrespective of the [RD_PSN_IGN] value.

                                                                 Internal:
                                                                 CPT always ignores poison received with a CSR/LMTST read/write (i.e.
                                                                 treats the CSR/LMTST read/write as when there is no error). (IOB handles
                                                                 most of these errors, and we didn't want this complexity distributed
                                                                 amongst the block.)

                                                                 So use the ncb_ct_t::CT_WRPOIS from all read responses to set
                                                                 CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and
                                                                 CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE], and conceptually convert
                                                                 ncb_ct_t::CT_WRPOIS to ncb_ct_t::RSPFLT for read responses when
                                                                 [RD_PSN_IGN]=0. Otherwise, treat ncb_ct_t::CT_WRPOIS cycle as
                                                                 normal NCB cycles. */
        uint64_t fc_stype              : 2;  /**< [  2:  1](R/W) Type of store to write the memory queue size in LLC/DRAM:
                                                                 0x0 = Store full cache line, allocate cache (STF).
                                                                 0x1 = Store full cache line, no allocate (STT).
                                                                 0x2 = Store partial cache line, allocate cache (STP).
                                                                 0x3 = Reserved.

                                                                 See CPT_LF_CTL[FC_ENA,FC_HYST_BITS,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When [FC_STYPE] is 0x0 or 0x1. software must reserve the entire
                                                                 cache block at address (CPT_LF_Q_BASE[ADDR] \<\< 7) for the memory size
                                                                 writes. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_ctl_s cn; */
};
typedef union cavm_cptx_af_ctl cavm_cptx_af_ctl_t;

static inline uint64_t CAVM_CPTX_AF_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_CTL(uint64_t a)
{
    if (a<=1)
        return 0x8400a002e000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_CTL(a) cavm_cptx_af_ctl_t
#define bustype_CAVM_CPTX_AF_CTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_CTL(a) "CPTX_AF_CTL"
#define device_bar_CAVM_CPTX_AF_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_CTL(a) (a)
#define arguments_CAVM_CPTX_AF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_diag
 *
 * CPT AF Diagnostic Control Register
 */
union cavm_cptx_af_diag
{
    uint64_t u;
    struct cavm_cptx_af_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t flt_dis               : 1;  /**< [ 24: 24](R/W) When one, disable DMA black hole on an engine DMA fault. For diagnostic use only. */
        uint64_t inst_infl             : 8;  /**< [ 23: 16](R/W) When [INST_INFL]!=0, this sets the maximum number of in-flight CPT
                                                                 instructions. When [INST_INFL]=0x0, the limit is 256. For diagnostic use only. */
        uint64_t reserved_13_15        : 3;
        uint64_t ncb_clken             : 1;  /**< [ 12: 12](R/W) When one, force the NCB interface conditional clocking
                                                                 and NCBI bus clock to be always on.

                                                                 For diagnostic use only. */
        uint64_t reserved_9_11         : 3;
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to one, it forces CPT clocks on. For diagnostic use only. */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 128 are treated as 128. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 128 are treated as 128. */
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to one, it forces CPT clocks on. For diagnostic use only. */
        uint64_t reserved_9_11         : 3;
        uint64_t ncb_clken             : 1;  /**< [ 12: 12](R/W) When one, force the NCB interface conditional clocking
                                                                 and NCBI bus clock to be always on.

                                                                 For diagnostic use only. */
        uint64_t reserved_13_15        : 3;
        uint64_t inst_infl             : 8;  /**< [ 23: 16](R/W) When [INST_INFL]!=0, this sets the maximum number of in-flight CPT
                                                                 instructions. When [INST_INFL]=0x0, the limit is 256. For diagnostic use only. */
        uint64_t flt_dis               : 1;  /**< [ 24: 24](R/W) When one, disable DMA black hole on an engine DMA fault. For diagnostic use only. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_diag_s cn; */
};
typedef union cavm_cptx_af_diag cavm_cptx_af_diag_t;

static inline uint64_t CAVM_CPTX_AF_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_DIAG(uint64_t a)
{
    if (a<=1)
        return 0x8400a0003000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_DIAG(a) cavm_cptx_af_diag_t
#define bustype_CAVM_CPTX_AF_DIAG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_DIAG(a) "CPTX_AF_DIAG"
#define device_bar_CAVM_CPTX_AF_DIAG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_DIAG(a) (a)
#define arguments_CAVM_CPTX_AF_DIAG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_eco
 *
 * INTERNAL: CPT AF ECO Register
 */
union cavm_cptx_af_eco
{
    uint64_t u;
    struct cavm_cptx_af_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_eco_s cn; */
};
typedef union cavm_cptx_af_eco cavm_cptx_af_eco_t;

static inline uint64_t CAVM_CPTX_AF_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_ECO(uint64_t a)
{
    if (a<=1)
        return 0x8400a0004000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_ECO(a) cavm_cptx_af_eco_t
#define bustype_CAVM_CPTX_AF_ECO(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_ECO(a) "CPTX_AF_ECO"
#define device_bar_CAVM_CPTX_AF_ECO(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_ECO(a) (a)
#define arguments_CAVM_CPTX_AF_ECO(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_active
 *
 * CPT AF Exec Active Register
 * "This register will be nonzero if the engine is allocated to a LF. In the
 * event of a HWERR, this register can be consulted to determine whether any
 * action is required for the LF.
 *
 * Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union cavm_cptx_af_exex_active
{
    uint64_t u;
    struct cavm_cptx_af_exex_active_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t icb_ptr               : 9;  /**< [ 33: 25](RO/H) Indicates the ICB pointer of the instruction an engine is working on. */
        uint64_t que                   : 6;  /**< [ 24: 19](RO/H) Indicates the queue of the instruction an engine is working on. */
        uint64_t qord                  : 1;  /**< [ 18: 18](RO/H) If this bit is set, the instruction an engine is working on must handle
                                                                 its completion operations (NIX TX descriptor, SSO WQE, and/or result
                                                                 store) in queue order. If this bit is clear, the completion operations
                                                                 are unordered. */
        uint64_t sso_val               : 1;  /**< [ 17: 17](RO/H) If this bit is set, CPT may submit an SSO WQE for the engine's instruction. */
        uint64_t nix_val               : 1;  /**< [ 16: 16](RO/H) If this bit is set, CPT may submit a portion of the NIX TX descriptor
                                                                 for the engine's instruction via LMTST. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) PF/FUNC associated with the instruction an engine is working on.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) PF/FUNC associated with the instruction an engine is working on.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
        uint64_t nix_val               : 1;  /**< [ 16: 16](RO/H) If this bit is set, CPT may submit a portion of the NIX TX descriptor
                                                                 for the engine's instruction via LMTST. */
        uint64_t sso_val               : 1;  /**< [ 17: 17](RO/H) If this bit is set, CPT may submit an SSO WQE for the engine's instruction. */
        uint64_t qord                  : 1;  /**< [ 18: 18](RO/H) If this bit is set, the instruction an engine is working on must handle
                                                                 its completion operations (NIX TX descriptor, SSO WQE, and/or result
                                                                 store) in queue order. If this bit is clear, the completion operations
                                                                 are unordered. */
        uint64_t que                   : 6;  /**< [ 24: 19](RO/H) Indicates the queue of the instruction an engine is working on. */
        uint64_t icb_ptr               : 9;  /**< [ 33: 25](RO/H) Indicates the ICB pointer of the instruction an engine is working on. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exex_active_s cn; */
};
typedef union cavm_cptx_af_exex_active cavm_cptx_af_exex_active_t;

static inline uint64_t CAVM_CPTX_AF_EXEX_ACTIVE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXEX_ACTIVE(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=127))
        return 0x8400a0016000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPTX_AF_EXEX_ACTIVE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXEX_ACTIVE(a,b) cavm_cptx_af_exex_active_t
#define bustype_CAVM_CPTX_AF_EXEX_ACTIVE(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXEX_ACTIVE(a,b) "CPTX_AF_EXEX_ACTIVE"
#define device_bar_CAVM_CPTX_AF_EXEX_ACTIVE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXEX_ACTIVE(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXEX_ACTIVE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_ctl
 *
 * CPT AF Engine Control Registers
 * "This register contains control and status bits for the corresponding engines.
 *
 * Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union cavm_cptx_af_exex_ctl
{
    uint64_t u;
    struct cavm_cptx_af_exex_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_cptx_af_exex_ctl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_cptx_af_exex_ctl cavm_cptx_af_exex_ctl_t;

static inline uint64_t CAVM_CPTX_AF_EXEX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXEX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=127))
        return 0x8400a0020000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPTX_AF_EXEX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXEX_CTL(a,b) cavm_cptx_af_exex_ctl_t
#define bustype_CAVM_CPTX_AF_EXEX_CTL(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXEX_CTL(a,b) "CPTX_AF_EXEX_CTL"
#define device_bar_CAVM_CPTX_AF_EXEX_CTL(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXEX_CTL(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXEX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_ctl2
 *
 * CPT AF Exec Control Register
 * "Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union cavm_cptx_af_exex_ctl2
{
    uint64_t u;
    struct cavm_cptx_af_exex_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t grp_en                : 8;  /**< [  7:  0](R/W) Engine group enable. One bit corresponds to each group, with the bit set to
                                                                 indicate this engine can service this group.

                                                                 See also CPT_INST_S[EGRP], CPT_AF_LF()_CTL[GRP], and CPT_AF_EXE()_CTL[ENABLE].

                                                                 Before disabling an engine, the corresponding bit in each group must be cleared.
                                                                 CPT_AF_EXE()_STS[BUSY] can then be polled to determine when the engine becomes
                                                                 idle.  At the point, the engine can be disabled. */
#else /* Word 0 - Little Endian */
        uint64_t grp_en                : 8;  /**< [  7:  0](R/W) Engine group enable. One bit corresponds to each group, with the bit set to
                                                                 indicate this engine can service this group.

                                                                 See also CPT_INST_S[EGRP], CPT_AF_LF()_CTL[GRP], and CPT_AF_EXE()_CTL[ENABLE].

                                                                 Before disabling an engine, the corresponding bit in each group must be cleared.
                                                                 CPT_AF_EXE()_STS[BUSY] can then be polled to determine when the engine becomes
                                                                 idle.  At the point, the engine can be disabled. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exex_ctl2_s cn; */
};
typedef union cavm_cptx_af_exex_ctl2 cavm_cptx_af_exex_ctl2_t;

static inline uint64_t CAVM_CPTX_AF_EXEX_CTL2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXEX_CTL2(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=127))
        return 0x8400a0012000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPTX_AF_EXEX_CTL2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXEX_CTL2(a,b) cavm_cptx_af_exex_ctl2_t
#define bustype_CAVM_CPTX_AF_EXEX_CTL2(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXEX_CTL2(a,b) "CPTX_AF_EXEX_CTL2"
#define device_bar_CAVM_CPTX_AF_EXEX_CTL2(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXEX_CTL2(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXEX_CTL2(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_sts
 *
 * CPT AF Exec Available Register
 * "Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union cavm_cptx_af_exex_sts
{
    uint64_t u;
    struct cavm_cptx_af_exex_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t free                  : 1;  /**< [  1:  1](RO/H) Engine available. Indicates the engine is available to be picked to execute a
                                                                 new instruction. For diagnostic use only.

                                                                 Internal:
                                                                 The (FREE,BUSY) combo's:
                                                                   [FREE]=0 [BUSY]=0: IDLE; Hasn't been assigned an instruction yet or has been halted.
                                                                   [FREE]=0 [BUSY]=1: FREE; Between instructions.
                                                                   [FREE]=1 [BUSY]=0: INST; Executing an instruction.
                                                                   [FREE]=1 [BUSY]=1: HOLD; Waiting for one of the two commit counters for this engine to free up. */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Current state of the engine. Before disabling an engine via
                                                                 CPT_AF_EXE()_CTL[ENABLE], this bit must be clear. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Current state of the engine. Before disabling an engine via
                                                                 CPT_AF_EXE()_CTL[ENABLE], this bit must be clear. */
        uint64_t free                  : 1;  /**< [  1:  1](RO/H) Engine available. Indicates the engine is available to be picked to execute a
                                                                 new instruction. For diagnostic use only.

                                                                 Internal:
                                                                 The (FREE,BUSY) combo's:
                                                                   [FREE]=0 [BUSY]=0: IDLE; Hasn't been assigned an instruction yet or has been halted.
                                                                   [FREE]=0 [BUSY]=1: FREE; Between instructions.
                                                                   [FREE]=1 [BUSY]=0: INST; Executing an instruction.
                                                                   [FREE]=1 [BUSY]=1: HOLD; Waiting for one of the two commit counters for this engine to free up. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exex_sts_s cn; */
};
typedef union cavm_cptx_af_exex_sts cavm_cptx_af_exex_sts_t;

static inline uint64_t CAVM_CPTX_AF_EXEX_STS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXEX_STS(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=127))
        return 0x8400a0013000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPTX_AF_EXEX_STS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXEX_STS(a,b) cavm_cptx_af_exex_sts_t
#define bustype_CAVM_CPTX_AF_EXEX_STS(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXEX_STS(a,b) "CPTX_AF_EXEX_STS"
#define device_bar_CAVM_CPTX_AF_EXEX_STS(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXEX_STS(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXEX_STS(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_ucode_base
 *
 * CPT AF Execution Unit Microcode Base Address Register
 * "This register configures engine microcode fetches.
 *
 * Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union cavm_cptx_af_exex_ucode_base
{
    uint64_t u;
    struct cavm_cptx_af_exex_ucode_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) Base IOVA for this engine's microcode image. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) Base IOVA for this engine's microcode image. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exex_ucode_base_s cn; */
};
typedef union cavm_cptx_af_exex_ucode_base cavm_cptx_af_exex_ucode_base_t;

static inline uint64_t CAVM_CPTX_AF_EXEX_UCODE_BASE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXEX_UCODE_BASE(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=127))
        return 0x8400a0026000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPTX_AF_EXEX_UCODE_BASE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXEX_UCODE_BASE(a,b) cavm_cptx_af_exex_ucode_base_t
#define bustype_CAVM_CPTX_AF_EXEX_UCODE_BASE(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXEX_UCODE_BASE(a,b) "CPTX_AF_EXEX_UCODE_BASE"
#define device_bar_CAVM_CPTX_AF_EXEX_UCODE_BASE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXEX_UCODE_BASE(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXEX_UCODE_BASE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_dbg_cnt#
 *
 * CPT AF Debug Bus Counter Register
 */
union cavm_cptx_af_exe_dbg_cntx
{
    uint64_t u;
    struct cavm_cptx_af_exe_dbg_cntx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts events on the debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts events on the debug bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_dbg_cntx_s cn; */
};
typedef union cavm_cptx_af_exe_dbg_cntx cavm_cptx_af_exe_dbg_cntx_t;

static inline uint64_t CAVM_CPTX_AF_EXE_DBG_CNTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_DBG_CNTX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=15))
        return 0x8400a0022000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("CPTX_AF_EXE_DBG_CNTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_DBG_CNTX(a,b) cavm_cptx_af_exe_dbg_cntx_t
#define bustype_CAVM_CPTX_AF_EXE_DBG_CNTX(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_DBG_CNTX(a,b) "CPTX_AF_EXE_DBG_CNTX"
#define device_bar_CAVM_CPTX_AF_EXE_DBG_CNTX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_DBG_CNTX(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXE_DBG_CNTX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_dbg_ctl
 *
 * CPT AF Engine Debug Control Register
 * This register controls engine diagnostic features.
 */
union cavm_cptx_af_exe_dbg_ctl
{
    uint64_t u;
    struct cavm_cptx_af_exe_dbg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t eng_sel               : 8;  /**< [ 23: 16](R/W) "Engine select.

                                                                 Only the following [ENG_SEL] values are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not use
                                                                 unsupported values." */
        uint64_t reserved_9_15         : 7;
        uint64_t reg_sel               : 9;  /**< [  8:  0](R/W) Debug register select. Setting to all ones returns 0x0 on the debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t reg_sel               : 9;  /**< [  8:  0](R/W) Debug register select. Setting to all ones returns 0x0 on the debug bus. */
        uint64_t reserved_9_15         : 7;
        uint64_t eng_sel               : 8;  /**< [ 23: 16](R/W) "Engine select.

                                                                 Only the following [ENG_SEL] values are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not use
                                                                 unsupported values." */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_dbg_ctl_s cn; */
};
typedef union cavm_cptx_af_exe_dbg_ctl cavm_cptx_af_exe_dbg_ctl_t;

static inline uint64_t CAVM_CPTX_AF_EXE_DBG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_DBG_CTL(uint64_t a)
{
    if (a<=1)
        return 0x8400a001d000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_EXE_DBG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_DBG_CTL(a) cavm_cptx_af_exe_dbg_ctl_t
#define bustype_CAVM_CPTX_AF_EXE_DBG_CTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_DBG_CTL(a) "CPTX_AF_EXE_DBG_CTL"
#define device_bar_CAVM_CPTX_AF_EXE_DBG_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_DBG_CTL(a) (a)
#define arguments_CAVM_CPTX_AF_EXE_DBG_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_dbg_data
 *
 * CPT AF Engine Debug Data Register
 * This register returns engine debug data as selected by CPT_AF_EXE_DBG_CTL.
 */
union cavm_cptx_af_exe_dbg_data
{
    uint64_t u;
    struct cavm_cptx_af_exe_dbg_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t data                  : 16; /**< [ 15:  0](RO/H) Debug data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 16; /**< [ 15:  0](RO/H) Debug data. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_dbg_data_s cn; */
};
typedef union cavm_cptx_af_exe_dbg_data cavm_cptx_af_exe_dbg_data_t;

static inline uint64_t CAVM_CPTX_AF_EXE_DBG_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_DBG_DATA(uint64_t a)
{
    if (a<=1)
        return 0x8400a001e000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_EXE_DBG_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_DBG_DATA(a) cavm_cptx_af_exe_dbg_data_t
#define bustype_CAVM_CPTX_AF_EXE_DBG_DATA(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_DBG_DATA(a) "CPTX_AF_EXE_DBG_DATA"
#define device_bar_CAVM_CPTX_AF_EXE_DBG_DATA(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_DBG_DATA(a) (a)
#define arguments_CAVM_CPTX_AF_EXE_DBG_DATA(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_epci_inb#_cnt
 *
 * CPT AF EPCI Inbound Counter Register
 */
union cavm_cptx_af_exe_epci_inbx_cnt
{
    uint64_t u;
    struct cavm_cptx_af_exe_epci_inbx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid inbound cycles in EPCI bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid inbound cycles in EPCI bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_epci_inbx_cnt_s cn; */
};
typedef union cavm_cptx_af_exe_epci_inbx_cnt cavm_cptx_af_exe_epci_inbx_cnt_t;

static inline uint64_t CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x8400a0024000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("CPTX_AF_EXE_EPCI_INBX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) cavm_cptx_af_exe_epci_inbx_cnt_t
#define bustype_CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) "CPTX_AF_EXE_EPCI_INBX_CNT"
#define device_bar_CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_epci_outb#_cnt
 *
 * CPT AF EPCI Outbound Counter Register
 */
union cavm_cptx_af_exe_epci_outbx_cnt
{
    uint64_t u;
    struct cavm_cptx_af_exe_epci_outbx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid outbound cycles in EPCI bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid outbound cycles in EPCI bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_epci_outbx_cnt_s cn; */
};
typedef union cavm_cptx_af_exe_epci_outbx_cnt cavm_cptx_af_exe_epci_outbx_cnt_t;

static inline uint64_t CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x8400a0025000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("CPTX_AF_EXE_EPCI_OUTBX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) cavm_cptx_af_exe_epci_outbx_cnt_t
#define bustype_CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) "CPTX_AF_EXE_EPCI_OUTBX_CNT"
#define device_bar_CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) (a)
#define arguments_CAVM_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_err_info
 *
 * CPT Engine Info Register
 * This contains the error code and PC for the most recent engine's CPT_EOP_E::ERR_REQUEST.
 */
union cavm_cptx_af_exe_err_info
{
    uint64_t u;
    struct cavm_cptx_af_exe_err_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t errcode               : 8;  /**< [ 31: 24](R/W/H) Error type.  Defined by the CPT_ENGINE_ERR_TYPE_E enum. */
        uint64_t reserved_23           : 1;
        uint64_t errpc                 : 15; /**< [ 22:  8](R/W/H) MicroPC of the instruction that caused the error. */
        uint64_t eid                   : 8;  /**< [  7:  0](R/W/H) Engine number of the most recent engine to issue an CPT_EOP_E::ERR_REQUEST. */
#else /* Word 0 - Little Endian */
        uint64_t eid                   : 8;  /**< [  7:  0](R/W/H) Engine number of the most recent engine to issue an CPT_EOP_E::ERR_REQUEST. */
        uint64_t errpc                 : 15; /**< [ 22:  8](R/W/H) MicroPC of the instruction that caused the error. */
        uint64_t reserved_23           : 1;
        uint64_t errcode               : 8;  /**< [ 31: 24](R/W/H) Error type.  Defined by the CPT_ENGINE_ERR_TYPE_E enum. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_err_info_s cn; */
};
typedef union cavm_cptx_af_exe_err_info cavm_cptx_af_exe_err_info_t;

static inline uint64_t CAVM_CPTX_AF_EXE_ERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_ERR_INFO(uint64_t a)
{
    if (a<=1)
        return 0x8400a0014000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_EXE_ERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_ERR_INFO(a) cavm_cptx_af_exe_err_info_t
#define bustype_CAVM_CPTX_AF_EXE_ERR_INFO(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_ERR_INFO(a) "CPTX_AF_EXE_ERR_INFO"
#define device_bar_CAVM_CPTX_AF_EXE_ERR_INFO(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_ERR_INFO(a) (a)
#define arguments_CAVM_CPTX_AF_EXE_ERR_INFO(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_perf_ctl
 *
 * CPT AF Engine Performance Control Register
 * This register controls engine performance counters.
 */
union cavm_cptx_af_exe_perf_ctl
{
    uint64_t u;
    struct cavm_cptx_af_exe_perf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t epci_inb_cnt_en       : 4;  /**< [ 51: 48](R/W) Enable EPCI inbound counters. */
        uint64_t reserved_36_47        : 12;
        uint64_t epci_outb_cnt_en      : 4;  /**< [ 35: 32](R/W) Enable EPCI outbound counters. */
        uint64_t reserved_17_31        : 15;
        uint64_t event_cnt_en          : 1;  /**< [ 16: 16](R/W) Enable single event counter. */
        uint64_t dbg_cnt_en            : 16; /**< [ 15:  0](R/W) Enable counters on debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t dbg_cnt_en            : 16; /**< [ 15:  0](R/W) Enable counters on debug bus. */
        uint64_t event_cnt_en          : 1;  /**< [ 16: 16](R/W) Enable single event counter. */
        uint64_t reserved_17_31        : 15;
        uint64_t epci_outb_cnt_en      : 4;  /**< [ 35: 32](R/W) Enable EPCI outbound counters. */
        uint64_t reserved_36_47        : 12;
        uint64_t epci_inb_cnt_en       : 4;  /**< [ 51: 48](R/W) Enable EPCI inbound counters. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_perf_ctl_s cn; */
};
typedef union cavm_cptx_af_exe_perf_ctl cavm_cptx_af_exe_perf_ctl_t;

static inline uint64_t CAVM_CPTX_AF_EXE_PERF_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_PERF_CTL(uint64_t a)
{
    if (a<=1)
        return 0x8400a0021000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_EXE_PERF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_PERF_CTL(a) cavm_cptx_af_exe_perf_ctl_t
#define bustype_CAVM_CPTX_AF_EXE_PERF_CTL(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_PERF_CTL(a) "CPTX_AF_EXE_PERF_CTL"
#define device_bar_CAVM_CPTX_AF_EXE_PERF_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_PERF_CTL(a) (a)
#define arguments_CAVM_CPTX_AF_EXE_PERF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_perf_event_cnt
 *
 * CPT AF Engine Performance Event Counter Register
 */
union cavm_cptx_af_exe_perf_event_cnt
{
    uint64_t u;
    struct cavm_cptx_af_exe_perf_event_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the performance events in an engine. The event is selected by setting
                                                                 the lower three bits of CPT_AF_EXE_DBG_CTL[REG_SEL].
                                                                 0x0 = Undefined.
                                                                 0x1 = The number of cycles the exec is waiting for the exec is waiting for
                                                                 inbound bus data.
                                                                 0x2 = The number of cycles the execution queue is busy.
                                                                 0x3 = The number of cycles the execution queue cannot issue instructions because
                                                                 of a datapath stall. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the performance events in an engine. The event is selected by setting
                                                                 the lower three bits of CPT_AF_EXE_DBG_CTL[REG_SEL].
                                                                 0x0 = Undefined.
                                                                 0x1 = The number of cycles the exec is waiting for the exec is waiting for
                                                                 inbound bus data.
                                                                 0x2 = The number of cycles the execution queue is busy.
                                                                 0x3 = The number of cycles the execution queue cannot issue instructions because
                                                                 of a datapath stall. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_perf_event_cnt_s cn; */
};
typedef union cavm_cptx_af_exe_perf_event_cnt cavm_cptx_af_exe_perf_event_cnt_t;

static inline uint64_t CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(uint64_t a)
{
    if (a<=1)
        return 0x8400a0023000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_EXE_PERF_EVENT_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(a) cavm_cptx_af_exe_perf_event_cnt_t
#define bustype_CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(a) "CPTX_AF_EXE_PERF_EVENT_CNT"
#define device_bar_CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(a) (a)
#define arguments_CAVM_CPTX_AF_EXE_PERF_EVENT_CNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_req_timer
 *
 * CPT AF Engine Arbiter Control Register
 */
union cavm_cptx_af_exe_req_timer
{
    uint64_t u;
    struct cavm_cptx_af_exe_req_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t cnt                   : 8;  /**< [  7:  0](R/W) Interval to promote starving low priority requests to high priority. After
                                                                 between one and two times this interval a pending low priority request will be
                                                                 elevated to high priority status.
                                                                 0x0 = Disabled.
                                                                 0x1 = 1 microsecond.
                                                                 0x2 = 2 microseconds.
                                                                 _ etc. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 8;  /**< [  7:  0](R/W) Interval to promote starving low priority requests to high priority. After
                                                                 between one and two times this interval a pending low priority request will be
                                                                 elevated to high priority status.
                                                                 0x0 = Disabled.
                                                                 0x1 = 1 microsecond.
                                                                 0x2 = 2 microseconds.
                                                                 _ etc. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_exe_req_timer_s cn; */
};
typedef union cavm_cptx_af_exe_req_timer cavm_cptx_af_exe_req_timer_t;

static inline uint64_t CAVM_CPTX_AF_EXE_REQ_TIMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_EXE_REQ_TIMER(uint64_t a)
{
    if (a<=1)
        return 0x8400a001f000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_EXE_REQ_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_EXE_REQ_TIMER(a) cavm_cptx_af_exe_req_timer_t
#define bustype_CAVM_CPTX_AF_EXE_REQ_TIMER(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_EXE_REQ_TIMER(a) "CPTX_AF_EXE_REQ_TIMER"
#define device_bar_CAVM_CPTX_AF_EXE_REQ_TIMER(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_EXE_REQ_TIMER(a) (a)
#define arguments_CAVM_CPTX_AF_EXE_REQ_TIMER(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int
 *
 * CPT Execution Unit Interrupt Registers
 */
union cavm_cptx_af_fltx_int
{
    uint64_t u;
    struct cavm_cptx_af_fltx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One interrupt bit per engine. CPT sets the bit when the engine has an
                                                                 uncorrectable error, including microcode memory fetch errors, double-bit error,
                                                                 or watchdog. The engine has been halted and must be disabled and re-enabled.
                                                                 See CPT_AF_EXE()_CTL[ENABLE]. (CPT_AF_EXE()_STS[FREE,BUSY]=0,0 for the engine
                                                                 while it is halted.)

                                                                 Engine microcode memory fetch errors may normally be due to SMMU faults, but when
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, they can also be due to poison.

                                                                 _ CPT_AF_FLT(0)_INT[EXE] - engine(63..0).
                                                                 _ CPT_AF_FLT(1)_INT[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero nonsupported
                                                                 bit indices.

                                                                 If corresponding CPT_AF_EXE()_STS[BUSY] is set, CPT_AF_EXE()_ACTIVE[PF_FUNC]
                                                                 indicates the function/LF/queue that the engine was working on.

                                                                 When CPT sets an [EXE] bit, it will also simultaneously set CPT_LF_MISC_INT[HWERR] of
                                                                 the LF the engine was working for. If CPT_AF_LF()_CTL[CONT_ERR]=0, CPT also clears
                                                                 CPT_LF_CTL[ENA], and the LF/queue must be reset. See also CPT_COMP_E::HWERR.

                                                                 When CPT sets an [EXE] bit due to poison (CPT_AF_CTL[RD_PSN_IGN] must be zero),
                                                                 it also sets the corresponding CPT_AF_PSN()_LF[LF] bit, and will
                                                                 have previously set the corresponding CPT_AF_PSN()_EXE[EXE] bit."

                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One interrupt bit per engine. CPT sets the bit when the engine has an
                                                                 uncorrectable error, including microcode memory fetch errors, double-bit error,
                                                                 or watchdog. The engine has been halted and must be disabled and re-enabled.
                                                                 See CPT_AF_EXE()_CTL[ENABLE]. (CPT_AF_EXE()_STS[FREE,BUSY]=0,0 for the engine
                                                                 while it is halted.)

                                                                 Engine microcode memory fetch errors may normally be due to SMMU faults, but when
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, they can also be due to poison.

                                                                 _ CPT_AF_FLT(0)_INT[EXE] - engine(63..0).
                                                                 _ CPT_AF_FLT(1)_INT[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero nonsupported
                                                                 bit indices.

                                                                 If corresponding CPT_AF_EXE()_STS[BUSY] is set, CPT_AF_EXE()_ACTIVE[PF_FUNC]
                                                                 indicates the function/LF/queue that the engine was working on.

                                                                 When CPT sets an [EXE] bit, it will also simultaneously set CPT_LF_MISC_INT[HWERR] of
                                                                 the LF the engine was working for. If CPT_AF_LF()_CTL[CONT_ERR]=0, CPT also clears
                                                                 CPT_LF_CTL[ENA], and the LF/queue must be reset. See also CPT_COMP_E::HWERR.

                                                                 When CPT sets an [EXE] bit due to poison (CPT_AF_CTL[RD_PSN_IGN] must be zero),
                                                                 it also sets the corresponding CPT_AF_PSN()_LF[LF] bit, and will
                                                                 have previously set the corresponding CPT_AF_PSN()_EXE[EXE] bit."

                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_fltx_int_s cn; */
};
typedef union cavm_cptx_af_fltx_int cavm_cptx_af_fltx_int_t;

static inline uint64_t CAVM_CPTX_AF_FLTX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_FLTX_INT(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a000a000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_FLTX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_FLTX_INT(a,b) cavm_cptx_af_fltx_int_t
#define bustype_CAVM_CPTX_AF_FLTX_INT(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_FLTX_INT(a,b) "CPTX_AF_FLTX_INT"
#define device_bar_CAVM_CPTX_AF_FLTX_INT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_FLTX_INT(a,b) (a)
#define arguments_CAVM_CPTX_AF_FLTX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int_ena_w1c
 *
 * CPT AF Execution Unit Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_cptx_af_fltx_int_ena_w1c
{
    uint64_t u;
    struct cavm_cptx_af_fltx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_fltx_int_ena_w1c_s cn; */
};
typedef union cavm_cptx_af_fltx_int_ena_w1c cavm_cptx_af_fltx_int_ena_w1c_t;

static inline uint64_t CAVM_CPTX_AF_FLTX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_FLTX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a000c000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_FLTX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_FLTX_INT_ENA_W1C(a,b) cavm_cptx_af_fltx_int_ena_w1c_t
#define bustype_CAVM_CPTX_AF_FLTX_INT_ENA_W1C(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_FLTX_INT_ENA_W1C(a,b) "CPTX_AF_FLTX_INT_ENA_W1C"
#define device_bar_CAVM_CPTX_AF_FLTX_INT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_FLTX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_CPTX_AF_FLTX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int_ena_w1s
 *
 * CPT AF Execution Unit Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_cptx_af_fltx_int_ena_w1s
{
    uint64_t u;
    struct cavm_cptx_af_fltx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_fltx_int_ena_w1s_s cn; */
};
typedef union cavm_cptx_af_fltx_int_ena_w1s cavm_cptx_af_fltx_int_ena_w1s_t;

static inline uint64_t CAVM_CPTX_AF_FLTX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_FLTX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a000d000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_FLTX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_FLTX_INT_ENA_W1S(a,b) cavm_cptx_af_fltx_int_ena_w1s_t
#define bustype_CAVM_CPTX_AF_FLTX_INT_ENA_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_FLTX_INT_ENA_W1S(a,b) "CPTX_AF_FLTX_INT_ENA_W1S"
#define device_bar_CAVM_CPTX_AF_FLTX_INT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_FLTX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_CPTX_AF_FLTX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int_w1s
 *
 * CPT AF Execution Unit Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_cptx_af_fltx_int_w1s
{
    uint64_t u;
    struct cavm_cptx_af_fltx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_fltx_int_w1s_s cn; */
};
typedef union cavm_cptx_af_fltx_int_w1s cavm_cptx_af_fltx_int_w1s_t;

static inline uint64_t CAVM_CPTX_AF_FLTX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_FLTX_INT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a000b000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_FLTX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_FLTX_INT_W1S(a,b) cavm_cptx_af_fltx_int_w1s_t
#define bustype_CAVM_CPTX_AF_FLTX_INT_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_FLTX_INT_W1S(a,b) "CPTX_AF_FLTX_INT_W1S"
#define device_bar_CAVM_CPTX_AF_FLTX_INT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_FLTX_INT_W1S(a,b) (a)
#define arguments_CAVM_CPTX_AF_FLTX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_grp#_thr
 *
 * RVU Admin Function Group Throttle Register
 * See also CPT_INST_S[EGRP], CPT_AF_LF()_CTL[GRP], and CPT_AF_EXE()_CTL2[GRP_EN].
 */
union cavm_cptx_af_grpx_thr
{
    uint64_t u;
    struct cavm_cptx_af_grpx_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t ena                   : 1;  /**< [ 32: 32](R/W) Group enable bit.
                                                                 0 = Prevents instructions from this group from being picked and sent to an
                                                                 engine.
                                                                 1 = Enables instruction picks for the group. */
        uint64_t reserved_20_31        : 12;
        uint64_t cnt                   : 4;  /**< [ 19: 16](RO/H) The current number of instruction read buffer (IRB) entries allowed to be
                                                                 consumed by this group for unassigned CPT instructions. */
        uint64_t reserved_4_15         : 12;
        uint64_t thr                   : 4;  /**< [  3:  0](R/W/H) The maximum number of instruction read buffer (IRB) entries
                                                                 consumed by this group for unassigned CPT instructions. Before writing this field,
                                                                 [ENA] must be written to zero and the value of
                                                                 [THR] must equal the value of CPT_AF_GRP()_THR[CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t thr                   : 4;  /**< [  3:  0](R/W/H) The maximum number of instruction read buffer (IRB) entries
                                                                 consumed by this group for unassigned CPT instructions. Before writing this field,
                                                                 [ENA] must be written to zero and the value of
                                                                 [THR] must equal the value of CPT_AF_GRP()_THR[CNT]. */
        uint64_t reserved_4_15         : 12;
        uint64_t cnt                   : 4;  /**< [ 19: 16](RO/H) The current number of instruction read buffer (IRB) entries allowed to be
                                                                 consumed by this group for unassigned CPT instructions. */
        uint64_t reserved_20_31        : 12;
        uint64_t ena                   : 1;  /**< [ 32: 32](R/W) Group enable bit.
                                                                 0 = Prevents instructions from this group from being picked and sent to an
                                                                 engine.
                                                                 1 = Enables instruction picks for the group. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_grpx_thr_s cn; */
};
typedef union cavm_cptx_af_grpx_thr cavm_cptx_af_grpx_thr_t;

static inline uint64_t CAVM_CPTX_AF_GRPX_THR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_GRPX_THR(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=7))
        return 0x8400a002d000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("CPTX_AF_GRPX_THR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_GRPX_THR(a,b) cavm_cptx_af_grpx_thr_t
#define bustype_CAVM_CPTX_AF_GRPX_THR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_GRPX_THR(a,b) "CPTX_AF_GRPX_THR"
#define device_bar_CAVM_CPTX_AF_GRPX_THR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_GRPX_THR(a,b) (a)
#define arguments_CAVM_CPTX_AF_GRPX_THR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_inst_latency_pc
 *
 * CPT AF Instruction Latency Counter Register
 */
union cavm_cptx_af_inst_latency_pc
{
    uint64_t u;
    struct cavm_cptx_af_inst_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (have the store of
                                                                 CPT_RES_S reach the commit point). Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 CPT_AF_RD_REQ_PC to determine the average hardware instruction latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (have the store of
                                                                 CPT_RES_S reach the commit point). Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 CPT_AF_RD_REQ_PC to determine the average hardware instruction latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_inst_latency_pc_s cn; */
};
typedef union cavm_cptx_af_inst_latency_pc cavm_cptx_af_inst_latency_pc_t;

static inline uint64_t CAVM_CPTX_AF_INST_LATENCY_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_INST_LATENCY_PC(uint64_t a)
{
    if (a<=1)
        return 0x8400a0018000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_INST_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_INST_LATENCY_PC(a) cavm_cptx_af_inst_latency_pc_t
#define bustype_CAVM_CPTX_AF_INST_LATENCY_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_INST_LATENCY_PC(a) "CPTX_AF_INST_LATENCY_PC"
#define device_bar_CAVM_CPTX_AF_INST_LATENCY_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_INST_LATENCY_PC(a) (a)
#define arguments_CAVM_CPTX_AF_INST_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_inst_req_pc
 *
 * CPT AF Instruction Request Performance Counter Register
 */
union cavm_cptx_af_inst_req_pc
{
    uint64_t u;
    struct cavm_cptx_af_inst_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions that have started processing. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions that have started processing. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_inst_req_pc_s cn; */
};
typedef union cavm_cptx_af_inst_req_pc cavm_cptx_af_inst_req_pc_t;

static inline uint64_t CAVM_CPTX_AF_INST_REQ_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_INST_REQ_PC(uint64_t a)
{
    if (a<=1)
        return 0x8400a0017000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_INST_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_INST_REQ_PC(a) cavm_cptx_af_inst_req_pc_t
#define bustype_CAVM_CPTX_AF_INST_REQ_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_INST_REQ_PC(a) "CPTX_AF_INST_REQ_PC"
#define device_bar_CAVM_CPTX_AF_INST_REQ_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_INST_REQ_PC(a) (a)
#define arguments_CAVM_CPTX_AF_INST_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf#_ctl
 *
 * CPT AF Queue Control Register
 * This register configures queues. This register should be written only when the
 * queue is execution-quiescent (see CPT_LF_INPROG[INFLIGHT]).
 */
union cavm_cptx_af_lfx_ctl
{
    uint64_t u;
    struct cavm_cptx_af_lfx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t grp                   : 8;  /**< [ 55: 48](R/W) Engine group mask. Each bit represents an engine group.

                                                                 If [GRP\<x\>]=0, CPT will discard all instructions with x=CPT_INST_S[EGRP].
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] when this happens, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 If [GRP\<x\>]=1, CPT can execute instructions with x=CPT_INST_S[EGRP].

                                                                 See also CPT_INST_S[EGRP] and CPT_AF_EXE()_CTL2[GRP_EN]. */
        uint64_t reserved_17_47        : 31;
        uint64_t nixtx_en              : 1;  /**< [ 16: 16](R/W) Enable CPT to pass the descriptor to NIX TX. Software must only set this when
                                                                 the function is allowed to enqueue descriptors via LMTSTs.

                                                                 0 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 sets CPT_LF_MISC_INT[NQERR], signals CPT_COMP_E::INSTERR, and will not pass a descriptor
                                                                 to NIX TX for the instruction.

                                                                 1 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 can execute the instruction, which may involve passing its descriptor to NIX TX.

                                                                 [NIXTX_EN] must not be set simultaneously with [PF_FUNC_INST]. */
        uint64_t reserved_11_15        : 5;
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When hardware or a CPT_LF_MISC_INT_W1S write sets any CPT_LF_MISC_INT
                                                                 bit, CPT clears CPT_LF_CTL[ENA].  Due to pipelining,
                                                                 additional instructions may have been processed between the instruction
                                                                 causing the error and the next instruction in the disabled queue (the
                                                                 instruction at CPT_LF_Q_INST_PTR). Note that clearing CPT_LF_CTL[ENA]
                                                                 will indirectly cause CPT_LF_MISC_INT[NQERR] to be set if instructions
                                                                 are still being enqueued.

                                                                 1 = Ignore errors and continue processing instructions. For diagnostic use only. */
        uint64_t pf_func_inst          : 1;  /**< [  9:  9](R/W) PFVF change allowed on instructions.

                                                                 0 = CPT executes all CPT_INST_S's in the queue within the function
                                                                 that owns the queue/LF (i.e. CPT_PRIV_LF()_CFG[PF_FUNC]). (But see SSO
                                                                 and NIX exceptions below).

                                                                 1 = CPT executes each CPT_INST_S in the queue within the function
                                                                 CPT_INST_S[RVU_PF_FUNC] selected by the instruction. This is typically
                                                                 used by the CPT queue that is performing NIX receive IPsec offload.

                                                                 See also CPT_AF_LF()_CTL2[SSO_PF_FUNC]. When [PF_FUNC_INST]=0, CPT uses
                                                                 CPT_AF_LF()_CTL2[SSO_PF_FUNC] to transfer to SSO. When [PF_FUNC_INST]=1,
                                                                 CPT uses CPT_INST_S[RVU_PF_FUNC] for SSO.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC]. [PF_FUNC_INST] has no effect on NIX
                                                                 TX descriptor transfer, as instructions can't transfer to NIX TX when
                                                                 [PF_FUNC_INST]=1.

                                                                 [PF_FUNC_INST] has no effect on the memory reads and writes needed to
                                                                 enqueue/dequeue the CPT_INST_S's themselves. CPT always uses the
                                                                 queue-owning function, i.e. CPT_PRIV_LF()_CFG[PF_FUNC], to enqueue/dequeue
                                                                 instructions.

                                                                 [PF_FUNC_INST] has no effect on microcode fetches. CPT always uses
                                                                 CPT_AF_PF_FUNC[PF_FUNC] to fetch microcode.

                                                                 [PF_FUNC_INST] must not be set simultaneously with [NIXTX_EN].

                                                                 [PF_FUNC_INST] must be set for the CPT queue that receives CPT_INST_S's
                                                                 from NIX RX, NIX RX fills CPT_INST_S[RVU_PF_FUNC] appropriately in the
                                                                 instructions it submits.  AP's must not add CPT_INST_S's to a queue
                                                                 with [PF_FUNC_INST]=1. It is illegal for more than one LF/queue to have
                                                                 [PF_FUNC_INST] set. */
        uint64_t reserved_1_8          : 8;
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues.

                                                                 See also CPT_AF_EXE_REQ_TIMER[CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues.

                                                                 See also CPT_AF_EXE_REQ_TIMER[CNT]. */
        uint64_t reserved_1_8          : 8;
        uint64_t pf_func_inst          : 1;  /**< [  9:  9](R/W) PFVF change allowed on instructions.

                                                                 0 = CPT executes all CPT_INST_S's in the queue within the function
                                                                 that owns the queue/LF (i.e. CPT_PRIV_LF()_CFG[PF_FUNC]). (But see SSO
                                                                 and NIX exceptions below).

                                                                 1 = CPT executes each CPT_INST_S in the queue within the function
                                                                 CPT_INST_S[RVU_PF_FUNC] selected by the instruction. This is typically
                                                                 used by the CPT queue that is performing NIX receive IPsec offload.

                                                                 See also CPT_AF_LF()_CTL2[SSO_PF_FUNC]. When [PF_FUNC_INST]=0, CPT uses
                                                                 CPT_AF_LF()_CTL2[SSO_PF_FUNC] to transfer to SSO. When [PF_FUNC_INST]=1,
                                                                 CPT uses CPT_INST_S[RVU_PF_FUNC] for SSO.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC]. [PF_FUNC_INST] has no effect on NIX
                                                                 TX descriptor transfer, as instructions can't transfer to NIX TX when
                                                                 [PF_FUNC_INST]=1.

                                                                 [PF_FUNC_INST] has no effect on the memory reads and writes needed to
                                                                 enqueue/dequeue the CPT_INST_S's themselves. CPT always uses the
                                                                 queue-owning function, i.e. CPT_PRIV_LF()_CFG[PF_FUNC], to enqueue/dequeue
                                                                 instructions.

                                                                 [PF_FUNC_INST] has no effect on microcode fetches. CPT always uses
                                                                 CPT_AF_PF_FUNC[PF_FUNC] to fetch microcode.

                                                                 [PF_FUNC_INST] must not be set simultaneously with [NIXTX_EN].

                                                                 [PF_FUNC_INST] must be set for the CPT queue that receives CPT_INST_S's
                                                                 from NIX RX, NIX RX fills CPT_INST_S[RVU_PF_FUNC] appropriately in the
                                                                 instructions it submits.  AP's must not add CPT_INST_S's to a queue
                                                                 with [PF_FUNC_INST]=1. It is illegal for more than one LF/queue to have
                                                                 [PF_FUNC_INST] set. */
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When hardware or a CPT_LF_MISC_INT_W1S write sets any CPT_LF_MISC_INT
                                                                 bit, CPT clears CPT_LF_CTL[ENA].  Due to pipelining,
                                                                 additional instructions may have been processed between the instruction
                                                                 causing the error and the next instruction in the disabled queue (the
                                                                 instruction at CPT_LF_Q_INST_PTR). Note that clearing CPT_LF_CTL[ENA]
                                                                 will indirectly cause CPT_LF_MISC_INT[NQERR] to be set if instructions
                                                                 are still being enqueued.

                                                                 1 = Ignore errors and continue processing instructions. For diagnostic use only. */
        uint64_t reserved_11_15        : 5;
        uint64_t nixtx_en              : 1;  /**< [ 16: 16](R/W) Enable CPT to pass the descriptor to NIX TX. Software must only set this when
                                                                 the function is allowed to enqueue descriptors via LMTSTs.

                                                                 0 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 sets CPT_LF_MISC_INT[NQERR], signals CPT_COMP_E::INSTERR, and will not pass a descriptor
                                                                 to NIX TX for the instruction.

                                                                 1 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 can execute the instruction, which may involve passing its descriptor to NIX TX.

                                                                 [NIXTX_EN] must not be set simultaneously with [PF_FUNC_INST]. */
        uint64_t reserved_17_47        : 31;
        uint64_t grp                   : 8;  /**< [ 55: 48](R/W) Engine group mask. Each bit represents an engine group.

                                                                 If [GRP\<x\>]=0, CPT will discard all instructions with x=CPT_INST_S[EGRP].
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] when this happens, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 If [GRP\<x\>]=1, CPT can execute instructions with x=CPT_INST_S[EGRP].

                                                                 See also CPT_INST_S[EGRP] and CPT_AF_EXE()_CTL2[GRP_EN]. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_lfx_ctl_s cn; */
};
typedef union cavm_cptx_af_lfx_ctl cavm_cptx_af_lfx_ctl_t;

static inline uint64_t CAVM_CPTX_AF_LFX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_LFX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x8400a0027000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPTX_AF_LFX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_LFX_CTL(a,b) cavm_cptx_af_lfx_ctl_t
#define bustype_CAVM_CPTX_AF_LFX_CTL(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_LFX_CTL(a,b) "CPTX_AF_LFX_CTL"
#define device_bar_CAVM_CPTX_AF_LFX_CTL(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_LFX_CTL(a,b) (a)
#define arguments_CAVM_CPTX_AF_LFX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf#_ctl2
 *
 * CPT Queue Control 2 Register
 * This register configures queues. This register should be written only when the
 * queue is execution-quiescent (see CPT_LF_INPROG[INFLIGHT]).
 */
union cavm_cptx_af_lfx_ctl2
{
    uint64_t u;
    struct cavm_cptx_af_lfx_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nix_pf_func           : 16; /**< [ 63: 48](R/W) CPT transfers the NIX TX descriptor identified by CPT_INST_S[NIXTXL],
                                                                 CPT_INST_S[NIXTX_ADDR] to function [NIX_PF_FUNC] in NIX TX. [NIX_PF_FUNC]
                                                                 affects only the descriptor enqueue in NIX TX. CPT's reads of the descriptor
                                                                 from memory before transferring it to NIX TX are not subject to [NIX_PF_FUNC],
                                                                 same as all other CPT_INST_S execution.

                                                                 RVU_PF_FUNC_S describes the format of [NIX_PF_FUNC]. */
        uint64_t sso_pf_func           : 16; /**< [ 47: 32](R/W) CPT adds any work identified by CPT_INST_S[TAG,TT,GRP,WQE_PTR] function
                                                                 [SSO_PF_FUNC] in SSO during normal operation. See CPT_AF_LF()_CTL[PF_FUNC_INST].
                                                                 The exception is that when CPT_AF_LF()_CTL[PF_FUNC_INST]=1, CPT adds the work to
                                                                 function CPT_INST_S[RVU_PF_FUNC] instead. [SSO_PF_FUNC] affects
                                                                 only the add work to SSO. [SSO_PF_FUNC] does not affect any other CPT_INST_S
                                                                 execution.

                                                                 RVU_PF_FUNC_S describes the format of [SSO_PF_FUNC]. */
        uint64_t reserved_2_31         : 30;
        uint64_t exe_ldwb              : 1;  /**< [  1:  1](R/W) Execution engine load-don't-write-back.

                                                                 0 = An execution engine request to LDWB will be converted to NCB transient
                                                                 loads (LDT) towards the cache, which if the line hits and is dirty will cause
                                                                 the line to be written back before being replaced.

                                                                 1 = An execution engine may request a NCB LDWB read-and-invalidate command
                                                                 towards the cache; as a result the line will not be written back when replaced.
                                                                 This improves performance, but software must not read the instructions after
                                                                 they are posted to the hardware. */
        uint64_t exe_no_swap           : 1;  /**< [  0:  0](R/W) Execution units no byte swap. See the HRM endian section.
                                                                 0 = Execution unit read/writes have a byte-swap applied when accessing NCB.
                                                                 1 = Execution unit read/writes do not byte-swap. */
#else /* Word 0 - Little Endian */
        uint64_t exe_no_swap           : 1;  /**< [  0:  0](R/W) Execution units no byte swap. See the HRM endian section.
                                                                 0 = Execution unit read/writes have a byte-swap applied when accessing NCB.
                                                                 1 = Execution unit read/writes do not byte-swap. */
        uint64_t exe_ldwb              : 1;  /**< [  1:  1](R/W) Execution engine load-don't-write-back.

                                                                 0 = An execution engine request to LDWB will be converted to NCB transient
                                                                 loads (LDT) towards the cache, which if the line hits and is dirty will cause
                                                                 the line to be written back before being replaced.

                                                                 1 = An execution engine may request a NCB LDWB read-and-invalidate command
                                                                 towards the cache; as a result the line will not be written back when replaced.
                                                                 This improves performance, but software must not read the instructions after
                                                                 they are posted to the hardware. */
        uint64_t reserved_2_31         : 30;
        uint64_t sso_pf_func           : 16; /**< [ 47: 32](R/W) CPT adds any work identified by CPT_INST_S[TAG,TT,GRP,WQE_PTR] function
                                                                 [SSO_PF_FUNC] in SSO during normal operation. See CPT_AF_LF()_CTL[PF_FUNC_INST].
                                                                 The exception is that when CPT_AF_LF()_CTL[PF_FUNC_INST]=1, CPT adds the work to
                                                                 function CPT_INST_S[RVU_PF_FUNC] instead. [SSO_PF_FUNC] affects
                                                                 only the add work to SSO. [SSO_PF_FUNC] does not affect any other CPT_INST_S
                                                                 execution.

                                                                 RVU_PF_FUNC_S describes the format of [SSO_PF_FUNC]. */
        uint64_t nix_pf_func           : 16; /**< [ 63: 48](R/W) CPT transfers the NIX TX descriptor identified by CPT_INST_S[NIXTXL],
                                                                 CPT_INST_S[NIXTX_ADDR] to function [NIX_PF_FUNC] in NIX TX. [NIX_PF_FUNC]
                                                                 affects only the descriptor enqueue in NIX TX. CPT's reads of the descriptor
                                                                 from memory before transferring it to NIX TX are not subject to [NIX_PF_FUNC],
                                                                 same as all other CPT_INST_S execution.

                                                                 RVU_PF_FUNC_S describes the format of [NIX_PF_FUNC]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_lfx_ctl2_s cn; */
};
typedef union cavm_cptx_af_lfx_ctl2 cavm_cptx_af_lfx_ctl2_t;

static inline uint64_t CAVM_CPTX_AF_LFX_CTL2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_LFX_CTL2(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x8400a0029000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPTX_AF_LFX_CTL2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_LFX_CTL2(a,b) cavm_cptx_af_lfx_ctl2_t
#define bustype_CAVM_CPTX_AF_LFX_CTL2(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_LFX_CTL2(a,b) "CPTX_AF_LFX_CTL2"
#define device_bar_CAVM_CPTX_AF_LFX_CTL2(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_LFX_CTL2(a,b) (a)
#define arguments_CAVM_CPTX_AF_LFX_CTL2(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf#_ptr_ctl
 *
 * RVU Admin Function Pointer Control Register
 */
union cavm_cptx_af_lfx_ptr_ctl
{
    uint64_t u;
    struct cavm_cptx_af_lfx_ptr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t inst_be               : 1;  /**< [  1:  1](R/W) 0 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in little-endian format.
                                                                 1 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in big-endian format.

                                                                 CPT treats CPT_RES_S's and CPT_FC_WRITE_S's as two separate 64-bit words, swapping
                                                                 only within each of the two 64-bit words when needed. */
        uint64_t iqb_ldwb              : 1;  /**< [  0:  0](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
#else /* Word 0 - Little Endian */
        uint64_t iqb_ldwb              : 1;  /**< [  0:  0](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
        uint64_t inst_be               : 1;  /**< [  1:  1](R/W) 0 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in little-endian format.
                                                                 1 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in big-endian format.

                                                                 CPT treats CPT_RES_S's and CPT_FC_WRITE_S's as two separate 64-bit words, swapping
                                                                 only within each of the two 64-bit words when needed. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_lfx_ptr_ctl_s cn; */
};
typedef union cavm_cptx_af_lfx_ptr_ctl cavm_cptx_af_lfx_ptr_ctl_t;

static inline uint64_t CAVM_CPTX_AF_LFX_PTR_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_LFX_PTR_CTL(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x8400a002c000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPTX_AF_LFX_PTR_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_LFX_PTR_CTL(a,b) cavm_cptx_af_lfx_ptr_ctl_t
#define bustype_CAVM_CPTX_AF_LFX_PTR_CTL(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_LFX_PTR_CTL(a,b) "CPTX_AF_LFX_PTR_CTL"
#define device_bar_CAVM_CPTX_AF_LFX_PTR_CTL(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_LFX_PTR_CTL(a,b) (a)
#define arguments_CAVM_CPTX_AF_LFX_PTR_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf_rst
 *
 * CPT AF LF Reset Register
 */
union cavm_cptx_af_lf_rst
{
    uint64_t u;
    struct cavm_cptx_af_lf_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done.

                                                                 Internal:
                                                                 This comment applies to all blocks that refer to this register:

                                                                 This should preferrably reset all registers/state associated with the LF, including
                                                                 any BLK_LF_* and BLK_AF_LF()_* registers. It would also be nice to reset any per-LF
                                                                 bits in other registers but its OK to have exceptions as long as the AF software has
                                                                 another way to reset them, e.g. by writing to the bits. Such additional steps
                                                                 expected from software should be documented in the HRM, e.g. in section 19.11.5
                                                                 "VF Function Level Reset". */
        uint64_t reserved_8_11         : 4;
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
        uint64_t reserved_8_11         : 4;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done.

                                                                 Internal:
                                                                 This comment applies to all blocks that refer to this register:

                                                                 This should preferrably reset all registers/state associated with the LF, including
                                                                 any BLK_LF_* and BLK_AF_LF()_* registers. It would also be nice to reset any per-LF
                                                                 bits in other registers but its OK to have exceptions as long as the AF software has
                                                                 another way to reset them, e.g. by writing to the bits. Such additional steps
                                                                 expected from software should be documented in the HRM, e.g. in section 19.11.5
                                                                 "VF Function Level Reset". */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_lf_rst_s cn; */
};
typedef union cavm_cptx_af_lf_rst cavm_cptx_af_lf_rst_t;

static inline uint64_t CAVM_CPTX_AF_LF_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_LF_RST(uint64_t a)
{
    if (a<=1)
        return 0x8400a0044000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_LF_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_LF_RST(a) cavm_cptx_af_lf_rst_t
#define bustype_CAVM_CPTX_AF_LF_RST(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_LF_RST(a) "CPTX_AF_LF_RST"
#define device_bar_CAVM_CPTX_AF_LF_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_LF_RST(a) (a)
#define arguments_CAVM_CPTX_AF_LF_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_pf_func
 *
 * RVU Admin Function PF FUNC Register
 */
union cavm_cptx_af_pf_func
{
    uint64_t u;
    struct cavm_cptx_af_pf_func_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF FUNC used for microcode fetches.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF FUNC used for microcode fetches.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_pf_func_s cn; */
};
typedef union cavm_cptx_af_pf_func cavm_cptx_af_pf_func_t;

static inline uint64_t CAVM_CPTX_AF_PF_FUNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_PF_FUNC(uint64_t a)
{
    if (a<=1)
        return 0x8400a002b000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_PF_FUNC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_PF_FUNC(a) cavm_cptx_af_pf_func_t
#define bustype_CAVM_CPTX_AF_PF_FUNC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_PF_FUNC(a) "CPTX_AF_PF_FUNC"
#define device_bar_CAVM_CPTX_AF_PF_FUNC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_PF_FUNC(a) (a)
#define arguments_CAVM_CPTX_AF_PF_FUNC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_exe
 *
 * CPT AF EXE Poison Registers
 */
union cavm_cptx_af_psnx_exe
{
    uint64_t u;
    struct cavm_cptx_af_psnx_exe_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One bit per engine. CPT sets the bit when the
                                                                 when the corresponding engine receives poisoned data
                                                                 during a read. The read may be for either microcode
                                                                 or any CPT_INST_S[DPTR,RPTR,CPTR]-based reads.

                                                                 _ CPT_AF_PSN(0)_EXE[EXE] - engine(63..0).
                                                                 _ CPT_AF_PSN(1)_EXE[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero
                                                                 nonsupported bit indices.

                                                                 CPT sets [EXE] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [EXE] bit, it also sets the CPT_AF_RAS_INT[LD_DAT_PSN]
                                                                 bit, which can cause an interrupt. When CPT sets an [EXE] bit, it will
                                                                 also set the CPT_AF_PSN()_LF[LF] bit for the LF the engine was working for
                                                                 after the engine finishes the instruction.

                                                                 When CPT sets an [EXE] bit due to a microcode fetch and CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 it also later sets the CPT_AF_FLT()_INT[EXE] and CPT_LF_MISC_INT[HWERR] bits for
                                                                 the LF the engine was working for, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 When CPT sets an [EXE] bit and CPT_AF_CTL[RD_PSN_IGN]=1, the engine microcode
                                                                 may (or may not) be corrupted, and the [EXE] bit may be the only way to
                                                                 determine which engine is potentially corrupted. Therefore it may be
                                                                 appropriate for software to disable and reset the corresponding engine based
                                                                 solely on an [EXE] bit when CPT_AF_CTL[RD_PSN_IGN]=1. When CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 the engine need only be reset when the corresponding CPT_AF_FLT()_INT[EXE]
                                                                 bit is set." */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One bit per engine. CPT sets the bit when the
                                                                 when the corresponding engine receives poisoned data
                                                                 during a read. The read may be for either microcode
                                                                 or any CPT_INST_S[DPTR,RPTR,CPTR]-based reads.

                                                                 _ CPT_AF_PSN(0)_EXE[EXE] - engine(63..0).
                                                                 _ CPT_AF_PSN(1)_EXE[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero
                                                                 nonsupported bit indices.

                                                                 CPT sets [EXE] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [EXE] bit, it also sets the CPT_AF_RAS_INT[LD_DAT_PSN]
                                                                 bit, which can cause an interrupt. When CPT sets an [EXE] bit, it will
                                                                 also set the CPT_AF_PSN()_LF[LF] bit for the LF the engine was working for
                                                                 after the engine finishes the instruction.

                                                                 When CPT sets an [EXE] bit due to a microcode fetch and CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 it also later sets the CPT_AF_FLT()_INT[EXE] and CPT_LF_MISC_INT[HWERR] bits for
                                                                 the LF the engine was working for, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 When CPT sets an [EXE] bit and CPT_AF_CTL[RD_PSN_IGN]=1, the engine microcode
                                                                 may (or may not) be corrupted, and the [EXE] bit may be the only way to
                                                                 determine which engine is potentially corrupted. Therefore it may be
                                                                 appropriate for software to disable and reset the corresponding engine based
                                                                 solely on an [EXE] bit when CPT_AF_CTL[RD_PSN_IGN]=1. When CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 the engine need only be reset when the corresponding CPT_AF_FLT()_INT[EXE]
                                                                 bit is set." */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_psnx_exe_s cn; */
};
typedef union cavm_cptx_af_psnx_exe cavm_cptx_af_psnx_exe_t;

static inline uint64_t CAVM_CPTX_AF_PSNX_EXE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_PSNX_EXE(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a000e000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_PSNX_EXE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_PSNX_EXE(a,b) cavm_cptx_af_psnx_exe_t
#define bustype_CAVM_CPTX_AF_PSNX_EXE(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_PSNX_EXE(a,b) "CPTX_AF_PSNX_EXE"
#define device_bar_CAVM_CPTX_AF_PSNX_EXE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_PSNX_EXE(a,b) (a)
#define arguments_CAVM_CPTX_AF_PSNX_EXE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_exe_w1s
 *
 * CPT AF EXE Poison Set Registers
 * This register reads or sets bits.
 */
union cavm_cptx_af_psnx_exe_w1s
{
    uint64_t u;
    struct cavm_cptx_af_psnx_exe_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0..1)_EXE[EXE]. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0..1)_EXE[EXE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_psnx_exe_w1s_s cn; */
};
typedef union cavm_cptx_af_psnx_exe_w1s cavm_cptx_af_psnx_exe_w1s_t;

static inline uint64_t CAVM_CPTX_AF_PSNX_EXE_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_PSNX_EXE_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x8400a000f000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("CPTX_AF_PSNX_EXE_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_PSNX_EXE_W1S(a,b) cavm_cptx_af_psnx_exe_w1s_t
#define bustype_CAVM_CPTX_AF_PSNX_EXE_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_PSNX_EXE_W1S(a,b) "CPTX_AF_PSNX_EXE_W1S"
#define device_bar_CAVM_CPTX_AF_PSNX_EXE_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_PSNX_EXE_W1S(a,b) (a)
#define arguments_CAVM_CPTX_AF_PSNX_EXE_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_lf
 *
 * CPT AF LF Poison Registers
 */
union cavm_cptx_af_psnx_lf
{
    uint64_t u;
    struct cavm_cptx_af_psnx_lf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1C/H) One bit per LF. CPT sets the bit when it receives poisoned data while
                                                                 fetching something for the LF. This fetch could be an engine microcode read,
                                                                 CPT_INST_S[DPTR,RPTR,CPTR]-based data for the engine, or a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue read.

                                                                 CPT sets [LF] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [LF] bit, it also sets one of the CPT_AF_RAS_INT[LD_DAT_PSN,LD_CMD_PSN]
                                                                 bits, which can cause an interrupt. If an engine fetch caused CPT to set the [LF] bit,
                                                                 CPT will also have previously set the CPT_AF_PSN()_EXE[EXE] bit for the engine.

                                                                 When CPT sets an [LF] bit and CPT_AF_CTL[RD_PSN_IGN]=0, it also
                                                                 sets at least one of the corresponding CPT_LF_MISC_INT[FAULT,HWERR,IRDE] bits, and
                                                                 if CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA],
                                                                 necessitating an LF/queue reset. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1C/H) One bit per LF. CPT sets the bit when it receives poisoned data while
                                                                 fetching something for the LF. This fetch could be an engine microcode read,
                                                                 CPT_INST_S[DPTR,RPTR,CPTR]-based data for the engine, or a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue read.

                                                                 CPT sets [LF] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [LF] bit, it also sets one of the CPT_AF_RAS_INT[LD_DAT_PSN,LD_CMD_PSN]
                                                                 bits, which can cause an interrupt. If an engine fetch caused CPT to set the [LF] bit,
                                                                 CPT will also have previously set the CPT_AF_PSN()_EXE[EXE] bit for the engine.

                                                                 When CPT sets an [LF] bit and CPT_AF_CTL[RD_PSN_IGN]=0, it also
                                                                 sets at least one of the corresponding CPT_LF_MISC_INT[FAULT,HWERR,IRDE] bits, and
                                                                 if CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA],
                                                                 necessitating an LF/queue reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_psnx_lf_s cn; */
};
typedef union cavm_cptx_af_psnx_lf cavm_cptx_af_psnx_lf_t;

static inline uint64_t CAVM_CPTX_AF_PSNX_LF(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_PSNX_LF(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x8400a0010000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("CPTX_AF_PSNX_LF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_PSNX_LF(a,b) cavm_cptx_af_psnx_lf_t
#define bustype_CAVM_CPTX_AF_PSNX_LF(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_PSNX_LF(a,b) "CPTX_AF_PSNX_LF"
#define device_bar_CAVM_CPTX_AF_PSNX_LF(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_PSNX_LF(a,b) (a)
#define arguments_CAVM_CPTX_AF_PSNX_LF(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_lf_w1s
 *
 * CPT AF LF Poison Set Registers
 * This register reads or sets bits.
 */
union cavm_cptx_af_psnx_lf_w1s
{
    uint64_t u;
    struct cavm_cptx_af_psnx_lf_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0)_LF[LF]. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0)_LF[LF]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_psnx_lf_w1s_s cn; */
};
typedef union cavm_cptx_af_psnx_lf_w1s cavm_cptx_af_psnx_lf_w1s_t;

static inline uint64_t CAVM_CPTX_AF_PSNX_LF_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_PSNX_LF_W1S(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x8400a0011000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("CPTX_AF_PSNX_LF_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_PSNX_LF_W1S(a,b) cavm_cptx_af_psnx_lf_w1s_t
#define bustype_CAVM_CPTX_AF_PSNX_LF_W1S(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_PSNX_LF_W1S(a,b) "CPTX_AF_PSNX_LF_W1S"
#define device_bar_CAVM_CPTX_AF_PSNX_LF_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_PSNX_LF_W1S(a,b) (a)
#define arguments_CAVM_CPTX_AF_PSNX_LF_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int
 *
 * CPT AF RAS Interrupt Register
 * This register contains RAS interrupt bits.
 */
union cavm_cptx_af_ras_int
{
    uint64_t u;
    struct cavm_cptx_af_ras_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Set when CPT receives poisoned data in a read response initiated by an engine.
                                                                 CPT will have set a CPT_AF_PSN()_EXE bit. When the engine completes the
                                                                 CPT_INST_S, CPT will also set a corresponding CPT_AF_PSN()_LF[LF] bit.

                                                                 CPT sets [LD_DAT_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Set when CPT receives poisoned data reading a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue. CPT will have also set a CPT_AF_PSN()_LF[LF] bit.

                                                                 CPT sets [LD_CMD_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Set when CPT receives poisoned data reading a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue. CPT will have also set a CPT_AF_PSN()_LF[LF] bit.

                                                                 CPT sets [LD_CMD_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Set when CPT receives poisoned data in a read response initiated by an engine.
                                                                 CPT will have set a CPT_AF_PSN()_EXE bit. When the engine completes the
                                                                 CPT_INST_S, CPT will also set a corresponding CPT_AF_PSN()_LF[LF] bit.

                                                                 CPT sets [LD_DAT_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_ras_int_s cn; */
};
typedef union cavm_cptx_af_ras_int cavm_cptx_af_ras_int_t;

static inline uint64_t CAVM_CPTX_AF_RAS_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RAS_INT(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047020ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RAS_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RAS_INT(a) cavm_cptx_af_ras_int_t
#define bustype_CAVM_CPTX_AF_RAS_INT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RAS_INT(a) "CPTX_AF_RAS_INT"
#define device_bar_CAVM_CPTX_AF_RAS_INT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RAS_INT(a) (a)
#define arguments_CAVM_CPTX_AF_RAS_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int_ena_w1c
 *
 * CPT AF RAS Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_cptx_af_ras_int_ena_w1c
{
    uint64_t u;
    struct cavm_cptx_af_ras_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_ras_int_ena_w1c_s cn; */
};
typedef union cavm_cptx_af_ras_int_ena_w1c cavm_cptx_af_ras_int_ena_w1c_t;

static inline uint64_t CAVM_CPTX_AF_RAS_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RAS_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047038ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RAS_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RAS_INT_ENA_W1C(a) cavm_cptx_af_ras_int_ena_w1c_t
#define bustype_CAVM_CPTX_AF_RAS_INT_ENA_W1C(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RAS_INT_ENA_W1C(a) "CPTX_AF_RAS_INT_ENA_W1C"
#define device_bar_CAVM_CPTX_AF_RAS_INT_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RAS_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPTX_AF_RAS_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int_ena_w1s
 *
 * CPT AF RAS Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cptx_af_ras_int_ena_w1s
{
    uint64_t u;
    struct cavm_cptx_af_ras_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_ras_int_ena_w1s_s cn; */
};
typedef union cavm_cptx_af_ras_int_ena_w1s cavm_cptx_af_ras_int_ena_w1s_t;

static inline uint64_t CAVM_CPTX_AF_RAS_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RAS_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047030ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RAS_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RAS_INT_ENA_W1S(a) cavm_cptx_af_ras_int_ena_w1s_t
#define bustype_CAVM_CPTX_AF_RAS_INT_ENA_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RAS_INT_ENA_W1S(a) "CPTX_AF_RAS_INT_ENA_W1S"
#define device_bar_CAVM_CPTX_AF_RAS_INT_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RAS_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPTX_AF_RAS_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int_w1s
 *
 * CPT AF RAS Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cptx_af_ras_int_w1s
{
    uint64_t u;
    struct cavm_cptx_af_ras_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_CMD_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_ras_int_w1s_s cn; */
};
typedef union cavm_cptx_af_ras_int_w1s cavm_cptx_af_ras_int_w1s_t;

static inline uint64_t CAVM_CPTX_AF_RAS_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RAS_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047028ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RAS_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RAS_INT_W1S(a) cavm_cptx_af_ras_int_w1s_t
#define bustype_CAVM_CPTX_AF_RAS_INT_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RAS_INT_W1S(a) "CPTX_AF_RAS_INT_W1S"
#define device_bar_CAVM_CPTX_AF_RAS_INT_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RAS_INT_W1S(a) (a)
#define arguments_CAVM_CPTX_AF_RAS_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rd_latency_pc
 *
 * CPT AF Read Latency Counter Register
 */
union cavm_cptx_af_rd_latency_pc
{
    uint64_t u;
    struct cavm_cptx_af_rd_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of transactions outstanding in that cycle. This
                                                                 may be divided by CPT_AF_RD_REQ_PC to determine the average read latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of transactions outstanding in that cycle. This
                                                                 may be divided by CPT_AF_RD_REQ_PC to determine the average read latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rd_latency_pc_s cn; */
};
typedef union cavm_cptx_af_rd_latency_pc cavm_cptx_af_rd_latency_pc_t;

static inline uint64_t CAVM_CPTX_AF_RD_LATENCY_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RD_LATENCY_PC(uint64_t a)
{
    if (a<=1)
        return 0x8400a001a000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RD_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RD_LATENCY_PC(a) cavm_cptx_af_rd_latency_pc_t
#define bustype_CAVM_CPTX_AF_RD_LATENCY_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RD_LATENCY_PC(a) "CPTX_AF_RD_LATENCY_PC"
#define device_bar_CAVM_CPTX_AF_RD_LATENCY_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RD_LATENCY_PC(a) (a)
#define arguments_CAVM_CPTX_AF_RD_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rd_req_pc
 *
 * CPT AF Read Request Performance Counter Register
 */
union cavm_cptx_af_rd_req_pc
{
    uint64_t u;
    struct cavm_cptx_af_rd_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rd_req_pc_s cn; */
};
typedef union cavm_cptx_af_rd_req_pc cavm_cptx_af_rd_req_pc_t;

static inline uint64_t CAVM_CPTX_AF_RD_REQ_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RD_REQ_PC(uint64_t a)
{
    if (a<=1)
        return 0x8400a0019000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RD_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RD_REQ_PC(a) cavm_cptx_af_rd_req_pc_t
#define bustype_CAVM_CPTX_AF_RD_REQ_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RD_REQ_PC(a) "CPTX_AF_RD_REQ_PC"
#define device_bar_CAVM_CPTX_AF_RD_REQ_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RD_REQ_PC(a) (a)
#define arguments_CAVM_CPTX_AF_RD_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rd_uc_pc
 *
 * CPT AF Read Microcode Performance Counter Register
 */
union cavm_cptx_af_rd_uc_pc
{
    uint64_t u;
    struct cavm_cptx_af_rd_uc_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests caused by are microcode fills. Microcode fills also
                                                                 increment CPT_AF_RD_REQ_PC and CPT_AF_RD_LATENCY_PC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests caused by are microcode fills. Microcode fills also
                                                                 increment CPT_AF_RD_REQ_PC and CPT_AF_RD_LATENCY_PC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rd_uc_pc_s cn; */
};
typedef union cavm_cptx_af_rd_uc_pc cavm_cptx_af_rd_uc_pc_t;

static inline uint64_t CAVM_CPTX_AF_RD_UC_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RD_UC_PC(uint64_t a)
{
    if (a<=1)
        return 0x8400a001b000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RD_UC_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RD_UC_PC(a) cavm_cptx_af_rd_uc_pc_t
#define bustype_CAVM_CPTX_AF_RD_UC_PC(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RD_UC_PC(a) "CPTX_AF_RD_UC_PC"
#define device_bar_CAVM_CPTX_AF_RD_UC_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RD_UC_PC(a) (a)
#define arguments_CAVM_CPTX_AF_RD_UC_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int
 *
 * CPT AF RVU Interrupt Register
 * This register contains RVU error interrupt summary bits.
 */
union cavm_cptx_af_rvu_int
{
    uint64_t u;
    struct cavm_cptx_af_rvu_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See CPT_PRIV_LF()_CFG and CPT_AF_RVU_LF_CFG_DEBUG. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See CPT_PRIV_LF()_CFG and CPT_AF_RVU_LF_CFG_DEBUG. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rvu_int_s cn; */
};
typedef union cavm_cptx_af_rvu_int cavm_cptx_af_rvu_int_t;

static inline uint64_t CAVM_CPTX_AF_RVU_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RVU_INT(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RVU_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RVU_INT(a) cavm_cptx_af_rvu_int_t
#define bustype_CAVM_CPTX_AF_RVU_INT(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RVU_INT(a) "CPTX_AF_RVU_INT"
#define device_bar_CAVM_CPTX_AF_RVU_INT(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RVU_INT(a) (a)
#define arguments_CAVM_CPTX_AF_RVU_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int_ena_w1c
 *
 * CPT AF RVU Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_cptx_af_rvu_int_ena_w1c
{
    uint64_t u;
    struct cavm_cptx_af_rvu_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rvu_int_ena_w1c_s cn; */
};
typedef union cavm_cptx_af_rvu_int_ena_w1c cavm_cptx_af_rvu_int_ena_w1c_t;

static inline uint64_t CAVM_CPTX_AF_RVU_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RVU_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047018ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RVU_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RVU_INT_ENA_W1C(a) cavm_cptx_af_rvu_int_ena_w1c_t
#define bustype_CAVM_CPTX_AF_RVU_INT_ENA_W1C(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RVU_INT_ENA_W1C(a) "CPTX_AF_RVU_INT_ENA_W1C"
#define device_bar_CAVM_CPTX_AF_RVU_INT_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RVU_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPTX_AF_RVU_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int_ena_w1s
 *
 * CPT AF RVU Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cptx_af_rvu_int_ena_w1s
{
    uint64_t u;
    struct cavm_cptx_af_rvu_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rvu_int_ena_w1s_s cn; */
};
typedef union cavm_cptx_af_rvu_int_ena_w1s cavm_cptx_af_rvu_int_ena_w1s_t;

static inline uint64_t CAVM_CPTX_AF_RVU_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RVU_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047010ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RVU_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RVU_INT_ENA_W1S(a) cavm_cptx_af_rvu_int_ena_w1s_t
#define bustype_CAVM_CPTX_AF_RVU_INT_ENA_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RVU_INT_ENA_W1S(a) "CPTX_AF_RVU_INT_ENA_W1S"
#define device_bar_CAVM_CPTX_AF_RVU_INT_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RVU_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPTX_AF_RVU_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int_w1s
 *
 * CPT AF RVU Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cptx_af_rvu_int_w1s
{
    uint64_t u;
    struct cavm_cptx_af_rvu_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RVU_INT[UNMAPPED_SLOT]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RVU_INT[UNMAPPED_SLOT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_rvu_int_w1s_s cn; */
};
typedef union cavm_cptx_af_rvu_int_w1s cavm_cptx_af_rvu_int_w1s_t;

static inline uint64_t CAVM_CPTX_AF_RVU_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RVU_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x8400a0047008ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RVU_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RVU_INT_W1S(a) cavm_cptx_af_rvu_int_w1s_t
#define bustype_CAVM_CPTX_AF_RVU_INT_W1S(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RVU_INT_W1S(a) "CPTX_AF_RVU_INT_W1S"
#define device_bar_CAVM_CPTX_AF_RVU_INT_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RVU_INT_W1S(a) (a)
#define arguments_CAVM_CPTX_AF_RVU_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_lf_cfg_debug
 *
 * CPT Privileged LF Configuration Debug Registers
 * This debug register allows software to look up the reverse mapping from VF/PF
 * slot to LF. The forward mapping is programmed with CPT_PRIV_LF()_CFG.
 */
union cavm_cptx_af_rvu_lf_cfg_debug
{
    uint64_t u;
    struct cavm_cptx_af_rvu_lf_cfg_debug_s
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
    /* struct cavm_cptx_af_rvu_lf_cfg_debug_s cn; */
};
typedef union cavm_cptx_af_rvu_lf_cfg_debug cavm_cptx_af_rvu_lf_cfg_debug_t;

static inline uint64_t CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(uint64_t a)
{
    if (a<=1)
        return 0x8400a0045000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_AF_RVU_LF_CFG_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(a) cavm_cptx_af_rvu_lf_cfg_debug_t
#define bustype_CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(a) "CPTX_AF_RVU_LF_CFG_DEBUG"
#define device_bar_CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(a) (a)
#define arguments_CAVM_CPTX_AF_RVU_LF_CFG_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_xe#_thr
 *
 * RVU Admin Function XE Throttle Register
 * This register controls the number of 100 MHz clock cycles that must pass between
 * issuing of instructions to this engine type. CPT_AF_XE(0)_THR controls SE throttling,
 * CPT_AF_XE(1)_THR controls IE throttling, and CPT_AF_XE(2)_THR controls AE
 * throttling. Setting a value to 0x0 to a register disables throttling for that engine
 * type.
 *
 * This register is for use by the SCP in power throttling only. OS drivers should not
 * access this register.
 */
union cavm_cptx_af_xex_thr
{
    uint64_t u;
    struct cavm_cptx_af_xex_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t thr                   : 32; /**< [ 31:  0](R/W) The number of 100 MHz clock cycles that must pass being issuing
                                                                 of instructions to this engine type. 0x0 disable disables throttling. */
#else /* Word 0 - Little Endian */
        uint64_t thr                   : 32; /**< [ 31:  0](R/W) The number of 100 MHz clock cycles that must pass being issuing
                                                                 of instructions to this engine type. 0x0 disable disables throttling. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_af_xex_thr_s cn; */
};
typedef union cavm_cptx_af_xex_thr cavm_cptx_af_xex_thr_t;

static inline uint64_t CAVM_CPTX_AF_XEX_THR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_AF_XEX_THR(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=2))
        return 0x8400a002f000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("CPTX_AF_XEX_THR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_AF_XEX_THR(a,b) cavm_cptx_af_xex_thr_t
#define bustype_CAVM_CPTX_AF_XEX_THR(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_AF_XEX_THR(a,b) "CPTX_AF_XEX_THR"
#define device_bar_CAVM_CPTX_AF_XEX_THR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_AF_XEX_THR(a,b) (a)
#define arguments_CAVM_CPTX_AF_XEX_THR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_ctl
 *
 * CPT VF Queue Control Registers
 * This register configures the queue.
 *
 * When the queue is not execution-quiescent (see CPT_LF_INPROG[EENA,INFLIGHT]),
 * software must only write this register with [ENA]=0.
 */
union cavm_cptx_lf_ctl
{
    uint64_t u;
    struct cavm_cptx_lf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t fc_hyst_bits          : 4;  /**< [  7:  4](R/W) Flow control hysteresis bits. See also [FC_ENA,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When both [ENA,FC_ENA] are set and [FC_HYST_BITS]=0, CPT does not implement
                                                                 hysteresis and stores the CPT_FC_WRITE_S to LLC/DRAM whenever CPT_FC_WRITE_S[QSIZE]
                                                                 would change value. When both [ENA,FC_ENA] are set and [FC_HYST_BITS]!=0,
                                                                 CPT implements hysteresis and may store a CPT_FC_WRITE_S to LLC/DRAM only
                                                                 near in time to when either of these situations occur:

                                                                 * Bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all ones to all
                                                                 zeros when [FC_UP_CROSSING]=1.

                                                                 * Or, bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all zeros to all
                                                                 ones when [FC_UP_CROSSING]=0.

                                                                 When CPT writes a CPT_FC_WRITE_S to memory, CPT_FC_WRITE_S[QSIZE] contains
                                                                 the latest memory queue size for the queue/LF. See the CPT_FC_WRITE_S[QSIZE]
                                                                 description. CPT may write the CPT_FC_WRITE_S only near in time to one of the
                                                                 aforementioned transitions, and may not write CPT_FC_WRITE_S[QSIZE] with the
                                                                 memory queue size at the exact instant of the transition.

                                                                 [FC_HYST_BITS]=1 is not supported.

                                                                 [FC_HYST_BITS] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t reserved_3            : 1;
        uint64_t fc_up_crossing        : 1;  /**< [  2:  2](R/W/H) The last flow control crossing. See also [FC_ENA,FC_HYST_BITS] and CPT_FC_WRITE_S.
                                                                 Unpredictable and not used when any of [ENA,FC_ENA,FC_HYST_BITS]=0. Otherwise,
                                                                 CPT sets [FC_UP_CROSSING] whenever memory queue size bits \<[FC_HYST_BITS]-1:0\>
                                                                 transition from all ones to all zeros, and clears [FC_UP_CROSSING] whenever memory
                                                                 queue size bits \<[FC_HYST_BITS]-1:0\> transition from all zeros to all ones.

                                                                 Software must only change the [FC_UP_CROSSING] value when the queue is
                                                                 execution-quiescent (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t fc_ena                : 1;  /**< [  1:  1](R/W) Flow control enable. See also [FC_HYST_BITS,FC_UP_CROSSING], CPT_FC_WRITE_S, and
                                                                 CPT_AF_CTL[FC_STYPE]. CPT ignores [FC_ENA] when [ENA] is clear.
                                                                 Both [ENA,FC_ENA] must be set for flow control to be enabled.

                                                                 When both [ENA,FC_ENA] are set, CPT periodically stores the memory queue size
                                                                 as a CPT_FC_WRITE_S to an LF IOVA. [FC_HYST_BITS,FC_UP_CROSSING]
                                                                 can limit the frequency of the stores.

                                                                 CPT_FC_WRITE_S[QSIZE] defines the memory queue size value that is monitored
                                                                 and written to memory by CPT. CPT_AF_LF()_PTR_CTL[INST_BE] determines the
                                                                 endianness of the CPT_FC_WRITE_S write.

                                                                 CPT writes the CPT_FC_WRITE_S to LF IOVA (CPT_LF_Q_BASE[ADDR] \<\< 7). CPT sets
                                                                 CPT_LF_MISC_INT[IRDE] when an SMMU fault occurs on the FC store.

                                                                 [FC_ENA] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) Enqueueing enable. See also CPT_LF_INPROG[EENA].

                                                                 0 = When CPT receives a CPT_INST_S for the LF, it discards it and sets
                                                                 CPT_LF_MISC_INT[NQERR].

                                                                 1 = When CPT receives a CPT_INST_S for the LF (at CPT_LF_NQ()), it enqueues it.

                                                                 CPT clears [ENA] when any CPT_LF_MISC_INT bit gets set. See CPT_AF_LF()_CTL[CONT_ERR].

                                                                 Software must only transition [ENA] 0-\>1 when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]).

                                                                 Software must only transition [ENA] 0-\>1 when the queue is empty and the following
                                                                 are true:
                                                                 _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
                                                                 _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
                                                                 _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
                                                                 _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) Enqueueing enable. See also CPT_LF_INPROG[EENA].

                                                                 0 = When CPT receives a CPT_INST_S for the LF, it discards it and sets
                                                                 CPT_LF_MISC_INT[NQERR].

                                                                 1 = When CPT receives a CPT_INST_S for the LF (at CPT_LF_NQ()), it enqueues it.

                                                                 CPT clears [ENA] when any CPT_LF_MISC_INT bit gets set. See CPT_AF_LF()_CTL[CONT_ERR].

                                                                 Software must only transition [ENA] 0-\>1 when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]).

                                                                 Software must only transition [ENA] 0-\>1 when the queue is empty and the following
                                                                 are true:
                                                                 _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
                                                                 _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
                                                                 _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
                                                                 _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1. */
        uint64_t fc_ena                : 1;  /**< [  1:  1](R/W) Flow control enable. See also [FC_HYST_BITS,FC_UP_CROSSING], CPT_FC_WRITE_S, and
                                                                 CPT_AF_CTL[FC_STYPE]. CPT ignores [FC_ENA] when [ENA] is clear.
                                                                 Both [ENA,FC_ENA] must be set for flow control to be enabled.

                                                                 When both [ENA,FC_ENA] are set, CPT periodically stores the memory queue size
                                                                 as a CPT_FC_WRITE_S to an LF IOVA. [FC_HYST_BITS,FC_UP_CROSSING]
                                                                 can limit the frequency of the stores.

                                                                 CPT_FC_WRITE_S[QSIZE] defines the memory queue size value that is monitored
                                                                 and written to memory by CPT. CPT_AF_LF()_PTR_CTL[INST_BE] determines the
                                                                 endianness of the CPT_FC_WRITE_S write.

                                                                 CPT writes the CPT_FC_WRITE_S to LF IOVA (CPT_LF_Q_BASE[ADDR] \<\< 7). CPT sets
                                                                 CPT_LF_MISC_INT[IRDE] when an SMMU fault occurs on the FC store.

                                                                 [FC_ENA] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t fc_up_crossing        : 1;  /**< [  2:  2](R/W/H) The last flow control crossing. See also [FC_ENA,FC_HYST_BITS] and CPT_FC_WRITE_S.
                                                                 Unpredictable and not used when any of [ENA,FC_ENA,FC_HYST_BITS]=0. Otherwise,
                                                                 CPT sets [FC_UP_CROSSING] whenever memory queue size bits \<[FC_HYST_BITS]-1:0\>
                                                                 transition from all ones to all zeros, and clears [FC_UP_CROSSING] whenever memory
                                                                 queue size bits \<[FC_HYST_BITS]-1:0\> transition from all zeros to all ones.

                                                                 Software must only change the [FC_UP_CROSSING] value when the queue is
                                                                 execution-quiescent (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t reserved_3            : 1;
        uint64_t fc_hyst_bits          : 4;  /**< [  7:  4](R/W) Flow control hysteresis bits. See also [FC_ENA,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When both [ENA,FC_ENA] are set and [FC_HYST_BITS]=0, CPT does not implement
                                                                 hysteresis and stores the CPT_FC_WRITE_S to LLC/DRAM whenever CPT_FC_WRITE_S[QSIZE]
                                                                 would change value. When both [ENA,FC_ENA] are set and [FC_HYST_BITS]!=0,
                                                                 CPT implements hysteresis and may store a CPT_FC_WRITE_S to LLC/DRAM only
                                                                 near in time to when either of these situations occur:

                                                                 * Bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all ones to all
                                                                 zeros when [FC_UP_CROSSING]=1.

                                                                 * Or, bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all zeros to all
                                                                 ones when [FC_UP_CROSSING]=0.

                                                                 When CPT writes a CPT_FC_WRITE_S to memory, CPT_FC_WRITE_S[QSIZE] contains
                                                                 the latest memory queue size for the queue/LF. See the CPT_FC_WRITE_S[QSIZE]
                                                                 description. CPT may write the CPT_FC_WRITE_S only near in time to one of the
                                                                 aforementioned transitions, and may not write CPT_FC_WRITE_S[QSIZE] with the
                                                                 memory queue size at the exact instant of the transition.

                                                                 [FC_HYST_BITS]=1 is not supported.

                                                                 [FC_HYST_BITS] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_ctl_s cn; */
};
typedef union cavm_cptx_lf_ctl cavm_cptx_lf_ctl_t;

static inline uint64_t CAVM_CPTX_LF_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_CTL(uint64_t a)
{
    if (a<=1)
        return 0x840200a00010ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_CTL(a) cavm_cptx_lf_ctl_t
#define bustype_CAVM_CPTX_LF_CTL(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_CTL(a) "CPTX_LF_CTL"
#define device_bar_CAVM_CPTX_LF_CTL(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_CTL(a) (a)
#define arguments_CAVM_CPTX_LF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done
 *
 * CPT Queue Done Count Registers
 * These registers contain the per-queue instruction done count.
 */
union cavm_cptx_lf_done
{
    uint64_t u;
    struct cavm_cptx_lf_done_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When CPT_INST_S[DONEINT] set and that instruction completes,
                                                                 CPT increments [DONE] when the instruction finishes. Software should
                                                                 later write to CPT_LF_DONE_ACK to decrement [DONE]. Writes to [DONE]
                                                                 are for diagnostic use only.

                                                                 * CPT throws an interrupt (CPT_LF_INT_VEC_E::DONE) for the LF whenever
                                                                 it asserts its conceptual interrupt bit for the LF while corresponding
                                                                 CPT_LF_DONE_INT_ENA_W1S[DONE] is set.

                                                                 * Whenever [DONE]=0, CPT holds the corresponding conceptual
                                                                 interrupt bit for the LF clear, and holds the corresponding time
                                                                 coalescing counter for the LF at zero.

                                                                 * Otherwise, CPT's conceptual interrupt bit is clear unless corresponding
                                                                 [DONE] \>= CPT_LF_DONE_WAIT[NUM_WAIT], or CPT_LF_DONE_WAIT[TIME_WAIT]!=0
                                                                 (i.e. interrupt time coalescing is enabled) and the interrupt
                                                                 time coalescing counter \>= CPT_LF_DONE_WAIT[TIME_WAIT] microseconds.

                                                                 * CPT clears the interrupt time coalescing counter for the LF on any
                                                                 write to the LF's CPT_LF_DONE_ACK.

                                                                 * Otherwise, CPT adds time to the interrupt time coalescing counter
                                                                 on any cycle when corresponding [DONE]!=0 and
                                                                 CPT_LF_DONE_WAIT[TIME_WAIT]!=0.

                                                                 * If CPT_LF_DONE_ENA_W1S[DONE] is set, CPT also throws an interrupt
                                                                 when corresponding CPT_LF_DONE[DONE] remains \>= CPT_LF_DONE_WAIT[NUM_WAIT]
                                                                 after a CPT_LF_DONE_ACK write (i.e. if the conceptual interrupt bit
                                                                 remains asserted after a CPT_LF_DONE_ACK write). (This covers the
                                                                 race case between software acknowledging an interrupt and a result
                                                                 returning.)

                                                                 The [DONE] increment occurs after the CPT_RES_S write, but otherwise
                                                                 can occur out-of-order. Software may need to scan CPT_RES_S's to
                                                                 determine which caused the interrupt. Even if a later command is
                                                                 acknowledged first a completion will not be missed.

                                                                 Software must ensure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight.

                                                                 Internal:
                                                                 Desirable for CPT_LF_DONE[DONE] writes to also be able to test interrupts
                                                                 (in addition to CPT_LF_DONE_ACK writes). A write to CPT_LF_DONE should also
                                                                 clear the timer.

                                                                 The "conceptual interrupt bit" is CPT_LF_DONE_INT[DONE]. But we hide
                                                                 the bit from the HRM, and its implemention is not required. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When CPT_INST_S[DONEINT] set and that instruction completes,
                                                                 CPT increments [DONE] when the instruction finishes. Software should
                                                                 later write to CPT_LF_DONE_ACK to decrement [DONE]. Writes to [DONE]
                                                                 are for diagnostic use only.

                                                                 * CPT throws an interrupt (CPT_LF_INT_VEC_E::DONE) for the LF whenever
                                                                 it asserts its conceptual interrupt bit for the LF while corresponding
                                                                 CPT_LF_DONE_INT_ENA_W1S[DONE] is set.

                                                                 * Whenever [DONE]=0, CPT holds the corresponding conceptual
                                                                 interrupt bit for the LF clear, and holds the corresponding time
                                                                 coalescing counter for the LF at zero.

                                                                 * Otherwise, CPT's conceptual interrupt bit is clear unless corresponding
                                                                 [DONE] \>= CPT_LF_DONE_WAIT[NUM_WAIT], or CPT_LF_DONE_WAIT[TIME_WAIT]!=0
                                                                 (i.e. interrupt time coalescing is enabled) and the interrupt
                                                                 time coalescing counter \>= CPT_LF_DONE_WAIT[TIME_WAIT] microseconds.

                                                                 * CPT clears the interrupt time coalescing counter for the LF on any
                                                                 write to the LF's CPT_LF_DONE_ACK.

                                                                 * Otherwise, CPT adds time to the interrupt time coalescing counter
                                                                 on any cycle when corresponding [DONE]!=0 and
                                                                 CPT_LF_DONE_WAIT[TIME_WAIT]!=0.

                                                                 * If CPT_LF_DONE_ENA_W1S[DONE] is set, CPT also throws an interrupt
                                                                 when corresponding CPT_LF_DONE[DONE] remains \>= CPT_LF_DONE_WAIT[NUM_WAIT]
                                                                 after a CPT_LF_DONE_ACK write (i.e. if the conceptual interrupt bit
                                                                 remains asserted after a CPT_LF_DONE_ACK write). (This covers the
                                                                 race case between software acknowledging an interrupt and a result
                                                                 returning.)

                                                                 The [DONE] increment occurs after the CPT_RES_S write, but otherwise
                                                                 can occur out-of-order. Software may need to scan CPT_RES_S's to
                                                                 determine which caused the interrupt. Even if a later command is
                                                                 acknowledged first a completion will not be missed.

                                                                 Software must ensure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight.

                                                                 Internal:
                                                                 Desirable for CPT_LF_DONE[DONE] writes to also be able to test interrupts
                                                                 (in addition to CPT_LF_DONE_ACK writes). A write to CPT_LF_DONE should also
                                                                 clear the timer.

                                                                 The "conceptual interrupt bit" is CPT_LF_DONE_INT[DONE]. But we hide
                                                                 the bit from the HRM, and its implemention is not required. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_s cn; */
};
typedef union cavm_cptx_lf_done cavm_cptx_lf_done_t;

static inline uint64_t CAVM_CPTX_LF_DONE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE(uint64_t a)
{
    if (a<=1)
        return 0x840200a00050ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE(a) cavm_cptx_lf_done_t
#define bustype_CAVM_CPTX_LF_DONE(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE(a) "CPTX_LF_DONE"
#define device_bar_CAVM_CPTX_LF_DONE(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE(a) (a)
#define arguments_CAVM_CPTX_LF_DONE(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_ack
 *
 * CPT Queue Done Count Ack Registers
 * This register is written by software to acknowledge interrupts.
 */
union cavm_cptx_lf_done_ack
{
    uint64_t u;
    struct cavm_cptx_lf_done_ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to CPT_LF_DONE[DONE]. Reads CPT_LF_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If CPT_LF_DONE[DONE] is still
                                                                 nonzero the interrupt will be resent if the conditions described in
                                                                 CPT_LF_DONE[DONE] are satisfied.

                                                                 Writes to CPT_LF_DONE_ACK[DONE_ACK] can write any value into CPT_LF_DONE[DONE]
                                                                 and create an interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to CPT_LF_DONE[DONE]. Reads CPT_LF_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If CPT_LF_DONE[DONE] is still
                                                                 nonzero the interrupt will be resent if the conditions described in
                                                                 CPT_LF_DONE[DONE] are satisfied.

                                                                 Writes to CPT_LF_DONE_ACK[DONE_ACK] can write any value into CPT_LF_DONE[DONE]
                                                                 and create an interrupt. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_ack_s cn; */
};
typedef union cavm_cptx_lf_done_ack cavm_cptx_lf_done_ack_t;

static inline uint64_t CAVM_CPTX_LF_DONE_ACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE_ACK(uint64_t a)
{
    if (a<=1)
        return 0x840200a00060ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE_ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE_ACK(a) cavm_cptx_lf_done_ack_t
#define bustype_CAVM_CPTX_LF_DONE_ACK(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE_ACK(a) "CPTX_LF_DONE_ACK"
#define device_bar_CAVM_CPTX_LF_DONE_ACK(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE_ACK(a) (a)
#define arguments_CAVM_CPTX_LF_DONE_ACK(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int
 *
 * INTERNAL: CPT Queue Done Interrupt Clear Registers
 *
 * Internal:
 * This CSR description is only here to keep the scripts happy.
 */
union cavm_cptx_lf_done_int
{
    uint64_t u;
    struct cavm_cptx_lf_done_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_int_s cn; */
};
typedef union cavm_cptx_lf_done_int cavm_cptx_lf_done_int_t;

static inline uint64_t CAVM_CPTX_LF_DONE_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE_INT(uint64_t a)
{
    if (a<=1)
        return 0x840200a00070ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE_INT(a) cavm_cptx_lf_done_int_t
#define bustype_CAVM_CPTX_LF_DONE_INT(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE_INT(a) "CPTX_LF_DONE_INT"
#define device_bar_CAVM_CPTX_LF_DONE_INT(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE_INT(a) (a)
#define arguments_CAVM_CPTX_LF_DONE_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int_ena_w1c
 *
 * CPT Queue Done Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_cptx_lf_done_int_ena_w1c
{
    uint64_t u;
    struct cavm_cptx_lf_done_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_LF_DONE_INT[DONE].
                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_LF_DONE_INT[DONE].
                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_int_ena_w1c_s cn; */
};
typedef union cavm_cptx_lf_done_int_ena_w1c cavm_cptx_lf_done_int_ena_w1c_t;

static inline uint64_t CAVM_CPTX_LF_DONE_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x840200a000a0ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE_INT_ENA_W1C(a) cavm_cptx_lf_done_int_ena_w1c_t
#define bustype_CAVM_CPTX_LF_DONE_INT_ENA_W1C(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE_INT_ENA_W1C(a) "CPTX_LF_DONE_INT_ENA_W1C"
#define device_bar_CAVM_CPTX_LF_DONE_INT_ENA_W1C(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPTX_LF_DONE_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int_ena_w1s
 *
 * CPT Queue Done Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 * Internal:
 * Write 1 to these registers will enable the DONEINT interrupt for the queue.
 */
union cavm_cptx_lf_done_int_ena_w1s
{
    uint64_t u;
    struct cavm_cptx_lf_done_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_LF_DONE_INT[DONE].
                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_LF_DONE_INT[DONE].
                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_int_ena_w1s_s cn; */
};
typedef union cavm_cptx_lf_done_int_ena_w1s cavm_cptx_lf_done_int_ena_w1s_t;

static inline uint64_t CAVM_CPTX_LF_DONE_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840200a00090ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE_INT_ENA_W1S(a) cavm_cptx_lf_done_int_ena_w1s_t
#define bustype_CAVM_CPTX_LF_DONE_INT_ENA_W1S(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE_INT_ENA_W1S(a) "CPTX_LF_DONE_INT_ENA_W1S"
#define device_bar_CAVM_CPTX_LF_DONE_INT_ENA_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPTX_LF_DONE_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int_w1s
 *
 * INTERNAL: CPT Queue Done Interrupt Set Registers
 *
 * Internal:
 * This CSR description is only here to keep the scripts happy.
 */
union cavm_cptx_lf_done_int_w1s
{
    uint64_t u;
    struct cavm_cptx_lf_done_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_int_w1s_s cn; */
};
typedef union cavm_cptx_lf_done_int_w1s cavm_cptx_lf_done_int_w1s_t;

static inline uint64_t CAVM_CPTX_LF_DONE_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840200a00080ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE_INT_W1S(a) cavm_cptx_lf_done_int_w1s_t
#define bustype_CAVM_CPTX_LF_DONE_INT_W1S(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE_INT_W1S(a) "CPTX_LF_DONE_INT_W1S"
#define device_bar_CAVM_CPTX_LF_DONE_INT_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE_INT_W1S(a) (a)
#define arguments_CAVM_CPTX_LF_DONE_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_wait
 *
 * CPT Queue Done Interrupt Coalescing Wait Registers
 * Specifies the per-queue interrupt coalescing settings.
 */
union cavm_cptx_lf_done_wait
{
    uint64_t u;
    struct cavm_cptx_lf_done_wait_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Time hold-off in microseconds. When CPT_LF_DONE[DONE] = 0, or
                                                                 CPT_LF_DONE_ACK is written a timer is cleared. When the timer reaches
                                                                 [TIME_WAIT] microseconds then interrupt coalescing ends; see
                                                                 CPT_LF_DONE[DONE]. If 0x0, time coalescing is disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off. When CPT_LF_DONE[DONE] \>= [NUM_WAIT] then
                                                                 interrupt coalescing ends; see CPT_LF_DONE[DONE]. If 0x0, same behavior as
                                                                 0x1. */
#else /* Word 0 - Little Endian */
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off. When CPT_LF_DONE[DONE] \>= [NUM_WAIT] then
                                                                 interrupt coalescing ends; see CPT_LF_DONE[DONE]. If 0x0, same behavior as
                                                                 0x1. */
        uint64_t reserved_20_31        : 12;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Time hold-off in microseconds. When CPT_LF_DONE[DONE] = 0, or
                                                                 CPT_LF_DONE_ACK is written a timer is cleared. When the timer reaches
                                                                 [TIME_WAIT] microseconds then interrupt coalescing ends; see
                                                                 CPT_LF_DONE[DONE]. If 0x0, time coalescing is disabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_done_wait_s cn; */
};
typedef union cavm_cptx_lf_done_wait cavm_cptx_lf_done_wait_t;

static inline uint64_t CAVM_CPTX_LF_DONE_WAIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_DONE_WAIT(uint64_t a)
{
    if (a<=1)
        return 0x840200a00030ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_DONE_WAIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_DONE_WAIT(a) cavm_cptx_lf_done_wait_t
#define bustype_CAVM_CPTX_LF_DONE_WAIT(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_DONE_WAIT(a) "CPTX_LF_DONE_WAIT"
#define device_bar_CAVM_CPTX_LF_DONE_WAIT(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_DONE_WAIT(a) (a)
#define arguments_CAVM_CPTX_LF_DONE_WAIT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_inprog
 *
 * CPT Queue In Progress Count Registers
 * These registers contain the per-queue instruction in flight registers.
 */
union cavm_cptx_lf_inprog
{
    uint64_t u;
    struct cavm_cptx_lf_inprog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t gwb_cnt               : 8;  /**< [ 47: 40](RO/H) Number of group write buffer entries currently in use. */
        uint64_t grb_cnt               : 8;  /**< [ 39: 32](RO/H) Number of group read buffer entries currently in use. */
        uint64_t grb_partial           : 1;  /**< [ 31: 31](RO/H) The group read buffer contains a partial entries; Any newly enqueued CPT
                                                                 instruction will be executed. */
        uint64_t reserved_18_30        : 13;
        uint64_t grp_drp               : 1;  /**< [ 17: 17](R/W1S) Group drop. Set to one during LF FLR/migration sequence to help clear out
                                                                 hardware. Set by software, and only cleared by reset (e.g. CPT_AF_LF_RST). */
        uint64_t eena                  : 1;  /**< [ 16: 16](R/W) Execution enable.
                                                                 0 = CPT will not execute instructions in the queue.
                                                                 1 = CPT will execute instructions that are present in the queue.

                                                                 Software may change the [EENA] value at any time. */
        uint64_t reserved_9_15         : 7;
        uint64_t inflight              : 9;  /**< [  8:  0](RO/H) Inflight count. Counts the number of instructions for the LF for which CPT is
                                                                 fetching, executing or responding to instructions. However the following
                                                                 may still occur after the CPT_INST_S is no longer inflight:
                                                                 * an SSO work add.
                                                                 * a final NIX TX descriptor enqueue.
                                                                 * any CPT_LF_DONE[DONE] increment or associated interrupt.

                                                                 A LF/queue is execution-quiescent when [INFLIGHT]=0. Clear [EENA] to force
                                                                 execution-quiescence - [INFLIGHT] will eventually clear. Once
                                                                 [EENA,INFLIGHT]=0,0, the LF/queue will remain execution-quiescent until
                                                                 [EENA] is set. */
#else /* Word 0 - Little Endian */
        uint64_t inflight              : 9;  /**< [  8:  0](RO/H) Inflight count. Counts the number of instructions for the LF for which CPT is
                                                                 fetching, executing or responding to instructions. However the following
                                                                 may still occur after the CPT_INST_S is no longer inflight:
                                                                 * an SSO work add.
                                                                 * a final NIX TX descriptor enqueue.
                                                                 * any CPT_LF_DONE[DONE] increment or associated interrupt.

                                                                 A LF/queue is execution-quiescent when [INFLIGHT]=0. Clear [EENA] to force
                                                                 execution-quiescence - [INFLIGHT] will eventually clear. Once
                                                                 [EENA,INFLIGHT]=0,0, the LF/queue will remain execution-quiescent until
                                                                 [EENA] is set. */
        uint64_t reserved_9_15         : 7;
        uint64_t eena                  : 1;  /**< [ 16: 16](R/W) Execution enable.
                                                                 0 = CPT will not execute instructions in the queue.
                                                                 1 = CPT will execute instructions that are present in the queue.

                                                                 Software may change the [EENA] value at any time. */
        uint64_t grp_drp               : 1;  /**< [ 17: 17](R/W1S) Group drop. Set to one during LF FLR/migration sequence to help clear out
                                                                 hardware. Set by software, and only cleared by reset (e.g. CPT_AF_LF_RST). */
        uint64_t reserved_18_30        : 13;
        uint64_t grb_partial           : 1;  /**< [ 31: 31](RO/H) The group read buffer contains a partial entries; Any newly enqueued CPT
                                                                 instruction will be executed. */
        uint64_t grb_cnt               : 8;  /**< [ 39: 32](RO/H) Number of group read buffer entries currently in use. */
        uint64_t gwb_cnt               : 8;  /**< [ 47: 40](RO/H) Number of group write buffer entries currently in use. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_inprog_s cn; */
};
typedef union cavm_cptx_lf_inprog cavm_cptx_lf_inprog_t;

static inline uint64_t CAVM_CPTX_LF_INPROG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_INPROG(uint64_t a)
{
    if (a<=1)
        return 0x840200a00040ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_INPROG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_INPROG(a) cavm_cptx_lf_inprog_t
#define bustype_CAVM_CPTX_LF_INPROG(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_INPROG(a) "CPTX_LF_INPROG"
#define device_bar_CAVM_CPTX_LF_INPROG(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_INPROG(a) (a)
#define arguments_CAVM_CPTX_LF_INPROG(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int
 *
 * CPT Queue Misc Interrupt Register
 * These registers contain the per-queue miscellaneous interrupts.
 */
union cavm_cptx_lf_misc_int
{
    uint64_t u;
    struct cavm_cptx_lf_misc_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Memory error detected while executing a CPT_INST_S in the LF. See also
                                                                 CPT_COMP_E::FAULT. CPT sets [FAULT] for memory errors occurring due to
                                                                 engine accesses of CPT_INST_S[DPTR,RPTR,CPTR,NIXTX_ADDR] addresses.

                                                                 CPT does not set [FAULT] on memory errors encountered on the CPT_RES_S
                                                                 write (see [NWRP] and CPT_INST_S[RES_ADDR]). CPT also does not set [FAULT]
                                                                 on errors encountered receiving/enqueueing the CPT_INST_S itself, but
                                                                 CPT_COMP_E::FAULT can occur due to these errors (see [IRDE] and
                                                                 CPT_LF_Q_BASE[FAULT]).

                                                                 CPT typically sets [FAULT] on an SMMU translation fault, but if
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, it will also set [FAULT] when the LF receives
                                                                 poison.

                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Uncorrectable hardware error from an engine executing a CPT_INST_S for the
                                                                 LF. The uncorrectable errors include microcode memory fetch errors, double-bit
                                                                 error, and watchdog. See also CPT_COMP_E::HWERR and CPT_AF_FLT()_INT.

                                                                 CPT can set [HWERR] when the engine has an error while fetching microcode (from
                                                                 CPT_AF_EXE()_UCODE_BASE). This may typically be due SMMU translation fault, but
                                                                 if CPT_AF_CTL[RD_PSN_IGN]=0, it can also be due to receiving poison.

                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) CPT received an SMMU fault while writing a CPT_RES_S to CPT_INST_S[RES_ADDR]
                                                                 for the LF. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) CPT encountered a memory error when accessing the instruction
                                                                 memory queue near CPT_LF_Q_BASE[ADDR].

                                                                 The instruction memory queue includes the CPT_INST_S memory queue
                                                                 (see CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory
                                                                 queue (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT sets [IRDE] upon an SMMU fault accessing the memory location.
                                                                 If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also sets [IRDE] when it encounters
                                                                 poison on an instruction memory queue read. CPT also sets [IRDE]
                                                                 whenever it stops the queue - see CPT_LF_Q_BASE[STOPPED].

                                                                 CPT sets CPT_LF_Q_BASE[FAULT] whenever it would set [IRDE],
                                                                 ensuring that instructions executed in the queue fail. See also
                                                                 CPT_COMP_E::FAULT.

                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) CPT encountered an error enqueuing an instruction (received at CPT_LF_NQ()).

                                                                 CPT sets [NQERR] in the following situations:

                                                                 * CPT discarded a received CPT_INST_S because CPT_LF_CTL[ENA]=0.

                                                                 * CPT discarded a received CPT_INST_S because CPT_AF_LF()_CTL[GRP\<x\>]=0,
                                                                 where x = CPT_INST_S[EGRP].

                                                                 * CPT discarded a received CPT_INST_S due to queue overflow.
                                                                 CPT_LF_Q_SIZE[SIZE_DIV40] describes the effective queue size to software.

                                                                 * CPT received a partial CPT_INST_S. CPT always sets [NQERR] in this case, but
                                                                 it is implementation-dependent what CPT does with the partial instruction. CPT
                                                                 may simply discard the CPT_INST_S. CPT may partially or fully execute the
                                                                 CPT_INST_S, including possibly signaling CPT_COMP_E::INSTERR. If CPT partially
                                                                 executes the instruction, unpredictable errors can result. See also
                                                                 CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 when
                                                                 CPT_AF_LF()_CTL[NIXTX_EN]=0. See CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 and
                                                                 CPT_INST_S[QORD]=0. See CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 Note that when CPT_AF_LF()_CTL[CONT_ERR]=0, CPT clears CPT_LF_CTL[ENA]
                                                                 when any bit in this register gets set. This will indirectly
                                                                 cause [NQERR] to be set if instructions are simultaneously being
                                                                 enqueued.

                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) CPT encountered an error enqueuing an instruction (received at CPT_LF_NQ()).

                                                                 CPT sets [NQERR] in the following situations:

                                                                 * CPT discarded a received CPT_INST_S because CPT_LF_CTL[ENA]=0.

                                                                 * CPT discarded a received CPT_INST_S because CPT_AF_LF()_CTL[GRP\<x\>]=0,
                                                                 where x = CPT_INST_S[EGRP].

                                                                 * CPT discarded a received CPT_INST_S due to queue overflow.
                                                                 CPT_LF_Q_SIZE[SIZE_DIV40] describes the effective queue size to software.

                                                                 * CPT received a partial CPT_INST_S. CPT always sets [NQERR] in this case, but
                                                                 it is implementation-dependent what CPT does with the partial instruction. CPT
                                                                 may simply discard the CPT_INST_S. CPT may partially or fully execute the
                                                                 CPT_INST_S, including possibly signaling CPT_COMP_E::INSTERR. If CPT partially
                                                                 executes the instruction, unpredictable errors can result. See also
                                                                 CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 when
                                                                 CPT_AF_LF()_CTL[NIXTX_EN]=0. See CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 and
                                                                 CPT_INST_S[QORD]=0. See CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 Note that when CPT_AF_LF()_CTL[CONT_ERR]=0, CPT clears CPT_LF_CTL[ENA]
                                                                 when any bit in this register gets set. This will indirectly
                                                                 cause [NQERR] to be set if instructions are simultaneously being
                                                                 enqueued.

                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) CPT encountered a memory error when accessing the instruction
                                                                 memory queue near CPT_LF_Q_BASE[ADDR].

                                                                 The instruction memory queue includes the CPT_INST_S memory queue
                                                                 (see CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory
                                                                 queue (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT sets [IRDE] upon an SMMU fault accessing the memory location.
                                                                 If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also sets [IRDE] when it encounters
                                                                 poison on an instruction memory queue read. CPT also sets [IRDE]
                                                                 whenever it stops the queue - see CPT_LF_Q_BASE[STOPPED].

                                                                 CPT sets CPT_LF_Q_BASE[FAULT] whenever it would set [IRDE],
                                                                 ensuring that instructions executed in the queue fail. See also
                                                                 CPT_COMP_E::FAULT.

                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) CPT received an SMMU fault while writing a CPT_RES_S to CPT_INST_S[RES_ADDR]
                                                                 for the LF. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Uncorrectable hardware error from an engine executing a CPT_INST_S for the
                                                                 LF. The uncorrectable errors include microcode memory fetch errors, double-bit
                                                                 error, and watchdog. See also CPT_COMP_E::HWERR and CPT_AF_FLT()_INT.

                                                                 CPT can set [HWERR] when the engine has an error while fetching microcode (from
                                                                 CPT_AF_EXE()_UCODE_BASE). This may typically be due SMMU translation fault, but
                                                                 if CPT_AF_CTL[RD_PSN_IGN]=0, it can also be due to receiving poison.

                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Memory error detected while executing a CPT_INST_S in the LF. See also
                                                                 CPT_COMP_E::FAULT. CPT sets [FAULT] for memory errors occurring due to
                                                                 engine accesses of CPT_INST_S[DPTR,RPTR,CPTR,NIXTX_ADDR] addresses.

                                                                 CPT does not set [FAULT] on memory errors encountered on the CPT_RES_S
                                                                 write (see [NWRP] and CPT_INST_S[RES_ADDR]). CPT also does not set [FAULT]
                                                                 on errors encountered receiving/enqueueing the CPT_INST_S itself, but
                                                                 CPT_COMP_E::FAULT can occur due to these errors (see [IRDE] and
                                                                 CPT_LF_Q_BASE[FAULT]).

                                                                 CPT typically sets [FAULT] on an SMMU translation fault, but if
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, it will also set [FAULT] when the LF receives
                                                                 poison.

                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_misc_int_s cn; */
};
typedef union cavm_cptx_lf_misc_int cavm_cptx_lf_misc_int_t;

static inline uint64_t CAVM_CPTX_LF_MISC_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_MISC_INT(uint64_t a)
{
    if (a<=1)
        return 0x840200a000b0ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_MISC_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_MISC_INT(a) cavm_cptx_lf_misc_int_t
#define bustype_CAVM_CPTX_LF_MISC_INT(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_MISC_INT(a) "CPTX_LF_MISC_INT"
#define device_bar_CAVM_CPTX_LF_MISC_INT(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_MISC_INT(a) (a)
#define arguments_CAVM_CPTX_LF_MISC_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int_ena_w1c
 *
 * CPT Queue Misc Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_cptx_lf_misc_int_ena_w1c
{
    uint64_t u;
    struct cavm_cptx_lf_misc_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_misc_int_ena_w1c_s cn; */
};
typedef union cavm_cptx_lf_misc_int_ena_w1c cavm_cptx_lf_misc_int_ena_w1c_t;

static inline uint64_t CAVM_CPTX_LF_MISC_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_MISC_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x840200a000e0ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_MISC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_MISC_INT_ENA_W1C(a) cavm_cptx_lf_misc_int_ena_w1c_t
#define bustype_CAVM_CPTX_LF_MISC_INT_ENA_W1C(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_MISC_INT_ENA_W1C(a) "CPTX_LF_MISC_INT_ENA_W1C"
#define device_bar_CAVM_CPTX_LF_MISC_INT_ENA_W1C(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_MISC_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPTX_LF_MISC_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int_ena_w1s
 *
 * CPT Queue Misc Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cptx_lf_misc_int_ena_w1s
{
    uint64_t u;
    struct cavm_cptx_lf_misc_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_misc_int_ena_w1s_s cn; */
};
typedef union cavm_cptx_lf_misc_int_ena_w1s cavm_cptx_lf_misc_int_ena_w1s_t;

static inline uint64_t CAVM_CPTX_LF_MISC_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_MISC_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840200a000d0ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_MISC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_MISC_INT_ENA_W1S(a) cavm_cptx_lf_misc_int_ena_w1s_t
#define bustype_CAVM_CPTX_LF_MISC_INT_ENA_W1S(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_MISC_INT_ENA_W1S(a) "CPTX_LF_MISC_INT_ENA_W1S"
#define device_bar_CAVM_CPTX_LF_MISC_INT_ENA_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_MISC_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPTX_LF_MISC_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int_w1s
 *
 * CPT Queue Misc Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cptx_lf_misc_int_w1s
{
    uint64_t u;
    struct cavm_cptx_lf_misc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_misc_int_w1s_s cn; */
};
typedef union cavm_cptx_lf_misc_int_w1s cavm_cptx_lf_misc_int_w1s_t;

static inline uint64_t CAVM_CPTX_LF_MISC_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_MISC_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x840200a000c0ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_MISC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_MISC_INT_W1S(a) cavm_cptx_lf_misc_int_w1s_t
#define bustype_CAVM_CPTX_LF_MISC_INT_W1S(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_MISC_INT_W1S(a) "CPTX_LF_MISC_INT_W1S"
#define device_bar_CAVM_CPTX_LF_MISC_INT_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_MISC_INT_W1S(a) (a)
#define arguments_CAVM_CPTX_LF_MISC_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_nq#
 *
 * CPT Instruction Enqueue Registers
 */
union cavm_cptx_lf_nqx
{
    uint64_t u;
    struct cavm_cptx_lf_nqx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) A 64-byte LMTST to this address (that starts writing at index 0) enqueues one CPT
                                                                 instruction. A 128-byte LMTST to this address (that starts writing at index 0)
                                                                 enqueues two CPT instructions. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) A 64-byte LMTST to this address (that starts writing at index 0) enqueues one CPT
                                                                 instruction. A 128-byte LMTST to this address (that starts writing at index 0)
                                                                 enqueues two CPT instructions. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_nqx_s cn; */
};
typedef union cavm_cptx_lf_nqx cavm_cptx_lf_nqx_t;

static inline uint64_t CAVM_CPTX_LF_NQX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_NQX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=15))
        return 0x840200a00400ll + 0x100000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("CPTX_LF_NQX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_NQX(a,b) cavm_cptx_lf_nqx_t
#define bustype_CAVM_CPTX_LF_NQX(a,b) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_NQX(a,b) "CPTX_LF_NQX"
#define device_bar_CAVM_CPTX_LF_NQX(a,b) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_NQX(a,b) (a)
#define arguments_CAVM_CPTX_LF_NQX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_base
 *
 * CPT Instruction Queue Base Registers
 * CPT initializes these CSR fields to these values on any CPT_LF_Q_BASE write:
 * _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
 * _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
 * _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
 * _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1.
 */
union cavm_cptx_lf_q_base
{
    uint64_t u;
    struct cavm_cptx_lf_q_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) LF IOVA base address for the instruction memory queue. See CPT_LF_CTL[ENA].
                                                                 The instruction memory queue includes the CPT_INST_S memory queue (see
                                                                 CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory queue
                                                                 (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT may set CPT_LF_MISC_INT[IRDE] and [STOPPED,FAULT] on memory errors detected
                                                                 from [ADDR]. */
        uint64_t reserved_2_6          : 5;
        uint64_t stopped               : 1;  /**< [  1:  1](RO/H) CPT detected an error when reading the CPT_INST_S[EGRP] memory queue (see
                                                                 CPT_LF_Q_GRP_PTR). The LF/queue is hung, and [STOPPED] can only be cleared
                                                                 by a reset (e.g. CPT_AF_LF_RST).

                                                                 When CPT sets [STOPPED], it also sets CPT_LF_MISC_INT[IRDE]. */
        uint64_t fault                 : 1;  /**< [  0:  0](R/W/H) When set, CPT forces the CPT_RES_S[COMPCODE] of all instructions executed in the
                                                                 queue/LF to CPT_COMP_E::FAULT (except when the higher-priority CPT_COMP_E::HWERR
                                                                 occurs).

                                                                 CPT sets [FAULT] whenever it would set CPT_LF_MISC_INT[IRDE]. */
#else /* Word 0 - Little Endian */
        uint64_t fault                 : 1;  /**< [  0:  0](R/W/H) When set, CPT forces the CPT_RES_S[COMPCODE] of all instructions executed in the
                                                                 queue/LF to CPT_COMP_E::FAULT (except when the higher-priority CPT_COMP_E::HWERR
                                                                 occurs).

                                                                 CPT sets [FAULT] whenever it would set CPT_LF_MISC_INT[IRDE]. */
        uint64_t stopped               : 1;  /**< [  1:  1](RO/H) CPT detected an error when reading the CPT_INST_S[EGRP] memory queue (see
                                                                 CPT_LF_Q_GRP_PTR). The LF/queue is hung, and [STOPPED] can only be cleared
                                                                 by a reset (e.g. CPT_AF_LF_RST).

                                                                 When CPT sets [STOPPED], it also sets CPT_LF_MISC_INT[IRDE]. */
        uint64_t reserved_2_6          : 5;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) LF IOVA base address for the instruction memory queue. See CPT_LF_CTL[ENA].
                                                                 The instruction memory queue includes the CPT_INST_S memory queue (see
                                                                 CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory queue
                                                                 (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT may set CPT_LF_MISC_INT[IRDE] and [STOPPED,FAULT] on memory errors detected
                                                                 from [ADDR]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_q_base_s cn; */
};
typedef union cavm_cptx_lf_q_base cavm_cptx_lf_q_base_t;

static inline uint64_t CAVM_CPTX_LF_Q_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_Q_BASE(uint64_t a)
{
    if (a<=1)
        return 0x840200a000f0ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_Q_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_Q_BASE(a) cavm_cptx_lf_q_base_t
#define bustype_CAVM_CPTX_LF_Q_BASE(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_Q_BASE(a) "CPTX_LF_Q_BASE"
#define device_bar_CAVM_CPTX_LF_Q_BASE(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_Q_BASE(a) (a)
#define arguments_CAVM_CPTX_LF_Q_BASE(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_grp_ptr
 *
 * CPT Instruction Group Pointer Registers
 * CPT_INST_S[EGRP] memory queue state.
 */
union cavm_cptx_lf_q_grp_ptr
{
    uint64_t u;
    struct cavm_cptx_lf_q_grp_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S[EGRP]
                                                                 memory queue size (in 128-bit forty CPT_INST_S[EGRP] chunks) is
                                                                 ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40]) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_47_62        : 16;
        uint64_t nq_ptr                : 15; /**< [ 46: 32](R/W/H) Indicates memory location where CPT will add the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk to the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([NQ_PTR]*16).

                                                                 [NQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [NQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_15_31        : 17;
        uint64_t dq_ptr                : 15; /**< [ 14:  0](R/W/H) Indicates memory location where CPT will dequeue the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk from the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([DQ_PTR]*16).

                                                                 [DQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [DQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#else /* Word 0 - Little Endian */
        uint64_t dq_ptr                : 15; /**< [ 14:  0](R/W/H) Indicates memory location where CPT will dequeue the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk from the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([DQ_PTR]*16).

                                                                 [DQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [DQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_15_31        : 17;
        uint64_t nq_ptr                : 15; /**< [ 46: 32](R/W/H) Indicates memory location where CPT will add the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk to the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([NQ_PTR]*16).

                                                                 [NQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [NQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_47_62        : 16;
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S[EGRP]
                                                                 memory queue size (in 128-bit forty CPT_INST_S[EGRP] chunks) is
                                                                 ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40]) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_q_grp_ptr_s cn; */
};
typedef union cavm_cptx_lf_q_grp_ptr cavm_cptx_lf_q_grp_ptr_t;

static inline uint64_t CAVM_CPTX_LF_Q_GRP_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_Q_GRP_PTR(uint64_t a)
{
    if (a<=1)
        return 0x840200a00120ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_Q_GRP_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_Q_GRP_PTR(a) cavm_cptx_lf_q_grp_ptr_t
#define bustype_CAVM_CPTX_LF_Q_GRP_PTR(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_Q_GRP_PTR(a) "CPTX_LF_Q_GRP_PTR"
#define device_bar_CAVM_CPTX_LF_Q_GRP_PTR(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_Q_GRP_PTR(a) (a)
#define arguments_CAVM_CPTX_LF_Q_GRP_PTR(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_inst_ptr
 *
 * CPT Instruction Queue Pointer Registers
 * CPT_INST_S memory queue state.
 */
union cavm_cptx_lf_q_inst_ptr
{
    uint64_t u;
    struct cavm_cptx_lf_q_inst_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S memory
                                                                 queue size (in CPT_INST_S's) is:
                                                                    ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_52_62        : 11;
        uint64_t nq_ptr                : 20; /**< [ 51: 32](R/W/H) Indicates memory location where CPT will add the next CPT_INST_S
                                                                 to the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([NQ_PTR]*64).

                                                                 [NQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [NQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_20_31        : 12;
        uint64_t dq_ptr                : 20; /**< [ 19:  0](R/W/H) Indicates memory location where CPT will dequeue the next CPT_INST_S
                                                                 from the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([DQ_PTR]*64).

                                                                 [DQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [DQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#else /* Word 0 - Little Endian */
        uint64_t dq_ptr                : 20; /**< [ 19:  0](R/W/H) Indicates memory location where CPT will dequeue the next CPT_INST_S
                                                                 from the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([DQ_PTR]*64).

                                                                 [DQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [DQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_20_31        : 12;
        uint64_t nq_ptr                : 20; /**< [ 51: 32](R/W/H) Indicates memory location where CPT will add the next CPT_INST_S
                                                                 to the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([NQ_PTR]*64).

                                                                 [NQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [NQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_52_62        : 11;
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S memory
                                                                 queue size (in CPT_INST_S's) is:
                                                                    ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_q_inst_ptr_s cn; */
};
typedef union cavm_cptx_lf_q_inst_ptr cavm_cptx_lf_q_inst_ptr_t;

static inline uint64_t CAVM_CPTX_LF_Q_INST_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_Q_INST_PTR(uint64_t a)
{
    if (a<=1)
        return 0x840200a00110ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_Q_INST_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_Q_INST_PTR(a) cavm_cptx_lf_q_inst_ptr_t
#define bustype_CAVM_CPTX_LF_Q_INST_PTR(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_Q_INST_PTR(a) "CPTX_LF_Q_INST_PTR"
#define device_bar_CAVM_CPTX_LF_Q_INST_PTR(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_Q_INST_PTR(a) (a)
#define arguments_CAVM_CPTX_LF_Q_INST_PTR(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_size
 *
 * CPT Instruction Queue Size Registers
 * CPT initializes these CSR fields to these values on any CPT_LF_Q_SIZE write:
 * _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
 * _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
 * _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
 * _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1.
 */
union cavm_cptx_lf_q_size
{
    uint64_t u;
    struct cavm_cptx_lf_q_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t size_div40            : 15; /**< [ 14:  0](R/W) Determines the size of the queue allocated in memory and its smaller effective
                                                                 size. [SIZE_DIV40] must be at least 2 during operation.

                                                                 The allocated queue in memory is at offsets of CPT_LF_Q_BASE[ADDR] and includes
                                                                 space for [SIZE_DIV40]*40 CPT_INST_S's, the corresponding CPT_INST_S[EGRP]'s,
                                                                 plus the FC cache line.

                                                                 The effective queue size to software is ([SIZE_DIV40]-1)*40 CPT_INST_S's, as
                                                                 CPT may discard a received CPT_INST_S whenever it would need to queue more
                                                                 instructions. CPT always asserts CPT_LF_MISC_INT[NQERR] when it discards a
                                                                 CPT_INST_S due queue overflow. */
#else /* Word 0 - Little Endian */
        uint64_t size_div40            : 15; /**< [ 14:  0](R/W) Determines the size of the queue allocated in memory and its smaller effective
                                                                 size. [SIZE_DIV40] must be at least 2 during operation.

                                                                 The allocated queue in memory is at offsets of CPT_LF_Q_BASE[ADDR] and includes
                                                                 space for [SIZE_DIV40]*40 CPT_INST_S's, the corresponding CPT_INST_S[EGRP]'s,
                                                                 plus the FC cache line.

                                                                 The effective queue size to software is ([SIZE_DIV40]-1)*40 CPT_INST_S's, as
                                                                 CPT may discard a received CPT_INST_S whenever it would need to queue more
                                                                 instructions. CPT always asserts CPT_LF_MISC_INT[NQERR] when it discards a
                                                                 CPT_INST_S due queue overflow. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_lf_q_size_s cn; */
};
typedef union cavm_cptx_lf_q_size cavm_cptx_lf_q_size_t;

static inline uint64_t CAVM_CPTX_LF_Q_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_LF_Q_SIZE(uint64_t a)
{
    if (a<=1)
        return 0x840200a00100ll + 0x100000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_LF_Q_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_LF_Q_SIZE(a) cavm_cptx_lf_q_size_t
#define bustype_CAVM_CPTX_LF_Q_SIZE(a) CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_CPTX_LF_Q_SIZE(a) "CPTX_LF_Q_SIZE"
#define device_bar_CAVM_CPTX_LF_Q_SIZE(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_CPTX_LF_Q_SIZE(a) (a)
#define arguments_CAVM_CPTX_LF_Q_SIZE(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_priv_af_int_cfg
 *
 * CPT Privileged AF Interrupt Configuration Registers
 */
union cavm_cptx_priv_af_int_cfg
{
    uint64_t u;
    struct cavm_cptx_priv_af_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_AF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 CPT_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 CPT_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_AF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_priv_af_int_cfg_s cn; */
};
typedef union cavm_cptx_priv_af_int_cfg cavm_cptx_priv_af_int_cfg_t;

static inline uint64_t CAVM_CPTX_PRIV_AF_INT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_PRIV_AF_INT_CFG(uint64_t a)
{
    if (a<=1)
        return 0x8400a0042000ll + 0x10000000ll * ((a) & 0x1);
    __cavm_csr_fatal("CPTX_PRIV_AF_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_PRIV_AF_INT_CFG(a) cavm_cptx_priv_af_int_cfg_t
#define bustype_CAVM_CPTX_PRIV_AF_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_PRIV_AF_INT_CFG(a) "CPTX_PRIV_AF_INT_CFG"
#define device_bar_CAVM_CPTX_PRIV_AF_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_PRIV_AF_INT_CFG(a) (a)
#define arguments_CAVM_CPTX_PRIV_AF_INT_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_priv_lf#_cfg
 *
 * CPT Privileged LF Configuration Registers
 */
union cavm_cptx_priv_lfx_cfg
{
    uint64_t u;
    struct cavm_cptx_priv_lfx_cfg_s
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
    /* struct cavm_cptx_priv_lfx_cfg_s cn; */
};
typedef union cavm_cptx_priv_lfx_cfg cavm_cptx_priv_lfx_cfg_t;

static inline uint64_t CAVM_CPTX_PRIV_LFX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_PRIV_LFX_CFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x8400a0041000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPTX_PRIV_LFX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_PRIV_LFX_CFG(a,b) cavm_cptx_priv_lfx_cfg_t
#define bustype_CAVM_CPTX_PRIV_LFX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_PRIV_LFX_CFG(a,b) "CPTX_PRIV_LFX_CFG"
#define device_bar_CAVM_CPTX_PRIV_LFX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_PRIV_LFX_CFG(a,b) (a)
#define arguments_CAVM_CPTX_PRIV_LFX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_priv_lf#_int_cfg
 *
 * CPT Privileged LF Interrupt Configuration Registers
 */
union cavm_cptx_priv_lfx_int_cfg
{
    uint64_t u;
    struct cavm_cptx_priv_lfx_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_LF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 CPT_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 CPT_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 CPT_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 CPT_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_LF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cptx_priv_lfx_int_cfg_s cn; */
};
typedef union cavm_cptx_priv_lfx_int_cfg cavm_cptx_priv_lfx_int_cfg_t;

static inline uint64_t CAVM_CPTX_PRIV_LFX_INT_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPTX_PRIV_LFX_INT_CFG(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=63))
        return 0x8400a0043000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPTX_PRIV_LFX_INT_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPTX_PRIV_LFX_INT_CFG(a,b) cavm_cptx_priv_lfx_int_cfg_t
#define bustype_CAVM_CPTX_PRIV_LFX_INT_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_CPTX_PRIV_LFX_INT_CFG(a,b) "CPTX_PRIV_LFX_INT_CFG"
#define device_bar_CAVM_CPTX_PRIV_LFX_INT_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_CPTX_PRIV_LFX_INT_CFG(a,b) (a)
#define arguments_CAVM_CPTX_PRIV_LFX_INT_CFG(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_CPT_H__ */
