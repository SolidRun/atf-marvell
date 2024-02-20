/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _QLM_H_
#define _QLM_H_

#include <cassert.h>

/* QLM APIs */

struct gserm_mode_strmap_s {
	int mode;
	int baud_rate;
	char *ebf_str;
	char *linux_str;
};

int gserm_get_mode_from_string(const char *str);

struct gserm_mode_strmap_s gserm_get_mode_strmap(int gserm_mode);

#endif /* _QLM_H_ */
