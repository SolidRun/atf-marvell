
/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#define __RVU_20K_H_

#include <cassert.h>
#include <plat_cn20k_def.h>

#define MSIX_TABLE_BASE		RVU_MEM_BASE
#define MSIX_TABLE_SIZE		0x1000000
#define APR_TABLE_BASE		MSIX_TABLE_BASE + MSIX_TABLE_SIZE
#define APR_TABLE_SIZE		RVU_LMT_MAPTBL_ENTRY_SIZE * MAX_RVU_PFS * MAX_RVU_VFS

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
#define RVU_AF_INT_VEC_E_CNT		74
#define RVU_AF_VEC_COUNT		384 /* AF+mbox+NIX+NPA+CPT+TIM+SSO */

#define RVU_LMT_MAPTBL_ENTRY_SIZE (sizeof(uint64_t) * 2)

#define TRUE	1
#define FALSE	0

#define RVU_AF	0
#define RVU_ETH_FIRST	1
#define RVU_ETH_LAST	(MAX_RVU_PFS - 7) /* i.e. last-6 */

#define PCI_DEVID_OCTEONTX2_RVU_PF   0xA063
#define PCI_DEVID_OCTEONTX2_RVU_VF   0xA064

#define RVU_CSR_WRITE(base, offset, val) (*(volatile uint64_t *)(base + offset) = cavm_cpu_to_le64((val)))
#define RVU_CSR_READ(base, offset) cavm_le64_to_cpu(*(volatile uint64_t *)(base + offset))

#define RVU_AF_MSIXTR_BASE		0x010
#define RVU_PRIV_CONST			0x8000000
#define RVU_PRIV_PFX_CFG(a)		(0x8000100 | (a) << 16)
#define RVU_PRIV_PFX_ID_CFG(a)		(0x8000120 | (a) << 16)
#define RVU_PRIV_PFX_INT_CFG(a)		(0x8000200 | (a) << 16)
#define RVU_PRIV_PFX_MSIX_CFG(a)	(0x8000110 | (a) << 16)
#define RVU_PRIV_PFX_DISC(a)		(0x8000208 | (a) << 16)
#define RVU_PRIV_HWVFX_DISC(a)		(0xD000000 | (a) << 12)

#define NPA_PRIV_AF_INT_CFG		0x30010000
#define NPA_PRIV_LFX_INT_CFG(a)		(0x30010020 | (a) << 8)
#define NPA_PRIV_LFX_CFG(a)		(0x30010010 | (a) << 8)
#define NIX_PRIV_LFX_INT_CFG(a)		(48000020 | (a) << 8)
#define NIX_PRIV_AF_INT_CFG		(0x48000000)
#define NIX_PRIV_LFX_CFG(a)		(48000010 | (a) << 8)

#define NDCX_PRIV_AF_INT_CFG(a)		(0xc00002f8 | (a) << 28)

#define APR_AF_LMT_MAP_BASE		(0x160000008)
#define APR_AF_LMT_CFG			(0x160000000)
#define APR_AF_LMT_CTL			(0x160000010)

#define CPTX_PRIV_AF_INT_CFG(a)		(0xa0042000 + 0x10000000 * ((a) & 0x1))

#define SSO_PRIV_AF_INT_CFG		(0x70003000)
#define TIM_PRIV_AF_INT_CFG		(0x90022000)

#define NIX_DISABLED			U(-1)
#define MAX_NIX				2

#define ECAMX_PF_BAR0(a) (0xc10400000000ll + 0x1000000ll * (a))
#define ECAMX_PF_BAR2(a) (0xc10040000000ll + 0x100000000ll * (a))

#define ECAMX_DOMX_BUSX_PERMIT(a, b)	(0x20000 + 0x800 * ((a) & 0x7) + 8 * ((b) & 0xff))
#define ECAMX_DOMX_BUSX_FUNCX_PERMIT(a, b, c)	(0x60000 + 0x4000 * ((a) & 0x7) + 0x800 * ((b) & 0x7) + 8 * ((c) & 0xff))


#define RPM_PF_BAR0(a)		(0xc0e000000000 + 0x100000000 * (a))
#define RPMX_CMR_RX_LMACS	0x100
#define RPMX_CONST		0x2000

enum rvu_block_addr_e {
	BLKADDR_RVUM	= 0x0ULL,
	BLKADDR_LMT	= 0x1ULL,
	BLKADDR_MSIX	= 0x2ULL,
	BLKADDR_NPA	= 0x3ULL,
	BLKADDR_NIX0	= 0x4ULL,
	BLKADDR_NIX1	= 0x5ULL,
	BLKADDR_NPC	= 0x6ULL,
	BLKADDR_SSO	= 0x7ULL,
	BLKADDR_SSOW	= 0x8ULL,
	BLKADDR_TIM	= 0x9ULL,
	BLKADDR_CPT0	= 0xaULL,
	BLKADDR_CPT1	= 0xbULL,
	BLKADDR_APR	= 0x16ULL,
	BLKADDR_MBOX	= 0x1bULL,
	BLK_COUNT	= 0x1cULL,
};

typedef struct pci_config {
	int pf_devid;
	int vf_devid;
	uint64_t class_code;
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
