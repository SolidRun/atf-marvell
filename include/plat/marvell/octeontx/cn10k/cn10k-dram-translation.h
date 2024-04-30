/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */
#ifndef __CN10K_DRAM_TRANSLATE_H__
#define __CN10K_DRAM_TRANSLATE_H__

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <octeontx_ecam.h>
#include <octeontx_utils.h>
#include <platform_def.h>
#include <strtol.h>
#include <libfdt.h>
#include <plat_ras.h>
#include <plat_cn10k_configuration.h>
#include <drivers/delay_timer.h>

#include "cavm-csrs-ap.h"
#include "cavm-csrs-sam.h"
#include "cavm-csrs-dss.h"
#include "cavm-csrs-rst.h"

/* Total number of controllers on cn10k family */
#define CN10K_MAX_MEM_CHANS  6

// When either is enabled, printing is further controlled by whether EBF_TRACE(DRAM,...) is also enabled.
#define ENABLE_HELPER_PRINTS        0  // DEBUG: set to 1 for extra debug messages for FROM_PA
#define ENABLE_HELPER_PRINTS_TO_PA  0  // DEBUG: set to 1 for extra debug messages for TO_PA

#define CN10K_CSR_INIT(v, t)       CSR_INIT(v, CAVM##t)
#define CN10K_CSR_READ(a)          CSR_READ(CAVM##a)

#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap1 cavm_dssx_ddrctl_regb_addr_map0_addrmap1_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap3 cavm_dssx_ddrctl_regb_addr_map0_addrmap3_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap4 cavm_dssx_ddrctl_regb_addr_map0_addrmap4_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap5 cavm_dssx_ddrctl_regb_addr_map0_addrmap5_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap6 cavm_dssx_ddrctl_regb_addr_map0_addrmap6_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap7 cavm_dssx_ddrctl_regb_addr_map0_addrmap7_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap8 cavm_dssx_ddrctl_regb_addr_map0_addrmap8_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap9 cavm_dssx_ddrctl_regb_addr_map0_addrmap9_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap10 cavm_dssx_ddrctl_regb_addr_map0_addrmap10_t
#define cn10k_dssx_ddrctl_regb_addr_map0_addrmap11 cavm_dssx_ddrctl_regb_addr_map0_addrmap11_t

#define cn10k_error ERROR
#define cn10k_warn  printf
#define CN10K_TRACE debug_ras

#define cn10k_is_platform(x) cavm_is_platform(x)
#define CN10K_PLATFORM_ASIM PLATFORM_ASIM

extern uint64_t cn10k_dram_get_size_mbytes_ch(int ch);

#endif /* __CN10K_DRAM_TRANSLATE_H__ */
