/*
 * Copyright (C) 2016-2018 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <asm_macros.S>
#include <bl_common.h>
#include <cpu_macros.S>
#include <plat_macros.S>

#define CN10K_T106XX_MIDR		0x410FD490

#define EC_CAVIUM_IO_TRAP		U(0x1f)

func cn10k_reset_func
	ret
endfunc cn10k_reset_func

func cn10k_core_pwr_dwn
	ret
endfunc cn10k_core_pwr_dwn

func cn10k_cluster_pwr_dwn
	ret
endfunc cn10k_cluster_pwr_dwn

func cn10k_cpu_reg_dump
	ret
endfunc cn10k_cpu_reg_dump

	/* ----------------------------------------------
	 * void cn10k_exception_handler(int)
	 * Function for handling sync exceptions specific
	 * for this platform. x1 argument contains EC
	 * from el3_esr.
	 * ----------------------------------------------
	 */
func cn10k_exception_handler
/* These errors are handled only in runtime (in BL31) */
#if defined(IMAGE_BL31)
	/* -----------------------------------------------------
	 * Handle Cavium-specific trap - synchronous data abort
	 * with (as per ARM's ARM DDI0487B) EC = 0x1f, which
	 * is IMPLEMENTATION_DEFINED
	 * -----------------------------------------------------
	 */
	cmp	x1, #EC_CAVIUM_IO_TRAP
	/* b.eq	octeontx_io_trap_handler */

	/* ------------------------------------------------------
	 * The following handles WFI trapped in EL0.
	 * Right now this only happens when EL0 ISR is returning.
	 * ------------------------------------------------------
	 */
	cmp	x1, #EC_WFE_WFI
	b.eq	el3_exit_wfi
#endif /* BL31 */

	/* ---------------------------------------------------
	 * Other errors are unhandled, return to generic code.
	 * ---------------------------------------------------
	 */
	ret
endfunc cn10k_exception_handler

#if REPORT_ERRATA
/*
 * Errata printing function for octeontx2. Must follow AAPCS.
 */
func cn10k_errata_report
	ret
endfunc cn10k_errata_report
#endif

declare_cpu_ops_eh cn10k, CN10K_T106XX_MIDR, \
	cn10k_reset_func, \
	cn10k_exception_handler, \
	cn10k_core_pwr_dwn, \
	cn10k_cluster_pwr_dwn

