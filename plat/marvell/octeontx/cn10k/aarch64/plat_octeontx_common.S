/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <asm_macros.S>
#include <bl_common.h>
#include <cpu_macros.S>
#include <plat_macros.S>

#define EC_CAVIUM_IO_TRAP	U(0x1f)

	.global neoverse_n2_exception_handler

	/* ----------------------------------------------
	 * void cn10k_exception_handler(int)
	 * Function for handling sync exceptions specific
	 * for this platform. x1 argument contains EC
	 * from el3_esr.
	 * ----------------------------------------------
	 */
func neoverse_n2_exception_handler
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
endfunc neoverse_n2_exception_handler
