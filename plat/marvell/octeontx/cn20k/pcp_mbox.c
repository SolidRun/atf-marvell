/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 */

#include <string.h>
#include <assert.h>
#include <mmio.h>
#include <octeontx_common.h>
#include <libfdt.h>

#include "cavm-csrs-cpc.h"
#include "cavm-csrs-xcp.h"

#define MSG_DOORBELL 1

void pcp_mbox_init(void);

enum msg_type {
	MSG_SAM_READ = 0,
	MSG_SAM_WRITE,
	MSG_CSR_READ,
	MSG_CSR_WRITE,
	MSG_BDF_HIDE,
	MSG_BDF_UNHIDE,
	MSG_ECAM0_BASE,
	MSG_ECAM1_BASE,
	MSG_ECAM2_BASE
};

/*
 * Mailbox data register is 32-bit wide, and 32-bit payload
 * would fit into it.
 */
typedef struct mbox_msg {
	uint32_t msg;
} mbox_msg_t;

typedef struct mbox_channel_plat_info {
	/* mailbox payload memory lower half*/
	uintptr_t mbx_data_mem_low;
	/* mailbox payload memory upper half*/
	uintptr_t mbx_data_mem_high;
	/* mailbox msg type memory */
	uintptr_t mbx_msgt_mem;
	/* The door bell register address */
	uintptr_t db_reg_addr;
} mbox_channel_plat_info_t;

mbox_channel_plat_info_t plat_cn20_pcp_mbox_info;

typedef struct mbox_channel {
	mbox_channel_plat_info_t *info;
} mbox_channel_t;

/* The mbox channel global object */
mbox_channel_t mbox_pcp_channel;

uint64_t get_ecam_base(char *node_name)
{
	const uint32_t *ranges;
	void *fdt = fdt_ptr;
	int offset, rc, len;

	rc = fdt_check_header(fdt);
	if (rc) {
		WARN("Invalid device tree\n");
		return rc;
	}

	offset = fdt_path_offset(fdt, node_name);
	if (offset < 0) {
		WARN("FDT node not found\n");
		return offset;
	}

	ranges = fdt_getprop(fdt, offset, "ranges", &len);
	if (ranges == NULL || len < 0) {
		WARN("Failed to read ranges property\n");
		return 1;
	}

	/* Skip first three 32-bit blocks */
	const fdt32_t *target = ranges + 3;

	return  ((uint64_t)fdt32_to_cpu(*target) << 32) |
		 fdt32_to_cpu(*(target + 1));
}

void pcc_write_msg(void  *p, enum msg_type mtype, uint64_t data)
{
	mbox_msg_t *mbox_data_low, *mbox_data_high, *mbox_msg_type;
	mbox_channel_t *ch = (mbox_channel_t *)p;

	mbox_data_low  = (mbox_msg_t *)(ch->info->mbx_data_mem_low);
	mbox_data_high = (mbox_msg_t *)(ch->info->mbx_data_mem_high);
	mbox_msg_type  = (mbox_msg_t *)(ch->info->mbx_msgt_mem);

	switch (mtype) {
	case MSG_SAM_READ:
		break;
	case MSG_SAM_WRITE:
		break;
	case MSG_CSR_READ:
		break;
	case MSG_CSR_WRITE:
		break;
	case MSG_BDF_HIDE:
		break;
	case MSG_BDF_UNHIDE:
		break;
	case MSG_ECAM0_BASE:
		data = get_ecam_base("/soc@0/pci@800000000000");
		break;
	case MSG_ECAM1_BASE:
		data = get_ecam_base("/soc@0/pci@800010000000");
		break;
	case MSG_ECAM2_BASE:
		data = get_ecam_base("/soc@0/pci@800020000000");
		break;
	default:
		WARN("Invalid command\n");
	}

	mbox_data_high->msg = (uint32_t)(data >> 32);
	mbox_data_low->msg  = (uint32_t)data;
	mbox_msg_type->msg  = mtype;

	/*
	 * Ensure that two writes (one that write data to register,
	 * and other trigger doorbell) are not re-ordered.
	 */
	dmbst();

	/* Now that we have data for PCP, trigger interrupt*/
	mmio_write_32(ch->info->db_reg_addr, MSG_DOORBELL);
}

void mbox_init(mbox_channel_t *ch)
{
	assert(ch && ch->info);
	assert(ch->info->db_reg_addr);

	pcc_write_msg(ch, MSG_ECAM0_BASE, 0x0);
	pcc_write_msg(ch, MSG_ECAM1_BASE, 0x0);
	pcc_write_msg(ch, MSG_ECAM2_BASE, 0x0);
}

const uintptr_t plat_get_pcp_mbox_data_low_addr(void)
{
	return CAVM_XCPX_DEVX_XCP_MBOX(CAVM_CPC_XCP_MAP_E_PCP,
					CAVM_XCP_MBOX_DEV_E_AP_SECURE1);
}

const uintptr_t plat_get_pcp_mbox_data_high_addr(void)
{
	return CAVM_XCPX_DEVX_XCP_MBOX(CAVM_CPC_XCP_MAP_E_PCP,
					CAVM_XCP_MBOX_DEV_E_AP_SECURE2);
}

const uintptr_t plat_get_pcp_mbox_msgt_addr(void)
{
	return CAVM_XCPX_DEVX_XCP_MBOX(CAVM_CPC_XCP_MAP_E_PCP,
					CAVM_XCP_MBOX_DEV_E_AP_SECURE3);
}

const uintptr_t plat_get_pcp_db_addr(void)
{
	return CAVM_XCPX_DEVX_XCP_MBOX(CAVM_CPC_XCP_MAP_E_PCP,
					CAVM_XCP_MBOX_DEV_E_AP_SECURE0);
}

static int cn20_pcp_mbox_init(mbox_channel_plat_info_t *plat_mbox_info)
{
	assert(plat_mbox_info);

	plat_mbox_info->mbx_data_mem_low = plat_get_pcp_mbox_data_low_addr();
	plat_mbox_info->mbx_data_mem_high = plat_get_pcp_mbox_data_high_addr();
	plat_mbox_info->mbx_msgt_mem = plat_get_pcp_mbox_msgt_addr();
	plat_mbox_info->db_reg_addr = plat_get_pcp_db_addr();

	return 0;
}

void pcp_mbox_init(void)
{
	cn20_pcp_mbox_init(&plat_cn20_pcp_mbox_info);
	mbox_pcp_channel.info = &plat_cn20_pcp_mbox_info;

	mbox_init(&mbox_pcp_channel);
}
