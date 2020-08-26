#ifndef __CAVM_CSRS_FUSE_H__
#define __CAVM_CSRS_FUSE_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018-2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX FUSE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration fuse_num_e
 *
 * Fuse Number Enumeration
 * Enumerates the fuse numbers.
 */
#define CAVM_FUSE_NUM_E_ALT_BANKX(a) (0xf80 + (a))
#define CAVM_FUSE_NUM_E_ALT_FUSEX(a) (0x7b + (a))
#define CAVM_FUSE_NUM_E_AP_CRIPPLEX(a) (0x180 + (a))
#define CAVM_FUSE_NUM_E_AP_NOCRYPTOX(a) (0x200 + (a))
#define CAVM_FUSE_NUM_E_AP_POWER_LIMITX(a) (0x259 + (a))
#define CAVM_FUSE_NUM_E_BISR_FUSED_ONLY (0x73)
#define CAVM_FUSE_NUM_E_BPHY_PRESENT (0x251)
#define CAVM_FUSE_NUM_E_BSR_LOBE_DISABLEX(a) (0x28e + (a))
#define CAVM_FUSE_NUM_E_CGX_CRIPPLEX(a) (0x228 + (a))
#define CAVM_FUSE_NUM_E_CHIP_IDX(a) (8 + (a))
#define CAVM_FUSE_NUM_E_CHIP_TYPEX(a) (0 + (a))
#define CAVM_FUSE_NUM_E_CORE_INIT_MULX(a) (0x78f + (a))
#define CAVM_FUSE_NUM_E_CORE_INIT_PLL (0x796)
#define CAVM_FUSE_NUM_E_CORE_MAX_MULX(a) (0x797 + (a))
#define CAVM_FUSE_NUM_E_CPT0_NOCRYPTOX(a) (0x255 + (a))
#define CAVM_FUSE_NUM_E_CPT1_NOCRYPTOX(a) (0x257 + (a))
#define CAVM_FUSE_NUM_E_CPT_EXE_DISABLEX(a) (0x320 + (a))
#define CAVM_FUSE_NUM_E_CPT_INIT_MULX(a) (0x79e + (a))
#define CAVM_FUSE_NUM_E_CPT_INIT_PLL (0x7a5)
#define CAVM_FUSE_NUM_E_CPT_MAX_MULX(a) (0x7a6 + (a))
#define CAVM_FUSE_NUM_E_CSK_CRIPPLE (0x252)
#define CAVM_FUSE_NUM_E_DESX(a) (0x540 + (a))
#define CAVM_FUSE_NUM_E_DLL0_PD_DELAYX(a) (0x98 + (a))
#define CAVM_FUSE_NUM_E_DLL0_SETTINGSX(a) (0x90 + (a))
#define CAVM_FUSE_NUM_E_DLL1_PD_DELAYX(a) (0xa4 + (a))
#define CAVM_FUSE_NUM_E_DLL1_SETTINGSX(a) (0x9c + (a))
#define CAVM_FUSE_NUM_E_DLL2_PD_DELAYX(a) (0xb0 + (a))
#define CAVM_FUSE_NUM_E_DLL2_SETTINGSX(a) (0xa8 + (a))
#define CAVM_FUSE_NUM_E_DLL3_PD_DELAYX(a) (0xbc + (a))
#define CAVM_FUSE_NUM_E_DLL3_SETTINGSX(a) (0xb4 + (a))
#define CAVM_FUSE_NUM_E_DLL_INIT_SETTINGSX(a) (0x88 + (a))
#define CAVM_FUSE_NUM_E_DLL_LOCK_FREEZE (0x8f)
#define CAVM_FUSE_NUM_E_DLL_REFRESH_RATEX(a) (0x80 + (a))
#define CAVM_FUSE_NUM_E_DRO_CRIPPLE (0x171)
#define CAVM_FUSE_NUM_E_DSS_CRIPPLEX(a) (0x300 + (a))
#define CAVM_FUSE_NUM_E_EFUS_LCK_CFG (0x78)
#define CAVM_FUSE_NUM_E_EFUS_LCK_MAN (0x79)
#define CAVM_FUSE_NUM_E_EFUS_LCK_PRD (0x7a)
#define CAVM_FUSE_NUM_E_EMA_RAMX(a) (0x10 + (a))
#define CAVM_FUSE_NUM_E_EMA_ROMX(a) (0x67 + (a))
#define CAVM_FUSE_NUM_E_EMA_TCAMX(a) (0x5c + (a))
#define CAVM_FUSE_NUM_E_FDFX(a) (0xa00 + (a))
#define CAVM_FUSE_NUM_E_GSERP_PROCESSX(a) (0x150 + (a))
#define CAVM_FUSE_NUM_E_GSER_ERCX(a) (0xf00 + (a))
#define CAVM_FUSE_NUM_E_INIT_MULX(a) (0x16a + (a))
#define CAVM_FUSE_NUM_E_LLC_CRIPPLEX(a) (0x216 + (a))
#define CAVM_FUSE_NUM_E_LMC_CRIPPLEX(a) (0x283 + (a))
#define CAVM_FUSE_NUM_E_LMC_HALF (0x203)
#define CAVM_FUSE_NUM_E_MCS_FULL_CRIPPLEX(a) (0x172 + (a))
#define CAVM_FUSE_NUM_E_MCS_ROUTABLE_CRIPPLEX(a) (0x179 + (a))
#define CAVM_FUSE_NUM_E_MDB_FUSE_CRIPPLEX(a) (0x3d6 + (a))
#define CAVM_FUSE_NUM_E_METAL_FIXX(a) (0x6d + (a))
#define CAVM_FUSE_NUM_E_MFG_INFOX(a) (0x400 + (a))
#define CAVM_FUSE_NUM_E_MHB_FUSE_CRIPPLEX(a) (0x3b9 + (a))
#define CAVM_FUSE_NUM_E_ML_DISABLE (0x254)
#define CAVM_FUSE_NUM_E_NODE1TRAPENA (0x250)
#define CAVM_FUSE_NUM_E_NPC_5NM_TCAM_RMX(a) (0x140 + (a))
#define CAVM_FUSE_NUM_E_NPC_5NM_TCAM_RME (0x146)
#define CAVM_FUSE_NUM_E_NPC_5NM_TCAM_WMX(a) (0x144 + (a))
#define CAVM_FUSE_NUM_E_PCC_SSIDX(a) (0x310 + (a))
#define CAVM_FUSE_NUM_E_PDFX(a) (0x640 + (a))
#define CAVM_FUSE_NUM_E_PEM_CRIPPLEX(a) (0x230 + (a))
#define CAVM_FUSE_NUM_E_PNR_INIT_MULX(a) (0x780 + (a))
#define CAVM_FUSE_NUM_E_PNR_INIT_PLL (0x787)
#define CAVM_FUSE_NUM_E_PNR_MAX_MULX(a) (0x788 + (a))
#define CAVM_FUSE_NUM_E_POWER_LIMITX(a) (0x225 + (a))
#define CAVM_FUSE_NUM_E_PVTX(a) (0x680 + (a))
#define CAVM_FUSE_NUM_E_REE_CRIPPLEX(a) (0x220 + (a))
#define CAVM_FUSE_NUM_E_REFCLK_CHECK (0x72)
#define CAVM_FUSE_NUM_E_REPAIRX(a) (0x1000 + (a))
#define CAVM_FUSE_NUM_E_ROM_INFOX(a) (0x3f0 + (a))
#define CAVM_FUSE_NUM_E_RPM_CRIPPLEX(a) (0x2f7 + (a))
#define CAVM_FUSE_NUM_E_RSVD147X(a) (0x147 + (a))
#define CAVM_FUSE_NUM_E_RSVD160X(a) (0x160 + (a))
#define CAVM_FUSE_NUM_E_RSVD202 (0x202)
#define CAVM_FUSE_NUM_E_RSVD204 (0x204)
#define CAVM_FUSE_NUM_E_RSVD205 (0x205)
#define CAVM_FUSE_NUM_E_RSVD206X(a) (0x206 + (a))
#define CAVM_FUSE_NUM_E_RSVD219X(a) (0x219 + (a))
#define CAVM_FUSE_NUM_E_RSVD224 (0x224)
#define CAVM_FUSE_NUM_E_RSVD227 (0x227)
#define CAVM_FUSE_NUM_E_RSVD25BX(a) (0x25b + (a))
#define CAVM_FUSE_NUM_E_RSVD264X(a) (0x264 + (a))
#define CAVM_FUSE_NUM_E_RSVD281 (0x281)
#define CAVM_FUSE_NUM_E_RSVD282 (0x282)
#define CAVM_FUSE_NUM_E_RSVD28BX(a) (0x28b + (a))
#define CAVM_FUSE_NUM_E_RSVD2F5X(a) (0x2f5 + (a))
#define CAVM_FUSE_NUM_E_RSVD318X(a) (0x318 + (a))
#define CAVM_FUSE_NUM_E_RSVD3B0X(a) (0x3b0 + (a))
#define CAVM_FUSE_NUM_E_RSVD580X(a) (0x580 + (a))
#define CAVM_FUSE_NUM_E_RSVD74 (0x74)
#define CAVM_FUSE_NUM_E_RSVD7ADX(a) (0x7ad + (a))
#define CAVM_FUSE_NUM_E_RSVD800X(a) (0x800 + (a))
#define CAVM_FUSE_NUM_E_RSVDE00X(a) (0xe00 + (a))
#define CAVM_FUSE_NUM_E_RUN_PLATFORMX(a) (0x75 + (a))
#define CAVM_FUSE_NUM_E_SERIALX(a) (0x500 + (a))
#define CAVM_FUSE_NUM_E_SKU_CUSTX(a) (0x3e6 + (a))
#define CAVM_FUSE_NUM_E_SSO_CRIPPLE (0x253)
#define CAVM_FUSE_NUM_E_TAD_CRIPPLEX(a) (0x2b0 + (a))
#define CAVM_FUSE_NUM_E_TAD_F2X(a) (0x2f2 + (a))
#define CAVM_FUSE_NUM_E_TAD_F3X(a) (0x2f0 + (a))
#define CAVM_FUSE_NUM_E_TGGX(a) (0x600 + (a))
#define CAVM_FUSE_NUM_E_TSN_BG_TRIMX(a) (0xc0 + (a))
#define CAVM_FUSE_NUM_E_UUIDX(a) (0x58e + (a))
#define CAVM_FUSE_NUM_E_XSX_SMEM_CRIPPLEX(a) (0x3b7 + (a))

/**
 * Enumeration fuse_pvt_num_e
 *
 * INTERNAL: Fuse PVT Fuse Number Enumeration
 *
 * Enumerates the fuse numbers for the FUSE_NUM_E::PVT() fuses.
 */
#define CAVM_FUSE_PVT_NUM_E_C0_CORE_ADJX(a) (0xd0 + (a))
#define CAVM_FUSE_PVT_NUM_E_C0_SYS_ADJX(a) (0xd8 + (a))
#define CAVM_FUSE_PVT_NUM_E_CX_CORE_ADJX(a) (0xe0 + (a))
#define CAVM_FUSE_PVT_NUM_E_CX_SYS_ADJX(a) (0xe8 + (a))
#define CAVM_FUSE_PVT_NUM_E_C_ANALOG_ADJX(a) (0xf8 + (a))
#define CAVM_FUSE_PVT_NUM_E_C_DDR_ADJX(a) (0xf0 + (a))
#define CAVM_FUSE_PVT_NUM_E_DVFSX_FREQX(a,b) (0x40 + 0x10 * (a) + (b))
#define CAVM_FUSE_PVT_NUM_E_DVFSX_VOLTX(a,b) (0x48 + 0x10 * (a) + (b))
#define CAVM_FUSE_PVT_NUM_E_I0_COREX(a) (0x10 + (a))
#define CAVM_FUSE_PVT_NUM_E_I0_SYSX(a) (0x20 + (a))
#define CAVM_FUSE_PVT_NUM_E_MV_ADJX(a) (0xc0 + (a))
#define CAVM_FUSE_PVT_NUM_E_PVT_VERSIONX(a) (0 + (a))
#define CAVM_FUSE_PVT_NUM_E_UNUSED1X(a) (8 + (a))
#define CAVM_FUSE_PVT_NUM_E_VMAX_COREX(a) (0x38 + (a))
#define CAVM_FUSE_PVT_NUM_E_VMAX_SYSX(a) (0xb8 + (a))
#define CAVM_FUSE_PVT_NUM_E_VMIN_COREX(a) (0x30 + (a))
#define CAVM_FUSE_PVT_NUM_E_VMIN_SYSX(a) (0xb0 + (a))
#define CAVM_FUSE_PVT_NUM_E_XT_ADJX(a) (0xc8 + (a))

#endif /* __CAVM_CSRS_FUSE_H__ */
