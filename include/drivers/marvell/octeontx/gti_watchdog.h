/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __GTI_WATCHDOG_H__
#define __GTI_WATCHDOG_H__

int gti_watchdog_is_running(int core);
void gti_watchdog_disable(void);
void plat_gti_access_secure_memory_setup(int do_secure) WEAK;
void plat_gti_irq_setup(int core) WEAK;
extern uint64_t del3t_trap_handler;

/* Driver API */

/**
 * Poke the watchdog on the specified core
 */
void gti_watchdog_poke(int core);

/**
 * Poke the generic watchdog(GTI_WR0 or GTI_WR1)
 */
void gti_watchdog_generic_poke(int wdg);

int gti_wdog_remove_handler(void);

int gti_wdog_install_handler(uint64_t core, uint64_t gti_elr,
			     uint64_t gti_spsr, uint64_t kernel_in_hyp_mode);

int gti_wdog_start(uint64_t el0_kernel_wdog_callback,
		   uint64_t elx_kernel_wdog_callback,
		   uint64_t watchdog_timeout_ms, uint64_t cores);

int gti_wdog_restore_wdog_ctxt(void);

void gti_wdog_pet(void);

#endif /* __GTI_WATCHDOG_H__ */
