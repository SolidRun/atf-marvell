/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_SDP_H__
#define __PLAT_SDP_H__

#define RINFO_NUMVF_BIT			48
#define RINFO_RPVF_BIT			32
#define RINFO_SRN_BIT			0

#define RPPF_BIT_96XX			16
#define PF_SRN_BIT_96XX			8
#define NPFS_BIT_96XX			0

#define MAX_PEMS			4
#define MAC_MASK_96XX			0x3
#define MAC_MASK_98XX			0x1
#define MAC_MASK_CN10K			0x1
#define MAX_PFS_PER_PEM			8

#define VALID_EP_PEMS_MASK_106XX	0x1
#define PEMX_CFG_HOSTMD_BIT_MASK	0x1
#define PEMX_CFG_HOSTMD_BIT_POS		0
#define PEMX_CFG_LANES_BIT_MASK		0x3
#define PEMX_CFG_LANES_BIT_POS		1

#define SDP_INFO_SZ			512

struct sdp_epf_info {
	uint8_t      start_vf_idx;
	uint8_t      num_sdp_vfs;
	uint8_t      num_sdp_vf_rings;
};

struct sdp_node_info {
	/* Node to which this PF belons to */
	uint8_t node_id;
	uint8_t max_rvu_vfs;
	uint8_t num_pf_rings;
	uint8_t pf_srn;
#define RVU_SDP_MAX_VFS		128
	uint8_t vf_rings[RVU_SDP_MAX_VFS];
};

struct sdp_fw_data {
	struct sdp_node_info info;
	uint8_t valid; /* ro to kernel */
#define RVU_SDP_RESERVED	379
	uint8_t reserved[RVU_SDP_RESERVED];
};

struct sdp_dev {
	uint32_t	num_vfs;
	uint16_t	chan_base;
	uint16_t	num_chan;
	int		pf;
	uint8_t		valid_ep_pem_mask;
	uint8_t		mac_mask;
	uint8_t		num_sdp_pfs;
	uint8_t		num_sdp_pf_rings;
#define SDP_MAX_EPFS    16
	struct sdp_epf_info	epf[SDP_MAX_EPFS];
	struct sdp_fw_data	fw_data;
};

#endif
