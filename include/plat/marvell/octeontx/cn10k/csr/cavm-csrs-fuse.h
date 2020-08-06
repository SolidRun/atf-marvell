#ifndef __CAVM_CSRS_FUSE_H__
#define __CAVM_CSRS_FUSE_H__
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
#define CAVM_FUSE_NUM_E_BISR_FUSED_ONLY (0x53)
#define CAVM_FUSE_NUM_E_BPHY_PRESENT (0x251)
#define CAVM_FUSE_NUM_E_BSR_LOBE_DISABLEX(a) (0x28e + (a))
#define CAVM_FUSE_NUM_E_CGX_CRIPPLEX(a) (0x228 + (a))
#define CAVM_FUSE_NUM_E_CHIP_IDX(a) (8 + (a))
#define CAVM_FUSE_NUM_E_CHIP_TYPEX(a) (0 + (a))
#define CAVM_FUSE_NUM_E_CORE_INIT_MULX(a) (0x43 + (a))
#define CAVM_FUSE_NUM_E_CORE_INIT_PLL (0x4a)
#define CAVM_FUSE_NUM_E_CORE_MAX_MULX(a) (0x4b + (a))
#define CAVM_FUSE_NUM_E_CPT0_NOCRYPTOX(a) (0x255 + (a))
#define CAVM_FUSE_NUM_E_CPT1_NOCRYPTOX(a) (0x257 + (a))
#define CAVM_FUSE_NUM_E_CPT_EXE_DISABLEX(a) (0x320 + (a))
#define CAVM_FUSE_NUM_E_CPT_INIT_MULX(a) (0x5d + (a))
#define CAVM_FUSE_NUM_E_CPT_INIT_PLL (0x64)
#define CAVM_FUSE_NUM_E_CPT_MAX_MULX(a) (0x65 + (a))
#define CAVM_FUSE_NUM_E_CSK_CRIPPLE (0x252)
#define CAVM_FUSE_NUM_E_DESX(a) (0x540 + (a))
#define CAVM_FUSE_NUM_E_DLL0_PD_DELAYX(a) (0x88 + (a))
#define CAVM_FUSE_NUM_E_DLL0_SETTINGSX(a) (0x80 + (a))
#define CAVM_FUSE_NUM_E_DLL1_PD_DELAYX(a) (0x94 + (a))
#define CAVM_FUSE_NUM_E_DLL1_SETTINGSX(a) (0x8c + (a))
#define CAVM_FUSE_NUM_E_DLL2_PD_DELAYX(a) (0xa0 + (a))
#define CAVM_FUSE_NUM_E_DLL2_SETTINGSX(a) (0x98 + (a))
#define CAVM_FUSE_NUM_E_DLL3_PD_DELAYX(a) (0xac + (a))
#define CAVM_FUSE_NUM_E_DLL3_SETTINGSX(a) (0xa4 + (a))
#define CAVM_FUSE_NUM_E_DLL_LOCK_FREEZE (0x54)
#define CAVM_FUSE_NUM_E_DLL_REFRESH_RATEX(a) (0x55 + (a))
#define CAVM_FUSE_NUM_E_DRO_CRIPPLE (0x73)
#define CAVM_FUSE_NUM_E_DSS_CRIPPLEX(a) (0x300 + (a))
#define CAVM_FUSE_NUM_E_EFUS_LCK_CFG (0x78)
#define CAVM_FUSE_NUM_E_EFUS_LCK_MAN (0x79)
#define CAVM_FUSE_NUM_E_EFUS_LCK_PRD (0x7a)
#define CAVM_FUSE_NUM_E_EMA0X(a) (0x10 + (a))
#define CAVM_FUSE_NUM_E_EMA1X(a) (0x16 + (a))
#define CAVM_FUSE_NUM_E_EMA2X(a) (0x1c + (a))
#define CAVM_FUSE_NUM_E_EMA3X(a) (0x23 + (a))
#define CAVM_FUSE_NUM_E_EMA4X(a) (0x25 + (a))
#define CAVM_FUSE_NUM_E_EMA5 (0x28)
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
#define CAVM_FUSE_NUM_E_METAL_FIXX(a) (0x2c + (a))
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
#define CAVM_FUSE_NUM_E_PNR_INIT_MULX(a) (0x34 + (a))
#define CAVM_FUSE_NUM_E_PNR_INIT_PLL (0x3b)
#define CAVM_FUSE_NUM_E_PNR_MAX_MULX(a) (0x3c + (a))
#define CAVM_FUSE_NUM_E_POWER_LIMITX(a) (0x225 + (a))
#define CAVM_FUSE_NUM_E_PVTX(a) (0x680 + (a))
#define CAVM_FUSE_NUM_E_REE_CRIPPLEX(a) (0x220 + (a))
#define CAVM_FUSE_NUM_E_REFCLK_CHECK (0x52)
#define CAVM_FUSE_NUM_E_REPAIRX(a) (0x1000 + (a))
#define CAVM_FUSE_NUM_E_ROM_INFOX(a) (0x3f0 + (a))
#define CAVM_FUSE_NUM_E_RPM_CRIPPLEX(a) (0x2f7 + (a))
#define CAVM_FUSE_NUM_E_RSVD147X(a) (0x147 + (a))
#define CAVM_FUSE_NUM_E_RSVD160X(a) (0x160 + (a))
#define CAVM_FUSE_NUM_E_RSVD171 (0x171)
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
#define CAVM_FUSE_NUM_E_RSVD29X(a) (0x29 + (a))
#define CAVM_FUSE_NUM_E_RSVD2F5X(a) (0x2f5 + (a))
#define CAVM_FUSE_NUM_E_RSVD31X(a) (0x31 + (a))
#define CAVM_FUSE_NUM_E_RSVD318X(a) (0x318 + (a))
#define CAVM_FUSE_NUM_E_RSVD3B0X(a) (0x3b0 + (a))
#define CAVM_FUSE_NUM_E_RSVD580X(a) (0x580 + (a))
#define CAVM_FUSE_NUM_E_RSVD6CX(a) (0x6c + (a))
#define CAVM_FUSE_NUM_E_RSVD74 (0x74)
#define CAVM_FUSE_NUM_E_RSVD780X(a) (0x780 + (a))
#define CAVM_FUSE_NUM_E_RSVD800X(a) (0x800 + (a))
#define CAVM_FUSE_NUM_E_RSVDB0X(a) (0xb0 + (a))
#define CAVM_FUSE_NUM_E_RSVDDCX(a) (0xdc + (a))
#define CAVM_FUSE_NUM_E_RSVDE00X(a) (0xe00 + (a))
#define CAVM_FUSE_NUM_E_RSVDEB (0xeb)
#define CAVM_FUSE_NUM_E_RSVDEF (0xef)
#define CAVM_FUSE_NUM_E_RUN_PLATFORMX(a) (0x75 + (a))
#define CAVM_FUSE_NUM_E_SERIALX(a) (0x500 + (a))
#define CAVM_FUSE_NUM_E_SKU_CUSTX(a) (0x3e6 + (a))
#define CAVM_FUSE_NUM_E_SSO_CRIPPLE (0x253)
#define CAVM_FUSE_NUM_E_TAD_CRIPPLEX(a) (0x2b0 + (a))
#define CAVM_FUSE_NUM_E_TAD_F2X(a) (0x2f2 + (a))
#define CAVM_FUSE_NUM_E_TAD_F3X(a) (0x2f0 + (a))
#define CAVM_FUSE_NUM_E_TGGX(a) (0x600 + (a))
#define CAVM_FUSE_NUM_E_TS_CALBRATED (0xca)
#define CAVM_FUSE_NUM_E_TS_CAL_TEMPX(a) (0xf0 + (a))
#define CAVM_FUSE_NUM_E_TS_CAL_VERX(a) (0xcb + (a))
#define CAVM_FUSE_NUM_E_TS_COEFFICENTSX(a) (0x100 + (a))
#define CAVM_FUSE_NUM_E_TS_ERROR_NEGX(a) (0xf8 + (a))
#define CAVM_FUSE_NUM_E_TS_ERROR_POSX(a) (0xfc + (a))
#define CAVM_FUSE_NUM_E_TS_M_CX(a) (0xd0 + (a))
#define CAVM_FUSE_NUM_E_TS_N_OFFX(a) (0xe0 + (a))
#define CAVM_FUSE_NUM_E_TS_STROBE_COMP_DLYX(a) (0xec + (a))
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
