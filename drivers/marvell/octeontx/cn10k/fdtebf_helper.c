/*
 * Copyright (c) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 */

#include <libfdt.h>
#include <stdlib.h>
#include <strtol.h>
#include <string.h>

static const char *fdtebf_get_value(const void *fdt_addr, int offset, const char *name)
{
	char n[64];

	strlcpy(n, name, sizeof(n));
	while (*n) {
		const char *val = fdt_getprop(fdt_addr, offset, n, NULL);
		char *p = NULL;

		if (val)
			return val;

		p = strrchr(n, '.');
		if (p)
			*p = '\0';
		else
			break;
	}
	return NULL;
}

long cn10k_fdtebf_get_num(const void *fdt_addr, const char *prop, int base)
{
	long ret;
	int offset;
	const char *buf;
	char *endptr = NULL;

	offset = fdt_path_offset(fdt_addr, "/cavium,bdk");
	buf = fdtebf_get_value(fdt_addr, offset, prop);
	if (!buf)
		return -1;

	ret = strtol(buf, &endptr, base);
	if (!endptr || *endptr != '\0')
		return -1;

	return ret;
}

