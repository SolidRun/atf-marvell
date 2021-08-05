/*
 * Copyright (C) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <lib/extensions/ras.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <octeontx_irqs_def.h>
#include <arch_helpers.h>
#include <drivers/arm/gicv3.h>
#include <plat_ras.h>
#include <plat/common/platform.h>
#include <bl31/interrupt_mgmt.h>
#include "cavm-arch.h"
#include "cavm-csrs-apa.h"
#include "cavm-csrs-gic.h"

extern uintptr_t octeontx_gic_get_redistr_base(void);

static char *core_err_src[] = {
	"DSU_RAM",
	"CORE_RAM",
};

static char *err_code_str[] = {
[0] = "No Error",
[2] = "Internal ECC Error",
[6] = "Cache data ECC Error",
[7] = "Cache TAG ECC Error",
[8] = "TLB data parity Error",
[18] = "Cache copyback response Error",
[21] = "Unsupported slave deferred Error"
};

static char *err_type_str[] = {
	"No Error",
	"Corrected Error (CE)"
	"Deferred Error (DE)",
	"Uncorrected Error (UE)",
};

struct ras_interrupt cn10k_ras_interrupts[NUMBER_OF_RAS_INTERRUPTS];

static int cn10k_core_ras_probe_sysreg(const struct err_record_info *info,
	int *probe_data)
{
	return ras_err_ser_probe_sysreg(info, probe_data);
}

static int cn10_core_ras_read_error(cn10k_core_err_info_t *err_info)
{
	uint64_t erx_mis0;

	erx_mis0 = read_erxmisc0_el1();
	err_info->unit = (erx_mis0 >> ERX_MISC0_UNIT_SHIFT) & ERX_MISC0_UNIT_MASK;
	switch (err_info->unit) {
	case UNIT_L1_ICACHE:
		err_info->l1i.array = (erx_mis0 >> ERX_MISC0_ARRAY_SHIFT) &
			ERX_MISC0_ARRAY_MASK;
		err_info->l1i.index = (erx_mis0 >> ERX_MISC0_INDEX_SHIFT) &
			ERX_MISC0_INDEX_MASK;
		err_info->l1i.bank = (erx_mis0 >> ERX_MISC0_BANK_SHIFT) &
			ERX_MISC0_BANK_MASK;
		err_info->l1i.subbank = (erx_mis0 >> ERX_MISC0_SUBBANK_SHIFT) &
			ERX_MISC0_SUBBANK_MASK;
		err_info->l1i.way = (erx_mis0 >> ERX_MISC0_WAY_SHIFT) &
			ERX_MISC0_WAY_MASK;
		break;
	case UNIT_L2_TLB:
		err_info->l2tlb.index = (erx_mis0 >> ERX_MISC0_INDEX_SHIFT) &
			ERX_MISC0_INDEX_MASK;
		err_info->l2tlb.way = (erx_mis0 >> ERX_MISC0_WAY_SHIFT) &
			ERX_MISC0_WAY_MASK;
		break;
	case UNIT_L1_DCACHE:
		err_info->l1d.array = (erx_mis0 >> ERX_MISC0_ARRAY_SHIFT) &
			ERX_MISC0_ARRAY_MASK;
		err_info->l1d.index = (erx_mis0 >> ERX_MISC0_INDEX_SHIFT) &
			ERX_MISC0_INDEX_MASK;
		err_info->l1d.subarray = (erx_mis0 >> ERX_MISC0_SUBARRAY_SHIFT) &
			ERX_MISC0_SUBARRAY_MASK;
		err_info->l1d.way = (erx_mis0 >> ERX_MISC0_WAY_SHIFT) &
			ERX_MISC0_WAY_MASK;
		break;
	case UNIT_L2_CACHE:
		err_info->l2.array = (erx_mis0 >> ERX_MISC0_ARRAY_SHIFT) &
			ERX_MISC0_ARRAY_MASK;
		err_info->l2.index = (erx_mis0 >> ERX_MISC0_INDEX_SHIFT) &
			ERX_MISC0_INDEX_MASK;
		err_info->l2.subarray = (erx_mis0 >> ERX_MISC0_SUBARRAY_SHIFT) &
			ERX_MISC0_SUBARRAY_MASK;
		err_info->l2.bank = (erx_mis0 >> ERX_MISC0_BANK_SHIFT) &
			ERX_MISC0_BANK_MASK;
		err_info->l2.way = (erx_mis0 >> ERX_MISC0_WAY_SHIFT) &
			ERX_MISC0_WAY_MASK;
		break;
	}

	return 0;
}

static int cn10k_core_ras_ext_handler(const struct err_record_info *info,
	int probe_data, const struct err_handler_data *const data)
{
	uint64_t erx_status, erx_mis0;
	uint32_t intr = data->interrupt;
	int err_type = 0;
	cn10k_core_err_info_t core_err_info = {0};

	core_err_info.mpidr = read_mpidr_el1();
	core_err_info.src = probe_data;

	core_err_info.flags = CN10K_CORE_ERRFLG_REC_VALID | CN10K_CORE_ERRFLG_MPIDR_VALID;

	debug_ras("RAS interrupt on 0x%x from %s\n",
		(unsigned int) core_err_info.mpidr, core_err_src[probe_data]);
	ser_sys_select_record(probe_data);
	erx_status = read_erxstatus_el1();
	if (erx_status & (ERR_STATUS_V_MASK << ERR_STATUS_V_SHIFT)) {
		erx_mis0 = read_erxmisc0_el1();
		ERROR("RAS: CPU Error: ERX_STATUS 0x%lx ERX_MISC0 0x%lx\n",
				(unsigned long)erx_status, (unsigned long) erx_mis0);
		if (erx_status & (ERR_STATUS_UE_MASK << ERR_STATUS_UE_SHIFT))
			err_type = RAS_ERR_UE;
		else if ((erx_status & (ERR_STATUS_CE_MASK << ERR_STATUS_CE_SHIFT)) &&
			(erx_status & (ERR_STATUS_OF_MASK << ERR_STATUS_OF_SHIFT)))
			err_type = RAS_ERR_CE;
		else if (erx_status & (ERR_STATUS_DE_MASK << ERR_STATUS_DE_SHIFT))
			err_type = RAS_ERR_DE;

		ERROR("RAS: %s on 0x%x from %s\n",
			err_type_str[err_type],
			(unsigned int) read_mpidr_el1(),
			core_err_src[probe_data]);
		ERROR("RAS: core error code: %s\n",
			err_code_str[erx_status & ERR_STATUS_SERR_MASK]);

		if (erx_status & (ERR_STATUS_PN_MASK << ERR_STATUS_PN_SHIFT))
			core_err_info.flags |= CN10K_CORE_ERRFLG_POISON;

		if (erx_status & (ERR_STATUS_ER_MASK << ERR_STATUS_ER_SHIFT))
			core_err_info.flags |= CN10K_CORE_ERRFLG_EA_REPORTED;

		if (!((erx_status >> ERR_STATUS_UET_SHIFT) & ERR_STATUS_UET_MASK))
			core_err_info.flags |= CN10K_CORE_ERRFLG_UEUC;

		if (erx_status & (ERR_STATUS_MV_MASK << ERR_STATUS_MV_SHIFT))
			cn10_core_ras_read_error(&core_err_info);

		if (erx_status & (ERR_STATUS_AV_MASK << ERR_STATUS_AV_SHIFT)) {
			core_err_info.err_addr = read_erxaddr_el1();
			core_err_info.flags |= CN10K_CORE_ERRFLG_ADDR_VALID;
		}

		write_erxstatus_el1(erx_status);
	}

	core_err_info.err_type = err_type;

	plat_ic_end_of_interrupt(intr);
	if (err_type == 0)
		ERROR("RAS: Spurious interrupt on CPU 0x%x\n",
				(unsigned int) core_err_info.mpidr);
	else if (err_type != RAS_ERR_CE) {
		ERROR("RAS: Fatal error on CPU 0x%x, Requires cold reset\n",
				(unsigned int) core_err_info.mpidr);
		while (1)
			;
	}
	return 0;
}

struct err_record_info cn10k_err_records[RAS_HANDLERS] = {
	[RAS_PPI_HANDLER] = ERR_RECORD_SYSREG_V1(ERR_RECORD_START_IDX, ERR_RECORD_NUM_IDX,
			cn10k_core_ras_probe_sysreg, cn10k_core_ras_ext_handler, NULL),
};

struct ras_interrupt cn10k_ras_interrupts[NUMBER_OF_RAS_INTERRUPTS] = {
	[0] = {.intr_number = RAS_PPI_IRQ_NUM,
		.err_record = &cn10k_err_records[RAS_PPI_HANDLER],
	}
};

REGISTER_ERR_RECORD_INFO(cn10k_err_records);
REGISTER_RAS_INTERRUPTS(cn10k_ras_interrupts);

static void plat_set_apa_msix_vectors(void)
{
	unsigned int core = plat_my_core_pos();
	uint64_t vecaddr_reg = CAVM_APAX_MSIX_VECX_ADDR(core, CAVM_APA_INT_VEC_E_APA_CORE_ECC_INT);
	uint64_t vecctl_reg = CAVM_APAX_MSIX_VECX_CTL(core, CAVM_APA_INT_VEC_E_APA_CORE_ECC_INT);
	uint64_t vecaddr, vecctl;

	debug_ras("RAS init: core %d, GICR_Base 0x%llx 0x%x\n",
			core, (uint64_t) octeontx_gic_get_redistr_base(), GICR_ISPENDR0);
	vecaddr = octeontx_gic_get_redistr_base() + GICR_ISPENDR0 +
		((RAS_PPI_IRQ_NUM >> 5) << 2);
	vecctl = 1ULL << ((RAS_PPI_IRQ_NUM % 32));
	debug_ras("0x%llx@0x%llx\n", vecaddr, vecaddr_reg);
	debug_ras("0x%llx@0x%llx\n", vecctl, vecctl_reg);
	octeontx_write64(vecaddr_reg, vecaddr);
	octeontx_write64(vecctl_reg, vecctl);
	octeontx_write64(CAVM_APAX_CORE_ECC_INT_W1S(core), 0x3);
}

static void plat_ras_intr_init(void)
{
	int irq = RAS_PPI_IRQ_NUM;

	plat_ic_set_interrupt_type(irq, INTR_TYPE_EL3);
	plat_ic_set_interrupt_priority(irq, PLAT_RAS_PRI);
	plat_ic_clear_interrupt_pending(irq);
	plat_ic_enable_interrupt(irq);
}

static void cn10k_dump_ras_info(void)
{
	uint64_t regval;

	regval = read_id_aa64pfr0_el1();
	INFO("RAS: version 0x%x\n",
		(unsigned int)(regval >> ID_AA64PFR0_EL1_RAS_SHIFT) & ID_AA64PFR0_EL1_RAS_MASK);
	regval = ((read_erridr_el1() & ERRIDR_MASK) - 1);
	INFO("RAS: MAX core error records %d\n", (uint32_t) regval);

}

void cn10k_per_cpu_disable_ras(void)
{
	uint64_t err_ctrl, erxfr;
	int i, max_erridx;

	max_erridx = ((read_erridr_el1() & ERRIDR_MASK) - 1);

	for (i = 0; i < max_erridx; i++) {
		ser_sys_select_record(i);
		/* Read Error control register */
		err_ctrl = read_erxctlr_el1();
		/* Read RAS Feature registter */
		erxfr = read_erxfr_el1();

		if (IS_ERXFR_CONTROLLABLE(erxfr, ED))
			ERX_CTLR_DISABLE_FIELD(err_ctrl, ED);

		write_erxctlr_el1(err_ctrl);
	}
}

/* RAS init function gets called from each CPU */

void cn10k_per_cpu_ras_init(void)
{
	uint64_t err_ctrl, erxfr, erx_mis0;
	int i, max_erridx;

	if (plat_my_core_pos() == 0)
		cn10k_dump_ras_info();

	plat_set_apa_msix_vectors();
	plat_ras_intr_init();

	max_erridx = ((read_erridr_el1() & ERRIDR_MASK) - 1);
	for (i = 0; i < max_erridx; i++) {
		ser_sys_select_record(i);
		/* Read Error control register */
		err_ctrl = read_erxctlr_el1();
		/* Read RAS Feature registter */
		erxfr = read_erxfr_el1();
		debug_ras("ErrRec %d Ctrl 0x%llx RAS Feature 0x%llx\n", i, err_ctrl, erxfr);

		if (IS_ERXFR_CONTROLLABLE(erxfr, UI))
			ERX_CTLR_ENABLE_FIELD(err_ctrl, UI);

		if (IS_ERXFR_CONTROLLABLE(erxfr, CFI)) {
			erx_mis0 = read_erxmisc0_el1();

			if (IS_ERXFR_CONTROLLABLE(erxfr, CEC) &&
			   ((uint64_t) ERX_MISC0_CECR_MASK << ERX_MISC0_CECR_SHIFT))
				debug_ras("RAS: CECR counter reset value is not zero.\n");

			if (IS_ERXFR_CONTROLLABLE(erxfr, RP) &&
			   (erx_mis0 & ((uint64_t) ERX_MISC0_CECO_MASK << ERX_MISC0_CECO_SHIFT)))
				debug_ras("RAS: CECO counter reset value is not zero.\n");

			ERX_CTLR_ENABLE_FIELD(err_ctrl, CFI);
		}

		if (IS_ERXFR_CONTROLLABLE(erxfr, ED))
			ERX_CTLR_ENABLE_FIELD(err_ctrl, ED);

		write_erxctlr_el1(err_ctrl);

		VERBOSE("RAS: Core %d Ctrl 0x%lx Feature 0x%lx Misc0 0x%lx\n",
			(unsigned int)plat_my_core_pos(),
			(unsigned long)read_erxctlr_el1(),
			(unsigned long)read_erxfr_el1(),
			(unsigned long)read_erxmisc0_el1());
	}
}

int cn10k_ras_init(void)
{
	ras_init();
	cn10k_per_cpu_ras_init();

	return 0;
}
