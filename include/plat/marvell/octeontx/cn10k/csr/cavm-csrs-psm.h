#ifndef __CAVM_CSRS_PSM_H__
#define __CAVM_CSRS_PSM_H__
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
 * OcteonTX PSM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration psm_opcode_e
 *
 * PSM Command Opcode Enumeration
 * Enumerates the PSM command opcodes.
 */
#define CAVM_PSM_OPCODE_E_PSM_OP_ADDJOB (1)
#define CAVM_PSM_OPCODE_E_PSM_OP_ADDNOTIF (0x17)
#define CAVM_PSM_OPCODE_E_PSM_OP_ADDWORK (0x13)
#define CAVM_PSM_OPCODE_E_PSM_OP_BCAST (0x3e)
#define CAVM_PSM_OPCODE_E_PSM_OP_CONTJOB (2)
#define CAVM_PSM_OPCODE_E_PSM_OP_DJCNT (0x10)
#define CAVM_PSM_OPCODE_E_PSM_OP_FREE (0x14)
#define CAVM_PSM_OPCODE_E_PSM_OP_GPINT (0x11)
#define CAVM_PSM_OPCODE_E_PSM_OP_NOP (0)
#define CAVM_PSM_OPCODE_E_PSM_OP_QBLK (0x21)
#define CAVM_PSM_OPCODE_E_PSM_OP_QRST (0x20)
#define CAVM_PSM_OPCODE_E_PSM_OP_QRUN (0x22)
#define CAVM_PSM_OPCODE_E_PSM_OP_RSP (0x3f)
#define CAVM_PSM_OPCODE_E_PSM_OP_WAIT (0x12)
#define CAVM_PSM_OPCODE_E_PSM_OP_WRMSG (0x16)
#define CAVM_PSM_OPCODE_E_PSM_OP_WRSTS (0x15)

/**
 * Enumeration psm_set0_mabdid_e
 *
 * PSM Set 0 MAB Device ID Enumeration
 * Enumerates the PSM device IDs for Set 0 (MegaHABs).
 */
#define CAVM_PSM_SET0_MABDID_E_ARXEX_PSM_DID(a) (0x1a + (a))
#define CAVM_PSM_SET0_MABDID_E_ARXLX_PSM_DID(a) (0x1e + (a))
#define CAVM_PSM_SET0_MABDID_E_ARXMX_PSM_DID(a) (0x20 + (a))
#define CAVM_PSM_SET0_MABDID_E_BBX2_PSM_DID (0x27)
#define CAVM_PSM_SET0_MABDID_E_BBX4_PSM_DID (0x28)
#define CAVM_PSM_SET0_MABDID_E_BBX5_PSM_DID (0x29)
#define CAVM_PSM_SET0_MABDID_E_BBX6_PSM_DID (0x2a)
#define CAVM_PSM_SET0_MABDID_E_BMULX_PSM_DID(a) (0x22 + (a))
#define CAVM_PSM_SET0_MABDID_E_CESTX_PSM_DID(a) (0x2c + (a))
#define CAVM_PSM_SET0_MABDID_E_DENC0_PSM_DID_CNF10KA (0x24)
#define CAVM_PSM_SET0_MABDID_E_DENC0_PSM_DID_CNF10KB (0x35)
#define CAVM_PSM_SET0_MABDID_E_DLBFX_PSM_DID(a) (0x1f + (a))
#define CAVM_PSM_SET0_MABDID_E_DLFEX_PSM_DID(a) (4 + (a))
#define CAVM_PSM_SET0_MABDID_E_DLFE0_PSM_DID (1)
#define CAVM_PSM_SET0_MABDID_E_DLWG0_PSM_DID (0x2c)
#define CAVM_PSM_SET0_MABDID_E_DMAPX_PSM_DID_CNF10KA(a) (0x12 + (a))
#define CAVM_PSM_SET0_MABDID_E_DMAPX_PSM_DID_CNF10KB(a) (0x17 + (a))
#define CAVM_PSM_SET0_MABDID_E_DSYMX_PSM_DID(a) (0x30 + (a))
#define CAVM_PSM_SET0_MABDID_E_ECMPX_PSM_DID(a) (5 + (a))
#define CAVM_PSM_SET0_MABDID_E_ECMP0_PSM_DID (9)
#define CAVM_PSM_SET0_MABDID_E_EDECX_PSM_DID(a) (2 + (a))
#define CAVM_PSM_SET0_MABDID_E_EDEC0_PSM_DID (8)
#define CAVM_PSM_SET0_MABDID_E_EDFTX_PSM_DID(a) (0x21 + (a))
#define CAVM_PSM_SET0_MABDID_E_FDEQX_PSM_DID(a) (0x14 + (a))
#define CAVM_PSM_SET0_MABDID_E_LDECX_PSM_DID_CNF10KA(a) (0xe + (a))
#define CAVM_PSM_SET0_MABDID_E_LDECX_PSM_DID_CNF10KB(a) (0xd + (a))
#define CAVM_PSM_SET0_MABDID_E_LENCX_PSM_DID_CNF10KA(a) (0xc + (a))
#define CAVM_PSM_SET0_MABDID_E_LENCX_PSM_DID_CNF10KB(a) (0xa + (a))
#define CAVM_PSM_SET0_MABDID_E_MLAB0_PSM_DID (0x38)
#define CAVM_PSM_SET0_MABDID_E_PDECX_PSM_DID_CNF10KA(a) (0x1c + (a))
#define CAVM_PSM_SET0_MABDID_E_PDECX_PSM_DID_CNF10KB(a) (0x28 + (a))
#define CAVM_PSM_SET0_MABDID_E_PENCX_PSM_DID_CNF10KA(a) (0xa + (a))
#define CAVM_PSM_SET0_MABDID_E_PENCX_PSM_DID_CNF10KB(a) (8 + (a))
#define CAVM_PSM_SET0_MABDID_E_PNBX_PSM_DID_CNF10KA(a) (0x1a + (a))
#define CAVM_PSM_SET0_MABDID_E_PNBX_PSM_DID_CNF10KB(a) (0x26 + (a))
#define CAVM_PSM_SET0_MABDID_E_PRCH0_PSM_DID_CNF10KA (0x26)
#define CAVM_PSM_SET0_MABDID_E_PRCH0_PSM_DID_CNF10KB (0x37)
#define CAVM_PSM_SET0_MABDID_E_RDECX_PSM_DID_CNF10KA(a) (0x10 + (a))
#define CAVM_PSM_SET0_MABDID_E_RDECX_PSM_DID_CNF10KB(a) (0x11 + (a))
#define CAVM_PSM_SET0_MABDID_E_RMAPX_PSM_DID(a) (0x2a + (a))
#define CAVM_PSM_SET0_MABDID_E_RMAP0_PSM_DID (0x1e)
#define CAVM_PSM_SET0_MABDID_E_SDECX_PSM_DID(a) (0x14 + (a))
#define CAVM_PSM_SET0_MABDID_E_TDEC0_PSM_DID_CNF10KA (0x25)
#define CAVM_PSM_SET0_MABDID_E_TDEC0_PSM_DID_CNF10KB (0x36)
#define CAVM_PSM_SET0_MABDID_E_TOCG0_PSM_DID (0x2b)
#define CAVM_PSM_SET0_MABDID_E_ULBFX_PSM_DID(a) (0x16 + (a))
#define CAVM_PSM_SET0_MABDID_E_ULFEX_PSM_DID(a) (0 + (a))
#define CAVM_PSM_SET0_MABDID_E_ULFE0_PSM_DID (0)
#define CAVM_PSM_SET0_MABDID_E_VDEC0_PSM_DID_CNF10KA (0x23)
#define CAVM_PSM_SET0_MABDID_E_VDEC0_PSM_DID_CNF10KB (0x34)

/**
 * Enumeration psm_set1_mabdid_e
 *
 * PSM Set 1 MAB Device ID Enumeration
 * Enumerates the PSM device IDs for Set 1 (DSPs).
 */
#define CAVM_PSM_SET1_MABDID_E_CBPX_PSM_DID(a) (0 + (a))
#define CAVM_PSM_SET1_MABDID_E_LBPX_PSM_DID(a) (0x37 + (a))
#define CAVM_PSM_SET1_MABDID_E_MASIX_PSM_DID(a) (0x20 + (a))
#define CAVM_PSM_SET1_MABDID_E_MBPX_PSM_DID(a) (0 + (a))
#define CAVM_PSM_SET1_MABDID_E_SBPX_PSM_DID(a) (0x42 + (a))

/**
 * Enumeration psm_set2_mabdid_e
 *
 * PSM Set 2 MAB Device ID Enumeration
 * Enumerates the PSM device IDs for Set 2 (RF Engines).
 */
#define CAVM_PSM_SET2_MABDID_E_CPRIX_PSM_DID(a) (0x12 + (a))
#define CAVM_PSM_SET2_MABDID_E_RFOERXX_PSM_DID_CNF10KA(a) (6 + (a))
#define CAVM_PSM_SET2_MABDID_E_RFOERXX_PSM_DID_CNF10KB(a) (9 + (a))
#define CAVM_PSM_SET2_MABDID_E_RFOETXX_PSM_DID(a) (0 + (a))
#define CAVM_PSM_SET2_MABDID_E_TOFCX_PSM_DID(a) (2 + (a))

/**
 * Structure psm_cmd_addjob_s
 *
 * PSM Add Job Command Structure
 * This structure specifies the format for PSM ADDJOB commands. This command is
 * used to schedule a job to an eligible MHAB/MDAB.
 */
union cavm_psm_cmd_addjob_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_addjob_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_40_47        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDJOB */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDJOB */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t reserved_40_47        : 8;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_53_55        : 3;
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
        uint64_t reserved_117_124      : 8;
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_addjob_s_s cn; */
};

/**
 * Structure psm_cmd_addnotif_s
 *
 * PSM Add Notification Command Structure
 * This structure specifies the format used for PSM add notification commands
 * (opcode=PSM_OP_ADDNOTIF).
 * This command is used to add a software defined message to a notification
 * ring buffer.  See PSM_NOTIF_S for details on the notification data format.
 */
union cavm_psm_cmd_addnotif_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_addnotif_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = ADDNOTIF command completes as soon as write request is sent to memory.
                                                                 1 = ADDNOTIF command does not complete until after the data has been committed to memory. */
        uint64_t reserved_56           : 1;
        uint64_t info                  : 24; /**< [ 55: 32] Value to be written to the PSM_NOTIF_S[INFO] field. */
        uint64_t reserved_28_31        : 4;
        uint64_t ring_id               : 4;  /**< [ 27: 24] Ring buffer ID for the notification ring to which the
                                                                 notification will be added. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDNOTIF */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDNOTIF */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t ring_id               : 4;  /**< [ 27: 24] Ring buffer ID for the notification ring to which the
                                                                 notification will be added. */
        uint64_t reserved_28_31        : 4;
        uint64_t info                  : 24; /**< [ 55: 32] Value to be written to the PSM_NOTIF_S[INFO] field. */
        uint64_t reserved_56           : 1;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = ADDNOTIF command completes as soon as write request is sent to memory.
                                                                 1 = ADDNOTIF command does not complete until after the data has been committed to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID. */
        uint64_t reserved_117_124      : 8;
        uint64_t msgptr                : 53; /**< [116: 64] Value to be written to the PSM_NOTIF_S[MSGPTR] field.  Must be
                                                                 64-bit aligned. */
#else /* Word 1 - Little Endian */
        uint64_t msgptr                : 53; /**< [116: 64] Value to be written to the PSM_NOTIF_S[MSGPTR] field.  Must be
                                                                 64-bit aligned. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_addnotif_s_s cn; */
};

/**
 * Structure psm_cmd_addwork_s
 *
 * PSM SSO Add Work Command Structure
 * This structure specifies the format for PSM SSO add work commands (opcode=PSM_OP_ADDWORK).
 * This command is used to send an add work request to the SSO unit.
 */
union cavm_psm_cmd_addwork_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_addwork_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tag                   : 32; /**< [ 63: 32] Work queue entry tag. */
        uint64_t group                 : 8;  /**< [ 31: 24] SSO guest-group that the work queue entry will be added to. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t tagtype               : 2;  /**< [  7:  6] Work queue entry tag type. See SSO_TT_E enumeration. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDWORK */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_ADDWORK */
        uint64_t tagtype               : 2;  /**< [  7:  6] Work queue entry tag type. See SSO_TT_E enumeration. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t group                 : 8;  /**< [ 31: 24] SSO guest-group that the work queue entry will be added to. */
        uint64_t tag                   : 32; /**< [ 63: 32] Work queue entry tag. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
        uint64_t reserved_117_124      : 8;
        uint64_t wqeptr                : 53; /**< [116: 64] Work-queue entry pointer to submit to SSO. Bits \<2:0\> are
                                                                 ignored. */
#else /* Word 1 - Little Endian */
        uint64_t wqeptr                : 53; /**< [116: 64] Work-queue entry pointer to submit to SSO. Bits \<2:0\> are
                                                                 ignored. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_addwork_s_s cn; */
};

/**
 * Structure psm_cmd_contjob_s
 *
 * PSM Continued Job Command Structure
 * This structure specifies the format for PSM continued job commands
 * (opcode=PSM_OP_CONTJOB).  This command is used to launch a job to an
 * eligible MHAB/MDAB, and reserve that MHAB/MDAB for a subsequent job from
 * this queue.  The follow-up job may be another CONTJOB, in which case the
 * MHAB/MDAB will continue to be reserved, or an ADDJOB, which will clear the
 * reservation and allow other queues to launch jobs on the MHAB/MDAB.  It is
 * permitted to have non-job commands between one CONTJOB command and its
 * following CONTJOB/ADDJOB command.
 *
 * Note that the next ADDJOB or CONTJOB from the same queue will always go to
 * the same MHAB/MDAB, and the [RSRC_SET] and [JOBTYPE] fields of that job will be ignored.
 * This guarantees that when a CONTJOB runs on a MHAB/MDAB, the next job that runs on
 * the same MHAB/MDAB will always be the next job from the same queue.
 */
union cavm_psm_cmd_contjob_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_contjob_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job.  This field is only used on
                                                                 the first CONTJOB command of a continuation sequence.  It is ignored on
                                                                 subsequent CONTJOB and ADDJOB commands, since the destination MHAB/MDAB is
                                                                 already selected. */
        uint64_t reserved_53_55        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_40_47        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for CONTJOB commands. */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched.  This field
                                                                 is only used on the first CONTJOB command of a continuation sequence.  It is
                                                                 ignored on subsequent CONTJOB and ADDJOB commands, since the destination
                                                                 MHAB/MDAB is already selected. */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_CONTJOB */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_CONTJOB */
        uint64_t rsrc_set              : 2;  /**< [  7:  6] Identifies the BPHY resource set where the job should be launched.  This field
                                                                 is only used on the first CONTJOB command of a continuation sequence.  It is
                                                                 ignored on subsequent CONTJOB and ADDJOB commands, since the destination
                                                                 MHAB/MDAB is already selected. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for CONTJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] A 16-bit tag used to identify the job. */
        uint64_t reserved_40_47        : 8;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job will be launched.
                                                                 0 = MAB queue 0
                                                                 1 = MAB queue 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t tmem                  : 1;  /**< [ 52: 52] Location of the job descriptor.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_53_55        : 3;
        uint64_t jobtype               : 8;  /**< [ 63: 56] Index into the PSM resource table (see PSM_SET0_RSRC_TBL(),
                                                                 PSM_SET1_RSRC_TBL(), PSM_SET2_RSRC_TBL())
                                                                 indicating which MHAB/MDAB(s) can service this job.  This field is only used on
                                                                 the first CONTJOB command of a continuation sequence.  It is ignored on
                                                                 subsequent CONTJOB and ADDJOB commands, since the destination MHAB/MDAB is
                                                                 already selected. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
        uint64_t reserved_117_124      : 8;
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Address indicating the location of the job descriptor.
                                                                 This must be a 64-bit aligned address. If [TMEM] is clear, this is a
                                                                 local address within BPHY SMEM. If [TMEM] is set, this is an IOVA. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_contjob_s_s cn; */
};

/**
 * Structure psm_cmd_djcnt_s
 *
 * PSM Dependent Job Counter Command Structure
 * This structure specifies the format for PSM dependent job counter commands.  This
 * command is used to increment, decrement, or assign a value to one of the PSM
 * dependent job counters (DJCNT).
 */
union cavm_psm_cmd_djcnt_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_djcnt_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t value                 : 16; /**< [ 63: 48] If [INCR] is 1, the counter indicated by [DJCNT_ID] will be
                                                                 incremented by the amount specified in [VALUE].
                                                                 If [DECR] is 1 and [INCR] is 0, the counter indicated by [DJCNT_ID] will be
                                                                 decremented by the amount specified in [VALUE].
                                                                 For increments and decrements, the valid range of [VALUE] is 0x0 - 0xFF.
                                                                 If [INCR] and [DECR] are both 0, the counter indicated by [DJCNT_ID]
                                                                 will be set to be value specified in [VALUE], and the full 16-bit range
                                                                 is permitted. */
        uint64_t reserved_42_47        : 6;
        uint64_t incr                  : 1;  /**< [ 41: 41] If set to 1, then PSM_CMD_DJCNT_S[DJCNT_ID] will be incremented. */
        uint64_t decr                  : 1;  /**< [ 40: 40] If set to 1, and if INCR is not 1, then PSM_CMD_DJCNT_S[DJCNT_ID]
                                                                 will be decremented. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 38: 32] Selects which DJCNT to modify. */
        uint64_t reserved_24_31        : 8;
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_DJCNT */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_DJCNT */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t reserved_24_31        : 8;
        uint64_t djcnt_id              : 7;  /**< [ 38: 32] Selects which DJCNT to modify. */
        uint64_t reserved_39           : 1;
        uint64_t decr                  : 1;  /**< [ 40: 40] If set to 1, and if INCR is not 1, then PSM_CMD_DJCNT_S[DJCNT_ID]
                                                                 will be decremented. */
        uint64_t incr                  : 1;  /**< [ 41: 41] If set to 1, then PSM_CMD_DJCNT_S[DJCNT_ID] will be incremented. */
        uint64_t reserved_42_47        : 6;
        uint64_t value                 : 16; /**< [ 63: 48] If [INCR] is 1, the counter indicated by [DJCNT_ID] will be
                                                                 incremented by the amount specified in [VALUE].
                                                                 If [DECR] is 1 and [INCR] is 0, the counter indicated by [DJCNT_ID] will be
                                                                 decremented by the amount specified in [VALUE].
                                                                 For increments and decrements, the valid range of [VALUE] is 0x0 - 0xFF.
                                                                 If [INCR] and [DECR] are both 0, the counter indicated by [DJCNT_ID]
                                                                 will be set to be value specified in [VALUE], and the full 16-bit range
                                                                 is permitted. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_djcnt_s_s cn; */
};

/**
 * Structure psm_cmd_free_s
 *
 * PSM NPA Free Command Structure
 * This structure specifies the format used for PSM NPA free commands (opcode=PSM_OP_FREE).
 * This command causes the PSM to send a request to the NPA unit to free a
 * block of memory.
 */
union cavm_psm_cmd_free_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_free_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t fab                   : 1;  /**< [ 44: 44] Free absolute parameter to NPA. */
        uint64_t aura                  : 20; /**< [ 43: 24] The aura that NPA should use when freeing the buffer. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command.

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_FREE */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_FREE */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command.

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t aura                  : 20; /**< [ 43: 24] The aura that NPA should use when freeing the buffer. */
        uint64_t fab                   : 1;  /**< [ 44: 44] Free absolute parameter to NPA. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
        uint64_t reserved_117_124      : 8;
        uint64_t fptr                  : 53; /**< [116: 64] Byte address indicating the location to be freed by NPA.
                                                                 This must be a cache-line (128-byte) aligned address. */
#else /* Word 1 - Little Endian */
        uint64_t fptr                  : 53; /**< [116: 64] Byte address indicating the location to be freed by NPA.
                                                                 This must be a cache-line (128-byte) aligned address. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_free_s_s cn; */
};

/**
 * Structure psm_cmd_gpint_s
 *
 * PSM General Purpose Interrupt Command Structure
 * This structure specifies the format used for PSM general purpose interrupt
 * commands (opcode=PSM_OP_GPINT).  This command is used to signal a general
 * purpose interrupt to the AP cores.
 */
union cavm_psm_cmd_gpint_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_gpint_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t gpint                 : 8;  /**< [ 31: 24] Indicates which general purpose PSM interrupt (0-255) should be raised. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_GPINT */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_GPINT */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t gpint                 : 8;  /**< [ 31: 24] Indicates which general purpose PSM interrupt (0-255) should be raised. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_gpint_s_s cn; */
};

/**
 * Structure psm_cmd_qblk_s
 *
 * PSM Queue Block Command Structure
 * This structure specifies the format used for PSM queue block commands (opcode=PSM_OP_QBLK).
 * This command will disable a queue and prevent any commands in the queue
 * from being executed until the queue is re-enabled, either using a QRUN
 * command, or by writing to PSM_QUEUE_ENA_W1S().
 */
union cavm_psm_cmd_qblk_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_qblk_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t qsel                  : 8;  /**< [ 31: 24] Selects the queue to be blocked (i.e., disabled). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be blocked. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QBLK */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QBLK */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be blocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 8;  /**< [ 31: 24] Selects the queue to be blocked (i.e., disabled). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_qblk_s_s cn; */
};

/**
 * Structure psm_cmd_qrst_s
 *
 * PSM Queue Reset Command Structure
 * This structure specifies the format used for PSM queue reset commands (opcode=PSM_OP_QRST).
 * This command is used to reset one of the PSM command queues. The reset
 * will remove any remaining commands or jobs from the queue without
 * executing them, and reset the head and tail pointer to indicate an empty
 * queue. The queue reset will not affect any in-flight jobs from the queue.
 */
union cavm_psm_cmd_qrst_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_qrst_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t qsel                  : 8;  /**< [ 31: 24] Selects the queue to be reset. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be reset. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRST */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRST */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be reset. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 8;  /**< [ 31: 24] Selects the queue to be reset. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_qrst_s_s cn; */
};

/**
 * Structure psm_cmd_qrun_s
 *
 * PSM Queue Unblock Command Structure
 * This structure specifies the format used for PSM queue unblock commands (opcode=PSM_OP_QRUN).
 * This command is used to unblock (ie, re-enable) one of the PSM
 * command queues.
 */
union cavm_psm_cmd_qrun_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_qrun_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t qsel                  : 8;  /**< [ 31: 24] Selects the queue to be unblocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be unblocked. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRUN */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_QRUN */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue.

                                                                 Note that QID does not identify the queue to be unblocked. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qsel                  : 8;  /**< [ 31: 24] Selects the queue to be unblocked. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_qrun_s_s cn; */
};

/**
 * Structure psm_cmd_rsp_s
 *
 * PSM MHAB/MDAB Response Command Structure
 * This structure specifies the PSM MHAB/MDAB response command
 * (opcode=PSM_OP_RSP).  This command is used for the MHAB/MDAB
 * to send job status information back to the PSM.  It
 * should only come from the MHAB/MDAB, and should never
 * be submitted by software.
 *
 * When PSM_LOG_CFG[LOG_JOBRSP_EN]=1, PSM writes all received PSM_CMD_RSP_S
 * structures to the log.
 */
union cavm_psm_cmd_rsp_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_rsp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t addr_err              : 1;  /**< [ 62: 62] If 1, an address error occurred during job processing. */
        uint64_t dmaerr                : 1;  /**< [ 61: 61] If 1, an error occurred during a DMA transfer. */
        uint64_t timeout               : 1;  /**< [ 60: 60] If 1, a timeout occurred during job processing. */
        uint64_t nfat_err              : 1;  /**< [ 59: 59] If 1, a non-fatal error occurred during job processing. */
        uint64_t joberr                : 1;  /**< [ 58: 58] If 1, an error occurred during job processing. */
        uint64_t cdtrtn                : 1;  /**< [ 57: 57] If 1, the MHAB/MDAB is returning a job credit. */
        uint64_t comp                  : 1;  /**< [ 56: 56] If 1, the job has been completed. */
        uint64_t ab_id                 : 2;  /**< [ 55: 54] MHAB/MDAB AB ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t slot_id               : 2;  /**< [ 53: 52] MHAB/MDAB slot ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t reserved_49_51        : 3;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job was launched.   The
                                                                 MHAB/MDAB will keep track of this from the job launch command
                                                                 and return it in the response. */
        uint64_t reserved_41_47        : 7;
        uint64_t contjob               : 1;  /**< [ 40: 40] Indicates if the job is a normal job (ADDJOB) or a continued
                                                                 job (CONTJOB). The MHAB/MDAB will keep track of this
                                                                 from the original job command and return it in the response. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Job Tag from the ADDJOB/CONTJOB command.  The MHAB/MDAB
                                                                 will keep track of the job tag from the original job
                                                                 command and return it in the response. */
        uint64_t reserved_16_23        : 8;
        uint64_t qid                   : 8;  /**< [ 15:  8] Queue from which the job was launched.  The MHBW/MDBW
                                                                 will keep track of which queue sent the job,
                                                                 and return this information in the response command. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] For the MHAB/MDAB response command, this field is always PSM_OPCODE_E::PSM_OP_RSP. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] For the MHAB/MDAB response command, this field is always PSM_OPCODE_E::PSM_OP_RSP. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Queue from which the job was launched.  The MHBW/MDBW
                                                                 will keep track of which queue sent the job,
                                                                 and return this information in the response command. */
        uint64_t reserved_16_23        : 8;
        uint64_t jobtag                : 16; /**< [ 39: 24] Job Tag from the ADDJOB/CONTJOB command.  The MHAB/MDAB
                                                                 will keep track of the job tag from the original job
                                                                 command and return it in the response. */
        uint64_t contjob               : 1;  /**< [ 40: 40] Indicates if the job is a normal job (ADDJOB) or a continued
                                                                 job (CONTJOB). The MHAB/MDAB will keep track of this
                                                                 from the original job command and return it in the response. */
        uint64_t reserved_41_47        : 7;
        uint64_t mabq                  : 1;  /**< [ 48: 48] Indicates the MAB queue on which the job was launched.   The
                                                                 MHAB/MDAB will keep track of this from the job launch command
                                                                 and return it in the response. */
        uint64_t reserved_49_51        : 3;
        uint64_t slot_id               : 2;  /**< [ 53: 52] MHAB/MDAB slot ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t ab_id                 : 2;  /**< [ 55: 54] MHAB/MDAB AB ID (if available) corresponding to the response
                                                                 command message. */
        uint64_t comp                  : 1;  /**< [ 56: 56] If 1, the job has been completed. */
        uint64_t cdtrtn                : 1;  /**< [ 57: 57] If 1, the MHAB/MDAB is returning a job credit. */
        uint64_t joberr                : 1;  /**< [ 58: 58] If 1, an error occurred during job processing. */
        uint64_t nfat_err              : 1;  /**< [ 59: 59] If 1, a non-fatal error occurred during job processing. */
        uint64_t timeout               : 1;  /**< [ 60: 60] If 1, a timeout occurred during job processing. */
        uint64_t dmaerr                : 1;  /**< [ 61: 61] If 1, an error occurred during a DMA transfer. */
        uint64_t addr_err              : 1;  /**< [ 62: 62] If 1, an address error occurred during job processing. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_110_127      : 18;
        uint64_t elapsed_ticks         : 42; /**< [109: 68] The elapsed value of the MHAB/MDAB's tick counter
                                                                 for the job runtime. */
        uint64_t reserved_64_67        : 4;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_67        : 4;
        uint64_t elapsed_ticks         : 42; /**< [109: 68] The elapsed value of the MHAB/MDAB's tick counter
                                                                 for the job runtime. */
        uint64_t reserved_110_127      : 18;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_rsp_s_s cn; */
};

/**
 * Structure psm_cmd_wait_s
 *
 * PSM Wait Command Structure
 * This structure specifies the format used for PSM wait command.  This
 * command is used to wait for specified events before allowing the
 * queue to proceed.  The event, which is selected by the [WAITMODE]
 * field, may be either a specific PSM timer value, or a specific
 * DJCNT value.  The command may contain a standard [WAITCOND] field
 * as well, which must be satisfied before the wait event is checked.
 */
union cavm_psm_cmd_wait_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_wait_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t djcnt_val             : 16; /**< [ 63: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in [DJCNT_VAL]. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1.  Permitted values
                                                                 are [0x0, 0x7F]. */
        uint64_t reserved_34_39        : 6;
        uint64_t exact_match           : 1;  /**< [ 33: 33] When set to 1, the timer or DJCNT comparison will succeed only upon an exact match
                                                                 with the values in [FRAME], [SF], [TICK], and [DJCNT_VAL]. */
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t reserved_26_31        : 6;
        uint64_t cur_frame             : 1;  /**< [ 25: 25] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current frame, or the specified absolute frame number:
                                                                 0 = Match the frame specified by the [FRAME] field.
                                                                 1 = Match the current frame (i.e., only match the [SF] and [TICK] fields). */
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WAIT. */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. The value 0xFF (i.e., the
                                                                 immediate queue) may not be used for ADDJOB commands. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t cur_sf                : 1;  /**< [ 24: 24] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current subframe, or the specified absolute subframe number:
                                                                 0 = Match the subframe specified by the FRAME and SF fields.
                                                                 1 = Match the current subframe (i.e., only match the TICK field). */
        uint64_t cur_frame             : 1;  /**< [ 25: 25] When WAITMODE=0, this field indicates whether the command should match
                                                                 the current frame, or the specified absolute frame number:
                                                                 0 = Match the frame specified by the [FRAME] field.
                                                                 1 = Match the current frame (i.e., only match the [SF] and [TICK] fields). */
        uint64_t reserved_26_31        : 6;
        uint64_t waitmode              : 1;  /**< [ 32: 32] Selects the event to be waited on.
                                                                 0 = Wait on the PSM timer, as specified by the [CUR_SF], [TICK], [SF], and [FRAME] fields.
                                                                 1 = Wait on a DJCNT as specified by the [DJCNT_ID] and [DJCNT_VAL] fields. */
        uint64_t exact_match           : 1;  /**< [ 33: 33] When set to 1, the timer or DJCNT comparison will succeed only upon an exact match
                                                                 with the values in [FRAME], [SF], [TICK], and [DJCNT_VAL]. */
        uint64_t reserved_34_39        : 6;
        uint64_t djcnt_id              : 7;  /**< [ 46: 40] Selects the DJCNT to be used when [WAITMODE] = 1.  Permitted values
                                                                 are [0x0, 0x7F]. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_val             : 16; /**< [ 63: 48] Specifies the DJCNT value for the comparison.  The comparison
                                                                 will succeed when the counter selected by [DJCNT_ID] is equal-to
                                                                 or less-than the value in [DJCNT_VAL]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_100_127      : 28;
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0 and [CUR_FRAME] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t reserved_64_67        : 4;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_67        : 4;
        uint64_t tick                  : 16; /**< [ 83: 68] PSM timer tick counter value to be matched when [WAITMODE] = 0. */
        uint64_t sf                    : 4;  /**< [ 87: 84] PSM timer sub-frame value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0. */
        uint64_t frame                 : 12; /**< [ 99: 88] PSM timer BFN value to be matched when [WAITMODE] = 0 and [CUR_SF] = 0 and [CUR_FRAME] = 0. */
        uint64_t reserved_100_127      : 28;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_wait_s_s cn; */
};

/**
 * Structure psm_cmd_wrmsg_s
 *
 * PSM Write Message Command Structure
 * This structure specifies the format used for PSM write message commands (opcode=PSM_OP_WRMSG).
 * This command is used to write a software defined message to system
 * memory or to BPHY SMEM.  See PSM_MESSAGE_S for details
 * on the message data format.
 */
union cavm_psm_cmd_wrmsg_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_wrmsg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRMSG command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRMSG command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the message will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t message               : 32; /**< [ 55: 24] Value to be written to the PSM_MESSAGE_S[MESSAGE] field. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRMSG */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRMSG */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t message               : 32; /**< [ 55: 24] Value to be written to the PSM_MESSAGE_S[MESSAGE] field. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the message will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRMSG command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRMSG command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
        uint64_t reserved_117_124      : 8;
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_wrmsg_s_s cn; */
};

/**
 * Structure psm_cmd_wrsts_s
 *
 * PSM Write Status Command Structure
 * This structure specifies the format used for PSM write status commands (opcode=PSM_OP_WRSTS).
 * This command is used to write a status message to chip system
 * memory or to BPHY SMEM.  See PSM_STATUS_S for details
 * on the status data format.
 */
union cavm_psm_cmd_wrsts_s
{
    uint64_t u[2];
    struct cavm_psm_cmd_wrsts_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRSTS command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRSTS command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the status will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cc                    : 16; /**< [ 55: 40] Completion code. This value is copied to the CC field in the
                                                                 PSM_STATUS_S structure. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Value to be written in the PSM_STATUS_S[JOBTAG] field.

                                                                 If the WRSTS command is submitted by a MHAB/MDAB as part of a job
                                                                 completion event, the JOBTAG will be over-written by the JOBTAG field
                                                                 for the job that submitted the job completion event. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t reserved_6_7          : 2;
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRSTS */
#else /* Word 0 - Little Endian */
        uint64_t opcode                : 6;  /**< [  5:  0] PSM_OPCODE_E::PSM_OP_WRSTS */
        uint64_t reserved_6_7          : 2;
        uint64_t qid                   : 8;  /**< [ 15:  8] Destination queue. For commands added directly by stores from the AP
                                                                 cores, this field is ignored and the register address selects which queue
                                                                 the job is added to. Commands submitted from MHABs/MDABs or by command-DMA
                                                                 use this field to specify the destination queue. If QID = 0xFF (i.e., the
                                                                 immediate queue), the command will be executed as soon as possible,
                                                                 without being added to any queue. */
        uint64_t waitcond              : 8;  /**< [ 23: 16] Specifies the conditions that must be satisfied before
                                                                 executing this command:

                                                                 _ 0x0 = Do not wait.

                                                                 _ 0x1 - 0x7F = Wait for PSM_CMD_DJCNT_S[WAITCOND] to reach zero.

                                                                 _ 0xFF = Wait for all previous commands in this queue to complete. */
        uint64_t jobtag                : 16; /**< [ 39: 24] Value to be written in the PSM_STATUS_S[JOBTAG] field.

                                                                 If the WRSTS command is submitted by a MHAB/MDAB as part of a job
                                                                 completion event, the JOBTAG will be over-written by the JOBTAG field
                                                                 for the job that submitted the job completion event. */
        uint64_t cc                    : 16; /**< [ 55: 40] Completion code. This value is copied to the CC field in the
                                                                 PSM_STATUS_S structure. */
        uint64_t tmem                  : 1;  /**< [ 56: 56] Target memory where the status will be written.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t cmt                   : 1;  /**< [ 57: 57] Wait for write commit.
                                                                 0 = WRSTS command completes as soon as write request is sent to
                                                                 memory.
                                                                 1 = WRSTS command does not complete until after the data has been committed
                                                                 to memory. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
        uint64_t reserved_117_124      : 8;
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
#else /* Word 1 - Little Endian */
        uint64_t sptr                  : 53; /**< [116: 64] Address where PSM will write the message. Must be 64-bit aligned.  If
                                                                 [TMEM] is clear, this is a local address within BPHY SMEM. If [TMEM]
                                                                 is set, this is an IOVA. */
        uint64_t reserved_117_124      : 8;
        uint64_t gmid                  : 3;  /**< [127:125] GMID */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_cmd_wrsts_s_s cn; */
};

/**
 * Structure psm_log_s
 *
 * PSM Log Entry Structure
 * This structure defines the format for PSM log entries.
 */
union cavm_psm_log_s
{
    uint64_t u[4];
    struct cavm_psm_log_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t mab_id                : 9;  /**< [ 40: 32] For log entries corresponding to ADDJOB and CONTJOB commands, this
                                                                 field indicates the destination MHAB/MDAB.  For job responses and
                                                                 immediate-queue commands, this field indicates the source MHAB/MDAB.
                                                                 Bits [40:39] contain the resource set, and bits [38:32] contain the
                                                                 MABDID within that set, as enumerated by PSM_SET0_MABDID_E,
                                                                 PSM_SET1_MABDID_E, and PSM_SET2_MABDID_E. */
        uint64_t frame                 : 12; /**< [ 31: 20] The value of PSM_TIMER_BPHY_VAL[FRAME] when the logged event occurred. */
        uint64_t subframe              : 4;  /**< [ 19: 16] The value of PSM_TIMER_BPHY_VAL[SUBFRAME] when the logged event occurred. */
        uint64_t tick                  : 16; /**< [ 15:  0] The value of PSM_TIMER_BPHY_VAL[TICK] when the logged event occurred. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0] The value of PSM_TIMER_BPHY_VAL[TICK] when the logged event occurred. */
        uint64_t subframe              : 4;  /**< [ 19: 16] The value of PSM_TIMER_BPHY_VAL[SUBFRAME] when the logged event occurred. */
        uint64_t frame                 : 12; /**< [ 31: 20] The value of PSM_TIMER_BPHY_VAL[FRAME] when the logged event occurred. */
        uint64_t mab_id                : 9;  /**< [ 40: 32] For log entries corresponding to ADDJOB and CONTJOB commands, this
                                                                 field indicates the destination MHAB/MDAB.  For job responses and
                                                                 immediate-queue commands, this field indicates the source MHAB/MDAB.
                                                                 Bits [40:39] contain the resource set, and bits [38:32] contain the
                                                                 MABDID within that set, as enumerated by PSM_SET0_MABDID_E,
                                                                 PSM_SET1_MABDID_E, and PSM_SET2_MABDID_E. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t cmdl                  : 64; /**< [191:128] Bits [63:0] of the command. */
#else /* Word 2 - Little Endian */
        uint64_t cmdl                  : 64; /**< [191:128] Bits [63:0] of the command. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t cmdh                  : 64; /**< [255:192] Bits [127:64] of the command. */
#else /* Word 3 - Little Endian */
        uint64_t cmdh                  : 64; /**< [255:192] Bits [127:64] of the command. */
#endif /* Word 3 - End */
    } s;
    /* struct cavm_psm_log_s_s cn; */
};

/**
 * Structure psm_message_s
 *
 * PSM Message Data Structure
 * This structure specifies the PSM Message Format that is written
 * by PSM write message commands (PSM_CMD_WRMSG_S).  It contains
 * a message field, which is taken from the WRMSG
 * command.  It also contains a timestamp ([TICK], [SF], [FRAME]) from
 * the PSM timer, indicating when the write occurred.
 */
union cavm_psm_message_s
{
    uint64_t u;
    struct cavm_psm_message_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t message               : 32; /**< [ 31:  0] Message. */
#else /* Word 0 - Little Endian */
        uint64_t message               : 32; /**< [ 31:  0] Message. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_message_s_s cn; */
};

/**
 * Structure psm_notif_s
 *
 * PSM Notification Data Structure
 * This structure specifies the PSM Notification Format that is written
 * by PSM add notification commands (PSM_CMD_ADDNOTIF_S).  It contains
 * info and message pointer fields, which are taken from the ADDNOTIF
 * command.  It also contains a generation number, which is incremented
 * when the write pointer wraps around in the ring buffer, and can be used
 * by software to detect a new notification when polling in the
 * ring buffer.  It also contains a timestamp ([TICK], [SF], [FRAME]) from
 * the PSM timer, indicating when the write occurred.
 */
union cavm_psm_notif_s
{
    uint64_t u[2];
    struct cavm_psm_notif_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t gen_num               : 8;  /**< [ 31: 24] Generation number.  The value is taken from the [GEN_NUM] field
                                                                 of the PSM_NRING()_CFG register. */
        uint64_t info                  : 24; /**< [ 23:  0] Software defined information field.  The value is taken from
                                                                 the [INFO] field of the PSM_CMD_ADDNOTIF_S command. */
#else /* Word 0 - Little Endian */
        uint64_t info                  : 24; /**< [ 23:  0] Software defined information field.  The value is taken from
                                                                 the [INFO] field of the PSM_CMD_ADDNOTIF_S command. */
        uint64_t gen_num               : 8;  /**< [ 31: 24] Generation number.  The value is taken from the [GEN_NUM] field
                                                                 of the PSM_NRING()_CFG register. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t msg_gmid              : 3;  /**< [127:125] GMID. */
        uint64_t reserved_117_124      : 8;
        uint64_t msgptr                : 53; /**< [116: 64] Message pointer.  The value is taken from the [MSGPTR] field
                                                                 of the PSM_CMD_ADDNOTIF_S command. */
#else /* Word 1 - Little Endian */
        uint64_t msgptr                : 53; /**< [116: 64] Message pointer.  The value is taken from the [MSGPTR] field
                                                                 of the PSM_CMD_ADDNOTIF_S command. */
        uint64_t reserved_117_124      : 8;
        uint64_t msg_gmid              : 3;  /**< [127:125] GMID. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_psm_notif_s_s cn; */
};

/**
 * Structure psm_status_s
 *
 * PSM Status Data Structure
 * This structure specifies the PSM Status Format that is written
 * by PSM write status commands (PSM_CMD_WRSTS_S).  It contains
 * a completion code and job tag, which are taken from the WRSTS
 * command.  It also contains a timestamp ([TICK], [SF], [FRAME]) from
 * the PSM timer, indicating when the write occurred.
 */
union cavm_psm_status_s
{
    uint64_t u;
    struct cavm_psm_status_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t cc                    : 16; /**< [ 31: 16] Completion code. */
        uint64_t jobtag                : 16; /**< [ 15:  0] Job tag. */
#else /* Word 0 - Little Endian */
        uint64_t jobtag                : 16; /**< [ 15:  0] Job tag. */
        uint64_t cc                    : 16; /**< [ 31: 16] Completion code. */
        uint64_t tick                  : 16; /**< [ 47: 32] Value of PSM_TIMER_BPHY_VAL[TICK]. */
        uint64_t sf                    : 4;  /**< [ 51: 48] Value of PSM_TIMER_BPHY_VAL[SUBFRAME]. */
        uint64_t frame                 : 12; /**< [ 63: 52] Value of PSM_TIMER_BPHY_VAL[FRAME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_status_s_s cn; */
};

/**
 * Register (NCB) psm_cmd_dma#_addr
 *
 * PHY Scheduler Command-List DMA Address Registers
 * This register sets the location in memory from which a command-list
 * DMA operation will be performed.
 */
union cavm_psm_cmd_dmax_addr
{
    uint64_t u;
    struct cavm_psm_cmd_dmax_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W/H) GMID. */
        uint64_t reserved_53_60        : 8;
        uint64_t dma_ptr               : 53; /**< [ 52:  0](R/W/H) Address from which PSM will read a list of commands. Must be 128-bit
                                                                 aligned. If PSM_CMD_DMA()_CTRL[TMEM] is clear, this is a local
                                                                 address within BPHY SMEM. If PSM_CMD_DMA()_CTRL[TMEM] is set, this is
                                                                 an IOVA. */
#else /* Word 0 - Little Endian */
        uint64_t dma_ptr               : 53; /**< [ 52:  0](R/W/H) Address from which PSM will read a list of commands. Must be 128-bit
                                                                 aligned. If PSM_CMD_DMA()_CTRL[TMEM] is clear, this is a local
                                                                 address within BPHY SMEM. If PSM_CMD_DMA()_CTRL[TMEM] is set, this is
                                                                 an IOVA. */
        uint64_t reserved_53_60        : 8;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W/H) GMID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dmax_addr_s cn; */
};
typedef union cavm_psm_cmd_dmax_addr cavm_psm_cmd_dmax_addr_t;

static inline uint64_t CAVM_PSM_CMD_DMAX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMAX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010d0000ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010d0000ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_CMD_DMAX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMAX_ADDR(a) cavm_psm_cmd_dmax_addr_t
#define bustype_CAVM_PSM_CMD_DMAX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMAX_ADDR(a) "PSM_CMD_DMAX_ADDR"
#define busnum_CAVM_PSM_CMD_DMAX_ADDR(a) (a)
#define arguments_CAVM_PSM_CMD_DMAX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_cmd_dma#_ctrl
 *
 * PHY Scheduler Command-List DMA Control Registers
 * This register configures the command-list DMA operation.
 */
union cavm_psm_cmd_dmax_ctrl
{
    uint64_t u;
    struct cavm_psm_cmd_dmax_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t tmem                  : 1;  /**< [ 16: 16](R/W/H) Location of the command-list DMA source.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_12_15        : 4;
        uint64_t list_size             : 12; /**< [ 11:  0](R/W/H) Number of PSM commands to be read and enqueued during the
                                                                 command-list DMA operation.  The valid range is [0x1, 0x800]. */
#else /* Word 0 - Little Endian */
        uint64_t list_size             : 12; /**< [ 11:  0](R/W/H) Number of PSM commands to be read and enqueued during the
                                                                 command-list DMA operation.  The valid range is [0x1, 0x800]. */
        uint64_t reserved_12_15        : 4;
        uint64_t tmem                  : 1;  /**< [ 16: 16](R/W/H) Location of the command-list DMA source.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dmax_ctrl_s cn; */
};
typedef union cavm_psm_cmd_dmax_ctrl cavm_psm_cmd_dmax_ctrl_t;

static inline uint64_t CAVM_PSM_CMD_DMAX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMAX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010d0010ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010d0010ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_CMD_DMAX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMAX_CTRL(a) cavm_psm_cmd_dmax_ctrl_t
#define bustype_CAVM_PSM_CMD_DMAX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMAX_CTRL(a) "PSM_CMD_DMAX_CTRL"
#define busnum_CAVM_PSM_CMD_DMAX_CTRL(a) (a)
#define arguments_CAVM_PSM_CMD_DMAX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_cmd_dma#_start
 *
 * PHY Scheduler Command-List DMA Start Registers
 * This register initiates the command-list DMA operation.
 */
union cavm_psm_cmd_dmax_start
{
    uint64_t u;
    struct cavm_psm_cmd_dmax_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t flush                 : 1;  /**< [ 63: 63](R/W/H) Reserved. */
        uint64_t reserved_1_62         : 62;
        uint64_t start                 : 1;  /**< [  0:  0](R/W/H) Initiates a command-list DMA operation when written to 1.  After
                                                                 the DMA is complete and all the commands have been enqueued, the
                                                                 bit will return to 0. */
#else /* Word 0 - Little Endian */
        uint64_t start                 : 1;  /**< [  0:  0](R/W/H) Initiates a command-list DMA operation when written to 1.  After
                                                                 the DMA is complete and all the commands have been enqueued, the
                                                                 bit will return to 0. */
        uint64_t reserved_1_62         : 62;
        uint64_t flush                 : 1;  /**< [ 63: 63](R/W/H) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dmax_start_s cn; */
};
typedef union cavm_psm_cmd_dmax_start cavm_psm_cmd_dmax_start_t;

static inline uint64_t CAVM_PSM_CMD_DMAX_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMAX_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010d0020ll + 0x100ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x8600010d0020ll + 0x100ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_CMD_DMAX_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMAX_START(a) cavm_psm_cmd_dmax_start_t
#define bustype_CAVM_PSM_CMD_DMAX_START(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMAX_START(a) "PSM_CMD_DMAX_START"
#define busnum_CAVM_PSM_CMD_DMAX_START(a) (a)
#define arguments_CAVM_PSM_CMD_DMAX_START(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_cmd_dma_error
 *
 * PHY Scheduler Command-List DMA Error Handling Register
 * Reserved.
 */
union cavm_psm_cmd_dma_error
{
    uint64_t u;
    struct cavm_psm_cmd_dma_error_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t badcmd                : 8;  /**< [ 55: 48](R/W1C/H) Indicates that an immediate command (QID=0xFF) with an illegal
                                                                 opcode was detected on command-list DMA channels 0 - 7. */
        uint64_t reserved_40_47        : 8;
        uint64_t rderr                 : 8;  /**< [ 39: 32](R/W1C/H) Indicates that an read response error was detected
                                                                 on command-list DMA channels 0 - 7. */
        uint64_t reserved_24_31        : 8;
        uint64_t to                    : 8;  /**< [ 23: 16](R/W1C/H) Indicates that an timeout was detected on command-list
                                                                 DMA channels 0 - 7. */
        uint64_t reserved_8_15         : 8;
        uint64_t swerr                 : 8;  /**< [  7:  0](R/W1C/H) Indicates that an software configuration error was detected
                                                                 on command-list DMA channels 0 - 7. */
#else /* Word 0 - Little Endian */
        uint64_t swerr                 : 8;  /**< [  7:  0](R/W1C/H) Indicates that an software configuration error was detected
                                                                 on command-list DMA channels 0 - 7. */
        uint64_t reserved_8_15         : 8;
        uint64_t to                    : 8;  /**< [ 23: 16](R/W1C/H) Indicates that an timeout was detected on command-list
                                                                 DMA channels 0 - 7. */
        uint64_t reserved_24_31        : 8;
        uint64_t rderr                 : 8;  /**< [ 39: 32](R/W1C/H) Indicates that an read response error was detected
                                                                 on command-list DMA channels 0 - 7. */
        uint64_t reserved_40_47        : 8;
        uint64_t badcmd                : 8;  /**< [ 55: 48](R/W1C/H) Indicates that an immediate command (QID=0xFF) with an illegal
                                                                 opcode was detected on command-list DMA channels 0 - 7. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dma_error_s cn; */
};
typedef union cavm_psm_cmd_dma_error cavm_psm_cmd_dma_error_t;

#define CAVM_PSM_CMD_DMA_ERROR CAVM_PSM_CMD_DMA_ERROR_FUNC()
static inline uint64_t CAVM_PSM_CMD_DMA_ERROR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMA_ERROR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010d1100ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010d1100ll;
    __cavm_csr_fatal("PSM_CMD_DMA_ERROR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMA_ERROR cavm_psm_cmd_dma_error_t
#define bustype_CAVM_PSM_CMD_DMA_ERROR CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMA_ERROR "PSM_CMD_DMA_ERROR"
#define busnum_CAVM_PSM_CMD_DMA_ERROR 0
#define arguments_CAVM_PSM_CMD_DMA_ERROR -1,-1,-1,-1

/**
 * Register (NCB) psm_cmd_dma_status
 *
 * PHY Scheduler Command-List DMA Status Register
 * This register indicates which command-list DMA channels are active.
 */
union cavm_psm_cmd_dma_status
{
    uint64_t u;
    struct cavm_psm_cmd_dma_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t to_cfg                : 4;  /**< [ 51: 48](R/W) Configures the timeout limit of the command-list DMA watchdog
                                                                 timer.  The timeout limit is 2^[TO_CFG] * 16.  There is a
                                                                 separate timer per channel.  A [TO_CFG] value of 0 will disable
                                                                 the timeout check. */
        uint64_t reserved_19_47        : 29;
        uint64_t cur_chan              : 3;  /**< [ 18: 16](RO/H) Reserved. */
        uint64_t reserved_8_15         : 8;
        uint64_t active                : 8;  /**< [  7:  0](RO/H) Each bit indicates which command-list DMA channels have a DMA
                                                                 operation in progress. */
#else /* Word 0 - Little Endian */
        uint64_t active                : 8;  /**< [  7:  0](RO/H) Each bit indicates which command-list DMA channels have a DMA
                                                                 operation in progress. */
        uint64_t reserved_8_15         : 8;
        uint64_t cur_chan              : 3;  /**< [ 18: 16](RO/H) Reserved. */
        uint64_t reserved_19_47        : 29;
        uint64_t to_cfg                : 4;  /**< [ 51: 48](R/W) Configures the timeout limit of the command-list DMA watchdog
                                                                 timer.  The timeout limit is 2^[TO_CFG] * 16.  There is a
                                                                 separate timer per channel.  A [TO_CFG] value of 0 will disable
                                                                 the timeout check. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_cmd_dma_status_s cn; */
};
typedef union cavm_psm_cmd_dma_status cavm_psm_cmd_dma_status_t;

#define CAVM_PSM_CMD_DMA_STATUS CAVM_PSM_CMD_DMA_STATUS_FUNC()
static inline uint64_t CAVM_PSM_CMD_DMA_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CMD_DMA_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010d1000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010d1000ll;
    __cavm_csr_fatal("PSM_CMD_DMA_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CMD_DMA_STATUS cavm_psm_cmd_dma_status_t
#define bustype_CAVM_PSM_CMD_DMA_STATUS CSR_TYPE_NCB
#define basename_CAVM_PSM_CMD_DMA_STATUS "PSM_CMD_DMA_STATUS"
#define busnum_CAVM_PSM_CMD_DMA_STATUS 0
#define arguments_CAVM_PSM_CMD_DMA_STATUS -1,-1,-1,-1

/**
 * Register (NCB) psm_const1
 *
 * PHY Scheduler Constants 1 Register
 * This register contains constants for software discovery.
 */
union cavm_psm_const1
{
    uint64_t u;
    struct cavm_psm_const1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t djcnt                 : 16; /**< [ 63: 48](RO) Number of PSM dependent job counters. */
        uint64_t jobtypes              : 16; /**< [ 47: 32](RO) Number of PSM job types in each resource set. */
        uint64_t qram_size             : 24; /**< [ 31:  8](RO) Number of PSM QRAM entries. */
        uint64_t queues                : 8;  /**< [  7:  0](RO) Number of PSM queues. */
#else /* Word 0 - Little Endian */
        uint64_t queues                : 8;  /**< [  7:  0](RO) Number of PSM queues. */
        uint64_t qram_size             : 24; /**< [ 31:  8](RO) Number of PSM QRAM entries. */
        uint64_t jobtypes              : 16; /**< [ 47: 32](RO) Number of PSM job types in each resource set. */
        uint64_t djcnt                 : 16; /**< [ 63: 48](RO) Number of PSM dependent job counters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_const1_s cn; */
};
typedef union cavm_psm_const1 cavm_psm_const1_t;

#define CAVM_PSM_CONST1 CAVM_PSM_CONST1_FUNC()
static inline uint64_t CAVM_PSM_CONST1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CONST1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f9000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f9000ll;
    __cavm_csr_fatal("PSM_CONST1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CONST1 cavm_psm_const1_t
#define bustype_CAVM_PSM_CONST1 CSR_TYPE_NCB
#define basename_CAVM_PSM_CONST1 "PSM_CONST1"
#define busnum_CAVM_PSM_CONST1 0
#define arguments_CAVM_PSM_CONST1 -1,-1,-1,-1

/**
 * Register (NCB) psm_const2
 *
 * PHY Scheduler Constants 2 Register
 * This register contains constants for software discovery.
 */
union cavm_psm_const2
{
    uint64_t u;
    struct cavm_psm_const2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t set2_mabs             : 8;  /**< [ 39: 32](RO) Number of MHABs and MDABs in resource set 2. */
        uint64_t set1_mabs             : 8;  /**< [ 31: 24](RO) Number of MHABs and MDABs in resource set 1. */
        uint64_t set0_mabs             : 8;  /**< [ 23: 16](RO) Number of MHABs and MDABs in resource set 0. */
        uint64_t grps                  : 8;  /**< [ 15:  8](RO) Number of resource groups in each resource set. */
        uint64_t rsrc_sets             : 8;  /**< [  7:  0](RO) Number of resource sets. */
#else /* Word 0 - Little Endian */
        uint64_t rsrc_sets             : 8;  /**< [  7:  0](RO) Number of resource sets. */
        uint64_t grps                  : 8;  /**< [ 15:  8](RO) Number of resource groups in each resource set. */
        uint64_t set0_mabs             : 8;  /**< [ 23: 16](RO) Number of MHABs and MDABs in resource set 0. */
        uint64_t set1_mabs             : 8;  /**< [ 31: 24](RO) Number of MHABs and MDABs in resource set 1. */
        uint64_t set2_mabs             : 8;  /**< [ 39: 32](RO) Number of MHABs and MDABs in resource set 2. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_const2_s cn; */
};
typedef union cavm_psm_const2 cavm_psm_const2_t;

#define CAVM_PSM_CONST2 CAVM_PSM_CONST2_FUNC()
static inline uint64_t CAVM_PSM_CONST2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_CONST2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f9010ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f9010ll;
    __cavm_csr_fatal("PSM_CONST2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_CONST2 cavm_psm_const2_t
#define bustype_CAVM_PSM_CONST2 CSR_TYPE_NCB
#define basename_CAVM_PSM_CONST2 "PSM_CONST2"
#define busnum_CAVM_PSM_CONST2 0
#define arguments_CAVM_PSM_CONST2 -1,-1,-1,-1

/**
 * Register (NCB) psm_dbg_break_cfg
 *
 * PHY Scheduler Debug Breakpoint Configuration Register
 * This register configures the debug breakpoint mechanism. When a breakpoint
 * is triggered, the PSM sets PSM_INT_ERRINT_SUM_W1C[BKTPT] and triggers a
 * PSM_INT_VEC_E::ERRINT interrupt, and can optionally halt.  While halted,
 * the PSM will not schedule any new jobs or execute any commands from the
 * 255 queues, but jobs can still complete, job completion commands can still
 * be processed, and new commands may still be added to the queues. The
 * queues can be unhalted by re-enabling the queues (i.e., a write to
 * PSM_QUEUE_ENA_W1S(), or a QRUN command received from a MHAB/MDAB).
 */
union cavm_psm_dbg_break_cfg
{
    uint64_t u;
    struct cavm_psm_dbg_break_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t start_brk_ena         : 1;  /**< [ 63: 63](R/W) Job start breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM schedules a job with a matching [JOB_TAG] to a
                                                                 MHAB/MDAB. */
        uint64_t done_brk_ena          : 1;  /**< [ 62: 62](R/W) Job done breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM receives a job completion message with matching
                                                                 [JOB_TAG]. */
        uint64_t stop_on_brk           : 1;  /**< [ 61: 61](R/W) When set, the PSM will halt when a breakpoint is triggered, in
                                                                 addition to signaling an interrupt. Otherwise, the
                                                                 PSM will continue execution after signaling the interrupt. */
        uint64_t halted                : 1;  /**< [ 60: 60](RO/H) The PSM sets this bit after halting due to a breakpoint.
                                                                 When set, all queues will be halted from advancing. Job completion and job
                                                                 queue additions are still enabled. Queues may be resumed by re-enabling
                                                                 them using the PSM_QUEUE_ENA_W1S() registers. */
        uint64_t reserved_16_59        : 44;
        uint64_t job_tag               : 16; /**< [ 15:  0](R/W) JOBTAG to be matched for the break mechanism. */
#else /* Word 0 - Little Endian */
        uint64_t job_tag               : 16; /**< [ 15:  0](R/W) JOBTAG to be matched for the break mechanism. */
        uint64_t reserved_16_59        : 44;
        uint64_t halted                : 1;  /**< [ 60: 60](RO/H) The PSM sets this bit after halting due to a breakpoint.
                                                                 When set, all queues will be halted from advancing. Job completion and job
                                                                 queue additions are still enabled. Queues may be resumed by re-enabling
                                                                 them using the PSM_QUEUE_ENA_W1S() registers. */
        uint64_t stop_on_brk           : 1;  /**< [ 61: 61](R/W) When set, the PSM will halt when a breakpoint is triggered, in
                                                                 addition to signaling an interrupt. Otherwise, the
                                                                 PSM will continue execution after signaling the interrupt. */
        uint64_t done_brk_ena          : 1;  /**< [ 62: 62](R/W) Job done breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM receives a job completion message with matching
                                                                 [JOB_TAG]. */
        uint64_t start_brk_ena         : 1;  /**< [ 63: 63](R/W) Job start breakpoint enable. When set, a debug breakpoint will be
                                                                 triggered when the PSM schedules a job with a matching [JOB_TAG] to a
                                                                 MHAB/MDAB. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_dbg_break_cfg_s cn; */
};
typedef union cavm_psm_dbg_break_cfg cavm_psm_dbg_break_cfg_t;

#define CAVM_PSM_DBG_BREAK_CFG CAVM_PSM_DBG_BREAK_CFG_FUNC()
static inline uint64_t CAVM_PSM_DBG_BREAK_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_DBG_BREAK_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f4f00ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f4f00ll;
    __cavm_csr_fatal("PSM_DBG_BREAK_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_DBG_BREAK_CFG cavm_psm_dbg_break_cfg_t
#define bustype_CAVM_PSM_DBG_BREAK_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_DBG_BREAK_CFG "PSM_DBG_BREAK_CFG"
#define busnum_CAVM_PSM_DBG_BREAK_CFG 0
#define arguments_CAVM_PSM_DBG_BREAK_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_djcnt#_cfg
 *
 * PHY Scheduler Dependent Job Counter Config Register
 * These registers allow reading and setting of dependent job counters.
 */
union cavm_psm_djcntx_cfg
{
    uint64_t u;
    struct cavm_psm_djcntx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t djcnt_sat             : 1;  /**< [ 33: 33](R/W) Enable counter saturation.  When set, the DJCNT will not
                                                                 increment past 0xFFFF or decrement below 0x0. */
        uint64_t djcnt_sosf            : 1;  /**< [ 32: 32](R/W) Enable start-of-subframe (SOSF) auto-decrement. When set, the
                                                                 DJCNT will decrement by one when an SOSF is received. */
        uint64_t reserved_19_31        : 13;
        uint64_t djcnt_incr            : 1;  /**< [ 18: 18](R/W/H) When [DJCNT_INCR] is 1, the DJCNT will be increased by the
                                                                 amount specified in [DJCNT_VAL]. */
        uint64_t djcnt_decr            : 1;  /**< [ 17: 17](R/W/H) When [DJCNT_DECR] is 1 and [DJCNT_INCR] is 0, the DJCNT will
                                                                 be decreased by the amount specified in [DJCNT_VAL]. */
        uint64_t djcnt_update          : 1;  /**< [ 16: 16](R/W/H) When [DJCNT_UPDATE] is 1, and [DJCNT_DECR] and [DJCNT_INCR] are 0,
                                                                 the DJCNT will be updated with [DJCNT_VAL]. */
        uint64_t djcnt_val             : 16; /**< [ 15:  0](R/W/H) On read, returns the current value of the DJCNT. On write, the DJCNT will be
                                                                 updated with this value if [DJCNT_UPDATE] is set.

                                                                 On read, returns the current value of the DJCNT.
                                                                 On write, this field contains the value to modify the DJCNT.

                                                                 When [DJCNT_INCR] is 1, the DJCNT will be increased by the
                                                                 amount specified in [DJCNT_VAL].
                                                                 When [DJCNT_DECR] is 1, and [DJCNT_INCR] is 0, the DJCNT will be
                                                                 decreased by the amount specified in [DJCNT_VAL].
                                                                 When [DJCNT_UPDATE] is 1, and [DJCNT_DECR] and [DJCNT_INCR] are 0,
                                                                 the DJCNT will be updated with the value of [DJCNT_VAL].

                                                                 When [DJCNT_DECR] or [DJCNT_INCR] is 1, the valid range of
                                                                 [DJCNT_VAL] is 0x0 - 0xFF. */
#else /* Word 0 - Little Endian */
        uint64_t djcnt_val             : 16; /**< [ 15:  0](R/W/H) On read, returns the current value of the DJCNT. On write, the DJCNT will be
                                                                 updated with this value if [DJCNT_UPDATE] is set.

                                                                 On read, returns the current value of the DJCNT.
                                                                 On write, this field contains the value to modify the DJCNT.

                                                                 When [DJCNT_INCR] is 1, the DJCNT will be increased by the
                                                                 amount specified in [DJCNT_VAL].
                                                                 When [DJCNT_DECR] is 1, and [DJCNT_INCR] is 0, the DJCNT will be
                                                                 decreased by the amount specified in [DJCNT_VAL].
                                                                 When [DJCNT_UPDATE] is 1, and [DJCNT_DECR] and [DJCNT_INCR] are 0,
                                                                 the DJCNT will be updated with the value of [DJCNT_VAL].

                                                                 When [DJCNT_DECR] or [DJCNT_INCR] is 1, the valid range of
                                                                 [DJCNT_VAL] is 0x0 - 0xFF. */
        uint64_t djcnt_update          : 1;  /**< [ 16: 16](R/W/H) When [DJCNT_UPDATE] is 1, and [DJCNT_DECR] and [DJCNT_INCR] are 0,
                                                                 the DJCNT will be updated with [DJCNT_VAL]. */
        uint64_t djcnt_decr            : 1;  /**< [ 17: 17](R/W/H) When [DJCNT_DECR] is 1 and [DJCNT_INCR] is 0, the DJCNT will
                                                                 be decreased by the amount specified in [DJCNT_VAL]. */
        uint64_t djcnt_incr            : 1;  /**< [ 18: 18](R/W/H) When [DJCNT_INCR] is 1, the DJCNT will be increased by the
                                                                 amount specified in [DJCNT_VAL]. */
        uint64_t reserved_19_31        : 13;
        uint64_t djcnt_sosf            : 1;  /**< [ 32: 32](R/W) Enable start-of-subframe (SOSF) auto-decrement. When set, the
                                                                 DJCNT will decrement by one when an SOSF is received. */
        uint64_t djcnt_sat             : 1;  /**< [ 33: 33](R/W) Enable counter saturation.  When set, the DJCNT will not
                                                                 increment past 0xFFFF or decrement below 0x0. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_djcntx_cfg_s cn; */
};
typedef union cavm_psm_djcntx_cfg cavm_psm_djcntx_cfg_t;

static inline uint64_t CAVM_PSM_DJCNTX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_DJCNTX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=127))
        return 0x8600010f2000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=127))
        return 0x8600010f2000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("PSM_DJCNTX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_DJCNTX_CFG(a) cavm_psm_djcntx_cfg_t
#define bustype_CAVM_PSM_DJCNTX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_DJCNTX_CFG(a) "PSM_DJCNTX_CFG"
#define busnum_CAVM_PSM_DJCNTX_CFG(a) (a)
#define arguments_CAVM_PSM_DJCNTX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_djcnt_extdecr
 *
 * PHY Scheduler Dependent Job Counter External Decrement Register
 * This register selects which DJCNT counters are decremented based on the
 * external event inputs from other blocks.
 */
union cavm_psm_djcnt_extdecr
{
    uint64_t u;
    struct cavm_psm_djcnt_extdecr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) Reserved. */
        uint64_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_31         : 32;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_djcnt_extdecr_s cn10; */
    struct cavm_psm_djcnt_extdecr_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) Reserved. */
        uint64_t reserved_31           : 1;
        uint64_t djcnt_decr_id_3       : 7;  /**< [ 30: 24](R/W) Reserved. */
        uint64_t reserved_23           : 1;
        uint64_t djcnt_decr_id_2       : 7;  /**< [ 22: 16](R/W) Reserved. */
        uint64_t reserved_15           : 1;
        uint64_t djcnt_decr_id_1       : 7;  /**< [ 14:  8](R/W) Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t djcnt_decr_id_0       : 7;  /**< [  6:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t djcnt_decr_id_0       : 7;  /**< [  6:  0](R/W) Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t djcnt_decr_id_1       : 7;  /**< [ 14:  8](R/W) Reserved. */
        uint64_t reserved_15           : 1;
        uint64_t djcnt_decr_id_2       : 7;  /**< [ 22: 16](R/W) Reserved. */
        uint64_t reserved_23           : 1;
        uint64_t djcnt_decr_id_3       : 7;  /**< [ 30: 24](R/W) Reserved. */
        uint64_t reserved_31           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_psm_djcnt_extdecr_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) Reserved. */
        uint64_t reserved_31           : 1;
        uint64_t cest3_decr_id         : 7;  /**< [ 30: 24](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST3.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST2_DECR_ID], [CEST1_DECR_ID], or [CEST0_DECR_ID]. */
        uint64_t reserved_23           : 1;
        uint64_t cest2_decr_id         : 7;  /**< [ 22: 16](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST2.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST3_DECR_ID], [CEST1_DECR_ID], or [CEST0_DECR_ID]. */
        uint64_t reserved_15           : 1;
        uint64_t cest1_decr_id         : 7;  /**< [ 14:  8](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST1.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST3_DECR_ID], [CEST2_DECR_ID], or [CEST0_DECR_ID]. */
        uint64_t reserved_7            : 1;
        uint64_t cest0_decr_id         : 7;  /**< [  6:  0](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST0.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST3_DECR_ID], [CEST2_DECR_ID], or [CEST1_DECR_ID]. */
#else /* Word 0 - Little Endian */
        uint64_t cest0_decr_id         : 7;  /**< [  6:  0](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST0.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST3_DECR_ID], [CEST2_DECR_ID], or [CEST1_DECR_ID]. */
        uint64_t reserved_7            : 1;
        uint64_t cest1_decr_id         : 7;  /**< [ 14:  8](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST1.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST3_DECR_ID], [CEST2_DECR_ID], or [CEST0_DECR_ID]. */
        uint64_t reserved_15           : 1;
        uint64_t cest2_decr_id         : 7;  /**< [ 22: 16](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST2.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST3_DECR_ID], [CEST1_DECR_ID], or [CEST0_DECR_ID]. */
        uint64_t reserved_23           : 1;
        uint64_t cest3_decr_id         : 7;  /**< [ 30: 24](R/W) Selects the DJCNT counter that will be decremented by the PSM when it
                                                                 receives a write completion signal from CEST3.  Values 1-127 will
                                                                 select a DJCNT, while 0 will cause the event signal to have no effect
                                                                 on any counter.  This field may not select the same counter
                                                                 as [CEST2_DECR_ID], [CEST1_DECR_ID], or [CEST0_DECR_ID]. */
        uint64_t reserved_31           : 1;
        uint64_t djcnt_decr_id_4       : 7;  /**< [ 38: 32](R/W) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t djcnt_decr_id_5       : 7;  /**< [ 46: 40](R/W) Reserved. */
        uint64_t reserved_47           : 1;
        uint64_t djcnt_decr_id_6       : 7;  /**< [ 54: 48](R/W) Reserved. */
        uint64_t reserved_55           : 1;
        uint64_t djcnt_decr_id_7       : 7;  /**< [ 62: 56](R/W) Reserved. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_djcnt_extdecr cavm_psm_djcnt_extdecr_t;

#define CAVM_PSM_DJCNT_EXTDECR CAVM_PSM_DJCNT_EXTDECR_FUNC()
static inline uint64_t CAVM_PSM_DJCNT_EXTDECR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_DJCNT_EXTDECR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f3000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f3000ll;
    __cavm_csr_fatal("PSM_DJCNT_EXTDECR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_DJCNT_EXTDECR cavm_psm_djcnt_extdecr_t
#define bustype_CAVM_PSM_DJCNT_EXTDECR CSR_TYPE_NCB
#define basename_CAVM_PSM_DJCNT_EXTDECR "PSM_DJCNT_EXTDECR"
#define busnum_CAVM_PSM_DJCNT_EXTDECR 0
#define arguments_CAVM_PSM_DJCNT_EXTDECR -1,-1,-1,-1

/**
 * Register (NCB) psm_errcap_queue_badcmd#
 *
 * PHY Scheduler Queue Bad Command Capture Registers
 * This register reports the status of bad command errors reported by queues.
 */
union cavm_psm_errcap_queue_badcmdx
{
    uint64_t u;
    struct cavm_psm_errcap_queue_badcmdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t queue_bad_cmd         : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding queue has reported a bad command.
                                                                 Write 1 to clear. */
#else /* Word 0 - Little Endian */
        uint64_t queue_bad_cmd         : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding queue has reported a bad command.
                                                                 Write 1 to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_errcap_queue_badcmdx_s cn; */
};
typedef union cavm_psm_errcap_queue_badcmdx cavm_psm_errcap_queue_badcmdx_t;

static inline uint64_t CAVM_PSM_ERRCAP_QUEUE_BADCMDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_ERRCAP_QUEUE_BADCMDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x8600010fb000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x8600010fb000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_ERRCAP_QUEUE_BADCMDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) cavm_psm_errcap_queue_badcmdx_t
#define bustype_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) "PSM_ERRCAP_QUEUE_BADCMDX"
#define busnum_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) (a)
#define arguments_CAVM_PSM_ERRCAP_QUEUE_BADCMDX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_gmctrl
 *
 * PHY Scheduler Guest Machine Control Registers
 * These registers control which RVU PFs/VFs the PSM communicates with
 * for SSO add-work commands and NPA free pointer commands.
 */
union cavm_psm_gmctrl
{
    uint64_t u;
    struct cavm_psm_gmctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sso_pf_func           : 16; /**< [ 31: 16](R/W) SSO PF and function used for SSO add-work requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t npa_pf_func           : 16; /**< [ 15:  0](R/W) NPA PF and function used for NPA free pointer requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t npa_pf_func           : 16; /**< [ 15:  0](R/W) NPA PF and function used for NPA free pointer requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t sso_pf_func           : 16; /**< [ 31: 16](R/W) SSO PF and function used for SSO add-work requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_gmctrl_s cn; */
};
typedef union cavm_psm_gmctrl cavm_psm_gmctrl_t;

#define CAVM_PSM_GMCTRL CAVM_PSM_GMCTRL_FUNC()
static inline uint64_t CAVM_PSM_GMCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_GMCTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f8000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f8000ll;
    __cavm_csr_fatal("PSM_GMCTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_GMCTRL cavm_psm_gmctrl_t
#define bustype_CAVM_PSM_GMCTRL CSR_TYPE_NCB
#define basename_CAVM_PSM_GMCTRL "PSM_GMCTRL"
#define busnum_CAVM_PSM_GMCTRL 0
#define arguments_CAVM_PSM_GMCTRL -1,-1,-1,-1

/**
 * Register (NCB) psm_gmctrl#
 *
 * PHY Scheduler Guest Machine Control Registers
 * These registers control which RVU PFs/VFs the PSM communicates with
 * for SSO add-work commands and NPA free pointer commands.
 */
union cavm_psm_gmctrlx
{
    uint64_t u;
    struct cavm_psm_gmctrlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sso_pf_func           : 16; /**< [ 31: 16](R/W) SSO PF and function used for SSO add-work requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t npa_pf_func           : 16; /**< [ 15:  0](R/W) NPA PF and function used for NPA free pointer requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t npa_pf_func           : 16; /**< [ 15:  0](R/W) NPA PF and function used for NPA free pointer requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t sso_pf_func           : 16; /**< [ 31: 16](R/W) SSO PF and function used for SSO add-work requests. Format specified
                                                                 by RVU_PF_FUNC_S. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_gmctrlx_s cn; */
};
typedef union cavm_psm_gmctrlx cavm_psm_gmctrlx_t;

static inline uint64_t CAVM_PSM_GMCTRLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_GMCTRLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a>=1)&&(a<=7)))
        return 0x8600010f8000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a>=1)&&(a<=7)))
        return 0x8600010f8000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_GMCTRLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_GMCTRLX(a) cavm_psm_gmctrlx_t
#define bustype_CAVM_PSM_GMCTRLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_GMCTRLX(a) "PSM_GMCTRLX"
#define busnum_CAVM_PSM_GMCTRLX(a) (a)
#define arguments_CAVM_PSM_GMCTRLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_log_base
 *
 * PHY Scheduler Log Base Register
 * This register sets the location in memory of the PSM log circular buffer.
 */
union cavm_psm_log_base
{
    uint64_t u;
    struct cavm_psm_log_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) GMID. */
        uint64_t reserved_53_60        : 8;
        uint64_t base_ptr              : 53; /**< [ 52:  0](R/W/H) Byte address for the command log base pointer. Must be cacheline
                                                                 (128 byte) aligned. */
#else /* Word 0 - Little Endian */
        uint64_t base_ptr              : 53; /**< [ 52:  0](R/W/H) Byte address for the command log base pointer. Must be cacheline
                                                                 (128 byte) aligned. */
        uint64_t reserved_53_60        : 8;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) GMID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_log_base_s cn; */
};
typedef union cavm_psm_log_base cavm_psm_log_base_t;

#define CAVM_PSM_LOG_BASE CAVM_PSM_LOG_BASE_FUNC()
static inline uint64_t CAVM_PSM_LOG_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_LOG_BASE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f4010ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f4010ll;
    __cavm_csr_fatal("PSM_LOG_BASE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_LOG_BASE cavm_psm_log_base_t
#define bustype_CAVM_PSM_LOG_BASE CSR_TYPE_NCB
#define basename_CAVM_PSM_LOG_BASE "PSM_LOG_BASE"
#define busnum_CAVM_PSM_LOG_BASE 0
#define arguments_CAVM_PSM_LOG_BASE -1,-1,-1,-1

/**
 * Register (NCB) psm_log_cfg
 *
 * PHY Scheduler Log Configuration Register
 * This register configures the command log circular buffer and enables the
 * logging feature. The progress of written log entries can be tracked
 * using the PSM_LOG_PTR register. When the pointer wraps around to the
 * beginning of the circular buffer, the PSM log rollover interrupt is
 * triggered.
 *
 * Each log entry is 256 bits.  The log entry format is specified by PSM_LOG_S.
 *
 * Log entries are buffered in an internal buffer before being written 128
 * bytes at a time (i.e., 4 entries at a time). If PSM_LOG_CFG[FLUSH] is
 * written and the number of entries in the internal buffer is not a multiple
 * of 4, then the log will be padded with zeros to account for missing
 * entries. The internal buffer can store up to 256 entries. If an additional
 * log event (e.g., a job start) occurs while the buffer is full and waiting
 * for a write to complete, then PSM_INT_ERRINT_SUM_W1C[LOVF] is set and a
 * PSM_INT_VEC_E::ERRINT interrupt is triggered.
 */
union cavm_psm_log_cfg
{
    uint64_t u;
    struct cavm_psm_log_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t log_thold             : 4;  /**< [ 51: 48](R/W) Threshold for initiating a write operation to dump log entries to memory.
                                                                 The threshold value is in units of cachelines (128 bytes, i.e., 4 log
                                                                 entry chunks). The valid range is 0x1-0xF, and a large threshold will
                                                                 likely result in frequent overflow errors. */
        uint64_t reserved_45_47        : 3;
        uint64_t tmem                  : 1;  /**< [ 44: 44](R/W) Location of the log buffer.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_41_43        : 3;
        uint64_t flush                 : 1;  /**< [ 40: 40](R/W/H) When written 1, flushes any pending log entries remaining
                                                                 in the internal buffer. Automatically clears to zero after the flush
                                                                 completes and all log entries have been committed to memory. */
        uint64_t reserved_35_39        : 5;
        uint64_t log_nonjob_en         : 1;  /**< [ 34: 34](R/W) Enable output log of nonjob commands. */
        uint64_t log_jobrsp_en         : 1;  /**< [ 33: 33](R/W) Enable output log of all job completions and errors. */
        uint64_t log_start_en          : 1;  /**< [ 32: 32](R/W) Enable output log of all job starts. */
        uint64_t reserved_16_31        : 16;
        uint64_t log_size              : 16; /**< [ 15:  0](R/W) Size in cache lines (128 byte units) of the circular buffer log. */
#else /* Word 0 - Little Endian */
        uint64_t log_size              : 16; /**< [ 15:  0](R/W) Size in cache lines (128 byte units) of the circular buffer log. */
        uint64_t reserved_16_31        : 16;
        uint64_t log_start_en          : 1;  /**< [ 32: 32](R/W) Enable output log of all job starts. */
        uint64_t log_jobrsp_en         : 1;  /**< [ 33: 33](R/W) Enable output log of all job completions and errors. */
        uint64_t log_nonjob_en         : 1;  /**< [ 34: 34](R/W) Enable output log of nonjob commands. */
        uint64_t reserved_35_39        : 5;
        uint64_t flush                 : 1;  /**< [ 40: 40](R/W/H) When written 1, flushes any pending log entries remaining
                                                                 in the internal buffer. Automatically clears to zero after the flush
                                                                 completes and all log entries have been committed to memory. */
        uint64_t reserved_41_43        : 3;
        uint64_t tmem                  : 1;  /**< [ 44: 44](R/W) Location of the log buffer.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_45_47        : 3;
        uint64_t log_thold             : 4;  /**< [ 51: 48](R/W) Threshold for initiating a write operation to dump log entries to memory.
                                                                 The threshold value is in units of cachelines (128 bytes, i.e., 4 log
                                                                 entry chunks). The valid range is 0x1-0xF, and a large threshold will
                                                                 likely result in frequent overflow errors. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_log_cfg_s cn; */
};
typedef union cavm_psm_log_cfg cavm_psm_log_cfg_t;

#define CAVM_PSM_LOG_CFG CAVM_PSM_LOG_CFG_FUNC()
static inline uint64_t CAVM_PSM_LOG_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_LOG_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f4000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f4000ll;
    __cavm_csr_fatal("PSM_LOG_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_LOG_CFG cavm_psm_log_cfg_t
#define bustype_CAVM_PSM_LOG_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_LOG_CFG "PSM_LOG_CFG"
#define busnum_CAVM_PSM_LOG_CFG 0
#define arguments_CAVM_PSM_LOG_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_log_ptr
 *
 * PHY Scheduler Log Pointer Register
 * This register indicates the current log pointer, where the next
 * log entry will be written. When the pointer wraps around to the
 * beginning of the circular buffer, the PSM_INT_ERRINT_SUM_W1C[LROLL] is set
 * and a PSM_INT_VEC_E::ERRINT interrupt is triggered.
 */
union cavm_psm_log_ptr
{
    uint64_t u;
    struct cavm_psm_log_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](RO/H) GMID. */
        uint64_t reserved_53_60        : 8;
        uint64_t log_ptr               : 53; /**< [ 52:  0](RO/H) System memory IOVA of the current output pointer for the command trace
                                                                 log.  Note that PSM always writes the log 128 bytes at a time. */
#else /* Word 0 - Little Endian */
        uint64_t log_ptr               : 53; /**< [ 52:  0](RO/H) System memory IOVA of the current output pointer for the command trace
                                                                 log.  Note that PSM always writes the log 128 bytes at a time. */
        uint64_t reserved_53_60        : 8;
        uint64_t gmid                  : 3;  /**< [ 63: 61](RO/H) GMID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_log_ptr_s cn; */
};
typedef union cavm_psm_log_ptr cavm_psm_log_ptr_t;

#define CAVM_PSM_LOG_PTR CAVM_PSM_LOG_PTR_FUNC()
static inline uint64_t CAVM_PSM_LOG_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_LOG_PTR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f4020ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f4020ll;
    __cavm_csr_fatal("PSM_LOG_PTR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_LOG_PTR cavm_psm_log_ptr_t
#define bustype_CAVM_PSM_LOG_PTR CSR_TYPE_NCB
#define basename_CAVM_PSM_LOG_PTR "PSM_LOG_PTR"
#define busnum_CAVM_PSM_LOG_PTR 0
#define arguments_CAVM_PSM_LOG_PTR -1,-1,-1,-1

/**
 * Register (NCB) psm_nring#_addr
 *
 * PHY Scheduler Notification Ring Address Registers
 * This register sets the base address for a PSM notification
 * ring.
 */
union cavm_psm_nringx_addr
{
    uint64_t u;
    struct cavm_psm_nringx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) GMID. */
        uint64_t reserved_53_60        : 8;
        uint64_t base_ptr              : 53; /**< [ 52:  0](R/W/H) Base address of the notification ring.  Must be 128-bit
                                                                 aligned.
                                                                 If PSM_NRING()_CTRL[TMEM] is 0, this is a local
                                                                 address within BPHY SMEM. If PSM_NRING()_CTRL[TMEM] is 1, this is
                                                                 an IOVA. */
#else /* Word 0 - Little Endian */
        uint64_t base_ptr              : 53; /**< [ 52:  0](R/W/H) Base address of the notification ring.  Must be 128-bit
                                                                 aligned.
                                                                 If PSM_NRING()_CTRL[TMEM] is 0, this is a local
                                                                 address within BPHY SMEM. If PSM_NRING()_CTRL[TMEM] is 1, this is
                                                                 an IOVA. */
        uint64_t reserved_53_60        : 8;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) GMID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_nringx_addr_s cn; */
};
typedef union cavm_psm_nringx_addr cavm_psm_nringx_addr_t;

static inline uint64_t CAVM_PSM_NRINGX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_NRINGX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=15))
        return 0x8600010c0010ll + 0x100ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x8600010c0010ll + 0x100ll * ((a) & 0xf);
    __cavm_csr_fatal("PSM_NRINGX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_NRINGX_ADDR(a) cavm_psm_nringx_addr_t
#define bustype_CAVM_PSM_NRINGX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_NRINGX_ADDR(a) "PSM_NRINGX_ADDR"
#define busnum_CAVM_PSM_NRINGX_ADDR(a) (a)
#define arguments_CAVM_PSM_NRINGX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_nring#_cfg
 *
 * PHY Scheduler Notification Ring Configuration Registers
 * These registers contain configuration and status info for
 * PSM notification rings.  This register can be written
 * during initialization or for diagnostic testing, but should
 * not be written during operation.
 */
union cavm_psm_nringx_cfg
{
    uint64_t u;
    struct cavm_psm_nringx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t gen_num               : 8;  /**< [ 55: 48](R/W/H) Value of the generation number to be written in the next
                                                                 notification entry.  This value is incremented by 0x1 when
                                                                 the [NEXT_ENTRY] index wraps within the ring buffer. */
        uint64_t reserved_36_47        : 12;
        uint64_t next_entry            : 20; /**< [ 35: 16](R/W/H) Index of the next entry to be written within the notification
                                                                 ring.  This value increments by 0x1 when an entry is written,
                                                                 and wraps to 0x0 after writing the last entry as determined by
                                                                 the [SIZE] field. */
        uint64_t reserved_9_15         : 7;
        uint64_t tmem                  : 1;  /**< [  8:  8](R/W) Location of the notification ring.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_4_7          : 4;
        uint64_t size                  : 4;  /**< [  3:  0](R/W) Size of the notification ring buffer in 128-bit entries.
                                                                 0x0-0x1 = Reserved.
                                                                 0x2 = 256 entries.
                                                                 0x3 = 1K entries.
                                                                 0x4 = 4K entries.
                                                                 0x5 = 16K entries.
                                                                 0x6 = 64K entries.
                                                                 0x7-0xF = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 4;  /**< [  3:  0](R/W) Size of the notification ring buffer in 128-bit entries.
                                                                 0x0-0x1 = Reserved.
                                                                 0x2 = 256 entries.
                                                                 0x3 = 1K entries.
                                                                 0x4 = 4K entries.
                                                                 0x5 = 16K entries.
                                                                 0x6 = 64K entries.
                                                                 0x7-0xF = Reserved. */
        uint64_t reserved_4_7          : 4;
        uint64_t tmem                  : 1;  /**< [  8:  8](R/W) Location of the notification ring.
                                                                 0 = BPHY SMEM.
                                                                 1 = Last-level cache or DRAM. */
        uint64_t reserved_9_15         : 7;
        uint64_t next_entry            : 20; /**< [ 35: 16](R/W/H) Index of the next entry to be written within the notification
                                                                 ring.  This value increments by 0x1 when an entry is written,
                                                                 and wraps to 0x0 after writing the last entry as determined by
                                                                 the [SIZE] field. */
        uint64_t reserved_36_47        : 12;
        uint64_t gen_num               : 8;  /**< [ 55: 48](R/W/H) Value of the generation number to be written in the next
                                                                 notification entry.  This value is incremented by 0x1 when
                                                                 the [NEXT_ENTRY] index wraps within the ring buffer. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_nringx_cfg_s cn; */
};
typedef union cavm_psm_nringx_cfg cavm_psm_nringx_cfg_t;

static inline uint64_t CAVM_PSM_NRINGX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_NRINGX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=15))
        return 0x8600010c0000ll + 0x100ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x8600010c0000ll + 0x100ll * ((a) & 0xf);
    __cavm_csr_fatal("PSM_NRINGX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_NRINGX_CFG(a) cavm_psm_nringx_cfg_t
#define bustype_CAVM_PSM_NRINGX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_NRINGX_CFG(a) "PSM_NRINGX_CFG"
#define busnum_CAVM_PSM_NRINGX_CFG(a) (a)
#define arguments_CAVM_PSM_NRINGX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_nring_cmd
 *
 * PHY Scheduler Notification Ring Current Command Register
 * Reserved.
 */
union cavm_psm_nring_cmd
{
    uint64_t u;
    struct cavm_psm_nring_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cmd_lo                : 64; /**< [ 63:  0](RO/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_lo                : 64; /**< [ 63:  0](RO/H) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_nring_cmd_s cn; */
};
typedef union cavm_psm_nring_cmd cavm_psm_nring_cmd_t;

#define CAVM_PSM_NRING_CMD CAVM_PSM_NRING_CMD_FUNC()
static inline uint64_t CAVM_PSM_NRING_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_NRING_CMD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010c2000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010c2000ll;
    __cavm_csr_fatal("PSM_NRING_CMD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_NRING_CMD cavm_psm_nring_cmd_t
#define bustype_CAVM_PSM_NRING_CMD CSR_TYPE_NCB
#define basename_CAVM_PSM_NRING_CMD "PSM_NRING_CMD"
#define busnum_CAVM_PSM_NRING_CMD 0
#define arguments_CAVM_PSM_NRING_CMD -1,-1,-1,-1

/**
 * Register (NCB) psm_nring_ctrl
 *
 * PHY Scheduler Notification Ring Control Register
 * This register contains configuration and status info for
 * PSM notification rings.
 */
union cavm_psm_nring_ctrl
{
    uint64_t u;
    struct cavm_psm_nring_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t discard               : 1;  /**< [ 63: 63](R/W/H) Reserved. */
        uint64_t reserved_16_62        : 47;
        uint64_t ring_en               : 16; /**< [ 15:  0](R/W) Enable bits for the notification rings. */
#else /* Word 0 - Little Endian */
        uint64_t ring_en               : 16; /**< [ 15:  0](R/W) Enable bits for the notification rings. */
        uint64_t reserved_16_62        : 47;
        uint64_t discard               : 1;  /**< [ 63: 63](R/W/H) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_nring_ctrl_s cn; */
};
typedef union cavm_psm_nring_ctrl cavm_psm_nring_ctrl_t;

#define CAVM_PSM_NRING_CTRL CAVM_PSM_NRING_CTRL_FUNC()
static inline uint64_t CAVM_PSM_NRING_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_NRING_CTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010c1000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010c1000ll;
    __cavm_csr_fatal("PSM_NRING_CTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_NRING_CTRL cavm_psm_nring_ctrl_t
#define bustype_CAVM_PSM_NRING_CTRL CSR_TYPE_NCB
#define basename_CAVM_PSM_NRING_CTRL "PSM_NRING_CTRL"
#define busnum_CAVM_PSM_NRING_CTRL 0
#define arguments_CAVM_PSM_NRING_CTRL -1,-1,-1,-1

/**
 * Register (NCB) psm_queue#_cfg
 *
 * PHY Scheduler Queue Configuration Registers
 * These registers configure the start and end of each circular command
 * queue within the queue RAM. The queue RAM contains PSM_CONST1[QRAM_SIZE] entries, and
 * software must allocate the queues so that they do not overlap. These
 * registers should be written to reconfigure a PSM queue only when
 * the queue is idle.
 *
 * Note that writing to a PSM_QUEUE()_CFG register will automatically reset
 * the head and tail pointers of the corresponding queue. Any commands in the
 * queue before the write will be dropped and the queue will be reset to an
 * empty state.
 *
 * Also, note that at reset, all queues are effectively uninitialized, and
 * PSM_QUEUE()_SPACE will return 0x0. Queues must be initialized by writing to
 * PSM_QUEUE()_CFG before they can be used. This is true even in the case of
 * a single-entry queue that starts and ends at entry 0.
 */
union cavm_psm_queuex_cfg
{
    uint64_t u;
    struct cavm_psm_queuex_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t prio                  : 2;  /**< [ 33: 32](R/W) Queue priority. 0x0 is the highest priority and 0x3 is the lowest. */
        uint64_t reserved_31           : 1;
        uint64_t top                   : 15; /**< [ 30: 16](R/W) Indicates the highest queue RAM address allocated for the
                                                                 queue. Must be greater than or equal to the [BASE] address pointer. */
        uint64_t reserved_15           : 1;
        uint64_t base                  : 15; /**< [ 14:  0](R/W) Indicates the lowest queue RAM address allocated for the
                                                                 queue. Must be less than or equal to the [TOP] address pointer. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 15; /**< [ 14:  0](R/W) Indicates the lowest queue RAM address allocated for the
                                                                 queue. Must be less than or equal to the [TOP] address pointer. */
        uint64_t reserved_15           : 1;
        uint64_t top                   : 15; /**< [ 30: 16](R/W) Indicates the highest queue RAM address allocated for the
                                                                 queue. Must be greater than or equal to the [BASE] address pointer. */
        uint64_t reserved_31           : 1;
        uint64_t prio                  : 2;  /**< [ 33: 32](R/W) Queue priority. 0x0 is the highest priority and 0x3 is the lowest. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_cfg_s cn; */
};
typedef union cavm_psm_queuex_cfg cavm_psm_queuex_cfg_t;

static inline uint64_t CAVM_PSM_QUEUEX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001001000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001001000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_CFG(a) cavm_psm_queuex_cfg_t
#define bustype_CAVM_PSM_QUEUEX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_CFG(a) "PSM_QUEUEX_CFG"
#define busnum_CAVM_PSM_QUEUEX_CFG(a) (a)
#define arguments_CAVM_PSM_QUEUEX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_cmd_hi
 *
 * PHY Schedulder Queue Command High Pseudo-Registers
 * See PSM_QUEUE()_CMD_LO.
 */
union cavm_psm_queuex_cmd_hi
{
    uint64_t u;
    struct cavm_psm_queuex_cmd_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t command_hi            : 64; /**< [ 63:  0](WO) The high 64 bits of a PSM command. */
#else /* Word 0 - Little Endian */
        uint64_t command_hi            : 64; /**< [ 63:  0](WO) The high 64 bits of a PSM command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_cmd_hi_s cn; */
};
typedef union cavm_psm_queuex_cmd_hi cavm_psm_queuex_cmd_hi_t;

static inline uint64_t CAVM_PSM_QUEUEX_CMD_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_CMD_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001000008ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001000008ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_CMD_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_CMD_HI(a) cavm_psm_queuex_cmd_hi_t
#define bustype_CAVM_PSM_QUEUEX_CMD_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_CMD_HI(a) "PSM_QUEUEX_CMD_HI"
#define busnum_CAVM_PSM_QUEUEX_CMD_HI(a) (a)
#define arguments_CAVM_PSM_QUEUEX_CMD_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_cmd_lo
 *
 * PHY Scheduler Queue Command Low Pseudo-Registers
 * A write to this register enqueues a command in a command queue.
 * Two separate 64-bit writes to PSM_QUEUE()_CMD_LO and
 * PSM_QUEUE()_CMD_HI are used to enqueue a single command. The
 * write to PSM_QUEUE()_CMD_LO must happen first, and the value is buffered
 * in PSM until the next write to PSM_QUEUE()_CMD_HI for the same queue.
 *
 * If the queue is full when adding a command, a PSM_INT_VEC_E::QOVF()
 * interrupt is triggered and the command is dropped.
 */
union cavm_psm_queuex_cmd_lo
{
    uint64_t u;
    struct cavm_psm_queuex_cmd_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t command_lo            : 64; /**< [ 63:  0](R/W/H) The low 64 bits of a PSM command. */
#else /* Word 0 - Little Endian */
        uint64_t command_lo            : 64; /**< [ 63:  0](R/W/H) The low 64 bits of a PSM command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_cmd_lo_s cn; */
};
typedef union cavm_psm_queuex_cmd_lo cavm_psm_queuex_cmd_lo_t;

static inline uint64_t CAVM_PSM_QUEUEX_CMD_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_CMD_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001000000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001000000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_CMD_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_CMD_LO(a) cavm_psm_queuex_cmd_lo_t
#define bustype_CAVM_PSM_QUEUEX_CMD_LO(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_CMD_LO(a) "PSM_QUEUEX_CMD_LO"
#define busnum_CAVM_PSM_QUEUEX_CMD_LO(a) (a)
#define arguments_CAVM_PSM_QUEUEX_CMD_LO(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_info
 *
 * PHY Scheduler Queue Info Register
 * These registers contain internal information about the queue.
 */
union cavm_psm_queuex_info
{
    uint64_t u;
    struct cavm_psm_queuex_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cur_cmd_jobtype       : 8;  /**< [ 63: 56](RO/H) Contains the JOBTYPE field of the currently executing command.  This
                                                                 is only valid when [CUR_CMD_VLD] is set. */
        uint64_t cur_cmd_wait_cond     : 8;  /**< [ 55: 48](RO/H) Contains the WAIT_COND field of the currently executing command.
                                                                 This is only valid when [CUR_CMD_VLD] is set. */
        uint64_t cur_cmd_subopcode     : 2;  /**< [ 47: 46](RO/H) Contains the sub-opcode of the currently executing command.
                                                                 This is only valid when [CUR_CMD_VLD] is set.  For ADDJOB and
                                                                 CONTJOB commands, the sub-opcode contains the RSRC_SET field.
                                                                 For ADDWORK commands, the sub-opcode contains the TAGTYPE field.
                                                                 For other commands, the sub-opcode is reserved. */
        uint64_t cur_cmd_opcode        : 6;  /**< [ 45: 40](RO/H) Contains the opcode of the currently executing command.  This
                                                                 is only valid when [CUR_CMD_VLD] is set. */
        uint64_t reserved_39           : 1;
        uint64_t cont_mab_id           : 7;  /**< [ 38: 32](RO/H) When [IN_CONT_SEQ] is set to one, this field provides the MAB ID of the
                                                                 MHAB/MDAB reserved by the CONTJOB. */
        uint64_t badcmd_subopc         : 2;  /**< [ 31: 30](R/W/H) Contains the sub-opcode for the most recent bad command.  Write any nonzero value to clear. */
        uint64_t badcmd_opc            : 6;  /**< [ 29: 24](R/W/H) Contains the opcode for the most recent bad command.  Write any nonzero value to clear. */
        uint64_t runjob_ctr            : 8;  /**< [ 23: 16](R/W/H) Contains the current count of running jobs issued by the queue. */
        uint64_t queue_mabq            : 1;  /**< [ 15: 15](RO/H) Reserved. */
        uint64_t queue_njreq           : 3;  /**< [ 14: 12](RO/H) Reserved. */
        uint64_t state                 : 4;  /**< [ 11:  8](RO/H) Reserved. */
        uint64_t queue_jobreq          : 1;  /**< [  7:  7](RO/H) Reserved. */
        uint64_t cont_job_wait_cdt     : 1;  /**< [  6:  6](RO/H) Reserved. */
        uint64_t cont_job_wait_done    : 1;  /**< [  5:  5](RO/H) Reserved. */
        uint64_t rdy_for_followup      : 1;  /**< [  4:  4](RO/H) When set, indicates the queue is ready to schedule a follow-up job
                                                                 after completing a continued job. */
        uint64_t in_cont_seq           : 1;  /**< [  3:  3](RO/H) When set, indicates that the queue holds a reservation from a
                                                                 continued job. */
        uint64_t cur_cmd_vld           : 1;  /**< [  2:  2](RO/H) When set, indicates that the command at the head of the queue
                                                                 is valid and is being processed. */
        uint64_t new_cmdlo_vld         : 1;  /**< [  1:  1](RO/H) Reserved. */
        uint64_t new_cmd_vld           : 1;  /**< [  0:  0](RO/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t new_cmd_vld           : 1;  /**< [  0:  0](RO/H) Reserved. */
        uint64_t new_cmdlo_vld         : 1;  /**< [  1:  1](RO/H) Reserved. */
        uint64_t cur_cmd_vld           : 1;  /**< [  2:  2](RO/H) When set, indicates that the command at the head of the queue
                                                                 is valid and is being processed. */
        uint64_t in_cont_seq           : 1;  /**< [  3:  3](RO/H) When set, indicates that the queue holds a reservation from a
                                                                 continued job. */
        uint64_t rdy_for_followup      : 1;  /**< [  4:  4](RO/H) When set, indicates the queue is ready to schedule a follow-up job
                                                                 after completing a continued job. */
        uint64_t cont_job_wait_done    : 1;  /**< [  5:  5](RO/H) Reserved. */
        uint64_t cont_job_wait_cdt     : 1;  /**< [  6:  6](RO/H) Reserved. */
        uint64_t queue_jobreq          : 1;  /**< [  7:  7](RO/H) Reserved. */
        uint64_t state                 : 4;  /**< [ 11:  8](RO/H) Reserved. */
        uint64_t queue_njreq           : 3;  /**< [ 14: 12](RO/H) Reserved. */
        uint64_t queue_mabq            : 1;  /**< [ 15: 15](RO/H) Reserved. */
        uint64_t runjob_ctr            : 8;  /**< [ 23: 16](R/W/H) Contains the current count of running jobs issued by the queue. */
        uint64_t badcmd_opc            : 6;  /**< [ 29: 24](R/W/H) Contains the opcode for the most recent bad command.  Write any nonzero value to clear. */
        uint64_t badcmd_subopc         : 2;  /**< [ 31: 30](R/W/H) Contains the sub-opcode for the most recent bad command.  Write any nonzero value to clear. */
        uint64_t cont_mab_id           : 7;  /**< [ 38: 32](RO/H) When [IN_CONT_SEQ] is set to one, this field provides the MAB ID of the
                                                                 MHAB/MDAB reserved by the CONTJOB. */
        uint64_t reserved_39           : 1;
        uint64_t cur_cmd_opcode        : 6;  /**< [ 45: 40](RO/H) Contains the opcode of the currently executing command.  This
                                                                 is only valid when [CUR_CMD_VLD] is set. */
        uint64_t cur_cmd_subopcode     : 2;  /**< [ 47: 46](RO/H) Contains the sub-opcode of the currently executing command.
                                                                 This is only valid when [CUR_CMD_VLD] is set.  For ADDJOB and
                                                                 CONTJOB commands, the sub-opcode contains the RSRC_SET field.
                                                                 For ADDWORK commands, the sub-opcode contains the TAGTYPE field.
                                                                 For other commands, the sub-opcode is reserved. */
        uint64_t cur_cmd_wait_cond     : 8;  /**< [ 55: 48](RO/H) Contains the WAIT_COND field of the currently executing command.
                                                                 This is only valid when [CUR_CMD_VLD] is set. */
        uint64_t cur_cmd_jobtype       : 8;  /**< [ 63: 56](RO/H) Contains the JOBTYPE field of the currently executing command.  This
                                                                 is only valid when [CUR_CMD_VLD] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_info_s cn; */
};
typedef union cavm_psm_queuex_info cavm_psm_queuex_info_t;

static inline uint64_t CAVM_PSM_QUEUEX_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001005000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001005000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_INFO(a) cavm_psm_queuex_info_t
#define bustype_CAVM_PSM_QUEUEX_INFO(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_INFO(a) "PSM_QUEUEX_INFO"
#define busnum_CAVM_PSM_QUEUEX_INFO(a) (a)
#define arguments_CAVM_PSM_QUEUEX_INFO(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_ptr
 *
 * PHY Scheduler Queue Pointer Register
 * These registers return the status of each queue's head and tail pointers.
 */
union cavm_psm_queuex_ptr
{
    uint64_t u;
    struct cavm_psm_queuex_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t full                  : 1;  /**< [ 33: 33](R/W/H) Indicates the queue is full. */
        uint64_t notempty              : 1;  /**< [ 32: 32](R/W/H) Indicates there are commands in the queue. */
        uint64_t reserved_31           : 1;
        uint64_t tail                  : 15; /**< [ 30: 16](R/W/H) Tail pointer in the queue. This index points to the location where the
                                                                 next item will be added to the queue. */
        uint64_t reserved_15           : 1;
        uint64_t head                  : 15; /**< [ 14:  0](R/W/H) The head pointer in the queue. Points to the next entry to be executed
                                                                 from the queue. */
#else /* Word 0 - Little Endian */
        uint64_t head                  : 15; /**< [ 14:  0](R/W/H) The head pointer in the queue. Points to the next entry to be executed
                                                                 from the queue. */
        uint64_t reserved_15           : 1;
        uint64_t tail                  : 15; /**< [ 30: 16](R/W/H) Tail pointer in the queue. This index points to the location where the
                                                                 next item will be added to the queue. */
        uint64_t reserved_31           : 1;
        uint64_t notempty              : 1;  /**< [ 32: 32](R/W/H) Indicates there are commands in the queue. */
        uint64_t full                  : 1;  /**< [ 33: 33](R/W/H) Indicates the queue is full. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_ptr_s cn; */
};
typedef union cavm_psm_queuex_ptr cavm_psm_queuex_ptr_t;

static inline uint64_t CAVM_PSM_QUEUEX_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001002000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001002000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_PTR(a) cavm_psm_queuex_ptr_t
#define bustype_CAVM_PSM_QUEUEX_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_PTR(a) "PSM_QUEUEX_PTR"
#define busnum_CAVM_PSM_QUEUEX_PTR(a) (a)
#define arguments_CAVM_PSM_QUEUEX_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_space
 *
 * PHY Scheduler Queue Space Register
 * These registers report the number of free entries in each queue.
 */
union cavm_psm_queuex_space
{
    uint64_t u;
    struct cavm_psm_queuex_space_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t space                 : 16; /**< [ 15:  0](RO/H) The number of commands that can be added to the queue. */
#else /* Word 0 - Little Endian */
        uint64_t space                 : 16; /**< [ 15:  0](RO/H) The number of commands that can be added to the queue. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_space_s cn; */
};
typedef union cavm_psm_queuex_space cavm_psm_queuex_space_t;

static inline uint64_t CAVM_PSM_QUEUEX_SPACE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_SPACE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001003000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001003000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_SPACE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_SPACE(a) cavm_psm_queuex_space_t
#define bustype_CAVM_PSM_QUEUEX_SPACE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_SPACE(a) "PSM_QUEUEX_SPACE"
#define busnum_CAVM_PSM_QUEUEX_SPACE(a) (a)
#define arguments_CAVM_PSM_QUEUEX_SPACE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue#_timeout_cfg
 *
 * PHY Scheduler Queue Timeout Configuration Register
 * These registers program the queue watchdog timers. Each queue has a
 * watchdog timer that increments by one on every tick of the PSM timer if
 * the queue is enabled and not empty. The watchdog timer is reset each time
 * the queue launches a job or becomes idle (i.e., empty). If the watchdog
 * timer reaches the maximum timeout, a PSM queue timeout interrupt is
 * signaled.
 */
union cavm_psm_queuex_timeout_cfg
{
    uint64_t u;
    struct cavm_psm_queuex_timeout_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t wdog_timer            : 20; /**< [ 51: 32](RO/H) Current value of the queue's watchdog timer. */
        uint64_t reserved_20_31        : 12;
        uint64_t qtime_max             : 20; /**< [ 19:  0](R/W) Maximum value of the watchdog timer.  A value of 0 will disable the
                                                                 timeout check. */
#else /* Word 0 - Little Endian */
        uint64_t qtime_max             : 20; /**< [ 19:  0](R/W) Maximum value of the watchdog timer.  A value of 0 will disable the
                                                                 timeout check. */
        uint64_t reserved_20_31        : 12;
        uint64_t wdog_timer            : 20; /**< [ 51: 32](RO/H) Current value of the queue's watchdog timer. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queuex_timeout_cfg_s cn; */
};
typedef union cavm_psm_queuex_timeout_cfg cavm_psm_queuex_timeout_cfg_t;

static inline uint64_t CAVM_PSM_QUEUEX_TIMEOUT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUEX_TIMEOUT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=254))
        return 0x860001004000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=254))
        return 0x860001004000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_QUEUEX_TIMEOUT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) cavm_psm_queuex_timeout_cfg_t
#define bustype_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) "PSM_QUEUEX_TIMEOUT_CFG"
#define busnum_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) (a)
#define arguments_CAVM_PSM_QUEUEX_TIMEOUT_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_busy_sts#
 *
 * PHY Scheduler Queue Busy Status Registers
 * These registers contain busy status bits for each queue.
 */
union cavm_psm_queue_busy_stsx
{
    uint64_t u;
    struct cavm_psm_queue_busy_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 64; /**< [ 63:  0](RO/H) Busy status.
                                                                 0 = No commands queued or in-flight.
                                                                 1 = Queue busy. The queue has at least one command waiting to execute
                                                                 or actively being executed by a MHAB/MDAB. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 64; /**< [ 63:  0](RO/H) Busy status.
                                                                 0 = No commands queued or in-flight.
                                                                 1 = Queue busy. The queue has at least one command waiting to execute
                                                                 or actively being executed by a MHAB/MDAB. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_busy_stsx_s cn; */
};
typedef union cavm_psm_queue_busy_stsx cavm_psm_queue_busy_stsx_t;

static inline uint64_t CAVM_PSM_QUEUE_BUSY_STSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_BUSY_STSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x860001010300ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x860001010300ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_QUEUE_BUSY_STSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_BUSY_STSX(a) cavm_psm_queue_busy_stsx_t
#define bustype_CAVM_PSM_QUEUE_BUSY_STSX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_BUSY_STSX(a) "PSM_QUEUE_BUSY_STSX"
#define busnum_CAVM_PSM_QUEUE_BUSY_STSX(a) (a)
#define arguments_CAVM_PSM_QUEUE_BUSY_STSX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_ena_w1c#
 *
 * PHY Scheduler Queue Disable Registers
 * These registers contain disable bits for each queue.
 */
union cavm_psm_queue_ena_w1cx
{
    uint64_t u;
    struct cavm_psm_queue_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dis                   : 64; /**< [ 63:  0](R/W1C/H) Disable bit for each queue. If written 1, the queue will be disabled.
                                                                 If written 0, the queue enable status will be unmodified.  Queues may be
                                                                 enabled using the PSM_QUEUE_ENA_W1S() register.  When disabled,
                                                                 commands may be added to the queue, but those commands will not be scheduled for execution. */
#else /* Word 0 - Little Endian */
        uint64_t dis                   : 64; /**< [ 63:  0](R/W1C/H) Disable bit for each queue. If written 1, the queue will be disabled.
                                                                 If written 0, the queue enable status will be unmodified.  Queues may be
                                                                 enabled using the PSM_QUEUE_ENA_W1S() register.  When disabled,
                                                                 commands may be added to the queue, but those commands will not be scheduled for execution. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_ena_w1cx_s cn; */
};
typedef union cavm_psm_queue_ena_w1cx cavm_psm_queue_ena_w1cx_t;

static inline uint64_t CAVM_PSM_QUEUE_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_ENA_W1CX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x860001010100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x860001010100ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_QUEUE_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_ENA_W1CX(a) cavm_psm_queue_ena_w1cx_t
#define bustype_CAVM_PSM_QUEUE_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_ENA_W1CX(a) "PSM_QUEUE_ENA_W1CX"
#define busnum_CAVM_PSM_QUEUE_ENA_W1CX(a) (a)
#define arguments_CAVM_PSM_QUEUE_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_ena_w1s#
 *
 * PHY Scheduler Queue Enable Registers
 * These registers contain enable bits for each queue.
 */
union cavm_psm_queue_ena_w1sx
{
    uint64_t u;
    struct cavm_psm_queue_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 64; /**< [ 63:  0](R/W1S/H) Enable bit for each queue. If written 1, the queue will be enabled.
                                                                 If written 0, the queue enable will be unmodified.  Queues may be
                                                                 disabled using the PSM_QUEUE_ENA_W1C() registers.  When disabled,
                                                                 commands may be added to the queue, but those commands will not
                                                                 be scheduled for execution until the queue is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 64; /**< [ 63:  0](R/W1S/H) Enable bit for each queue. If written 1, the queue will be enabled.
                                                                 If written 0, the queue enable will be unmodified.  Queues may be
                                                                 disabled using the PSM_QUEUE_ENA_W1C() registers.  When disabled,
                                                                 commands may be added to the queue, but those commands will not
                                                                 be scheduled for execution until the queue is enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_ena_w1sx_s cn; */
};
typedef union cavm_psm_queue_ena_w1sx cavm_psm_queue_ena_w1sx_t;

static inline uint64_t CAVM_PSM_QUEUE_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_ENA_W1SX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x860001010000ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x860001010000ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_QUEUE_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_ENA_W1SX(a) cavm_psm_queue_ena_w1sx_t
#define bustype_CAVM_PSM_QUEUE_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_ENA_W1SX(a) "PSM_QUEUE_ENA_W1SX"
#define busnum_CAVM_PSM_QUEUE_ENA_W1SX(a) (a)
#define arguments_CAVM_PSM_QUEUE_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_full_sts#
 *
 * PHY Scheduler Queue Full Status Registers
 * These registers contain full indicators for each queue.
 */
union cavm_psm_queue_full_stsx
{
    uint64_t u;
    struct cavm_psm_queue_full_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t full                  : 64; /**< [ 63:  0](RO/H) For each queue, a 1 bit indicates the queue is full, a 0 indicates
                                                                 the queue is not full and an AP core can enqueue a job. */
#else /* Word 0 - Little Endian */
        uint64_t full                  : 64; /**< [ 63:  0](RO/H) For each queue, a 1 bit indicates the queue is full, a 0 indicates
                                                                 the queue is not full and an AP core can enqueue a job. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_full_stsx_s cn; */
};
typedef union cavm_psm_queue_full_stsx cavm_psm_queue_full_stsx_t;

static inline uint64_t CAVM_PSM_QUEUE_FULL_STSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_FULL_STSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=3))
        return 0x860001010200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=3))
        return 0x860001010200ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_QUEUE_FULL_STSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_FULL_STSX(a) cavm_psm_queue_full_stsx_t
#define bustype_CAVM_PSM_QUEUE_FULL_STSX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_FULL_STSX(a) "PSM_QUEUE_FULL_STSX"
#define busnum_CAVM_PSM_QUEUE_FULL_STSX(a) (a)
#define arguments_CAVM_PSM_QUEUE_FULL_STSX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_queue_ram#
 *
 * PHY Scheduler Queue RAM Register
 * These registers provide a debug mechanism into the queue RAM. Both read
 * and write accesses are allowed into individual queue RAM entries.  The QRAM
 * entries are 128-bit entities, and must be written in a proper sequence due
 * to ECC logic.  The lower 64-bit word must be written first, followed by the
 * upper 64-bit word.  No other QRAM write may occur between writing the two
 * 64-bit words.
 */
union cavm_psm_queue_ramx
{
    uint64_t u;
    struct cavm_psm_queue_ramx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) The queue RAM entry data. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) The queue RAM entry data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_queue_ramx_s cn; */
};
typedef union cavm_psm_queue_ramx cavm_psm_queue_ramx_t;

static inline uint64_t CAVM_PSM_QUEUE_RAMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_QUEUE_RAMX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=65535))
        return 0x860001100000ll + 8ll * ((a) & 0xffff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=65535))
        return 0x860001100000ll + 8ll * ((a) & 0xffff);
    __cavm_csr_fatal("PSM_QUEUE_RAMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_QUEUE_RAMX(a) cavm_psm_queue_ramx_t
#define bustype_CAVM_PSM_QUEUE_RAMX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_QUEUE_RAMX(a) "PSM_QUEUE_RAMX"
#define busnum_CAVM_PSM_QUEUE_RAMX(a) (a)
#define arguments_CAVM_PSM_QUEUE_RAMX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_rst
 *
 * PHY Scheduler Reset Register
 * This register provides a mechanism to reset the entire PSM or
 * individual PSM queues.
 */
union cavm_psm_rst
{
    uint64_t u;
    struct cavm_psm_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t psm_reset             : 1;  /**< [ 63: 63](WO) When set, will reset entire PSM to hardware reset state. */
        uint64_t reserved_17_62        : 46;
        uint64_t queue_reset           : 1;  /**< [ 16: 16](WO) When written 1 will reset an individual queue as identified by
                                                                 the [QUEUE_RESET_QID] field.  This reset will empty the queue
                                                                 but will not reset any in-flight jobs dispatched from the given
                                                                 queue, and will not change the size of the queue. */
        uint64_t reserved_8_15         : 8;
        uint64_t queue_reset_qid       : 8;  /**< [  7:  0](WO) When the [QUEUE_RESET] bit is written to initiate a queue reset
                                                                 operation, this field is used to select the queue to be reset. */
#else /* Word 0 - Little Endian */
        uint64_t queue_reset_qid       : 8;  /**< [  7:  0](WO) When the [QUEUE_RESET] bit is written to initiate a queue reset
                                                                 operation, this field is used to select the queue to be reset. */
        uint64_t reserved_8_15         : 8;
        uint64_t queue_reset           : 1;  /**< [ 16: 16](WO) When written 1 will reset an individual queue as identified by
                                                                 the [QUEUE_RESET_QID] field.  This reset will empty the queue
                                                                 but will not reset any in-flight jobs dispatched from the given
                                                                 queue, and will not change the size of the queue. */
        uint64_t reserved_17_62        : 46;
        uint64_t psm_reset             : 1;  /**< [ 63: 63](WO) When set, will reset entire PSM to hardware reset state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_rst_s cn; */
};
typedef union cavm_psm_rst cavm_psm_rst_t;

#define CAVM_PSM_RST CAVM_PSM_RST_FUNC()
static inline uint64_t CAVM_PSM_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010fa000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010fa000ll;
    __cavm_csr_fatal("PSM_RST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_RST cavm_psm_rst_t
#define bustype_CAVM_PSM_RST CSR_TYPE_NCB
#define basename_CAVM_PSM_RST "PSM_RST"
#define busnum_CAVM_PSM_RST 0
#define arguments_CAVM_PSM_RST -1,-1,-1,-1

/**
 * Register (NCB) psm_set#_errcap_mab_badcmd
 *
 * PHY Scheduler MHAB/MDAB FIFO Bad Command Capture Register
 * This register reports the status of bad command errors reported by MHAB/MDAB FIFOs.
 */
union cavm_psm_setx_errcap_mab_badcmd
{
    uint64_t u;
    struct cavm_psm_setx_errcap_mab_badcmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mabfifo_bad_cmd       : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding MHAB/MDAB FIFO has reported a bad command.  Write 1 to clear. */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_bad_cmd       : 64; /**< [ 63:  0](R/W1C/H) When a bit is set, the corresponding MHAB/MDAB FIFO has reported a bad command.  Write 1 to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_setx_errcap_mab_badcmd_s cn; */
};
typedef union cavm_psm_setx_errcap_mab_badcmd cavm_psm_setx_errcap_mab_badcmd_t;

static inline uint64_t CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=2))
        return 0x8600010fc000ll + 0x10ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=2))
        return 0x8600010fc000ll + 0x10ll * ((a) & 0x3);
    __cavm_csr_fatal("PSM_SETX_ERRCAP_MAB_BADCMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) cavm_psm_setx_errcap_mab_badcmd_t
#define bustype_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) "PSM_SETX_ERRCAP_MAB_BADCMD"
#define busnum_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) (a)
#define arguments_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set#_errcap_mab_badcmd_hi
 *
 * PHY Scheduler MHAB/MDAB FIFO Bad Command Capture Register
 * This register reports the status of bad command errors reported by MHAB/MDAB FIFOs.
 */
union cavm_psm_setx_errcap_mab_badcmd_hi
{
    uint64_t u;
    struct cavm_psm_setx_errcap_mab_badcmd_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mabfifo_bad_cmd       : 4;  /**< [  3:  0](R/W1C/H) When a bit is set, the corresponding MHAB/MDAB FIFO has reported a bad command.  Write 1 to clear. */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_bad_cmd       : 4;  /**< [  3:  0](R/W1C/H) When a bit is set, the corresponding MHAB/MDAB FIFO has reported a bad command.  Write 1 to clear. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_setx_errcap_mab_badcmd_hi_s cn; */
};
typedef union cavm_psm_setx_errcap_mab_badcmd_hi cavm_psm_setx_errcap_mab_badcmd_hi_t;

static inline uint64_t CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==1))
        return 0x8600010fc008ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SETX_ERRCAP_MAB_BADCMD_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(a) cavm_psm_setx_errcap_mab_badcmd_hi_t
#define bustype_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(a) "PSM_SETX_ERRCAP_MAB_BADCMD_HI"
#define busnum_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(a) (a)
#define arguments_CAVM_PSM_SETX_ERRCAP_MAB_BADCMD_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_grp#_cdt
 *
 * PHY Scheduler Set 0 Group Credit Registers
 * These registers define the total number of job credits available for the MHAB
 * group.  It must match the total of the credits programmed in the
 * PSM_SET0_MAX_MABQ()_JOB_CDT() registers for the MHABs selected by the
 * corresponding PSM_SET0_GRP()_MASK register.
 */
union cavm_psm_set0_grpx_cdt
{
    uint64_t u;
    struct cavm_psm_set0_grpx_cdt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MHABs selected by the
                                                                 corresponding PSM_SET0_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MHABs selected by the
                                                                 corresponding PSM_SET0_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_grpx_cdt_s cn; */
};
typedef union cavm_psm_set0_grpx_cdt cavm_psm_set0_grpx_cdt_t;

static inline uint64_t CAVM_PSM_SET0_GRPX_CDT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_GRPX_CDT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001047400ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x860001047400ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET0_GRPX_CDT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_GRPX_CDT(a) cavm_psm_set0_grpx_cdt_t
#define bustype_CAVM_PSM_SET0_GRPX_CDT(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_GRPX_CDT(a) "PSM_SET0_GRPX_CDT"
#define busnum_CAVM_PSM_SET0_GRPX_CDT(a) (a)
#define arguments_CAVM_PSM_SET0_GRPX_CDT(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_grp#_mask
 *
 * PHY Scheduler Set 0 MHAB Group Mask Registers
 * These registers define membership of MHABs within each of eight groups.  Along
 * with the PSM_SET0_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous MHABs.  Under normal circumstances, the eight
 * groups should be programmed to match the eight GHABs containing the 23 MHABs and
 * ensure MHAB jobs are balanced across GHABs.
 */
union cavm_psm_set0_grpx_mask
{
    uint64_t u;
    struct cavm_psm_set0_grpx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t mab_map               : 57; /**< [ 56:  0](R/W) Bit mask indicating which MHABs belong to the MHAB group.
                                                                 The bit number is indexed by the PSM_SET0_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with
                                                                 the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 57; /**< [ 56:  0](R/W) Bit mask indicating which MHABs belong to the MHAB group.
                                                                 The bit number is indexed by the PSM_SET0_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with
                                                                 the correct value. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_grpx_mask_s cn10; */
    struct cavm_psm_set0_grpx_mask_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t mab_map               : 45; /**< [ 44:  0](R/W) Bit mask indicating which MHABs belong to the MHAB group.
                                                                 The bit number is indexed by the PSM_SET0_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with
                                                                 the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 45; /**< [ 44:  0](R/W) Bit mask indicating which MHABs belong to the MHAB group.
                                                                 The bit number is indexed by the PSM_SET0_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET0_GRP()_CDT) must be programmed with
                                                                 the correct value. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set0_grpx_mask_s cnf10kb; */
};
typedef union cavm_psm_set0_grpx_mask cavm_psm_set0_grpx_mask_t;

static inline uint64_t CAVM_PSM_SET0_GRPX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_GRPX_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001047000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x860001047000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET0_GRPX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_GRPX_MASK(a) cavm_psm_set0_grpx_mask_t
#define bustype_CAVM_PSM_SET0_GRPX_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_GRPX_MASK(a) "PSM_SET0_GRPX_MASK"
#define busnum_CAVM_PSM_SET0_GRPX_MASK(a) (a)
#define arguments_CAVM_PSM_SET0_GRPX_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_mab_res
 *
 * PHY Scheduler Set 0 MAB Reservation Register
 * This register reports the current value of the per-MHAB reservation vector, for CONT_JOB
 * commands.
 */
union cavm_psm_set0_mab_res
{
    uint64_t u;
    struct cavm_psm_set0_mab_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t mabres                : 57; /**< [ 56:  0](R/W/H) This field reports the current value of the per-MHAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET0_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 57; /**< [ 56:  0](R/W/H) This field reports the current value of the per-MHAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET0_MABDID_E enumeration. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mab_res_s cn10; */
    struct cavm_psm_set0_mab_res_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t mabres                : 45; /**< [ 44:  0](R/W/H) This field reports the current value of the per-MHAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET0_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 45; /**< [ 44:  0](R/W/H) This field reports the current value of the per-MHAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET0_MABDID_E enumeration. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set0_mab_res_s cnf10kb; */
};
typedef union cavm_psm_set0_mab_res cavm_psm_set0_mab_res_t;

#define CAVM_PSM_SET0_MAB_RES CAVM_PSM_SET0_MAB_RES_FUNC()
static inline uint64_t CAVM_PSM_SET0_MAB_RES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MAB_RES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001047800ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001047800ll;
    __cavm_csr_fatal("PSM_SET0_MAB_RES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MAB_RES cavm_psm_set0_mab_res_t
#define bustype_CAVM_PSM_SET0_MAB_RES CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MAB_RES "PSM_SET0_MAB_RES"
#define busnum_CAVM_PSM_SET0_MAB_RES 0
#define arguments_CAVM_PSM_SET0_MAB_RES -1,-1,-1,-1

/**
 * Register (NCB) psm_set0_mabfifo#_ctrl
 *
 * PHY Scheduler Set 0 MAB FIFO Control Registers
 * These registers contain internal information about the MHAB FIFOs,
 * i.e., the FIFOs of commands received from MHABs.  These registers
 * are indexed by PSM_SET0_MABDID_E.
 */
union cavm_psm_set0_mabfifox_ctrl
{
    uint64_t u;
    struct cavm_psm_set0_mabfifox_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MHAB FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MHAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry and increments by one on every tick of the
                                                                 PSM timer.  It is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_28_31        : 4;
        uint64_t fifo_level            : 4;  /**< [ 27: 24](RO/H) Contains the number of entries held in the MHAB FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_12_15        : 4;
        uint64_t fifo_cdt              : 4;  /**< [ 11:  8](R/W/H) Contains the number of credits held by the MHAB for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) Reserved. */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) Reserved. */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) Reserved. */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 4;  /**< [ 11:  8](R/W/H) Contains the number of credits held by the MHAB for making JCA requests. */
        uint64_t reserved_12_15        : 4;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 4;  /**< [ 27: 24](RO/H) Contains the number of entries held in the MHAB FIFO. */
        uint64_t reserved_28_31        : 4;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry and increments by one on every tick of the
                                                                 PSM timer.  It is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MHAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MHAB FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabfifox_ctrl_s cn; */
};
typedef union cavm_psm_set0_mabfifox_ctrl cavm_psm_set0_mabfifox_ctrl_t;

static inline uint64_t CAVM_PSM_SET0_MABFIFOX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABFIFOX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=44))
        return 0x860001080000ll + 0x10ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=56))
        return 0x860001080000ll + 0x10ll * ((a) & 0x3f);
    __cavm_csr_fatal("PSM_SET0_MABFIFOX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABFIFOX_CTRL(a) cavm_psm_set0_mabfifox_ctrl_t
#define bustype_CAVM_PSM_SET0_MABFIFOX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABFIFOX_CTRL(a) "PSM_SET0_MABFIFOX_CTRL"
#define busnum_CAVM_PSM_SET0_MABFIFOX_CTRL(a) (a)
#define arguments_CAVM_PSM_SET0_MABFIFOX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_mabfifo_busy
 *
 * PHY Scheduler Set 0 MAB FIFO Busy Register
 */
union cavm_psm_set0_mabfifo_busy
{
    uint64_t u;
    struct cavm_psm_set0_mabfifo_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t mabf_busy             : 57; /**< [ 56:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET0_MABDID_E. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 57; /**< [ 56:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET0_MABDID_E. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabfifo_busy_s cn10; */
    struct cavm_psm_set0_mabfifo_busy_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t mabf_busy             : 45; /**< [ 44:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET0_MABDID_E. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 45; /**< [ 44:  0](RO/H) Current status of the Set 0 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET0_MABDID_E. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set0_mabfifo_busy_s cnf10kb; */
};
typedef union cavm_psm_set0_mabfifo_busy cavm_psm_set0_mabfifo_busy_t;

#define CAVM_PSM_SET0_MABFIFO_BUSY CAVM_PSM_SET0_MABFIFO_BUSY_FUNC()
static inline uint64_t CAVM_PSM_SET0_MABFIFO_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABFIFO_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001083000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001083000ll;
    __cavm_csr_fatal("PSM_SET0_MABFIFO_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABFIFO_BUSY cavm_psm_set0_mabfifo_busy_t
#define bustype_CAVM_PSM_SET0_MABFIFO_BUSY CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABFIFO_BUSY "PSM_SET0_MABFIFO_BUSY"
#define busnum_CAVM_PSM_SET0_MABFIFO_BUSY 0
#define arguments_CAVM_PSM_SET0_MABFIFO_BUSY -1,-1,-1,-1

/**
 * Register (NCB) psm_set0_mabq#_cdt_usage
 *
 * PHY Scheduler Set 0 MHAB Credit Usage Registers
 * This register reports the current usage of the MHAB job credits.
 */
union cavm_psm_set0_mabqx_cdt_usage
{
    uint64_t u;
    struct cavm_psm_set0_mabqx_cdt_usage_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t cdt_usage             : 57; /**< [ 56:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET0_MABDID_E
                                                                 enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 57; /**< [ 56:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET0_MABDID_E
                                                                 enumeration. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabqx_cdt_usage_s cn10; */
    struct cavm_psm_set0_mabqx_cdt_usage_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t cdt_usage             : 45; /**< [ 44:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET0_MABDID_E
                                                                 enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 45; /**< [ 44:  0](RO/H) This field reports the current usage of the MHAB job credits.
                                                                 A bit value of 1 indicates that the MHAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET0_MABDID_E
                                                                 enumeration. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set0_mabqx_cdt_usage_s cnf10kb; */
};
typedef union cavm_psm_set0_mabqx_cdt_usage cavm_psm_set0_mabqx_cdt_usage_t;

static inline uint64_t CAVM_PSM_SET0_MABQX_CDT_USAGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABQX_CDT_USAGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x860001047c00ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x860001047c00ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET0_MABQX_CDT_USAGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) cavm_psm_set0_mabqx_cdt_usage_t
#define bustype_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) "PSM_SET0_MABQX_CDT_USAGE"
#define busnum_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) (a)
#define arguments_CAVM_PSM_SET0_MABQX_CDT_USAGE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set0_mabq#_job_cdt#
 *
 * PHY Scheduler Set 0 MHAB Job Credit Registers
 * These registers report the current number of job credits available
 * for the MHABs.
 */
union cavm_psm_set0_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set0_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of job credits available for MABQ {a} of MHAB {b}.
                                                                 Valid range is [0,16]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of job credits available for MABQ {a} of MHAB {b}.
                                                                 Valid range is [0,16]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set0_mabqx_job_cdtx cavm_psm_set0_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET0_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=44)))
        return 0x860001044000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=56)))
        return 0x860001044000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSM_SET0_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) cavm_psm_set0_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) "PSM_SET0_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET0_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set0_max_mabq#_job_cdt#
 *
 * PHY Scheduler Set 0 Maximum MHAB Job Credit Registers
 * These registers define the maximum number of jobs that the PSM
 * can submit to the MABQs of each MHAB at a time.
 */
union cavm_psm_set0_max_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set0_max_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MABQ{a} of MHAB {b}. Valid
                                                                 range is [0,16]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MABQ{a} of MHAB {b}. Valid
                                                                 range is [0,16]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_max_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set0_max_mabqx_job_cdtx cavm_psm_set0_max_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=44)))
        return 0x860001042000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=56)))
        return 0x860001042000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSM_SET0_MAX_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) cavm_psm_set0_max_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) "PSM_SET0_MAX_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET0_MAX_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set0_rsrc_tbl#
 *
 * PHY Scheduler Set 0 Resource Table Registers
 * These registers define a mapping table of job types to MHAB(s).
 * Multiple MHABs may be assigned to service jobs of each type, and a
 * given MHAB can be assigned to any number of job types.
 */
union cavm_psm_set0_rsrc_tblx
{
    uint64_t u;
    struct cavm_psm_set0_rsrc_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t mab_map               : 57; /**< [ 56:  0](R/W) Bit mask indicating which MHABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET0_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 57; /**< [ 56:  0](R/W) Bit mask indicating which MHABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET0_MABDID_E enumeration. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set0_rsrc_tblx_s cn10; */
    struct cavm_psm_set0_rsrc_tblx_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t mab_map               : 45; /**< [ 44:  0](R/W) Bit mask indicating which MHABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET0_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 45; /**< [ 44:  0](R/W) Bit mask indicating which MHABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET0_MABDID_E enumeration. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set0_rsrc_tblx_s cnf10kb; */
};
typedef union cavm_psm_set0_rsrc_tblx cavm_psm_set0_rsrc_tblx_t;

static inline uint64_t CAVM_PSM_SET0_RSRC_TBLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET0_RSRC_TBLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x860001040000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x860001040000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET0_RSRC_TBLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET0_RSRC_TBLX(a) cavm_psm_set0_rsrc_tblx_t
#define bustype_CAVM_PSM_SET0_RSRC_TBLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET0_RSRC_TBLX(a) "PSM_SET0_RSRC_TBLX"
#define busnum_CAVM_PSM_SET0_RSRC_TBLX(a) (a)
#define arguments_CAVM_PSM_SET0_RSRC_TBLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_grp#_cdt
 *
 * PHY Scheduler Set 1 Group Credit Registers
 * These registers define the total number of job credits available for the MDAB
 * group.  It must match the total of the credits programmed in the
 * PSM_SET1_MAX_MABQ()_JOB_CDT() registers for the MDABs selected by the
 * corresponding PSM_SET1_GRP()_MASK register.
 */
union cavm_psm_set1_grpx_cdt
{
    uint64_t u;
    struct cavm_psm_set1_grpx_cdt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MDABs selected by the
                                                                 corresponding PSM_SET1_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 6;  /**< [  5:  0](R/W/H) Total maximum number of jobs for the MDABs selected by the
                                                                 corresponding PSM_SET1_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_grpx_cdt_s cn; */
};
typedef union cavm_psm_set1_grpx_cdt cavm_psm_set1_grpx_cdt_t;

static inline uint64_t CAVM_PSM_SET1_GRPX_CDT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_GRPX_CDT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001057400ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x860001057400ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET1_GRPX_CDT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_GRPX_CDT(a) cavm_psm_set1_grpx_cdt_t
#define bustype_CAVM_PSM_SET1_GRPX_CDT(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_GRPX_CDT(a) "PSM_SET1_GRPX_CDT"
#define busnum_CAVM_PSM_SET1_GRPX_CDT(a) (a)
#define arguments_CAVM_PSM_SET1_GRPX_CDT(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_grp#_mask
 *
 * PHY Scheduler Set 1 MDAB Group Mask Registers
 * These registers define membership of MDABs within each of eight groups.  Along
 * with the PSM_SET1_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous MDABs.  Under normal circumstances, the eight
 * groups should be programmed to match the eight GDABs containing the 16 MDABs and
 * ensure MDAB jobs are balanced across GDABs.
 */
union cavm_psm_set1_grpx_mask
{
    uint64_t u;
    struct cavm_psm_set1_grpx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mab_map               : 64; /**< [ 63:  0](R/W) Bit mask indicating which MDABs belong to the MDAB group.
                                                                 The bit number is indexed by the PSM_SET1_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with
                                                                 the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 64; /**< [ 63:  0](R/W) Bit mask indicating which MDABs belong to the MDAB group.
                                                                 The bit number is indexed by the PSM_SET1_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with
                                                                 the correct value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_grpx_mask_s cn10; */
    /* struct cavm_psm_set1_grpx_mask_s cnf10ka; */
    struct cavm_psm_set1_grpx_mask_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t mab_map               : 48; /**< [ 47:  0](R/W) Bit mask indicating which MDABs belong to the MDAB group.
                                                                 The bit number is indexed by the PSM_SET1_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with
                                                                 the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 48; /**< [ 47:  0](R/W) Bit mask indicating which MDABs belong to the MDAB group.
                                                                 The bit number is indexed by the PSM_SET1_MABDID_E enumeration.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with
                                                                 the correct value. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_set1_grpx_mask cavm_psm_set1_grpx_mask_t;

static inline uint64_t CAVM_PSM_SET1_GRPX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_GRPX_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001057000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x860001057000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET1_GRPX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_GRPX_MASK(a) cavm_psm_set1_grpx_mask_t
#define bustype_CAVM_PSM_SET1_GRPX_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_GRPX_MASK(a) "PSM_SET1_GRPX_MASK"
#define busnum_CAVM_PSM_SET1_GRPX_MASK(a) (a)
#define arguments_CAVM_PSM_SET1_GRPX_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_grp#_mask_hi
 *
 * PHY Scheduler Set 1 MDAB Group Mask Registers
 * These registers define membership of MDABs within each of eight groups.  Along
 * with the PSM_SET1_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous MDABs.  Under normal circumstances, the eight
 * groups should be programmed to match the eight GDABs containing the 16 MDABs and
 * ensure MDAB jobs are balanced across GDABs.
 */
union cavm_psm_set1_grpx_mask_hi
{
    uint64_t u;
    struct cavm_psm_set1_grpx_mask_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mab_map               : 4;  /**< [  3:  0](R/W) Bit mask indicating which MDABs belong to the MDAB group.
                                                                 The bits in this register map to MDABs 64-67.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with
                                                                 the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 4;  /**< [  3:  0](R/W) Bit mask indicating which MDABs belong to the MDAB group.
                                                                 The bits in this register map to MDABs 64-67.
                                                                 If this register is programmed, the corresponding group
                                                                 credit register (PSM_SET1_GRP()_CDT) must be programmed with
                                                                 the correct value. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_grpx_mask_hi_s cn; */
};
typedef union cavm_psm_set1_grpx_mask_hi cavm_psm_set1_grpx_mask_hi_t;

static inline uint64_t CAVM_PSM_SET1_GRPX_MASK_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_GRPX_MASK_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001057008ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET1_GRPX_MASK_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_GRPX_MASK_HI(a) cavm_psm_set1_grpx_mask_hi_t
#define bustype_CAVM_PSM_SET1_GRPX_MASK_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_GRPX_MASK_HI(a) "PSM_SET1_GRPX_MASK_HI"
#define busnum_CAVM_PSM_SET1_GRPX_MASK_HI(a) (a)
#define arguments_CAVM_PSM_SET1_GRPX_MASK_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mab_res
 *
 * PHY Scheduler Set 1 MAB Reservation Register
 * This register reports the current value of the per-MDAB reservation vector, for CONT_JOB
 * commands.
 */
union cavm_psm_set1_mab_res
{
    uint64_t u;
    struct cavm_psm_set1_mab_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mabres                : 64; /**< [ 63:  0](R/W/H) This field reports the current value of the per-MDAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET1_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 64; /**< [ 63:  0](R/W/H) This field reports the current value of the per-MDAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET1_MABDID_E enumeration. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mab_res_s cn10; */
    /* struct cavm_psm_set1_mab_res_s cnf10ka; */
    struct cavm_psm_set1_mab_res_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t mabres                : 48; /**< [ 47:  0](R/W/H) This field reports the current value of the per-MDAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET1_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 48; /**< [ 47:  0](R/W/H) This field reports the current value of the per-MDAB
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET1_MABDID_E enumeration. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_set1_mab_res cavm_psm_set1_mab_res_t;

#define CAVM_PSM_SET1_MAB_RES CAVM_PSM_SET1_MAB_RES_FUNC()
static inline uint64_t CAVM_PSM_SET1_MAB_RES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MAB_RES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001057800ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001057800ll;
    __cavm_csr_fatal("PSM_SET1_MAB_RES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MAB_RES cavm_psm_set1_mab_res_t
#define bustype_CAVM_PSM_SET1_MAB_RES CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MAB_RES "PSM_SET1_MAB_RES"
#define busnum_CAVM_PSM_SET1_MAB_RES 0
#define arguments_CAVM_PSM_SET1_MAB_RES -1,-1,-1,-1

/**
 * Register (NCB) psm_set1_mab_res_hi
 *
 * PHY Scheduler Set 1 MAB Reservation Register
 * This register reports the current value of the per-MDAB reservation vector, for CONT_JOB
 * commands.
 */
union cavm_psm_set1_mab_res_hi
{
    uint64_t u;
    struct cavm_psm_set1_mab_res_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mabres                : 4;  /**< [  3:  0](R/W/H) This field reports the current value of the per-MDAB
                                                                 reservation vector, for CONT_JOB commands.  The bits in
                                                                 this register map to MDABs 64-67. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 4;  /**< [  3:  0](R/W/H) This field reports the current value of the per-MDAB
                                                                 reservation vector, for CONT_JOB commands.  The bits in
                                                                 this register map to MDABs 64-67. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mab_res_hi_s cn; */
};
typedef union cavm_psm_set1_mab_res_hi cavm_psm_set1_mab_res_hi_t;

#define CAVM_PSM_SET1_MAB_RES_HI CAVM_PSM_SET1_MAB_RES_HI_FUNC()
static inline uint64_t CAVM_PSM_SET1_MAB_RES_HI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MAB_RES_HI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001057808ll;
    __cavm_csr_fatal("PSM_SET1_MAB_RES_HI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MAB_RES_HI cavm_psm_set1_mab_res_hi_t
#define bustype_CAVM_PSM_SET1_MAB_RES_HI CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MAB_RES_HI "PSM_SET1_MAB_RES_HI"
#define busnum_CAVM_PSM_SET1_MAB_RES_HI 0
#define arguments_CAVM_PSM_SET1_MAB_RES_HI -1,-1,-1,-1

/**
 * Register (NCB) psm_set1_mabfifo#_ctrl
 *
 * PHY Scheduler Set 1 MAB FIFO Control Registers
 * These registers contain internal information about the MDAB FIFOs,
 * i.e., the FIFOs of commands received from MDABs.  These registers
 * are indexed by PSM_SET1_MABDID_E.
 */
union cavm_psm_set1_mabfifox_ctrl
{
    uint64_t u;
    struct cavm_psm_set1_mabfifox_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MDAB FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MDAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry and increments by one on every tick of the
                                                                 PSM timer.  It is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_28_31        : 4;
        uint64_t fifo_level            : 4;  /**< [ 27: 24](RO/H) Contains the number of entries held in the MDAB FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_12_15        : 4;
        uint64_t fifo_cdt              : 4;  /**< [ 11:  8](R/W/H) Contains the number of credits held by the MDAB for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) Reserved. */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) Reserved. */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) Reserved. */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 4;  /**< [ 11:  8](R/W/H) Contains the number of credits held by the MDAB for making JCA requests. */
        uint64_t reserved_12_15        : 4;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 4;  /**< [ 27: 24](RO/H) Contains the number of entries held in the MDAB FIFO. */
        uint64_t reserved_28_31        : 4;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry and increments by one on every tick of the
                                                                 PSM timer.  It is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the MDAB FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the MDAB FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabfifox_ctrl_s cn; */
};
typedef union cavm_psm_set1_mabfifox_ctrl cavm_psm_set1_mabfifox_ctrl_t;

static inline uint64_t CAVM_PSM_SET1_MABFIFOX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABFIFOX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=67))
        return 0x860001090000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=47))
        return 0x860001090000ll + 0x10ll * ((a) & 0x3f);
    __cavm_csr_fatal("PSM_SET1_MABFIFOX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABFIFOX_CTRL(a) cavm_psm_set1_mabfifox_ctrl_t
#define bustype_CAVM_PSM_SET1_MABFIFOX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABFIFOX_CTRL(a) "PSM_SET1_MABFIFOX_CTRL"
#define busnum_CAVM_PSM_SET1_MABFIFOX_CTRL(a) (a)
#define arguments_CAVM_PSM_SET1_MABFIFOX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mabfifo_busy
 *
 * PHY Scheduler Set 1 MAB FIFO Busy Register
 */
union cavm_psm_set1_mabfifo_busy
{
    uint64_t u;
    struct cavm_psm_set1_mabfifo_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mabf_busy             : 64; /**< [ 63:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET1_MABDID_E. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 64; /**< [ 63:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET1_MABDID_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabfifo_busy_s cn10; */
    /* struct cavm_psm_set1_mabfifo_busy_s cnf10ka; */
    struct cavm_psm_set1_mabfifo_busy_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t mabf_busy             : 48; /**< [ 47:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET1_MABDID_E. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 48; /**< [ 47:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET1_MABDID_E. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_set1_mabfifo_busy cavm_psm_set1_mabfifo_busy_t;

#define CAVM_PSM_SET1_MABFIFO_BUSY CAVM_PSM_SET1_MABFIFO_BUSY_FUNC()
static inline uint64_t CAVM_PSM_SET1_MABFIFO_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABFIFO_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001093000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001093000ll;
    __cavm_csr_fatal("PSM_SET1_MABFIFO_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABFIFO_BUSY cavm_psm_set1_mabfifo_busy_t
#define bustype_CAVM_PSM_SET1_MABFIFO_BUSY CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABFIFO_BUSY "PSM_SET1_MABFIFO_BUSY"
#define busnum_CAVM_PSM_SET1_MABFIFO_BUSY 0
#define arguments_CAVM_PSM_SET1_MABFIFO_BUSY -1,-1,-1,-1

/**
 * Register (NCB) psm_set1_mabfifo_busy_hi
 *
 * PHY Scheduler Set 1 MAB FIFO Busy Register
 */
union cavm_psm_set1_mabfifo_busy_hi
{
    uint64_t u;
    struct cavm_psm_set1_mabfifo_busy_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mabf_busy             : 4;  /**< [  3:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bits in
                                                                 this register map to MDABs 64-67. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 4;  /**< [  3:  0](RO/H) Current status of the Set 1 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bits in
                                                                 this register map to MDABs 64-67. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabfifo_busy_hi_s cn; */
};
typedef union cavm_psm_set1_mabfifo_busy_hi cavm_psm_set1_mabfifo_busy_hi_t;

#define CAVM_PSM_SET1_MABFIFO_BUSY_HI CAVM_PSM_SET1_MABFIFO_BUSY_HI_FUNC()
static inline uint64_t CAVM_PSM_SET1_MABFIFO_BUSY_HI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABFIFO_BUSY_HI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001093008ll;
    __cavm_csr_fatal("PSM_SET1_MABFIFO_BUSY_HI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABFIFO_BUSY_HI cavm_psm_set1_mabfifo_busy_hi_t
#define bustype_CAVM_PSM_SET1_MABFIFO_BUSY_HI CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABFIFO_BUSY_HI "PSM_SET1_MABFIFO_BUSY_HI"
#define busnum_CAVM_PSM_SET1_MABFIFO_BUSY_HI 0
#define arguments_CAVM_PSM_SET1_MABFIFO_BUSY_HI -1,-1,-1,-1

/**
 * Register (NCB) psm_set1_mabq#_cdt_usage
 *
 * PHY Scheduler Set 1 MDAB Credit Usage Registers
 * This register reports the current usage of the MDAB job credits.
 */
union cavm_psm_set1_mabqx_cdt_usage
{
    uint64_t u;
    struct cavm_psm_set1_mabqx_cdt_usage_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cdt_usage             : 64; /**< [ 63:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET1_MABDID_E
                                                                 enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 64; /**< [ 63:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET1_MABDID_E
                                                                 enumeration. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabqx_cdt_usage_s cn10; */
    /* struct cavm_psm_set1_mabqx_cdt_usage_s cnf10ka; */
    struct cavm_psm_set1_mabqx_cdt_usage_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t cdt_usage             : 48; /**< [ 47:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET1_MABDID_E
                                                                 enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 48; /**< [ 47:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET1_MABDID_E
                                                                 enumeration. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_set1_mabqx_cdt_usage cavm_psm_set1_mabqx_cdt_usage_t;

static inline uint64_t CAVM_PSM_SET1_MABQX_CDT_USAGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABQX_CDT_USAGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x860001057c00ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x860001057c00ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET1_MABQX_CDT_USAGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) cavm_psm_set1_mabqx_cdt_usage_t
#define bustype_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) "PSM_SET1_MABQX_CDT_USAGE"
#define busnum_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) (a)
#define arguments_CAVM_PSM_SET1_MABQX_CDT_USAGE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mabq#_cdt_usage_hi
 *
 * PHY Scheduler Set 1 MDAB Credit Usage Registers
 * This register reports the current usage of the MDAB job credits.
 */
union cavm_psm_set1_mabqx_cdt_usage_hi
{
    uint64_t u;
    struct cavm_psm_set1_mabqx_cdt_usage_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cdt_usage             : 4;  /**< [  3:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bits in this register map to MDABs 64-67. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 4;  /**< [  3:  0](RO/H) This field reports the current usage of the MDAB job credits.
                                                                 A bit value of 1 indicates that the MDAB is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bits in this register map to MDABs 64-67. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabqx_cdt_usage_hi_s cn; */
};
typedef union cavm_psm_set1_mabqx_cdt_usage_hi cavm_psm_set1_mabqx_cdt_usage_hi_t;

static inline uint64_t CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x860001057c08ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET1_MABQX_CDT_USAGE_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(a) cavm_psm_set1_mabqx_cdt_usage_hi_t
#define bustype_CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(a) "PSM_SET1_MABQX_CDT_USAGE_HI"
#define busnum_CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(a) (a)
#define arguments_CAVM_PSM_SET1_MABQX_CDT_USAGE_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_mabq#_job_cdt#
 *
 * PHY Scheduler Set 1 MDAB Job Credit Registers
 * These registers report the current number of job credits available
 * for the MDABs.
 */
union cavm_psm_set1_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set1_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of job credits available for MABQ {a} of MDAB {b}.
                                                                 Valid range is [0,16]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of job credits available for MABQ {a} of MDAB {b}.
                                                                 Valid range is [0,16]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set1_mabqx_job_cdtx cavm_psm_set1_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET1_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=67)))
        return 0x860001054000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=47)))
        return 0x860001054000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSM_SET1_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) cavm_psm_set1_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) "PSM_SET1_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET1_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set1_max_mabq#_job_cdt#
 *
 * PHY Scheduler Set 1 Maximum MDAB Job Credit Registers
 * These registers define the maximum number of jobs that the PSM
 * can submit to the MABQs of each MDAB at a time.
 */
union cavm_psm_set1_max_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set1_max_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MABQ{a} of MDAB {b}. Valid
                                                                 range is [0,16]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MABQ{a} of MDAB {b}. Valid
                                                                 range is [0,16]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_max_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set1_max_mabqx_job_cdtx cavm_psm_set1_max_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=67)))
        return 0x860001052000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=47)))
        return 0x860001052000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("PSM_SET1_MAX_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) cavm_psm_set1_max_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) "PSM_SET1_MAX_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET1_MAX_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set1_rsrc_tbl#
 *
 * PHY Scheduler Set 1 Resource Table Registers
 * These registers define a mapping table of job types to MDAB(s).
 * Multiple MDABs may be assigned to service jobs of each type, and a
 * given MDAB can be assigned to any number of job types.
 */
union cavm_psm_set1_rsrc_tblx
{
    uint64_t u;
    struct cavm_psm_set1_rsrc_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mab_map               : 64; /**< [ 63:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET1_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 64; /**< [ 63:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET1_MABDID_E enumeration. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_rsrc_tblx_s cn10; */
    /* struct cavm_psm_set1_rsrc_tblx_s cnf10ka; */
    struct cavm_psm_set1_rsrc_tblx_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t mab_map               : 48; /**< [ 47:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET1_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 48; /**< [ 47:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}.  The
                                                                 bit number is indexed by the PSM_SET1_MABDID_E enumeration. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_set1_rsrc_tblx cavm_psm_set1_rsrc_tblx_t;

static inline uint64_t CAVM_PSM_SET1_RSRC_TBLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_RSRC_TBLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x860001050000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x860001050000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET1_RSRC_TBLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_RSRC_TBLX(a) cavm_psm_set1_rsrc_tblx_t
#define bustype_CAVM_PSM_SET1_RSRC_TBLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_RSRC_TBLX(a) "PSM_SET1_RSRC_TBLX"
#define busnum_CAVM_PSM_SET1_RSRC_TBLX(a) (a)
#define arguments_CAVM_PSM_SET1_RSRC_TBLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set1_rsrc_tbl#_hi
 *
 * PHY Scheduler Set 1 Resource Table Registers
 * These registers define a mapping table of job types to MDAB(s).
 * Multiple MDABs may be assigned to service jobs of each type, and a
 * given MDAB can be assigned to any number of job types.
 */
union cavm_psm_set1_rsrc_tblx_hi
{
    uint64_t u;
    struct cavm_psm_set1_rsrc_tblx_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mab_map               : 4;  /**< [  3:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}.  The
                                                                 bits in this register map to MDABs 64-67. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 4;  /**< [  3:  0](R/W) Bit mask indicating which MDABs can accept jobs of type {a}.  The
                                                                 bits in this register map to MDABs 64-67. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set1_rsrc_tblx_hi_s cn; */
};
typedef union cavm_psm_set1_rsrc_tblx_hi cavm_psm_set1_rsrc_tblx_hi_t;

static inline uint64_t CAVM_PSM_SET1_RSRC_TBLX_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET1_RSRC_TBLX_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x860001050008ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET1_RSRC_TBLX_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET1_RSRC_TBLX_HI(a) cavm_psm_set1_rsrc_tblx_hi_t
#define bustype_CAVM_PSM_SET1_RSRC_TBLX_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET1_RSRC_TBLX_HI(a) "PSM_SET1_RSRC_TBLX_HI"
#define busnum_CAVM_PSM_SET1_RSRC_TBLX_HI(a) (a)
#define arguments_CAVM_PSM_SET1_RSRC_TBLX_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_grp#_cdt
 *
 * PHY Scheduler Set 2 Group Credit Registers
 * These registers define the total number of job credits available for the RF Engine
 * group.  It must match the total of the credits programmed in the
 * PSM_SET2_MAX_MABQ()_JOB_CDT() registers for the RF Engines selected by the
 * corresponding PSM_SET2_GRP()_MASK register.
 */
union cavm_psm_set2_grpx_cdt
{
    uint64_t u;
    struct cavm_psm_set2_grpx_cdt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t grp_cdt               : 8;  /**< [  7:  0](R/W/H) Total maximum number of jobs for the RF Engines selected by the
                                                                 corresponding PSM_SET2_GRP()_MASK register. Valid range is [0,63]. */
#else /* Word 0 - Little Endian */
        uint64_t grp_cdt               : 8;  /**< [  7:  0](R/W/H) Total maximum number of jobs for the RF Engines selected by the
                                                                 corresponding PSM_SET2_GRP()_MASK register. Valid range is [0,63]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_grpx_cdt_s cn; */
};
typedef union cavm_psm_set2_grpx_cdt cavm_psm_set2_grpx_cdt_t;

static inline uint64_t CAVM_PSM_SET2_GRPX_CDT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_GRPX_CDT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001067400ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x860001067400ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET2_GRPX_CDT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_GRPX_CDT(a) cavm_psm_set2_grpx_cdt_t
#define bustype_CAVM_PSM_SET2_GRPX_CDT(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_GRPX_CDT(a) "PSM_SET2_GRPX_CDT"
#define busnum_CAVM_PSM_SET2_GRPX_CDT(a) (a)
#define arguments_CAVM_PSM_SET2_GRPX_CDT(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_grp#_mask
 *
 * PHY Scheduler Set 2 RF Engine Group Mask Registers
 * These registers define membership of RF Engines within each of eight groups.  Along
 * with the PSM_SET2_GRP()_CDT registers, these registers can be used to load balance
 * jobs across many homogeneous RF Engines.
 */
union cavm_psm_set2_grpx_mask
{
    uint64_t u;
    struct cavm_psm_set2_grpx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t mab_map               : 21; /**< [ 20:  0](R/W) Bit mask indicating which RF Engines belong to the RF Engine
                                                                 group.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration.  If this register is programmed, the corresponding
                                                                 group credit register (PSM_SET2_GRP()_CDT) must be programmed
                                                                 with the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 21; /**< [ 20:  0](R/W) Bit mask indicating which RF Engines belong to the RF Engine
                                                                 group.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration.  If this register is programmed, the corresponding
                                                                 group credit register (PSM_SET2_GRP()_CDT) must be programmed
                                                                 with the correct value. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_grpx_mask_s cn10; */
    struct cavm_psm_set2_grpx_mask_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t mab_map               : 8;  /**< [  7:  0](R/W) Bit mask indicating which RF Engines belong to the RF Engine
                                                                 group.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration.  If this register is programmed, the corresponding
                                                                 group credit register (PSM_SET2_GRP()_CDT) must be programmed
                                                                 with the correct value. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 8;  /**< [  7:  0](R/W) Bit mask indicating which RF Engines belong to the RF Engine
                                                                 group.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration.  If this register is programmed, the corresponding
                                                                 group credit register (PSM_SET2_GRP()_CDT) must be programmed
                                                                 with the correct value. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set2_grpx_mask_s cnf10kb; */
};
typedef union cavm_psm_set2_grpx_mask cavm_psm_set2_grpx_mask_t;

static inline uint64_t CAVM_PSM_SET2_GRPX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_GRPX_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x860001067000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x860001067000ll + 0x10ll * ((a) & 0x7);
    __cavm_csr_fatal("PSM_SET2_GRPX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_GRPX_MASK(a) cavm_psm_set2_grpx_mask_t
#define bustype_CAVM_PSM_SET2_GRPX_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_GRPX_MASK(a) "PSM_SET2_GRPX_MASK"
#define busnum_CAVM_PSM_SET2_GRPX_MASK(a) (a)
#define arguments_CAVM_PSM_SET2_GRPX_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_mab_res
 *
 * PHY Scheduler Set 2 MAB Reservation Register
 * This register reports the current value of the per-RF-Engine reservation
 * vector, for CONT_JOB commands.
 */
union cavm_psm_set2_mab_res
{
    uint64_t u;
    struct cavm_psm_set2_mab_res_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t mabres                : 21; /**< [ 20:  0](R/W/H) This field reports the current value of the per-RF-Engine
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET2_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 21; /**< [ 20:  0](R/W/H) This field reports the current value of the per-RF-Engine
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET2_MABDID_E enumeration. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mab_res_s cn10; */
    struct cavm_psm_set2_mab_res_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t mabres                : 8;  /**< [  7:  0](R/W/H) This field reports the current value of the per-RF-Engine
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET2_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mabres                : 8;  /**< [  7:  0](R/W/H) This field reports the current value of the per-RF-Engine
                                                                 reservation vector, for CONT_JOB commands.  The bit number
                                                                 is indexed by the PSM_SET2_MABDID_E enumeration. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set2_mab_res_s cnf10kb; */
};
typedef union cavm_psm_set2_mab_res cavm_psm_set2_mab_res_t;

#define CAVM_PSM_SET2_MAB_RES CAVM_PSM_SET2_MAB_RES_FUNC()
static inline uint64_t CAVM_PSM_SET2_MAB_RES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MAB_RES_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001067800ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001067800ll;
    __cavm_csr_fatal("PSM_SET2_MAB_RES", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MAB_RES cavm_psm_set2_mab_res_t
#define bustype_CAVM_PSM_SET2_MAB_RES CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MAB_RES "PSM_SET2_MAB_RES"
#define busnum_CAVM_PSM_SET2_MAB_RES 0
#define arguments_CAVM_PSM_SET2_MAB_RES -1,-1,-1,-1

/**
 * Register (NCB) psm_set2_mabfifo#_ctrl
 *
 * PHY Scheduler Set 2 MAB FIFO Control Registers
 * These registers contain internal information about the RF Engine FIFOs,
 * i.e., the FIFOs of commands received from RF Engines.  These registers
 * are indexed by PSM_SET2_MABDID_E.
 */
union cavm_psm_set2_mabfifox_ctrl
{
    uint64_t u;
    struct cavm_psm_set2_mabfifox_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the RF Engine FIFO.  Write
                                                                 any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the RF Engine FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_36_47        : 12;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry and increments by one on every tick of the
                                                                 PSM timer.  It is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_28_31        : 4;
        uint64_t fifo_level            : 4;  /**< [ 27: 24](RO/H) Contains the number of entries held in the RF Engine FIFO. */
        uint64_t reserved_17_23        : 7;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_12_15        : 4;
        uint64_t fifo_cdt              : 4;  /**< [ 11:  8](R/W/H) Contains the number of credits held by the RF Engine for making JCA requests. */
        uint64_t reserved_2_7          : 6;
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) Reserved. */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t mabfifo_dis           : 1;  /**< [  0:  0](R/W/H) Reserved. */
        uint64_t mabfifo_flush_en      : 1;  /**< [  1:  1](R/W/H) Reserved. */
        uint64_t reserved_2_7          : 6;
        uint64_t fifo_cdt              : 4;  /**< [ 11:  8](R/W/H) Contains the number of credits held by the RF Engine for making JCA requests. */
        uint64_t reserved_12_15        : 4;
        uint64_t force_pop             : 1;  /**< [ 16: 16](R/W/H) Reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t fifo_level            : 4;  /**< [ 27: 24](RO/H) Contains the number of entries held in the RF Engine FIFO. */
        uint64_t reserved_28_31        : 4;
        uint64_t mabfifo_wdog          : 4;  /**< [ 35: 32](R/W) Configures the timeout value of the MABFIFO watchdog timer.  The timeout value
                                                                 is 2^[MABFIFO_WDOG] * 16.  The MABFIFO watchdog timer runs when the FIFO
                                                                 contains a valid entry and increments by one on every tick of the
                                                                 PSM timer.  It is reset to 0 whenever an entry is popped. If the
                                                                 timeout value is exceeded, an interrupt will be asserted.  A [MABFIFO_WDOG]
                                                                 value of 0 will disable the timeout check. */
        uint64_t reserved_36_47        : 12;
        uint64_t errcap_opc            : 6;  /**< [ 53: 48](R/W/H) Contains the opcode for the most recent bad command encountered by the RF Engine FIFO.
                                                                 Write any nonzero value to clear. */
        uint64_t reserved_54_55        : 2;
        uint64_t errcap_qid            : 8;  /**< [ 63: 56](R/W/H) Contains the QID for the most recent bad command encountered by the RF Engine FIFO.  Write
                                                                 any nonzero value to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabfifox_ctrl_s cn; */
};
typedef union cavm_psm_set2_mabfifox_ctrl cavm_psm_set2_mabfifox_ctrl_t;

static inline uint64_t CAVM_PSM_SET2_MABFIFOX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABFIFOX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=7))
        return 0x8600010a0000ll + 0x10ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=20))
        return 0x8600010a0000ll + 0x10ll * ((a) & 0x1f);
    __cavm_csr_fatal("PSM_SET2_MABFIFOX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABFIFOX_CTRL(a) cavm_psm_set2_mabfifox_ctrl_t
#define bustype_CAVM_PSM_SET2_MABFIFOX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABFIFOX_CTRL(a) "PSM_SET2_MABFIFOX_CTRL"
#define busnum_CAVM_PSM_SET2_MABFIFOX_CTRL(a) (a)
#define arguments_CAVM_PSM_SET2_MABFIFOX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_mabfifo_busy
 *
 * PHY Scheduler Set 2 MAB FIFO Busy Register
 */
union cavm_psm_set2_mabfifo_busy
{
    uint64_t u;
    struct cavm_psm_set2_mabfifo_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t mabf_busy             : 21; /**< [ 20:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET2_MABDID_E. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 21; /**< [ 20:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET2_MABDID_E. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabfifo_busy_s cn10; */
    struct cavm_psm_set2_mabfifo_busy_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t mabf_busy             : 8;  /**< [  7:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET2_MABDID_E. */
#else /* Word 0 - Little Endian */
        uint64_t mabf_busy             : 8;  /**< [  7:  0](RO/H) Current status of the Set 2 MAB FIFOs.  A bit value of 1
                                                                 indicates that the MAB FIFO contains at least one entry.
                                                                 A bit value of 0 indicates that it is empty.  The bit number
                                                                 is indexed by PSM_SET2_MABDID_E. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set2_mabfifo_busy_s cnf10kb; */
};
typedef union cavm_psm_set2_mabfifo_busy cavm_psm_set2_mabfifo_busy_t;

#define CAVM_PSM_SET2_MABFIFO_BUSY CAVM_PSM_SET2_MABFIFO_BUSY_FUNC()
static inline uint64_t CAVM_PSM_SET2_MABFIFO_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABFIFO_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010a3000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010a3000ll;
    __cavm_csr_fatal("PSM_SET2_MABFIFO_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABFIFO_BUSY cavm_psm_set2_mabfifo_busy_t
#define bustype_CAVM_PSM_SET2_MABFIFO_BUSY CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABFIFO_BUSY "PSM_SET2_MABFIFO_BUSY"
#define busnum_CAVM_PSM_SET2_MABFIFO_BUSY 0
#define arguments_CAVM_PSM_SET2_MABFIFO_BUSY -1,-1,-1,-1

/**
 * Register (NCB) psm_set2_mabq#_cdt_usage
 *
 * PHY Scheduler Set 2 RF Engine Credit Usage Registers
 * This register reports the current usage of the RF Engine job credits.
 */
union cavm_psm_set2_mabqx_cdt_usage
{
    uint64_t u;
    struct cavm_psm_set2_mabqx_cdt_usage_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t cdt_usage             : 21; /**< [ 20:  0](RO/H) This field reports the current usage of the RF Engine job credits.
                                                                 A bit value of 1 indicates that the RF Engine is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 21; /**< [ 20:  0](RO/H) This field reports the current usage of the RF Engine job credits.
                                                                 A bit value of 1 indicates that the RF Engine is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabqx_cdt_usage_s cn10; */
    struct cavm_psm_set2_mabqx_cdt_usage_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t cdt_usage             : 8;  /**< [  7:  0](RO/H) This field reports the current usage of the RF Engine job credits.
                                                                 A bit value of 1 indicates that the RF Engine is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t cdt_usage             : 8;  /**< [  7:  0](RO/H) This field reports the current usage of the RF Engine job credits.
                                                                 A bit value of 1 indicates that the RF Engine is using at least one
                                                                 job credit.  A bit value of 0 indicates that no job credits are
                                                                 in use.  The bit number is indexed by the PSM_SET2_MABDID_E
                                                                 enumeration. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set2_mabqx_cdt_usage_s cnf10kb; */
};
typedef union cavm_psm_set2_mabqx_cdt_usage cavm_psm_set2_mabqx_cdt_usage_t;

static inline uint64_t CAVM_PSM_SET2_MABQX_CDT_USAGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABQX_CDT_USAGE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=1))
        return 0x860001067c00ll + 0x10ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=1))
        return 0x860001067c00ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("PSM_SET2_MABQX_CDT_USAGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) cavm_psm_set2_mabqx_cdt_usage_t
#define bustype_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) "PSM_SET2_MABQX_CDT_USAGE"
#define busnum_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) (a)
#define arguments_CAVM_PSM_SET2_MABQX_CDT_USAGE(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_set2_mabq#_job_cdt#
 *
 * PHY Scheduler Set 2 RF Engine Job Credit Registers
 * These registers report the current number of job credits available
 * for the RF Engines.
 */
union cavm_psm_set2_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set2_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of job credits available for MABQ {a} of
                                                                 RF Engine {b}. Valid range is [0,16]. */
#else /* Word 0 - Little Endian */
        uint64_t cdt                   : 5;  /**< [  4:  0](RO/H) Current number of job credits available for MABQ {a} of
                                                                 RF Engine {b}. Valid range is [0,16]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set2_mabqx_job_cdtx cavm_psm_set2_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET2_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=7)))
        return 0x860001064000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=20)))
        return 0x860001064000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("PSM_SET2_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) cavm_psm_set2_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) "PSM_SET2_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET2_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set2_max_mabq#_job_cdt#
 *
 * PHY Scheduler Set 2 Maximum RF Engine Job Credit Registers
 * These registers define the maximum number of jobs that the PSM
 * can submit to the MABQs of each RF Engine at a time.
 */
union cavm_psm_set2_max_mabqx_job_cdtx
{
    uint64_t u;
    struct cavm_psm_set2_max_mabqx_job_cdtx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MABQ{a} of RF Engine {b}. Valid
                                                                 range is [0,16]. */
#else /* Word 0 - Little Endian */
        uint64_t max                   : 5;  /**< [  4:  0](R/W) Maximum number of jobs for MABQ{a} of RF Engine {b}. Valid
                                                                 range is [0,16]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_max_mabqx_job_cdtx_s cn; */
};
typedef union cavm_psm_set2_max_mabqx_job_cdtx cavm_psm_set2_max_mabqx_job_cdtx_t;

static inline uint64_t CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=1) && (b<=7)))
        return 0x860001062000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=1) && (b<=20)))
        return 0x860001062000ll + 0x1000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("PSM_SET2_MAX_MABQX_JOB_CDTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) cavm_psm_set2_max_mabqx_job_cdtx_t
#define bustype_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) "PSM_SET2_MAX_MABQX_JOB_CDTX"
#define busnum_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) (a)
#define arguments_CAVM_PSM_SET2_MAX_MABQX_JOB_CDTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) psm_set2_rsrc_tbl#
 *
 * PHY Scheduler Set 2 Resource Table Registers
 * These registers define a mapping table of job types to RF engines.
 * Multiple RF engines may be assigned to service jobs of each type, and a
 * given RF engine can be assigned to any number of job types.
 */
union cavm_psm_set2_rsrc_tblx
{
    uint64_t u;
    struct cavm_psm_set2_rsrc_tblx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t mab_map               : 21; /**< [ 20:  0](R/W) Bit mask indicating which RF engines can accept jobs of type {a}.
                                                                 The bit number is indexed by the PSM_SET2_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 21; /**< [ 20:  0](R/W) Bit mask indicating which RF engines can accept jobs of type {a}.
                                                                 The bit number is indexed by the PSM_SET2_MABDID_E enumeration. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_set2_rsrc_tblx_s cn10; */
    struct cavm_psm_set2_rsrc_tblx_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t mab_map               : 8;  /**< [  7:  0](R/W) Bit mask indicating which RF engines can accept jobs of type {a}.
                                                                 The bit number is indexed by the PSM_SET2_MABDID_E enumeration. */
#else /* Word 0 - Little Endian */
        uint64_t mab_map               : 8;  /**< [  7:  0](R/W) Bit mask indicating which RF engines can accept jobs of type {a}.
                                                                 The bit number is indexed by the PSM_SET2_MABDID_E enumeration. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cnf10ka;
    /* struct cavm_psm_set2_rsrc_tblx_s cnf10kb; */
};
typedef union cavm_psm_set2_rsrc_tblx cavm_psm_set2_rsrc_tblx_t;

static inline uint64_t CAVM_PSM_SET2_RSRC_TBLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SET2_RSRC_TBLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=255))
        return 0x860001060000ll + 0x10ll * ((a) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=255))
        return 0x860001060000ll + 0x10ll * ((a) & 0xff);
    __cavm_csr_fatal("PSM_SET2_RSRC_TBLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SET2_RSRC_TBLX(a) cavm_psm_set2_rsrc_tblx_t
#define bustype_CAVM_PSM_SET2_RSRC_TBLX(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SET2_RSRC_TBLX(a) "PSM_SET2_RSRC_TBLX"
#define busnum_CAVM_PSM_SET2_RSRC_TBLX(a) (a)
#define arguments_CAVM_PSM_SET2_RSRC_TBLX(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_sw#_enqueue_hi
 *
 * PHY Scheduler Software Enqueue Command High Pseudo-Registers
 * See PSM_SW()_ENQUEUE_LO.
 */
union cavm_psm_swx_enqueue_hi
{
    uint64_t u;
    struct cavm_psm_swx_enqueue_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t command_hi            : 64; /**< [ 63:  0](R/W/H) The high 64 bits of a PSM command. */
#else /* Word 0 - Little Endian */
        uint64_t command_hi            : 64; /**< [ 63:  0](R/W/H) The high 64 bits of a PSM command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_swx_enqueue_hi_s cn; */
};
typedef union cavm_psm_swx_enqueue_hi cavm_psm_swx_enqueue_hi_t;

static inline uint64_t CAVM_PSM_SWX_ENQUEUE_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SWX_ENQUEUE_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=15))
        return 0x860001020008ll + 0x10ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x860001020008ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("PSM_SWX_ENQUEUE_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SWX_ENQUEUE_HI(a) cavm_psm_swx_enqueue_hi_t
#define bustype_CAVM_PSM_SWX_ENQUEUE_HI(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SWX_ENQUEUE_HI(a) "PSM_SWX_ENQUEUE_HI"
#define busnum_CAVM_PSM_SWX_ENQUEUE_HI(a) (a)
#define arguments_CAVM_PSM_SWX_ENQUEUE_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_sw#_enqueue_lo
 *
 * PHY Scheduler Software Enqueue Command Low Pseudo-Registers
 * A write to this register begins the process of enqueueing a command
 * to a command queue. After writing the lower 64-bits of a command to
 * PSM_SW()_ENQUEUE_LO, software initiates the command enqueue process
 * by writing the upper 64-bits to PSM_SW()_ENQUEUE_HI.  The destination
 * queue is determined by the [QID] field of the command.
 * A read of this register will return the command which is in the
 * process of being enqeued, and will return 0 once the enqueue operation
 * is complete.  This register should not be written while it has
 * a non-zero value.
 */
union cavm_psm_swx_enqueue_lo
{
    uint64_t u;
    struct cavm_psm_swx_enqueue_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t command_lo            : 64; /**< [ 63:  0](R/W/H) The low 64 bits of a PSM command. */
#else /* Word 0 - Little Endian */
        uint64_t command_lo            : 64; /**< [ 63:  0](R/W/H) The low 64 bits of a PSM command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_swx_enqueue_lo_s cn; */
};
typedef union cavm_psm_swx_enqueue_lo cavm_psm_swx_enqueue_lo_t;

static inline uint64_t CAVM_PSM_SWX_ENQUEUE_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SWX_ENQUEUE_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=15))
        return 0x860001020000ll + 0x10ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x860001020000ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("PSM_SWX_ENQUEUE_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SWX_ENQUEUE_LO(a) cavm_psm_swx_enqueue_lo_t
#define bustype_CAVM_PSM_SWX_ENQUEUE_LO(a) CSR_TYPE_NCB
#define basename_CAVM_PSM_SWX_ENQUEUE_LO(a) "PSM_SWX_ENQUEUE_LO"
#define busnum_CAVM_PSM_SWX_ENQUEUE_LO(a) (a)
#define arguments_CAVM_PSM_SWX_ENQUEUE_LO(a) (a),-1,-1,-1

/**
 * Register (NCB) psm_sw_enq_ctrl
 *
 * PHY Scheduler Software Enqueue Control Register
 * Reserved.
 */
union cavm_psm_sw_enq_ctrl
{
    uint64_t u;
    struct cavm_psm_sw_enq_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t to_cfg                : 4;  /**< [ 35: 32](R/W) Configures the timeout limit of the Software Enqueue watchdog
                                                                 timer.  The timeout limit is 2^[TO_CFG] * 16.  There is a
                                                                 separate timer per slot.  A [TO_CFG] value of 0 will disable
                                                                 the timeout check. */
        uint64_t discard               : 16; /**< [ 31: 16](R/W/H) Write 1 to discard the command written into Software Enqueue
                                                                 slots 0 - 15. */
        uint64_t status                : 16; /**< [ 15:  0](RO/H) Indicates that Software Enqueue slots 0 - 15 have been
                                                                 written with a command and are in the process of enqueuing
                                                                 into a PSM queue. */
#else /* Word 0 - Little Endian */
        uint64_t status                : 16; /**< [ 15:  0](RO/H) Indicates that Software Enqueue slots 0 - 15 have been
                                                                 written with a command and are in the process of enqueuing
                                                                 into a PSM queue. */
        uint64_t discard               : 16; /**< [ 31: 16](R/W/H) Write 1 to discard the command written into Software Enqueue
                                                                 slots 0 - 15. */
        uint64_t to_cfg                : 4;  /**< [ 35: 32](R/W) Configures the timeout limit of the Software Enqueue watchdog
                                                                 timer.  The timeout limit is 2^[TO_CFG] * 16.  There is a
                                                                 separate timer per slot.  A [TO_CFG] value of 0 will disable
                                                                 the timeout check. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_sw_enq_ctrl_s cn; */
};
typedef union cavm_psm_sw_enq_ctrl cavm_psm_sw_enq_ctrl_t;

#define CAVM_PSM_SW_ENQ_CTRL CAVM_PSM_SW_ENQ_CTRL_FUNC()
static inline uint64_t CAVM_PSM_SW_ENQ_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SW_ENQ_CTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001021000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001021000ll;
    __cavm_csr_fatal("PSM_SW_ENQ_CTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SW_ENQ_CTRL cavm_psm_sw_enq_ctrl_t
#define bustype_CAVM_PSM_SW_ENQ_CTRL CSR_TYPE_NCB
#define basename_CAVM_PSM_SW_ENQ_CTRL "PSM_SW_ENQ_CTRL"
#define busnum_CAVM_PSM_SW_ENQ_CTRL 0
#define arguments_CAVM_PSM_SW_ENQ_CTRL -1,-1,-1,-1

/**
 * Register (NCB) psm_sw_enq_err
 *
 * PHY Scheduler Software Enqueue Error Register
 * Reserved.
 */
union cavm_psm_sw_enq_err
{
    uint64_t u;
    struct cavm_psm_sw_enq_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t sw_immed              : 16; /**< [ 47: 32](R/W1C/H) Indicates that an immediate command was detected on Software Enqueue
                                                                 slot 0 - 15. */
        uint64_t sw_enq_to             : 16; /**< [ 31: 16](R/W1C/H) Indicates that a timeout was detected on Software Enqueue
                                                                 slot 0 - 15. */
        uint64_t sw_enq_err            : 16; /**< [ 15:  0](R/W1C/H) Indicates that an enqueue error was detected on Software
                                                                 Enqueue slot 0 - 15. */
#else /* Word 0 - Little Endian */
        uint64_t sw_enq_err            : 16; /**< [ 15:  0](R/W1C/H) Indicates that an enqueue error was detected on Software
                                                                 Enqueue slot 0 - 15. */
        uint64_t sw_enq_to             : 16; /**< [ 31: 16](R/W1C/H) Indicates that a timeout was detected on Software Enqueue
                                                                 slot 0 - 15. */
        uint64_t sw_immed              : 16; /**< [ 47: 32](R/W1C/H) Indicates that an immediate command was detected on Software Enqueue
                                                                 slot 0 - 15. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_sw_enq_err_s cn; */
};
typedef union cavm_psm_sw_enq_err cavm_psm_sw_enq_err_t;

#define CAVM_PSM_SW_ENQ_ERR CAVM_PSM_SW_ENQ_ERR_FUNC()
static inline uint64_t CAVM_PSM_SW_ENQ_ERR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_SW_ENQ_ERR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x860001021100ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x860001021100ll;
    __cavm_csr_fatal("PSM_SW_ENQ_ERR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_SW_ENQ_ERR cavm_psm_sw_enq_err_t
#define bustype_CAVM_PSM_SW_ENQ_ERR CSR_TYPE_NCB
#define basename_CAVM_PSM_SW_ENQ_ERR "PSM_SW_ENQ_ERR"
#define busnum_CAVM_PSM_SW_ENQ_ERR 0
#define arguments_CAVM_PSM_SW_ENQ_ERR -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_bphy_val
 *
 * PHY Scheduler Timer BPHY Value Register
 * This register holds the BPHY timestamp value, which consists of
 * a frame count, subframe count, and tick count.  In internal-timer mode,
 * these values can be written, and they are read-only when in
 * BCN mode.  The BPHY time value is used for timestamps in the
 * PSM log entries, WRMSG and WRSTS commands, and for WAIT commands.
 */
union cavm_psm_timer_bphy_val
{
    uint64_t u;
    struct cavm_psm_timer_bphy_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t frame_update          : 1;  /**< [ 58: 58](R/W/H) If written 1, update [FRAME] count.  If written 0, the [FRAME]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t reserved_32_55        : 24;
        uint64_t frame                 : 12; /**< [ 31: 20](R/W/H) Frame count (i.e., BFN). */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Subframe count. */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current timer tick count. */
#else /* Word 0 - Little Endian */
        uint64_t tick                  : 16; /**< [ 15:  0](R/W/H) Current timer tick count. */
        uint64_t subframe              : 4;  /**< [ 19: 16](R/W/H) Subframe count. */
        uint64_t frame                 : 12; /**< [ 31: 20](R/W/H) Frame count (i.e., BFN). */
        uint64_t reserved_32_55        : 24;
        uint64_t tick_update           : 1;  /**< [ 56: 56](R/W/H) If written 1, update [TICK] count.  If written 0, the [TICK]
                                                                 count remains unchanged. */
        uint64_t sf_update             : 1;  /**< [ 57: 57](R/W/H) If written 1, update [SUBFRAME] count.  If written 0, the [SUBFRAME]
                                                                 count remains unchanged. */
        uint64_t frame_update          : 1;  /**< [ 58: 58](R/W/H) If written 1, update [FRAME] count.  If written 0, the [FRAME]
                                                                 count remains unchanged. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_bphy_val_s cn; */
};
typedef union cavm_psm_timer_bphy_val cavm_psm_timer_bphy_val_t;

#define CAVM_PSM_TIMER_BPHY_VAL CAVM_PSM_TIMER_BPHY_VAL_FUNC()
static inline uint64_t CAVM_PSM_TIMER_BPHY_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_BPHY_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f1010ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f1010ll;
    __cavm_csr_fatal("PSM_TIMER_BPHY_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_BPHY_VAL cavm_psm_timer_bphy_val_t
#define bustype_CAVM_PSM_TIMER_BPHY_VAL CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_BPHY_VAL "PSM_TIMER_BPHY_VAL"
#define busnum_CAVM_PSM_TIMER_BPHY_VAL 0
#define arguments_CAVM_PSM_TIMER_BPHY_VAL -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_cfg
 *
 * PHY Scheduler Timer Configuration Register
 * This register configures the PSM timer.
 */
union cavm_psm_timer_cfg
{
    uint64_t u;
    struct cavm_psm_timer_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
        uint64_t reserved_58_62        : 5;
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Enables the timer's UTU mode, which drives the subframe
                                                                 with N2[23:20], and the tick with N2[19:4].  In this mode,
                                                                 each timer tick is 16 UTU units. */
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BTN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t reserved_49_55        : 7;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_49_55        : 7;
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BTN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Enables the timer's UTU mode, which drives the subframe
                                                                 with N2[23:20], and the tick with N2[19:4].  In this mode,
                                                                 each timer tick is 16 UTU units. */
        uint64_t reserved_58_62        : 5;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_cfg_s cn10; */
    struct cavm_psm_timer_cfg_cnf10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
        uint64_t reserved_58_62        : 5;
        uint64_t reserved_57           : 1;
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BTN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t reserved_49_55        : 7;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_49_55        : 7;
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BTN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t reserved_57           : 1;
        uint64_t reserved_58_62        : 5;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
#endif /* Word 0 - End */
    } cnf10ka;
    struct cavm_psm_timer_cfg_cnf10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
        uint64_t reserved_58_62        : 5;
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Enables the timer's UTU mode, which drives the subframe
                                                                 with N2[23:20], and the tick with N2[19:4].  In this mode,
                                                                 each timer tick is 16 UTU units. */
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BCN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t reserved_49_55        : 7;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t bcast_mode            : 1;  /**< [ 48: 48](R/W/H) Enables the timer broadcast mode. When set, the PSM will send a
                                                                 message to the MDABs each time a new frame begins. */
        uint64_t reserved_49_55        : 7;
        uint64_t internal_timer_mode   : 1;  /**< [ 56: 56](R/W/H) Enables the timer's internal-timer mode, which drives the
                                                                 timer logic with BCLK domain signals.  This may be useful
                                                                 for verification, debug, lab bring-up, production test, etc.
                                                                 The internal-timer mode should not be disabled until the
                                                                 BCN block is properly initialized and providing timing
                                                                 signals to the PSM. */
        uint64_t utu_mode              : 1;  /**< [ 57: 57](R/W) Enables the timer's UTU mode, which drives the subframe
                                                                 with N2[23:20], and the tick with N2[19:4].  In this mode,
                                                                 each timer tick is 16 UTU units. */
        uint64_t reserved_58_62        : 5;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W/H) Timer enable. */
#endif /* Word 0 - End */
    } cnf10kb;
};
typedef union cavm_psm_timer_cfg cavm_psm_timer_cfg_t;

#define CAVM_PSM_TIMER_CFG CAVM_PSM_TIMER_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f1000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f1000ll;
    __cavm_csr_fatal("PSM_TIMER_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_CFG cavm_psm_timer_cfg_t
#define bustype_CAVM_PSM_TIMER_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_CFG "PSM_TIMER_CFG"
#define busnum_CAVM_PSM_TIMER_CFG 0
#define arguments_CAVM_PSM_TIMER_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_internal_bcast_cfg
 *
 * PHY Scheduler Timer Internal Mode Broadcast Configuration Register
 * This register configures the timer broadcast functionality during the
 * internal timer mode.
 */
union cavm_psm_timer_internal_bcast_cfg
{
    uint64_t u;
    struct cavm_psm_timer_internal_bcast_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bcast_upper           : 28; /**< [ 63: 36](R/W) For internal-timer mode, this field defines the upper 28 bits
                                                                 of the timestamp that will be broadcast to DSPs. */
        uint64_t reserved_1_35         : 35;
        uint64_t bcast_per_frame       : 1;  /**< [  0:  0](R/W) For internal-timer mode, when this bit is 1, the timer broadcast
                                                                 will be done only for frames, as in the BCN-timer mode.  When
                                                                 this bit is 0, the broadcasts will be done for every subframe,
                                                                 as in the legacy PSM timer. */
#else /* Word 0 - Little Endian */
        uint64_t bcast_per_frame       : 1;  /**< [  0:  0](R/W) For internal-timer mode, when this bit is 1, the timer broadcast
                                                                 will be done only for frames, as in the BCN-timer mode.  When
                                                                 this bit is 0, the broadcasts will be done for every subframe,
                                                                 as in the legacy PSM timer. */
        uint64_t reserved_1_35         : 35;
        uint64_t bcast_upper           : 28; /**< [ 63: 36](R/W) For internal-timer mode, this field defines the upper 28 bits
                                                                 of the timestamp that will be broadcast to DSPs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_internal_bcast_cfg_s cn; */
};
typedef union cavm_psm_timer_internal_bcast_cfg cavm_psm_timer_internal_bcast_cfg_t;

#define CAVM_PSM_TIMER_INTERNAL_BCAST_CFG CAVM_PSM_TIMER_INTERNAL_BCAST_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_INTERNAL_BCAST_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_INTERNAL_BCAST_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f1f10ll;
    __cavm_csr_fatal("PSM_TIMER_INTERNAL_BCAST_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_INTERNAL_BCAST_CFG cavm_psm_timer_internal_bcast_cfg_t
#define bustype_CAVM_PSM_TIMER_INTERNAL_BCAST_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_INTERNAL_BCAST_CFG "PSM_TIMER_INTERNAL_BCAST_CFG"
#define busnum_CAVM_PSM_TIMER_INTERNAL_BCAST_CFG 0
#define arguments_CAVM_PSM_TIMER_INTERNAL_BCAST_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_internal_cfg
 *
 * PHY Scheduler Timer Internal Mode Configuration Register
 * This register configures the internal mode settings of the PSM timer.
 */
union cavm_psm_timer_internal_cfg
{
    uint64_t u;
    struct cavm_psm_timer_internal_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W/H) Sets the maximum tick count value for generating an
                                                                 SOSF.  The PSM will generate a SOSF when the tick counter
                                                                 reaches the value specified by [SUBF_TICKS]. */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W/H) Divider value for generating the tick clock from the BCLK.  This
                                                                 is a fixed-point value, consisting of an 8-bit integer and an
                                                                 8-bit fraction.  A value of 0x0280 would generate a tick-clock that
                                                                 is 2.5x slower than BCLK.  The minimum value of 0x0100 represents
                                                                 a 1:1 ratio of BCLK to tick-clock.  The actual [TICK_DIV] value
                                                                 should be chosen to prevent the 16-bit TICK counter from rolling
                                                                 over within the 1ms subframe interval. */
#else /* Word 0 - Little Endian */
        uint64_t tick_div              : 16; /**< [ 15:  0](R/W/H) Divider value for generating the tick clock from the BCLK.  This
                                                                 is a fixed-point value, consisting of an 8-bit integer and an
                                                                 8-bit fraction.  A value of 0x0280 would generate a tick-clock that
                                                                 is 2.5x slower than BCLK.  The minimum value of 0x0100 represents
                                                                 a 1:1 ratio of BCLK to tick-clock.  The actual [TICK_DIV] value
                                                                 should be chosen to prevent the 16-bit TICK counter from rolling
                                                                 over within the 1ms subframe interval. */
        uint64_t subf_ticks            : 16; /**< [ 31: 16](R/W/H) Sets the maximum tick count value for generating an
                                                                 SOSF.  The PSM will generate a SOSF when the tick counter
                                                                 reaches the value specified by [SUBF_TICKS]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_internal_cfg_s cn; */
};
typedef union cavm_psm_timer_internal_cfg cavm_psm_timer_internal_cfg_t;

#define CAVM_PSM_TIMER_INTERNAL_CFG CAVM_PSM_TIMER_INTERNAL_CFG_FUNC()
static inline uint64_t CAVM_PSM_TIMER_INTERNAL_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_INTERNAL_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x8600010f1f00ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f1f00ll;
    __cavm_csr_fatal("PSM_TIMER_INTERNAL_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_INTERNAL_CFG cavm_psm_timer_internal_cfg_t
#define bustype_CAVM_PSM_TIMER_INTERNAL_CFG CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_INTERNAL_CFG "PSM_TIMER_INTERNAL_CFG"
#define busnum_CAVM_PSM_TIMER_INTERNAL_CFG 0
#define arguments_CAVM_PSM_TIMER_INTERNAL_CFG -1,-1,-1,-1

/**
 * Register (NCB) psm_timer_n1_n2_val
 *
 * PHY Scheduler Timer N1_N2 Value Register
 * This register holds the current BCN N1_N2 timestamp value, which
 * is maintained by the BCN block.  The N1 field is a count of
 * 10 msec frames, and the N2 field is a count of UTU (1.2288 GHz
 * cycles) within the frame.  This register does not contain valid
 * values during internal timer mode.
 */
union cavm_psm_timer_n1_n2_val
{
    uint64_t u;
    struct cavm_psm_timer_n1_n2_val_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) N1 (frame number) received from BCN. */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) N2 (UTU number) received from BCN. */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0](RO/H) N2 (UTU number) received from BCN. */
        uint64_t n1                    : 40; /**< [ 63: 24](RO/H) N1 (frame number) received from BCN. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_psm_timer_n1_n2_val_s cn; */
};
typedef union cavm_psm_timer_n1_n2_val cavm_psm_timer_n1_n2_val_t;

#define CAVM_PSM_TIMER_N1_N2_VAL CAVM_PSM_TIMER_N1_N2_VAL_FUNC()
static inline uint64_t CAVM_PSM_TIMER_N1_N2_VAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PSM_TIMER_N1_N2_VAL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x8600010f1030ll;
    __cavm_csr_fatal("PSM_TIMER_N1_N2_VAL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PSM_TIMER_N1_N2_VAL cavm_psm_timer_n1_n2_val_t
#define bustype_CAVM_PSM_TIMER_N1_N2_VAL CSR_TYPE_NCB
#define basename_CAVM_PSM_TIMER_N1_N2_VAL "PSM_TIMER_N1_N2_VAL"
#define busnum_CAVM_PSM_TIMER_N1_N2_VAL 0
#define arguments_CAVM_PSM_TIMER_N1_N2_VAL -1,-1,-1,-1

#endif /* __CAVM_CSRS_PSM_H__ */
