/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#include <plat_otx2_def.h>

/* SATA-related definitions */
#define MAX_SATA_CONTROLLERS		16
#define MAX_SATA_GSER			8

#define PLATFORM_MAX_NODES		1
#define PLATFORM_MAX_CLUSTERS_PER_NODE	4
#define PLATFORM_CORE_PER_CLUSTER	6

#define MAX_XLAT_TABLES			130

/*************************************************

|---------------------|==>Secure Memory 16MB @0
|	4KB	      |
|---------------------|
|		      |
|	BL32	      |
|	10 MB	      |
|		      |
|---------------------|
|		      |
|		      |
|		      |
|---------------------|
|	Firmware Logs |
|	512 KB      |
|---------------------|
|	BL31	      |
|	2776 KB	      |
|---------------------|
|	BL2	      |
|	908/848 KB    |
|---------------------|
|		      |
|	Heap	      |
|	64KB	      |
|---------------------|
|	MailBox	      |
|	4 KB	      |
|---------------------|
|	Board Config  |
|       20 KB         |
|---------------------|
|	FDT	      |
|      128 KB	      |
|---------------------|==>Non Secure memory Base @ 16MB
|		      |
|	BL32 NSEC     |
|	shared mem    |
|	8 MB	      |
|---------------------|
|		      |
|	RVU	      |
|	30 MB	      |
|		      |
|---------------------|
|	SFP	      |
|	64 KB	      |
|---------------------|
|	Shared memory |
|	for EFI Var   |
|	1 MB	      |
|---------------------|
|	NT FW	      |
|	config	      |
|	256 KB	      |
|---------------------|
|		      |
|	Serdes	      |
|	Shared memory |
|	40 KB	      |
|		      |
|---------------------|
|		      |
|		      |
|		      |
|		      |
|---------------------|
|		      |
|	Firmware Logs |
|	4 MB      |
|		      |
|---------------------|==> Non secure firmware image @ 64 MB
|		      |
|	NS Image      |
|	(BL33)	      |
|		      |
|---------------------|

**************************************************/

/* Location of trusted dram on the base OcteonTX2 */
#define TZDRAM_BASE			0x00000000
#define TZDRAM_SIZE			0x01000000

#define FDT_MAX_SIZE			0x20000
#define FDT_BASE			(TZDRAM_BASE + TZDRAM_SIZE - FDT_MAX_SIZE)

#define BOARD_CFG_LIMIT			FDT_BASE
#define BOARD_CFG_MAX_SIZE		0x5000
#define BOARD_CFG_BASE			(BOARD_CFG_LIMIT - BOARD_CFG_MAX_SIZE)

#define MAILBOX_LIMIT			BOARD_CFG_BASE
#define MAILBOX_MAX_SIZE		0x1000      /* 4 KB */
#define MAILBOX_BASE			(MAILBOX_LIMIT - MAILBOX_MAX_SIZE)

#define HEAP_LIMIT			MAILBOX_BASE
#define HEAP_MAX_SIZE			0x10000 /* 64K */
#define HEAP_BASE			(HEAP_LIMIT - HEAP_MAX_SIZE)

#define BL2_LIMIT			HEAP_BASE

#if TRUSTED_BOARD_BOOT
#define BL2_MAX_SIZE		(0x00061000 + MAX_XLAT_TABLES * PAGE_SIZE)
#else /* TRUSTED_BOARD_BOOT */
#define BL2_MAX_SIZE		(0x00052000 + MAX_XLAT_TABLES * PAGE_SIZE)
#endif /* TRUSTED_BOARD_BOOT */
#define BL2_BASE		(BL2_LIMIT - BL2_MAX_SIZE)

#define ARM_TRACE_SECURE_BUFFER

#define BL31_LIMIT			BL2_BASE
#define BL31_MAX_SIZE			(0x00242000 + \
					 MAX_XLAT_TABLES * PAGE_SIZE)
#define BL31_BASE			(BL31_LIMIT - BL31_MAX_SIZE)

#define BL2U_BASE			BL2_BASE
#define BL2U_LIMIT			BL2_LIMIT

#define TSP_IRQ_SEC_PHY_TIMER		29
#define TSP_SEC_MEM_BASE		TZDRAM_BASE
#define TSP_SEC_MEM_SIZE		TZDRAM_SIZE

#ifdef INCLUDE_OPTEE
/*
 * BL32 secure memory
 * NOTE: Any change in BL32 BASE addresses or sizes,
 * needs a corresponding changes to OPTEE-OS config.
 */
#define BL32_BASE			(TZDRAM_BASE + 0x1000)
#define BL32_MAX_SIZE			0x000a00000
#define BL32_LIMIT			(BL32_BASE + BL32_MAX_SIZE)

/* BL32 non-secure shared memory */
#define BL32_NSEC_SHMEM_BASE		(TZDRAM_BASE + TZDRAM_SIZE)
#define BL32_NSEC_SHMEM_SIZE		0x000800000
#else
#define BL32_NSEC_SHMEM_SIZE		0x0
#endif

/*
 * Memory used for mailbox and RVU MSI-X - placed
 * at non-secure memory region, with size of 30M
 */
#define RVU_MEM_BASE			(TZDRAM_BASE + TZDRAM_SIZE + \
					 BL32_NSEC_SHMEM_SIZE)
#define RVU_MEM_SIZE			0x01E00000

/*
 * Memory used for SFP slot config/status, EEPROM info
 * between AP and MCP. SM should be part of non-secure
 * memory region as MCP can access only non-secure mem
 */
#define SFP_SHMEM_BASE			(RVU_MEM_BASE + RVU_MEM_SIZE)
#define SFP_SHMEM_SIZE			0x10000 /* 64KB to start with? */

/* Shared memory area for EFI variables */
#define EFI_VAR_MEM_BASE                (SFP_SHMEM_BASE + SFP_SHMEM_SIZE)
#define EFI_VAR_MEM_SIZE                0x100000 /* 1MB */

/*
 * Memory reserved for NT_FW_CONFIG.
 * Currently it's used only by MKEX profiles,
 * 256KB are reserved for this puprose.
 */
#define NT_FW_CONFIG_BASE		(EFI_VAR_MEM_BASE + EFI_VAR_MEM_SIZE)
#ifdef NT_FW_CONFIG
#define NT_FW_CONFIG_LIMIT		0x40000
#else
#define NT_FW_CONFIG_LIMIT		0x0
#endif

/*
 * Memory used to return data from eye capture and serdes settings
 * commands to non secure world
 */
#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
/* Size of gser_qlm_eye_t page aligned*/
#define SERDES_EYE_DATA_SIZE		0x9000
#define SERDES_SETTINGS_DATA_SIZE	0x1000
#define SERDES_PRBS_DATA_SIZE		0x1000
#else /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */
#define SERDES_EYE_DATA_SIZE		0x0
#define SERDES_SETTINGS_DATA_SIZE	0x0
#define SERDES_PRBS_DATA_SIZE		0x0
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */

#define SERDES_EYE_DATA_BASE		(NT_FW_CONFIG_BASE + NT_FW_CONFIG_LIMIT)
#define SERDES_SETTINGS_DATA_BASE	(SERDES_EYE_DATA_BASE + \
					 SERDES_EYE_DATA_SIZE)
#define SERDES_PRBS_DATA_BASE		(SERDES_SETTINGS_DATA_BASE + \
					 SERDES_SETTINGS_DATA_SIZE)

/* Number of MBOX for AFPF and PFVF */
#define RVU_MBOX_NUM		2

#define MAX_RVU_PFS		16

#define SW_RVU_SDP_NUM_PF       1

#endif
