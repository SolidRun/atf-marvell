/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __TIMERS_OCTEONTX_H__
#define __TIMERS_OCTEONTX_H__

int timers_octeontx_init_delay(void);

/**
 * Get the delta time from start in microseconds
 *
 * @param	start	start time, set to 0 for current time
 *
 * @return	number of microseconds since start
 */
uint64_t octeontx_get_dtime_usec(uint64_t start);

#endif /* __TIMERS_OCTEONTX_H__ */
