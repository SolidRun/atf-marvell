/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#include <plat_cn10k_def.h>

#define PLATFORM_CORE_PER_CLUSTER	18
#define PLATFORM_MAX_CPUS_PER_CLUSTER	PLATFORM_CORE_PER_CLUSTER
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER_COUNT * \
						PLATFORM_CORE_PER_CLUSTER)

#define MAX_IO_BLOCK_DEVICES		2
#define MAX_XLAT_TABLES			130

/* Number of TWSI interfaces */
#define TWSI_NUM			12
#define MAX_USB_BUS			 0

#define MAX_GPIO_INTERRUPTS		84

/*************************************************

|---------------------|==>Secure Memory 16MB @0
|		      |
|		      |
|		      |
|---------------------|
|	Firmware Logs |
|	512 KB      |
|---------------------|
|	BL31	      |
|	3 MB          |
|---------------------|
|	BL2	      |
|	1.2 MB	      |
|---------------------|
|       Heap          |
|       64KB          |
|---------------------|
|		      |
|	WorkBuffer    |
|	448KB	      |
|---------------------|
|	MailBox	      |
|	4 KB	      |
|---------------------|
|	Board Config  |
|       32 KB         |
|---------------------|
|	FDT	      |
|      128 KB	      |
|---------------------|==>Non Secure memory Base @ 16MB
|		      |
|		      |
|	RVU	      |
| 4 MB + LMT MAPTBL SZ|
|		      |
|---------------------|
|	SFP	      |
|	64 KB	      |
|---------------------|
|		      |
|	ETH Link      |
|	Shared memory |
|	1MB	      |
|		      |
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
|	4 MB	  |
|		      |
|---------------------|==> Non secure firmware image @ 64 MB
|		      |
|	NS Image      |
|	(BL33)	      |
|		      |
|---------------------|

**************************************************/
#define FDT_MAX_SIZE			0x20000
#define FDT_BASE			(TZDRAM_BASE + TZDRAM_SIZE - FDT_MAX_SIZE)

#define BOARD_CFG_LIMIT			FDT_BASE
#define BOARD_CFG_MAX_SIZE		0x8000
#define BOARD_CFG_BASE			(BOARD_CFG_LIMIT - BOARD_CFG_MAX_SIZE)

#define MAILBOX_LIMIT			BOARD_CFG_BASE
#define MAILBOX_MAX_SIZE		0x1000
#define MAILBOX_BASE			(MAILBOX_LIMIT - MAILBOX_MAX_SIZE)

#define WORK_BUFFER_LIMIT		MAILBOX_BASE
#define WORK_BUFFER_MAX_SIZE		0x70000	/* 448K for now */
#define WORK_BUFFER_BASE		(WORK_BUFFER_LIMIT - \
					 WORK_BUFFER_MAX_SIZE)

#define HEAP_LIMIT			WORK_BUFFER_BASE
#define HEAP_MAX_SIZE			0x10000	/* 64K */
#define HEAP_BASE			(HEAP_LIMIT - HEAP_MAX_SIZE)

#define BL2_LIMIT			HEAP_BASE
#define BL2_MAX_SIZE			(0x000aa000 + MAX_XLAT_TABLES * PAGE_SIZE)
#define BL2_BASE			(BL2_LIMIT - BL2_MAX_SIZE)

//#define ARM_TRACE_SECURE_BUFFER

#define BL2U_BASE			BL2_BASE
#define BL2U_LIMIT			BL2_LIMIT

#define BL31_LIMIT			BL2_BASE
#define BL31_MAX_SIZE			(0x0027e000 + \
					 MAX_XLAT_TABLES * PAGE_SIZE)
#define BL31_BASE			(BL31_LIMIT - BL31_MAX_SIZE)

#define TSP_IRQ_SEC_PHY_TIMER		29
#define TSP_SEC_MEM_BASE		TZDRAM_BASE
#define TSP_SEC_MEM_SIZE		TZDRAM_SIZE

/*
 * Use the workbuffer region in case of EL3 panic.
 * First 256 bytes for stack. Crash buffer starts at offset 256.
 */

#define CRASHLOG_BUF_BASE		256
#define CRASHLOG_MAGIC_OFFSET		0
#define CRASHLOG_LEN_OFFSET		8
#define CRASHLOG_BUF_OFFSET		16
#define WORK_BUFFER_CRASHLOG_BASE	(WORK_BUFFER_BASE + CRASHLOG_BUF_BASE)
#define WORK_BUFFER_CRASHLOG_SIZE	4096
#define WORK_BUFFER_CRASH_MAGIC		0xDEADAABBCCDDDEAD

/*
 * Memory for mailbox and lmtlines are allocated dynamically from
 * based on number of PFs and VFs per VF enabled. This memory if carved
 * from end of NSECURE_NONPRESERVE.
 */
#define RVU_MBOX_DYNAMIC	1

/* Memory for RVU MSI-X (2MB), SH_FWDATA + ATTESTATION (2M) and LMTMAP Table */
#define RVU_MEM_BASE			NS_MEMORY_BASE
#define RVU_MEM_SIZE			(0x400000 + PLAT_RVU_LMT_MAPTBL_SIZE)

#define RVU_LMT_NUM_LINES 2048
#define RVU_LMT_LINE_LEN  128
#define RVU_PF_LMT_LMTLINE_SIZE (RVU_LMT_NUM_LINES * RVU_LMT_LINE_LEN)

#define RVU_LMT_MAPTBL_ENTRY_SIZE (sizeof(uint64_t) * 2)
#define PLAT_RVU_LMT_MAPTBL_SIZE \
	(MAX_RVU_PFS * MAX_RVU_VFS * RVU_LMT_MAPTBL_ENTRY_SIZE)

#define RVU_PF_MAILBOX_SIZE   0x10000

/*
 * Memory used for SFP slot config/status, EEPROM info
 * between AP and MCP. SM should be part of non-secure
 * memory region as MCP can access only non-secure mem
 */
#define SFP_SHMEM_BASE			(RVU_MEM_BASE + RVU_MEM_SIZE)
#define SFP_SHMEM_SIZE			0x10000 /* 64KB to start with? */

#define ETH_LINK_SHMEM_BASE                 (SFP_SHMEM_BASE + SFP_SHMEM_SIZE)
#define ETH_LINK_SHMEM_SIZE                  0x100000 /* 1MB */

/* Shared memory area for EFI variables */
#define EFI_VAR_MEM_BASE		(ETH_LINK_SHMEM_BASE + ETH_LINK_SHMEM_SIZE)
#define EFI_VAR_MEM_SIZE		0x100000 /* 1MB */

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

#ifndef __ASSEMBLER__
int plat_is_irq_ns(uint32_t irq);
void plat_disable_secure_irq(uint32_t irq);
#endif
#endif
