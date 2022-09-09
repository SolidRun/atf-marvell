/*
 * Copyright (c) 2020 Marvell.
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
	NSECURE_NONPRESERVE_1,
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
#define SW_RVU_IPSEC_NUM_PF     0
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
#define SW_RVU_CPT_NUM_PF     0
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

typedef struct lmac_mode_info {
	uint32_t available:1;
	uint32_t an_disable:1;
	uint32_t sgmii_speed:4;
	uint32_t sgmii_duplex:1;
	uint32_t reserved1:25;
} lmac_mode_info_t;

/* Define LMAC structure. */
typedef struct rpm_lmac_config {
	/* for RVU */
	int num_rvu_vfs;
	int num_msix_vec;
	int mode;		/* LMAC type */
	int portm_idx;		/* PORTM index of the LMAC */
	int port_enable;	/* From EBF DT, if a PORTM is enabled or not */
	/* NOTE: when this bit is set, it doesn't necessarily
	 * mean the link is up until the user sends LINK UP command
	 */
	int lmac_enable;
	int fec;	/* host side of PHY's fec type */
	uint8_t local_mac_address[6];
	uint64_t supported_link_modes;	/* rpm_mode_t enum */
	int phy_present;
	int phy_mode;		/* MAC or PHY mode for SGMII */
	phy_config_t *phy_config;
	bool sfp_slot;
	sfp_slot_info_t *sfp_info;
	lmac_mode_info_t lmac_mode_info[CAVM_RPM_LMAC_TYPES_E_MAX];
	int sgmii_1000x_mode;	/* SGMII or 1000x mode for SGMII */
	int sgmii_speed;	/* SGMII/USGMII speed if AN disabled */
	int sgmii_duplex;	/* SGMII/USGMII duplex if AN disabled */
	int an_disable;
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

struct xspi_cs_config {
	bool config_valid;
	bool safemode_triggered;
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

typedef struct gserm_plat_config {
	uint32_t lane_map;      /* Port MAC to SERDES lane mapping.
				 * Nibble # = MAC lane (fixed #)
				 * Nibble Value = Connected GSERM SERDES lane
				 */
	uint16_t sync_e_map;    /* GSERM SYNC-E REFCLK Enable Map
				 * Nibble # = GSERM lane (fixed #)
				 * Nibble Value = SYNC-E REFCLK Enabled (cnf10kb & Eth only)
				 */
	uint8_t refclk_conn;    /* Set to 1 if a REF_CLK is terminated to the GSERM clock circuit */
	uint8_t refclk_term;    /* REF_CLK termination: 0 = 50 Ohm, 1 = None */
	uint8_t rx_cal_setting; /* GSERM Phase Adaptation Calibration Value
				 * cnf10ka only
				 */
} gserm_plat_config_t;

typedef struct spi_config {
	uint32_t has_efivar;
	uint32_t efivar_offset;
	uint32_t is_secure;
	uint32_t cs[MAX_SPI_CS];
	uint32_t configured[MAX_SPI_CS];
	uint32_t erase_64k[MAX_SPI_CS];
	struct xspi_cs_config cs_configuration[MAX_SPI_BUS][MAX_SPI_CS];
} spi_config_t;

typedef struct usb_config {
	uint32_t is_enabled;
} usb_config_t;

typedef struct persist_data_config {
	uint64_t offset;
	uint8_t bus;
	uint8_t cs;
	uint8_t valid;
	uint8_t rsvd0;
} persist_data_cfg_t;

typedef struct ppr_config{
	uint32_t is_enabled;
	uint32_t eprc_th;
} ppr_config_t;

typedef struct plat_octeontx_board_cfg {
	board_cfg_t bcfg;
	rvu_config_t rvu_config;
	rpm_config_t rpm_cfg[MAX_RPM];
	portm_config_t portm_cfg[MAX_PORTM];
	gserm_plat_config_t gserm_plat_cfg[MAX_GSERM];
	sfp_slot_info_t sfp_slots[MAX_PORTM];
	phy_config_t phys[MAX_PORTM];
	uint64_t pf_macs[MAX_RVU_PFS]; /* PF MAC Address */
	int pf_mac_num;
	int timer1_ms;		/* RPM timer 1 callback frequency */
	int timer2_ms;		/* RPM timer 2 callback frequency */
	spi_config_t spi_cfg[MAX_SPI_BUS];
	persist_data_cfg_t persist_cfg;
	int rvu_rsvd_reg_index; /* ASC region index for RVU MEM and LMTLINES */
	int do_switch_reset; /* Flag to Save EBF SWITCH_MICROINIT dt prop */
	int reserved_os_memory_size;
	int asym_mem_config;
	usb_config_t usb_cfg[MAX_USB_BUS];
	ras_config_t ras_config;
	ppr_config_t ppr_config;
} plat_octeontx_board_cfg_t;

extern plat_octeontx_board_cfg_t * const plat_octeontx_bcfg;
uint64_t ccs_region_get_info(ccs_region_index_t index, uint64_t *start);
int cn10k_fdt_update_mailbox_memory_range(uint64_t address, uint64_t size);
uint64_t rvu_rsvd_region_info(uint64_t *start, uint64_t *size);
void plat_cn10k_fdt_tad_pmu_node_refresh(void);
void plat_cn10k_fdt_ddr_pmu_node_refresh(void);
void cn10k_check_fdt_trims(void *fdt);
void plat_cn10k_fdt_ddr_mpam_pmu_update(void);

#define SPI_CTRL0_ADDR	U(0x8040)
#define SPI_CTRL1_ADDR	U(0x8050)

/* Reserves 64KB in flash for OEM data */
#define OEM_DATA_OFFSET	U(0xFB0000)
#define OEM_DATA_SIZE	U(0x10000)

#endif /* __PLAT_BOARD_CFG_H__ */
