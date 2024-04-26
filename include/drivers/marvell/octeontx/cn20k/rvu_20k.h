
/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#define __RVU_20K_H_

#include <cassert.h>

#define MSIX_TABLE_BASE		RVU_MEM_BASE
#define MSIX_TABLE_SIZE		0x200000

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
#define RVU_MSIX_VEC_SIZE		16

/* Number of AF interrupts consumed by PF0 */
#define RVU_AF_INT_VEC_E_MSIX_SIZE	5
#define RVU_AF_VEC_COUNT		38 /* AF + NIX + NPA + CPT + TIM + SSO*/


#define TRUE	1
#define FALSE	0

#define RVU_AF	0

#define RVU_CSR_WRITE(base, offset, val) (*(volatile uint64_t *)(base + offset) = cavm_cpu_to_le64((val)))
#define RVU_CSR_READ(base, offset) cavm_le64_to_cpu(*(volatile uint64_t *)(base + offset))

#define RVU_AF_BAR0_BASE		0x850000000000ll

#define RVU_AF_MSIXTR_BASE		0x010
#define RVU_PRIV_CONST			0x8000000
#define RVU_PRIV_PFX_CFG(a)		(0x8000100 | (a) << 16)
#define RVU_PRIV_PFX_ID_CFG(a)		(0x8000120 | (a) << 16)
#define RVU_PRIV_PFX_INT_CFG(a)		(0x8000200 | (a) << 16)
#define RVU_PRIV_PFX_MSIX_CFG(a)	(0x8000110 | (a) << 16)

#define NPA_PRIV_AF_INT_CFG		0x30010000
#define NPA_PRIV_LFX_INT_CFG(a)		(0x30010020 | (a) << 8)
#define NPA_PRIV_LFX_CFG(a)		(0x30010010 | (a) << 8)
#define NIX_PRIV_LFX_INT_CFG(a)		(48000020 | (a) << 8)
#define NIX_PRIV_AF_INT_CFG		(0x48000000)
#define NIX_PRIV_LFX_CFG(a)		(48000010 | (a) << 8)

#define NDCX_PRIV_AF_INT_CFG(a)		(0xc00002f8 | (a) << 28)

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

struct rvu_dev_list {
	int devid;
};

void rvu_devices_init(void);
