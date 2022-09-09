/*
 * Copyright (c) 2021 Marvell.
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
#include <cavm-csrs-mdc.h>
#include <cavm-csrs-mdn.h>
#include <cavm-csrs-gic.h>

static uint64_t read_mdc_ras_romx(uint32_t a)
{
	return CSR_READ(CAVM_MDC_RAS_ROMX(a));
}

static union cavm_mdc_ras_entry_s read_mdc_ras_entry_s(int cid, int hid, int nid)
{
	union cavm_mdc_ras_entry_s entry;
	static int once;

	entry.u = 0;
	entry.u = read_mdc_ras_romx(0);

	if (!entry.u) {
		if (!once) {
			ERROR("Unsupported MDC_RAS_ROM version %llx\n", entry.u);
			once = 1;
		}
		return entry;
	}

	entry.u = read_mdc_ras_romx(cid + 1);
	debug_ras("RAS_ROM[cid:%d] hbase %llx\n", cid + 1, entry.u);
	entry.u = read_mdc_ras_romx(entry.u + hid);
	debug_ras("RAS_ROM[hid:%d] nbase %llx\n", hid, entry.u);
	entry.u = read_mdc_ras_romx(entry.u + nid);
	debug_ras("RAS_ROM[nid=%d] leaf %llx, ras_id %x, ras_serr %x\n",
			nid, entry.u, entry.s.ras_id, entry.s.ras_serr);

	return entry;
}

int cn10k_ras_mdc_probe(const struct err_record_info *info, int *probe_data)
{
	return CSR_READ(CAVM_MDC_INT_W1C) ? 1 : 0;
}

int cn10k_ras_enable_mdc(void)
{
	uint64_t vecaddr_reg = CAVM_MDC_PF_MSIX_VECX_ADDR(0);
	uint64_t vecctl_reg = CAVM_MDC_PF_MSIX_VECX_CTL(0);
	uint64_t vecaddr, vecctl;
	int irq = MDC_SPI_IRQ(0);

	vecctl = irq;
	vecaddr = CAVM_GICD_SETSPI_SR | 1;

	debug_ras("MDC RAS Vec 0x%llx@0x%llx\n", vecctl, vecaddr);
	/* Configure MSIx vector address and irq number */
	octeontx_write64(vecaddr_reg, vecaddr);
	octeontx_write64(vecctl_reg, vecctl);

	/* Clear any previous error interrupts */
	CSR_WRITE(CAVM_MDC_INT_W1C, 1);

	/* Enable ECC interrupt */
	CSR_WRITE(CAVM_MDC_INT_ENA_W1S, 1);

	plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)read_mpidr_el1());
	plat_ic_enable_interrupt(irq);

	return 0;
}

int cn10k_ras_diable_mdc(void)
{
	CSR_WRITE(CAVM_MDC_INT_ENA_W1C, 1);
	return 0;
}

void cn10k_ras_mdc_notify(cavm_mdc_ecc_status_t st)
{
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	struct cper_sec_mem_err *mdc;
	const char *type_tok = NULL;
	const char *type = NULL;
	union cavm_mdc_ras_entry_s entry;
	int fr = 0;

	err_rec = otx2_begin_ghes(&plat_octeontx_bcfg->ras_config,
			"mdc", &err_ring);
	if (!err_rec)
		return;
#if SDEI_SUPPORT
	cm_el1_sysregs_context_save(NON_SECURE);
#endif
	mdc = &err_rec->u.mdc;

	if (st.s.dbe) {
		type = "double";
		type_tok = "D";
		if (st.s.dbe_plus)
			type_tok = "D+";
	} else if (st.s.sbe) {
		type = "single";
		type_tok = "S";
		if (st.s.sbe_plus)
			type_tok = "S+";
	} else
		type_tok = "?";

	mdc->row = st.s.row;
	mdc->validation_bits |= CPER_MEM_VALID_ROW;
	err_rec->severity |= st.s.dbe ? CPER_SEV_FATAL : CPER_SEV_CORRECTED;

	entry = read_mdc_ras_entry_s(st.s.chain_id, st.s.hub_id, st.s.node_id);

	mdc->validation_bits |= CPER_MEM_VALID_RESPONDER_ID;
	mdc->responder_id = entry.s.ras_id;

	fr = snprintf(err_rec->fru_text, sizeof(err_rec->fru_text),
			"MDC %s %d.%d.%d ", type_tok, st.s.chain_id, st.s.hub_id,
			st.s.node_id);
	err_rec->fru_text[fr] = '\0';

	debug_ras("MDC ECC %s chn %d.%d.%d Row:%d\n",
		type, st.s.chain_id, st.s.hub_id, st.s.node_id, st.s.row);

	otx2_send_ghes(err_rec, err_ring, OCTEONTX_SDEI_RAS_MDC_EVENT);
}

int cn10k_ras_mdc_isr(uint32_t id, uint32_t flags, void *cookie)
{
	cavm_mdc_int_w1c_t mdc_int;
	cavm_mdc_ecc_status_t ecc_status;

	/* Check MDC Errors */
	mdc_int.u = CSR_READ(CAVM_MDC_INT_W1C);
	if (mdc_int.s.ecc_error) {
		debug_ras("MDC RAS error detected\n");
		ecc_status.u = CSR_READ(CAVM_MDC_ECC_STATUS);
		debug_ras("MDC Error type : ");
		if (ecc_status.s.sbe)
			debug_ras("SBE\n");
		if (ecc_status.s.dbe)
			debug_ras("DBE\n");
		if (ecc_status.s.sbe_plus)
			debug_ras("SBE Plus\n");
		if (ecc_status.s.dbe_plus)
			debug_ras("DBE Plus\n");
		debug_ras("node %d hub %d chain %d\n",
			(int)ecc_status.s.node_id,
			(int)ecc_status.s.hub_id,
			(int)ecc_status.s.chain_id);
		debug_ras("SRAM row address 0x%x\n", (int)ecc_status.s.row);
		cn10k_ras_mdc_notify(ecc_status);

		CSR_WRITE(CAVM_MDC_INT_W1C, mdc_int.u);
	}
	return 0;
}
