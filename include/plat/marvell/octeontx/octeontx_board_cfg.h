/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_BOARD_CFG_H__
#define __OCTEONTX_BOARD_CFG_H__

#include <stdint.h>

typedef struct boot_device_conf {
	int node;
	int boot_type;
	int controller;
	int cs;
} boot_device_conf_t;

typedef union mcu_twsi {
	uint32_t u;
	struct mcu_twsi_s {
		uint32_t int_addr	: 8; /* TWSI Internal Address */
		uint32_t bus		: 8; /* TWSI bus */
		uint32_t addr		: 8; /* TWSI slave address */
	} s;
} mcu_twsi_t;

typedef union slave_twsi {
	uint32_t u;
	struct slave_twsi_s {
		uint32_t int_addr	: 8; /* TWSI Internal Address */
		uint32_t bus		: 8; /* TWSI bus */
		uint32_t addr		: 8; /* TWSI slave address */
	} s;
} slave_twsi_t;

typedef struct board_cfg {
	char board_model[64];
	int bmc_boot_twsi_bus;
	int bmc_boot_twsi_addr;
	int bmc_ipmi_twsi_bus;
	int bmc_ipmi_twsi_addr;
	int gpio_shutdown_ctl_in;
	int gpio_shutdown_ctl_out;
#if TRUSTED_BOARD_BOOT
	uint64_t trust_rot_addr;
	uint64_t trust_key_addr;
#endif
	boot_device_conf_t boot_dev;
	mcu_twsi_t mcu_twsi;
	slave_twsi_t slave_twsi;
	bool atf_managed_twsi[TWSI_NUM];
} board_cfg_t;

#define GHES_PTR_STAT_ADDR	0
#define GHES_PTR_STATUS		1
#define GHES_PTR_RING		2
#define GHES_PTRS		3

/*
 * Default BERT ring size is small because errors stored here will
 * reset system (i.e. not many can occur).
 */
#define BERT_RAS_RING_SIZE	4

struct fdt_ghes {
	uint32_t id;
	uint32_t size[GHES_PTRS];
	void *base[GHES_PTRS];
	char name[8];
};

#if defined(PLAT_CN10K_FAMILY)
	#define MAX_GHES_OBJ	27
	typedef struct ras_config {
		struct fdt_ghes fdt_ghes[MAX_GHES_OBJ];
		int nr_ghes;
	} ras_config_t;
#else
	#define MAX_GHES_OBJ		16
	typedef struct mcc_ras_config {
		uint32_t lmcoe_count:8;
		uint32_t enabled:1;
	} mcc_ras_config_t;

	typedef struct ras_config {
		mcc_ras_config_t mcc[3];
		struct fdt_ghes fdt_ghes[MAX_GHES_OBJ];
		struct fdt_ghes fdt_bert;
		int nr_ghes;
	} ras_config_t;
#endif

#endif /* __OCTEONTX_BOARD_CFG_H__ */
