/*
 * Copyright (C) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __PLAT_BOARD_CFG_H__
#define __PLAT_BOARD_CFG_H__

#include <platform_dt.h>
#include <qlm_cn10k.h>
#include <platform_scfg.h>
#include <sfp_mgmt.h>
#include <phy_mgmt.h>
#include <octeontx_board_cfg.h>
#include <plat_portm_cfg.h>

typedef enum ccs_region_id {
	SEC_REGION_0,
	SECURE_NONPRESERVE = SEC_REGION_0,
	NSEC_REGION_0,
	NSECURE_NONPRESERVE = NSEC_REGION_0,
	NSEC_LMT_REGION,
	NSEC_PRESERVE_REGION_0,
	USER_PRESERVE_REGION_0,
	SEC_PRESERVE_REGION_0,
	CCS_REGION_IDX_MAX,
} ccs_region_index_t;

typedef enum {
	SW_RVU_MAP_NONE,
	SW_RVU_MAP_LEGACY,
	SW_RVU_MAP_AVAILABLE,
	SW_RVU_MAP_FORCE,
} sw_rvu_mapping;

typedef struct rvu_sw_rvu_pf {
	int num_rvu_vfs;
	int num_msix_vec;
	sw_rvu_mapping mapping;
} rvu_sw_rvu_pf_t;

/* default, if not defined by platform */
#ifndef SW_RVU_SSO_TIM_NUM_PF
#define SW_RVU_SSO_TIM_NUM_PF 1
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_NPA_NUM_PF
#define SW_RVU_NPA_NUM_PF     1
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_IPSEC_NUM_PF
#define SW_RVU_IPSEC_NUM_PF     1
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_SDP_NUM_PF
#define SW_RVU_SDP_NUM_PF     0
#endif

/* default, if not defined by platform */
#ifndef SW_RVU_REE_NUM_PF
#define SW_RVU_REE_NUM_PF     0
#endif

/* default, if not defined in platform */
#ifndef SW_RVU_CPT_NUM_PF
#define SW_RVU_CPT_NUM_PF     1
#endif

typedef enum {
	SW_RVU_NODEV = 0, /* 0 is reserved */
	SW_RVU_SSO_TIM_BASE,
	SW_RVU_NPA_BASE = SW_RVU_SSO_TIM_BASE + SW_RVU_SSO_TIM_NUM_PF,
	SW_RVU_IPSEC_BASE = SW_RVU_NPA_BASE + SW_RVU_NPA_NUM_PF,
	SW_RVU_SDP_BASE = SW_RVU_IPSEC_BASE + SW_RVU_IPSEC_NUM_PF,
	SW_RVU_CPT_BASE = SW_RVU_SDP_BASE + SW_RVU_SDP_NUM_PF,
	SW_RVU_REE_BASE = SW_RVU_CPT_BASE + SW_RVU_CPT_NUM_PF,
} sw_rvu_pfs;

/*
 * Implementation note: the 'SW_RVU_xxx_PF' values do not correspond directly
 * to RVU PF IDs; rather, they are simply an identifier (ID).
 * If a platform defines 0 instances of a device, the ID == 0.
 * See 'find_sw_rvu_dev()'.
 */
#define SW_RVU_SSO_TIM_PF(n) (!SW_RVU_SSO_TIM_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_SSO_TIM_BASE + (n))
#define SW_RVU_NPA_PF(n)     (!SW_RVU_NPA_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_NPA_BASE + (n))
#define SW_RVU_IPSEC_PF(n)     (!SW_RVU_IPSEC_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_IPSEC_BASE + (n))
#define SW_RVU_SDP_PF(n)     (!SW_RVU_SDP_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_SDP_BASE + (n))
#define SW_RVU_CPT_PF(n)     (!SW_RVU_CPT_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_CPT_BASE + (n))
#define SW_RVU_REE_PF(n)     (!SW_RVU_REE_NUM_PF ? SW_RVU_NODEV : \
			      SW_RVU_REE_BASE + (n))

#define SW_RVU_NUM_PF        (SW_RVU_SSO_TIM_NUM_PF \
			      + SW_RVU_NPA_NUM_PF \
			      + SW_RVU_IPSEC_NUM_PF \
			      + SW_RVU_SDP_NUM_PF \
			      + SW_RVU_CPT_NUM_PF \
			      + SW_RVU_REE_NUM_PF \
			      + 1 /* for SW_RVU_NODEV */)

typedef struct rvu_config {
	int valid;
	int cpt_dis;	/* to indicate if CPT block is not present */
	rvu_sw_rvu_pf_t admin_pf;
	rvu_sw_rvu_pf_t sw_pf[SW_RVU_NUM_PF];
} rvu_config_t;


#define MDIO_NUM 2

/* Define LMAC structure. */
typedef struct rpm_lmac_config {
	/* for RVU */
	int num_rvu_vfs;
	int num_msix_vec;
	int mode;		/* LMAC type */
	int portm_mode;		/* Current mode of a specific port mapped to LMAC */
	int portm;		/* PORTM index of the LMAC */
	int lane_enable;	/* From EBF DT, if a lane is enabled or not */
	/* NOTE: when this bit is set, it doesn't necessarily
	 * mean the link is up until the user sends LINK UP command
	 */
	int lmac_enable;
	int fec;	/* host side of PHY's fec type */
	uint8_t local_mac_address[6];
	uint64_t supported_link_modes;	/* rpm_mode_t enum */
	int phy_present;
	int phy_mode;		/* MAC or PHY mode for SGMII */
	phy_config_t phy_config;
	bool sfp_slot;
	sfp_slot_info_t sfp_info;
	int sgmii_1000x_mode;	/* SGMII or 1000x mode for SGMII */
} rpm_lmac_config_t;

typedef enum {
	NIX0 = 1,
	NIX1 = 2
} nix_block_t;

typedef struct rpm_config {
	uint32_t lmac_count:4;
	uint32_t lmacs_used:4;
	/* for RVU */
	uint32_t enable:1;
	uint32_t is_rfoe:1;
	uint16_t lanes_used_mask;
	rpm_lmac_config_t lmac_cfg[MAX_LMAC_PER_RPM];
	nix_block_t nix_block;
} rpm_config_t;

typedef struct spi_config {
	uint32_t has_efivar;
	uint32_t efivar_offset;
	uint32_t is_secure;
	uint32_t cs[MAX_SPI_CS];
} spi_config_t;

typedef struct persist_data_config {
	uint64_t offset;
	uint8_t bus;
	uint8_t cs;
	uint8_t valid;
	uint8_t rsvd0;
} persist_data_cfg_t;

typedef struct plat_octeontx_board_cfg {
	board_cfg_t bcfg;
	rvu_config_t rvu_config;
	rpm_config_t rpm_cfg[MAX_RPM];
	portm_config_t portm_cfg[PORTM_MAX];
	uint64_t pf_macs[MAX_RVU_PFS]; /* PF MAC Address */
	int pf_mac_num;
	int show_smi_in_nsw; /* flag to show or hide SMI in non-secure world */
	int timer1_ms;		/* RPM timer 1 callback frequency */
	int timer2_ms;		/* RPM timer 2 callback frequency */
	spi_config_t spi_cfg[MAX_SPI_BUS];
	persist_data_cfg_t persist_cfg;
	int rvu_rsvd_reg_index; /* ASC region index for RVU MEM and LMTLINES */
} plat_octeontx_board_cfg_t;

extern plat_octeontx_board_cfg_t * const plat_octeontx_bcfg;
uint64_t ccs_region_get_info(ccs_region_index_t index, uint64_t *start);
int cn10k_fdt_update_mailbox_memory_range(uint64_t address, uint64_t size);
uint64_t rvu_rsvd_region_info(uint64_t *start, uint64_t *size);
void plat_cn10k_fdt_tad_pmu_node_refresh(void);
void cn10k_check_fdt_trims(void *fdt);

#define SPI_CTRL0_ADDR	U(0x3000)
#define SPI_CTRL1_ADDR	U(0x3800)

/* Reserves 64KB in flash for OEM data */
#define OEM_DATA_OFFSET	U(0xFB0000)
#define OEM_DATA_SIZE	U(0x10000)

#endif /* __PLAT_BOARD_CFG_H__ */
