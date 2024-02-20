/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __MARVELL_GSERM_H__
#define __MARVELL_GSERM_H__

typedef enum tx_eq_limits {
	TXEQ_PRE2_MIN = 0,
	TXEQ_PRE2_MAX = 9,
	TXEQ_PRE1_MIN = -22,
	TXEQ_PRE1_MAX = 0,
	TXEQ_MAIN_MIN = 35,
	TXEQ_MAIN_MAX = 63,
	TXEQ_POST_MIN = -16,
	TXEQ_POST_MAX = 0,
	TXEQ_SUM_MAX = 63,
} tx_eq_limits_t;

#endif /* __MARVELL_GSERM_H__ */

