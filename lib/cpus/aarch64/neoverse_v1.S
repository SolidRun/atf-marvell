/*
 * Copyright (c) 2019-2022, ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch.h>
#include <asm_macros.S>
#include <common/bl_common.h>
#include <neoverse_v1.h>
#include <cpu_macros.S>
#include <plat_macros.S>
#include "wa_cve_2022_23960_bhb_vector.S"

/* Hardware handled coherency */
#if HW_ASSISTED_COHERENCY == 0
#error "Neoverse V1 must be compiled with HW_ASSISTED_COHERENCY enabled"
#endif

/* 64-bit only core */
#if CTX_INCLUDE_AARCH32_REGS == 1
#error "Neoverse-V1 supports only AArch64. Compile with CTX_INCLUDE_AARCH32_REGS=0"
#endif

#if WORKAROUND_CVE_2022_23960
	wa_cve_2022_23960_bhb_vector_table NEOVERSE_V1_BHB_LOOP_COUNT, neoverse_v1
#endif /* WORKAROUND_CVE_2022_23960 */

	/* ---------------------------------------------
	 * HW will do the cache maintenance while powering down
	 * ---------------------------------------------
	 */
func neoverse_v1_core_pwr_dwn
	/* ---------------------------------------------
	 * Enable CPU power down bit in power control register
	 * ---------------------------------------------
	 */
	mrs	x0, NEOVERSE_V1_CPUPWRCTLR_EL1
	orr	x0, x0, #NEOVERSE_V1_CPUPWRCTLR_EL1_CORE_PWRDN_BIT
	msr	NEOVERSE_V1_CPUPWRCTLR_EL1, x0
	isb
	ret
endfunc neoverse_v1_core_pwr_dwn

	/*
	 * Errata printing function for Neoverse V1. Must follow AAPCS.
	 */
#if REPORT_ERRATA
func neoverse_v1_errata_report
	stp     x8, x30, [sp, #-16]!

	bl      cpu_get_rev_var
	mov     x8, x0

	/*
	* Report all errata. The revision-variant information is passed to
	* checking functions of each errata.
	*/
	report_errata WORKAROUND_CVE_2022_23960, neoverse_v1, cve_2022_23960

	ldp     x8, x30, [sp], #16
	ret
endfunc neoverse_v1_errata_report

#endif

func neoverse_v1_reset_func
	mov	x19, x30

	/* Disable speculative loads */
	msr	SSBS, xzr

+#if IMAGE_BL31 && WORKAROUND_CVE_2022_23960
	/*
	 * The Neoverse-V1 generic vectors are overridden to apply errata
	 * mitigation on exception entry from lower ELs.
	 */
	adr	x0, wa_cve_vbar_neoverse_v1
	msr	vbar_el3, x0
#endif /* IMAGE_BL31 && WORKAROUND_CVE_2022_23960 */


	isb
	ret	x19
endfunc neoverse_v1_reset_func

func check_errata_cve_2022_23960
#if WORKAROUND_CVE_2022_23960
	mov	x0, #ERRATA_APPLIES
#else
	mov	x0, #ERRATA_MISSING
#endif
	ret
endfunc check_errata_cve_2022_23960

	/* ---------------------------------------------
	 * This function provides Neoverse-V1 specific
	 * register information for crash reporting.
	 * It needs to return with x6 pointing to
	 * a list of register names in ascii and
	 * x8 - x15 having values of registers to be
	 * reported.
	 * ---------------------------------------------
	 */
.section .rodata.neoverse_v1_regs, "aS"
neoverse_v1_regs:  /* The ascii list of register names to be reported */
	.asciz	"cpuectlr_el1", ""

func neoverse_v1_cpu_reg_dump
	adr	x6, neoverse_v1_regs
	mrs	x8, NEOVERSE_V1_CPUECTLR_EL1
	ret
endfunc neoverse_v1_cpu_reg_dump

declare_cpu_ops neoverse_v1, NEOVERSE_V1_MIDR, \
	neoverse_v1_reset_func, \
	neoverse_v1_core_pwr_dwn
