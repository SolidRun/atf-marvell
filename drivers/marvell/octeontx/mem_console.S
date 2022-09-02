/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:	BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <asm_macros.S>
#include <console_macros.S>
#include <drivers/marvell/octeontx/mem_console.h>

	/*
	 * "core" functions are low-level implementations that don't require
	 * writable memory and are thus safe to call in BL1 crash context.
	 */
	.globl console_mem_core_putc
	.globl console_mem_core_init

	.globl console_mem_putc

	/* -----------------------------------------------
	 * function will be accessed by console_init and
	 * crash reporting.
	 * Out: return 0
	 * -----------------------------------------------
	 */
func console_mem_core_init
	mov	w0, #0
	ret
endfunc console_mem_core_init

	.globl console_mem_register

	/* -----------------------------------------------
	 * console. Storage passed in for the console struct
	 * *must* be persistent (i.e. not from the stack).
	 * In: x0 - Log buffer  base address
	 *     w1 - UART clock in Hz
	 *     w2 - Baud rate
	 *     x3 - pointer to empty console_t struct
	 * Out: return 1 on success, 0 on error
	 * Clobber list : x0, x1, x2, x6, x7
	 * -----------------------------------------------
	 */
func console_mem_register
	mov	x7, x30
	mov	x6, x3
	cbz	x6, register_fail
	str	x0, [x6, #CONSOLE_T_BASE]

	mov	x0, x6
	mov	x30, x7
	finish_console_register mem, putc=1, getc=0, flush=0

register_fail:
	ret	x7
endfunc console_mem_register

	/* --------------------------------------------------------
	 * int console_mem_core_putc(int c, unsigned int base_addr)
	 * Function to output a character over the console. It
	 * returns the character printed on success or -1 on error.
	 * In : w0 - character to be printed
	 *      x1 - console base address
	 * Out : return -1 on error else return character.
	 * Clobber list : x2
	 * --------------------------------------------------------
	 */
func console_mem_core_putc
	/* Check the input parameter */
	cbz	x1, putc_error

	/* Prepend '\r' to '\n' */
	ldr	x2, [x1, #FWLOG_POINTER_OFF]
	ldr	x3, [x1, #FWLOG_BASE_OFF]
	ldr	x4, [x1, #FWLOG_END_OFF]
	strb	w0, [x2]
	add	x2, x2, #1
	cmp	x2, x4
	b.ne	1f
	mov	x2, x3
	mov     x0, #1
	str	x0, [x1, #FWLOG_WRAPAROUND_OFF]
1:
	str	x2, [x1, #FWLOG_POINTER_OFF]
	mov	w0, #0
	ret
putc_error:
	mov	w0, #-1
	ret
endfunc console_mem_core_putc

	/* --------------------------------------------------------
	 * int console_mem_putc(int c, console_t *console)
	 * Function to output a character over the console. It
	 * returns the character printed on success or -1 on error.
	 * In : w0 - character to be printed
	 *      x1 - pointer to console_t structure
	 * Out : return -1 on error else return character.
	 * Clobber list : x2
	 * --------------------------------------------------------
	 */
func console_mem_putc
	ldr	x1, [x1, #CONSOLE_T_BASE]
	cbz	x1, memcon_init_error
	b	console_mem_core_putc
memcon_init_error:
	ret
endfunc console_mem_putc
