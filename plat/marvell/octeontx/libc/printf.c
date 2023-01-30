/*
 * Copyright (c) 2014-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>

#include <common/debug.h>

#include <octeontx_mmap_utils.h>
#include <octeontx_common.h>


#if (defined(PLAT_CN10K_FAMILY))
/* Save logs into buffer*/
static char *log_buffer;
static unsigned long log_buffer_size;
static unsigned long currentchar;

void free_printf_buffer(void)
{
	unsigned long desc_buf = (unsigned long) log_buffer;

	if (!desc_buf)
		return;

	octeontx_mmap_remove_dynamic_region_with_sync(desc_buf, log_buffer_size);
	log_buffer = NULL;
	log_buffer_size = 0;
}

int setup_printf_buffer(char *buffer, unsigned long size)
{
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	unsigned long desc_buf = (unsigned long) buffer;
	uint64_t base_addr = 0;
	int err = 0, ns_map_size;

	/* Cleanup if buffer wasn't freed */
	if (log_buffer != NULL)
		free_printf_buffer();

	/* Round up to page size */
	ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;

	/* Map non-secure memory buffer */
	/* Note that this needs to be page aligned */
	base_addr = (unsigned long) buffer & mask;

	/* If descriptor crosses a page boundary, allocate another page */
	if ((desc_buf + size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;

	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RW | MT_NS);
	if (err) {
		ERROR("Log: descriptor mmap failed (%d)\n", err);
		return err;
	}

	log_buffer = buffer;
	log_buffer_size = size;
	currentchar = 0;

	return 0;
}

void char_into_buffer(char c)
{
	if (!log_buffer)
		return;

	if (currentchar == log_buffer_size)
		currentchar = 0;

	log_buffer[currentchar++] = c;
}
#endif

#define get_num_va_args(_args, _lcount)				\
	(((_lcount) > 1)  ? va_arg(_args, long long int) :	\
	(((_lcount) == 1) ? va_arg(_args, long int) :		\
			    va_arg(_args, int)))

#define get_unum_va_args(_args, _lcount)				\
	(((_lcount) > 1)  ? va_arg(_args, unsigned long long int) :	\
	(((_lcount) == 1) ? va_arg(_args, unsigned long int) :		\
			    va_arg(_args, unsigned int)))

#define MODE_PUTCH	0
#define MODE_STRN	1
#define MODE_STR	2

#if (defined(PLAT_CN10K_FAMILY))
#define PUTCH(c, mode, s, n, count)					\
	do {								\
		char_into_buffer(c);					\
		if ((mode) == MODE_PUTCH) {				\
			(void)putchar(c);				\
			(count)++;					\
		} else if ((mode) == MODE_STR ||			\
			   ((mode) == MODE_STRN && (n) > 1)) {		\
			*(s)++ = c;					\
			(n)--;						\
			(count)++;					\
		}							\
	} while (0)
#else
#define PUTCH(c, mode, s, n, count)					\
	do {								\
		if ((mode) == MODE_PUTCH) {				\
			(void)putchar(c);				\
			(count)++;					\
		} else if ((mode) == MODE_STR ||			\
			   ((mode) == MODE_STRN && (n) > 1)) {		\
			*(s)++ = c;					\
			(n)--;						\
			(count)++;					\
		}							\
	} while (0)
#endif

static int string_print(char **s, size_t *n, int mode, const char *str,
			int left_align, char padc, int padn)
{
	int count = 0;
	int i;

	assert(str != NULL);

	if (!left_align) {
		for (i = 0; str[i] != '\0' && padn > 0; i++)
			padn--;
		while (padn > 0) {
			PUTCH(padc, mode, *s, *n, count);
			padn--;
		}
	}

	for ( ; *str != '\0'; str++) {
		PUTCH(*str, mode, *s, *n, count);
	}

	if (left_align) {
		while (count < padn) {
			PUTCH(padc, mode, *s, *n, count);
		}
	}

	return count;
}

static int unsigned_num_print(char **s, size_t *n, int mode,
			      unsigned long long int unum, unsigned int radix,
			      char padc, int padn)
{
	/* Just need enough space to store 64 bit decimal integer */
	char num_buf[20];
	int i = 0, count = 0;
	unsigned int rem;

	do {
		rem = unum % radix;
		if (rem < 0xa)
			num_buf[i] = '0' + rem;
		else
			num_buf[i] = 'a' + (rem - 0xa);
		i++;
		unum /= radix;
	} while (unum > 0U);

	if (padn > 0) {
		while (i < padn) {
			PUTCH(padc, mode, *s, *n, count);
			padn--;
		}
	}

	while (--i >= 0) {
		PUTCH(num_buf[i], mode, *s, *n, count);
	}

	return count;
}

/*******************************************************************
 * Reduced format print for Trusted firmware.
 * The following type specifiers are supported by this print
 * %x - hexadecimal format
 * %s - string format
 * %d or %i - signed decimal format
 * %u - unsigned decimal format
 * %p - pointer format
 * %c - character format
 *
 * The following length specifiers are supported by this print
 * %l - long int (64-bit on AArch64)
 * %ll - long long int (64-bit on AArch64)
 * %z - size_t sized integer formats (64 bit on AArch64)
 *
 * The following padding specifiers are supported by this print
 * %0NN - Left-pad the number with 0s (NN is a decimal number)
 *
 * The following flags specifiers are supported by this print
 * %+ - Forces to preceed the result with plus or minus sign
 * %- - Left-justify string within the given field width
 *
 * The print exits on all other formats specifiers other than valid
 * combinations of the above specifiers.
 *******************************************************************/
int kvnprintf(char *s, size_t n, int mode, const char *fmt, va_list args)
{
	int l_count;
	long long int num;
	unsigned long long int unum;
	char *str;
	char c;
	char padc = '\0'; /* Padding character */
	int padn; /* Number of characters to pad */
	int count = 0; /* Number of printed characters */
	int sign;
	int left_align;

	while (*fmt != '\0') {
		l_count = 0;
		padn = 0;
		sign = 0;
		left_align = 0;

		if (*fmt == '%') {
			fmt++;
			/* Check the format specifier */
loop:
			switch (*fmt) {
			case 'i': /* Fall through to next one */
			case 'd':
				num = get_num_va_args(args, l_count);
				if (num < 0) {
					PUTCH('-', mode, s, n, count);
					unum = (unsigned long long int)-num;
					padn--;
				} else {
					if (sign) {
						PUTCH('+', mode, s, n, count);
						padn--;
					}
					unum = (unsigned long long int)num;
				}

				count += unsigned_num_print(&s, &n, mode, unum,
							    10, padc, padn);
				break;
			case 'c':
				c = va_arg(args, int);
				PUTCH(c, mode, s, n, count);
				break;
			case 's':
				str = va_arg(args, char *);
				count += string_print(&s, &n, mode, str,
						      left_align, padc, padn);
				break;
			case 'p':
				unum = (uintptr_t)va_arg(args, void *);
				if (unum > 0U) {
					count += string_print(&s, &n,
							      mode, "0x", 0,
							      padc, 0);
					padn -= 2;
				}

				count += unsigned_num_print(&s, &n, mode, unum,
							    16, padc, padn);
				break;
			case 'x':
				unum = get_unum_va_args(args, l_count);
				count += unsigned_num_print(&s, &n, mode, unum,
							    16, padc, padn);
				break;
			case 'z':
				if (sizeof(size_t) == 8U)
					l_count = 2;

				fmt++;
				goto loop;
			case 'l':
				l_count++;
				fmt++;
				goto loop;
			case 'u':
				unum = get_unum_va_args(args, l_count);
				count += unsigned_num_print(&s, &n, mode, unum,
							    10, padc, padn);
				break;
			case '0' ... '9':
				padc = (*fmt == '0') ? '0' : ' ';
				padn = 0;
				fmt++;

				for (;;) {
					char ch = *fmt;
					if ((ch < '0') || (ch > '9')) {
						goto loop;
					}
					padn = (padn * 10) + (ch - '0');
					fmt++;
				}
				assert(0); /* Unreachable */
			case '+':
				sign = 1;
				fmt++;
				goto loop;
			case '-':
				padc = ' ';
				padn = 0;
				left_align = 1;
				fmt++;

				for (;;) {
					char ch = *fmt;
					if ((ch < '0') || (ch > '9')) {
						goto loop;
					}
					padn = (padn * 10) + (ch - '0');
					fmt++;
				}
				assert(0); /* Unreachable */
			case '%':
				PUTCH('%', mode, s, n, count);
				break;
			default:
				/* Exit on any other format specifier */
				ERROR("kvnprintf: specifier with ASCII code '%d' not supported.",
				      *fmt);
				return -1;
			}
			fmt++;
			continue;
		}
		PUTCH(*fmt, mode, s, n, count);
		fmt++;
	}

	if (mode == MODE_STR || (mode == MODE_STRN && n > 0)) {
		*s = '\0';
	}

	return count;
}

int vprintf(const char *fmt, va_list args)
{
	return kvnprintf(NULL, 0 /* = n */, MODE_PUTCH, fmt, args);
}

int printf(const char *fmt, ...)
{
	int count;
	va_list va;

	va_start(va, fmt);
	count = vprintf(fmt, va);
	va_end(va);

	return count;
}

int vsnprintf(char *s, size_t n, const char *fmt, va_list args)
{
	return kvnprintf(s, n, MODE_STRN, fmt, args);
}

int snprintf(char *s, size_t n, const char *fmt, ...)
{
	int count;
	va_list va;

	va_start(va, fmt);
	count = vsnprintf(s, n, fmt, va);
	va_end(va);

	return count;
}

int vsprintf(char *s, const char *fmt, va_list args)
{
	return kvnprintf(s, 0 /* = n */, MODE_STR, fmt, args);
}

int sprintf(char *s, const char *fmt, ...)
{
	int count;
	va_list va;

	va_start(va, fmt);
	count = vsprintf(s, fmt, va);
	va_end(va);

	return count;
}

