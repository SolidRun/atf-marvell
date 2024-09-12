/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

#ifndef __PLAT_BOARD_CFG_H__
#define __PLAT_BOARD_CFG_H__

#include <platform_dt.h>
#include <platform_scfg.h>
#include <octeontx_board_cfg.h>
#include <plat_eth_cfg.h>

/* Define enum for configuring ASC regions so that software can use
 * fixed mapping instead of using hardcode value. Allocate a separate
 * asc region for each feature.
 */
typedef enum ccs_region_id {
	SEC_ASC0,       // Secure region (16 MB fixed)
	NSEC_M_ASC0,    // Shared memory region used by ECP & ATF for ethernet data
	NSEC_M_ASC1,    // Total memory after allocating other memory regions
	NSEC_0_LMT,     // Reserved for LMTlines by ATF
	NSEC_P_ASC0,    // Preserved memory region for RAMOOPs (configurable)
	NSEC_P_ASC1,    // Preserved memory region for Custom region (configurable)
	SEC_0_OPTEE,    // Configurable region for OPTEE use
	NSEC_ASC_MAX,   // limit to MAX_NUM_ASC_REGIONS	
	CCS_REGION_IDX_MAX,
} ccs_region_index_t;

typedef enum {
	SPI_MEM_OP_UNKNOWN = 0,
	SPI_MEM_OP_1_1_1 = 1,
	SPI_MEM_OP_1_1_4 = 2,
	SPI_MEM_OP_1_4_4 = 3
} spi_mem_op_type_t;

struct xspi_cs_config {
	bool config_valid;
	bool safemode_triggered;
	spi_mem_op_type_t read_op_type;
	spi_mem_op_type_t program_op_type;
	uint32_t read_seq_0;
	uint32_t read_seq_1;
	uint32_t read_seq_2;
	uint32_t prog_seq_0;
	uint32_t prog_seq_1;
	uint32_t prog_seq_2;
	uint32_t erase_seq_0;
	uint32_t erase_seq_1;
	uint32_t erase_seq_2;
};

typedef struct spi_config {
	uint32_t has_efivar;
	uint32_t efivar_offset;
	uint32_t is_secure;
	uint32_t cs[MAX_SPI_CS];
	uint32_t configured[MAX_SPI_CS];
	uint32_t erase_64k[MAX_SPI_CS];
	struct xspi_cs_config cs_configuration[MAX_SPI_BUS][MAX_SPI_CS];
} spi_config_t;

typedef struct persist_data_config {
	uint64_t offset;
	uint8_t bus;
	uint8_t cs;
	uint8_t valid;
	uint8_t rsvd0;
} persist_data_cfg_t;

typedef struct rvu_pf_cfg {
	uint64_t cls_code;
	uint16_t devid;
	uint16_t vf_devid;
	uint8_t rev;
	int pf_id;
	int num_vfs;
	int num_msix_vec;
	bool enable;
} rvu_pf_cfg_t;

typedef struct rvu_config {
	int valid;
	int num_dev;
	rvu_pf_cfg_t pf_cfg[MAX_RVU_PFS];
} rvu_config_t;

typedef struct plat_octeontx_board_cfg {
	board_cfg_t bcfg;
	spi_config_t spi_cfg[MAX_SPI_BUS];
	int do_switch_reset; /* Flag to Save EBF SWITCH_MICROINIT dt prop */
	int reserved_os_memory_size;
	uint64_t adbg_dram_region_base;
	persist_data_cfg_t persist_cfg;
	rvu_config_t rvu_cfg;
	int rvu_rsvd_reg_index; /* ASC region index for RVU MEM and LMTLINES */
	int num_chiplet; /* Number of chiplets */
	int max_nodes;
} plat_octeontx_board_cfg_t;

extern plat_octeontx_board_cfg_t * const plat_octeontx_bcfg;
uint64_t ccs_region_get_info(ccs_region_index_t index, uint64_t *start);
void check_fdt_trims(void *fdt);
int cn20k_fdt_update_mailbox_memory_range(uint64_t address, uint64_t size);
uint64_t rvu_rsvd_region_info(uint64_t *start, uint64_t *size);

#define SPI_CTRL0_ADDR	U(0xcf10)
#define SPI_CTRL1_ADDR	U(0xcf11)

#endif /* __PLAT_BOARD_CFG_H__ */
