/*
 * Copyright (C) 2018 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

int mvebu_cp110_comphy_is_pll_locked(uint64_t comphy_base, uint64_t comphy_index);
int mvebu_cp110_comphy_power_off(uint64_t comphy_base, uint64_t comphy_index);
int mvebu_cp110_comphy_power_on(uint64_t comphy_base, uint64_t comphy_index, uint64_t comphy_mode);