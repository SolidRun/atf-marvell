/*
 * Copyright (C) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <arch_helpers.h>
#include <stdio.h>
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
#include "plat_board_cfg.h"

#define MDC_RAS_ENABLE()	(0)

static char *core_err_src[] = {
	"DSU_RAM",
	"CORE_RAM",
};

static char *err_code_str[] = {
[SERR_NONE]                    = "No Error",
[SERR_INTERNAL_BUFFER_ECC_ERR] = "Internal ECC Error",
[SERR_CACHE_DATA_RAM_ECC_ERR]  = "Cache data ECC Error",
[SERR_CACHE_TAG_RAM_ECC_ERR]   = "Cache TAG ECC Error",
[SERR_TLB_DATA_RAM_PARITY_ERR] = "TLB data parity Error",
[SERR_CACHE_COPYBACK_RESP_ERR] = "Cache copyback response Error",
[SERR_UNSUPP_SLAVE_DEFRD_ERR]  = "Unsupported slave deferred Error"
};

static char *err_type_str[] = {
	"No Error",
	"Corrected Error (CE)"
	"Deferred Error (DE)",
	"Uncorrected Error (UE)",
};

static char *err_type_str_short[] = {"NO", "CE", "DE", "UE"};

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

static void cn10k_core_ras_notify(cn10k_core_err_info_t *err_info, uint64_t erx_status)
{
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	struct cper_sec_proc_arm *desc;
	struct cper_arm_err_info *info;
	arm_cache_error_structure error_info;
	int fr;
	char *frs;
	char ring_name[8] = {0};
	uint32_t core = plat_my_core_pos();

	snprintf(ring_name, 8, "core%d", core);

	err_rec = otx2_begin_ghes(&plat_octeontx_bcfg->ras_config, ring_name, &err_ring);

	if (erx_status & (ERR_STATUS_UE_MASK << ERR_STATUS_UE_SHIFT))
		err_rec->severity = CPER_SEV_FATAL;
	else if ((erx_status & (ERR_STATUS_CE_MASK << ERR_STATUS_CE_SHIFT)) &&
		(erx_status & (ERR_STATUS_OF_MASK << ERR_STATUS_OF_SHIFT)))
		err_rec->severity = CPER_SEV_CORRECTED;
	else if (erx_status & (ERR_STATUS_DE_MASK << ERR_STATUS_DE_SHIFT))
		err_rec->severity = CPER_SEV_FATAL;

	fr = snprintf(err_rec->fru_text, OTX2_GHES_ERR_REC_FRU_TEXT_LEN, "%s",
			err_type_str_short[err_info->err_type]);
	frs = &err_rec->fru_text[fr];
	fr = OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr;

	error_info.u = 0;
	switch (err_info->unit) {
	case UNIT_L1_ICACHE:
//		error_info.transaction_type = 0;
		error_info.level = 1;
		snprintf(frs, fr, "L1I(%d,%d,%d,%d,%d)",
				err_info->l1i.array, err_info->l1i.index, err_info->l1i.bank,
				err_info->l1i.subbank, err_info->l1i.way);
		break;
	case UNIT_L2_TLB:
//		error_info.transaction_type = 2;
		error_info.level = 2;
		snprintf(frs, fr, "L2TLB(%d,%d)", err_info->l2tlb.index,
				err_info->l2tlb.way);
		break;
	case UNIT_L1_DCACHE:
//		error_info.transaction_type = 1;
		error_info.level = 1;
		snprintf(frs, fr, "L1D(%d,%d,%d,%d)",
				err_info->l1d.array, err_info->l1d.index, err_info->l1d.subarray,
				err_info->l1d.way);
		break;
	case UNIT_L2_CACHE:
//		error_info.transaction_type = 2;
		error_info.level = 2;
		snprintf(frs, fr, "L2(%d,%d,%d,%d,%d)",
				err_info->l2.array, err_info->l2.index, err_info->l2.subarray,
				err_info->l2.bank, err_info->l2.way);
		break;
	}
	if (error_info.level) {
//		error_info.validation_bit |= 1 << 0;
		error_info.validation_bit |= 1 << 2;
	}
	error_info.corrected = err_rec->severity == RAS_ERR_CE;

	desc = &err_rec->u.core.desc;
	info = &err_rec->u.core.info;

	desc->validation_bits |= CPER_ARM_VALID_MPIDR;
	desc->err_info_num     = 1;
	desc->context_info_num = 0;
	desc->section_length   = sizeof(struct otx2_ghes_err_record);
	desc->affinity_level   = 0;
	desc->mpidr            = err_info->mpidr;
	desc->midr             = err_info->midr;
	desc->running_state    = 0;
	desc->psci_state       = 0;

	info->version          = 0;
	info->length           = sizeof(*info);
	info->validation_bits |= CPER_ARM_INFO_VALID_ERR_INFO |
							CPER_ARM_INFO_VALID_PHYSICAL_ADDR;
	info->validation_bits &= ~CPER_ARM_INFO_VALID_FLAGS;

	if ((erx_status & ERR_STATUS_SERR_MASK & SERR_CACHE_DATA_RAM_ECC_ERR) ||
		(erx_status & ERR_STATUS_SERR_MASK & SERR_CACHE_TAG_RAM_ECC_ERR) ||
		(erx_status & ERR_STATUS_SERR_MASK & SERR_CACHE_COPYBACK_RESP_ERR))
		info->type = 0;
	else if (erx_status & ERR_STATUS_SERR_MASK & SERR_TLB_DATA_RAM_PARITY_ERR)
		info->type = 1;
	else if ((erx_status & ERR_STATUS_SERR_MASK & SERR_INTERNAL_BUFFER_ECC_ERR) ||
			(erx_status & ERR_STATUS_SERR_MASK & SERR_UNSUPP_SLAVE_DEFRD_ERR))
		info->type = 3;
	info->multiple_error = !!(erx_status & (ERR_STATUS_OF_MASK << ERR_STATUS_OF_SHIFT));
	info->flags               = 0;
	info->error_info          = error_info.u;
	info->virt_fault_addr     = 0;
	info->physical_fault_addr = err_info->err_addr;

	debug_ras("ring: %p, hd/tl/sz %d/%d/%d\n", err_ring, err_ring->head,
				err_ring->tail, err_ring->size);

	otx2_send_ghes(err_rec, err_ring, OCTEONTX_SDEI_RAS_AP0_EVENT + core);
}

static int cn10k_core_ras_ext_handler(const struct err_record_info *info,
	int probe_data, const struct err_handler_data *const data)
{
	uint64_t erx_status, erx_mis0, msix_status;
	uint32_t intr = data->interrupt;
	int err_type = 0;
	int core = plat_my_core_pos();
	cn10k_core_err_info_t core_err_info = {0};

	cm_el1_sysregs_context_save(NON_SECURE);

	msix_status = octeontx_read64(CAVM_APAX_CORE_ECC_INT_W1C(core));

	core_err_info.mpidr = read_mpidr_el1();
	core_err_info.midr = read_midr_el1();
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

	octeontx_write64(CAVM_APAX_CORE_ECC_INT_W1C(core), msix_status);

	cn10k_core_ras_notify(&core_err_info, erx_status);

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

#if MDC_RAS_ENABLE()
static int plat_ras_mdc_handler(const struct err_record_info *info,
		int probe_data, const struct err_handler_data *const data)
{
	int ret;

	ret = cn10k_ras_mdc_isr(data->interrupt, data->flags, data->cookie);

	if (data->interrupt)
		plat_ic_end_of_interrupt(data->interrupt);

	return ret;
}
#endif

static int plat_ras_tad_handler(const struct err_record_info *info,
		int probe_data, const struct err_handler_data *const data)
{
	int ret;

	ret = cn10k_ras_tad_isr(data->interrupt, data->flags, data->cookie);

	if (data->interrupt)
		plat_ic_end_of_interrupt(data->interrupt);

	return ret;
}

static int plat_ras_dss_handler(const struct err_record_info *info,
		int probe_data, const struct err_handler_data *const data)
{
	int ret;

	ret = cn10k_ras_dss_isr(data->interrupt, data->flags, data->cookie);

	if (data->interrupt)
		plat_ic_end_of_interrupt(data->interrupt);

	return ret;
}

struct err_record_info cn10k_err_records[RAS_HANDLERS] = {
	[RAS_CORE_HANDLER] = ERR_RECORD_SYSREG_V1(ERR_RECORD_START_IDX, ERR_RECORD_NUM_IDX,
			cn10k_core_ras_probe_sysreg, cn10k_core_ras_ext_handler, NULL),
#if MDC_RAS_ENABLE()
	[RAS_MDC_HANDLER] = {
		.probe = cn10k_ras_mdc_probe,
		.handler = plat_ras_mdc_handler,
	},
#endif
	[RAS_TAD_HANDLER] = {
		.probe = cn10k_ras_tad_probe,
		.handler = plat_ras_tad_handler,
	},
	[RAS_DSS_HANDLER] = {
		.probe = cn10k_ras_dss_probe,
		.handler = plat_ras_dss_handler,
	},
};

REGISTER_ERR_RECORD_INFO(cn10k_err_records);
REGISTER_RAS_INTERRUPTS(cn10k_ras_interrupts);

static void plat_set_apa_msix_vectors(void)
{
	unsigned int core = plat_my_core_pos();
	uint64_t vecaddr, vecctl;

	for (core = 0; core < PLATFORM_CORE_PER_CLUSTER; core++) {
		octeontx_write64(CAVM_APAX_CORE_ECC_INT_W1C(core), ~0ULL);
		/* Secure SPI for each core */
		vecaddr = CAVM_GICD_SETSPI_SR | 1;
		vecctl = (uint64_t) RAS_CORE_SPI_IRQ(core);

		debug_ras("Core %d MSIx Addr 0x%llx data 0x%llx SPI %d\n", core, vecaddr, vecctl, RAS_CORE_SPI_IRQ(core));
		/* Write the SPI address and IRQ number */
		octeontx_write64(CAVM_APAX_MSIX_VECX_ADDR(core, CAVM_APA_INT_VEC_E_APA_CORE_ECC_INT), vecaddr);
		octeontx_write64(CAVM_APAX_MSIX_VECX_CTL(core, CAVM_APA_INT_VEC_E_APA_CORE_ECC_INT), vecctl);
		/* Enable APA Core ECC MSIx */
		octeontx_write64(CAVM_APAX_CORE_ECC_INT_ENA_W1S(core), 3ULL);
	}
}

static void plat_ras_intr_init(void)
{
	int irq, core;

	/* RAS SPI GIC configuration */
	for (core = 0; core < PLATFORM_CORE_PER_CLUSTER; core++) {
		irq = RAS_CORE_SPI_IRQ(core);
		plat_ic_set_interrupt_type(irq, INTR_TYPE_EL3);
		plat_ic_set_interrupt_priority(irq, PLAT_RAS_PRI);
		plat_ic_clear_interrupt_pending(irq);
		plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)(read_mpidr_el1() | (core << 16)));
		plat_ic_enable_interrupt(irq);
	}
}

static void cn10k_dump_ras_info(void)
{
	uint64_t regval;

	regval = read_id_aa64pfr0_el1();
	INFO("RAS: version 0x%x Max Records %d\n",
		(unsigned int)(regval >> ID_AA64PFR0_EL1_RAS_SHIFT) & ID_AA64PFR0_EL1_RAS_MASK,
		(uint32_t)(read_erridr_el1() & ERRIDR_MASK) + 1);
}

void cn10k_per_cpu_disable_ras(void)
{
	uint64_t err_ctrl, erxfr;
	int i, max_erridx;

	max_erridx = (read_erridr_el1() & ERRIDR_MASK) + 1;

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

	max_erridx = (read_erridr_el1() & ERRIDR_MASK ) + 1;
	for (i = 0; i < max_erridx; i++) {
		ser_sys_select_record(i);
		/* Read Error control register */
		err_ctrl = read_erxctlr_el1();
		/* Read RAS Feature registter */
		erxfr = read_erxfr_el1();

		if (IS_ERXFR_CONTROLLABLE(erxfr, UI))
			ERX_CTLR_ENABLE_FIELD(err_ctrl, UI);

		if (IS_ERXFR_CONTROLLABLE(erxfr, FI))
			ERX_CTLR_ENABLE_FIELD(err_ctrl, FI);

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

		debug_ras("RAS: Core %d Ctrl 0x%lx Feature 0x%lx Misc0 0x%lx\n",
			(unsigned int)plat_my_core_pos(),
			(unsigned long)read_erxctlr_el1(),
			(unsigned long)read_erxfr_el1(),
			(unsigned long)read_erxmisc0_el1());
	}
}

int cn10k_ras_init(void)
{
	struct otx2_ghes_err_ring *err_ring;
	uint32_t ring_len;
	ras_config_t *cfg;
	int i;
	int idx = 0, irq, core;

#if MDC_RAS_ENABLE()
	for (irq = 0; irq < MDC_SPI_IRQS; irq++) {
		cn10k_ras_interrupts[idx].intr_number = MDC_SPI_IRQ(irq);
		cn10k_ras_interrupts[idx].err_record = &cn10k_err_records[RAS_MDC_HANDLER];
		idx++;
	}
#endif

	for (irq = 0; irq < TAD_SPI_IRQS; irq++) {
		cn10k_ras_interrupts[idx].intr_number = TAD_SPI_IRQ(irq);
		cn10k_ras_interrupts[idx].err_record = &cn10k_err_records[RAS_TAD_HANDLER];
		idx++;
	}

	for (irq = 0; irq < DSS_SPI_IRQS; irq++) {
		cn10k_ras_interrupts[idx].intr_number = DSS_SPI_IRQ(irq);
		cn10k_ras_interrupts[idx].err_record = &cn10k_err_records[RAS_DSS_HANDLER];
		idx++;
	}
	/* Core RAS interrrupt source init */
	for (core = 0; core < PLATFORM_CORE_PER_CLUSTER; core++) {
		cn10k_ras_interrupts[idx].intr_number = RAS_CORE_SPI_IRQ(core);
		cn10k_ras_interrupts[idx].err_record = &cn10k_err_records[RAS_CORE_HANDLER];
		idx++;
	}

	ras_init();
	plat_set_apa_msix_vectors();

	/* PER CPU core ras init */
	cn10k_per_cpu_ras_init();

#if MDC_RAS_ENABLE()
	/*MDC ras init */
	cn10k_ras_enable_mdc();
#endif

	/* TAD ras init */
	cn10k_ras_enable_tad();

	/* DSS RAS init */
	cn10k_ras_enable_dss();

	plat_ras_intr_init();

	cfg = &plat_octeontx_bcfg->ras_config;
	for (i = 0; i < ARRAY_SIZE(cfg->fdt_ghes); i++) {
		err_ring = cfg->fdt_ghes[i].base[GHES_PTR_RING];
		ring_len = cfg->fdt_ghes[i].size[GHES_PTR_RING];
		err_ring_init(err_ring, ring_len, 0, 1);
	}

	return 0;
}
