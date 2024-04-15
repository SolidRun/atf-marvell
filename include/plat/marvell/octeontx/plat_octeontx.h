/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_OCTEONTX_H__
#define __PLAT_OCTEONTX_H__

void plat_octeontx_set_secondary_cpu_jump_addr(uint64_t entrypoint_addr);

void plat_octeontx_setup(void);
void plat_pwrc_setup(void);
#if defined(PLAT_CN20K_FAMILY)
void pcp_mbox_init(void);
#endif

unsigned int plat_get_rom_t_cnt();

void plat_octeontx_cpu_setup(void);

#if DBG_ALLOW_SYST_REG_AC
void plat_octeontx_dbg_sysreg_set(void);
#endif

#endif /* __PLAT_OCTEONTX_H__ */
