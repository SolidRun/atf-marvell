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

#ifdef PLAT_cnf10kb
int retimer_get_gserm_muxed_lane(const void *fdt, int retimer_idx, int gserm_idx)
{
	int lane, offset = -1;
	char name[32] = {0};
	const char *str;
	int str_nr = 2;

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	snprintf(name, sizeof(name), "RETIMER-MAP-MUX%d", retimer_idx);
	str = fdt_getprop(fdt, offset, name, NULL);

	if (!str)
		return -2;

	while (str_nr) {
		char gserm_str[8] = {0};

		snprintf(gserm_str, sizeof(gserm_str), "gserm=%d", gserm_idx);
		if (strncmp(str, gserm_str, strlen(gserm_str)) == 0)
			goto gserm_matched;

		str += strlen(str) + 1;
		str_nr--;
	}

	if (!str_nr)
		return -1;

gserm_matched:
	str = strchr(str, ',');
	if (!str)
		return -2;

	str++;
	if (strncmp(str, "lane=", 5))
		return -2;

	str += strlen("lane=");
	lane = strtol(str, NULL, 10);

	return lane;
}
#endif
