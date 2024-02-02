
/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#define __RVU_20K_H_

#include <cassert.h>

/*
 * Due to hardware errata, RVU_PRIV_PF()_MSIX_CFG fields PF_MSIXT_OFFSET
 * and VF_MSIXT_OFFSET has to be aligned to multiple of 64.
 */
#define RVU_OFFSET_ALIGNMENT	(1 << 6)
#define RVU_ALIGNMENT_MASK    (RVU_OFFSET_ALIGNMENT - 1)

#define DEVID_MASK	0xff
#define CLASS_CODE_MASK	0xffffff
#define RVU_CLASS_CODE	0x020000
#define CPT_CLASS_CODE	0x108000
/* It is Generic System Peripheral with subclass System peripheral */
#define GSP_CLASS_CODE	0x088000

#define MAX_RVU_VFS_PER_PF		128
#define SSO_TIM_TO_NPA_PFS_FACTOR	3/4
#define RVU_MSIX_VEC_SIZE		16
#define CPT_AF_VF_MSIX_FACTOR		2

/* Number of AF interrupts consumed by PF0 */
#define RVU_AF_INT_VEC_E_MSIX_SIZE	5

/* Number of MSI-X per VF */
#define RVU_VF_INT_VEC_COUNT			1

/* Bit 0 is MBOX in RVU_PF_INT register */
#define RVU_PF_INT_SET_MBOX		1

/* Bit 0 is MBOX in RVU_VF_INT register */
#define RVU_VF_INT_SET_MBOX		1
#define TRUE	1
#define FALSE	0

#define RVU_AF	0
#define NIX_DISABLED	0
#define NIX_ENABLE	1

typedef struct pci_config {
	int pf_devid;
	int vf_devid;
	int class_code;
} pci_config_t;

struct rvu_device {
	int enable;
	int num_vfs;
	int first_hwvf;
	int pf_num_msix_vec;
	int vf_num_msix_vec;
	int pf_res_nix_ena; /* Enable npa/nix to PF */
	pci_config_t pci; /* PCI configuration */
};

void rvu_devices_init(void);
