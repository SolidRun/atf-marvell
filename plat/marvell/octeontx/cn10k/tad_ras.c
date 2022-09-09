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
#include <cavm-csrs-tad.h>
#include <cavm-csrs-tad_cmn.h>
#include <cavm-csrs-gic.h>

/* Enable SBE, MBE, Parity, NDERR */
#define TAD_ERROR_MASK		0xFFCULL

static uint8_t get_num_tads(void)
{
	cavm_tad_cmn_const_t tcc = { .u = CSR_READ(CAVM_TAD_CMN_CONST) };

	return tcc.s.num_tads;
}

int cn10k_ras_tad_probe(const struct err_record_info *info, int *probe_data)
{
	uint8_t tad;

	for (tad = 0; tad < get_num_tads(); tad++) {
		if (CSR_READ(CAVM_TADX_INT_W1C(tad))) {
			*probe_data = tad;
			return 1;
		}
	}
	return 0;
}

int cn10k_ras_enable_tad(void)
{
	uint8_t tad;
	uint64_t vecaddr_reg;
	uint64_t vecctl_reg;
	uint64_t vecaddr, vecctl;
	int irq = TAD_SPI_IRQ(0);

	if (cavm_is_platform(PLATFORM_ASIM))
		return 0;

	vecctl = irq;
	vecaddr = CAVM_GICD_SETSPI_SR | 1;

	for (tad = 0; tad < get_num_tads(); tad++) {
		vecaddr_reg = CAVM_TADX_MSIX_VECX_ADDR(tad, 0);
		vecctl_reg = CAVM_TADX_MSIX_VECX_CTL(tad, 0);

		debug_ras("TAD %d 0x%llx@0x%llx\n", tad, vecctl, vecaddr);

		/* Configure MSIx vector address and irq number */
		octeontx_write64(vecaddr_reg, vecaddr);
		octeontx_write64(vecctl_reg, vecctl);

		/* Clear any previous error interrupts */
		CSR_WRITE(CAVM_TADX_INT_W1C(tad), ~0ULL);
		CSR_WRITE(CAVM_TADX_INT_ENA_W1C(tad), ~0ULL),
		/* Enable ECC interrupt */
		CSR_WRITE(CAVM_TADX_INT_ENA_W1S(tad), TAD_ERROR_MASK);
	}

	plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)read_mpidr_el1());
	plat_ic_enable_interrupt(irq);

	return 0;
}

int cn10k_ras_diable_tad(void)
{
	uint8_t tad;

	if (cavm_is_platform(PLATFORM_ASIM))
		return 0;

	for (tad = 0; tad < get_num_tads(); tad++)
		CSR_WRITE(CAVM_TADX_INT_ENA_W1C(tad), 1);

	return 0;
}

void cn10k_ras_tad_notify(uint8_t tadx, cavm_tadx_int_w1c_t tad_int)
{
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	struct cper_sec_mem_err *tad;

	cavm_tadx_derr_addr_t daddr;
	cavm_tadx_nderr_addr_t ndaddr;
	cavm_tadx_nderr_info_t ndinfo;
	int fr = 0;

	err_rec = otx2_begin_ghes(&plat_octeontx_bcfg->ras_config, "tad", &err_ring);
	if (!err_rec) {
		return;
	}
#if SDEI_SUPPORT
	cm_el1_sysregs_context_save(NON_SECURE);
#endif
	tad = &err_rec->u.tad;

	daddr.u  = CSR_READ(CAVM_TADX_DERR_ADDR(tadx));
	ndaddr.u = CSR_READ(CAVM_TADX_NDERR_ADDR(tadx));
	ndinfo.u = CSR_READ(CAVM_TADX_NDERR_INFO(tadx));

	if (tad_int.s.fbf_sbe || tad_int.s.sbf_sbe || tad_int.s.mn_sbe ||
			tad_int.s.dat_perr || tad_int.s.rsp_perr || tad_int.s.req_perr) {
		err_rec->severity = CPER_SEV_CORRECTED;
		tad->error_type = 2;
	}

	if (tad_int.s.fbf_mbe || tad_int.s.sbf_mbe || tad_int.s.mn_mbe) {
		err_rec->severity = CPER_SEV_FATAL;
		tad->error_type = 3;
	}

	fr += snprintf(&err_rec->fru_text[0], OTX2_GHES_ERR_REC_FRU_TEXT_LEN, "TAD%d ", tadx);

	/* VBF = Victim Buffer, FBF = Fill Buffer, SBF = Store Buffer, MN = Mesh Network */
	if (daddr.u) {
		fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr, "DAT ");

		tad->physical_addr = daddr.s.addr;
		tad->physical_addr_mask = ~0ULL;
		if (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN)
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", daddr.s.nonsec ? "NS " : "S ");

		if ((daddr.s.datmbe || daddr.s.datsbe) && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", daddr.s.datsbe ? "DATsbe " : "DATmbe ");

		if ((daddr.s.fbfmbe || daddr.s.fbfsbe) && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", daddr.s.fbfsbe ? "FBFsbe " : "FBFmbe ");

		if ((daddr.s.sbfmbe || daddr.s.sbfsbe) && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", daddr.s.sbfsbe ? "SBFsbe " : "SBFmbe ");

		if ((daddr.s.mnmbe || daddr.s.mnsbe) && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", daddr.s.mnsbe ? "MNsbe " : "MNmbe ");

		if (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN)
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"OW%d ", daddr.s.ow);
	}

	if ((ndinfo.u) >> 58) {
		fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr, "ND ");
		tad->physical_addr = ndaddr.s.addr;
		tad->physical_addr_mask = ~0ULL;
		if (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN)
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndaddr.s.nonsec ? "NS " : "S ");

		if (ndinfo.s.rdnxm && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndinfo.s.rdnxm ? "RDNXM " : "");

		if (ndinfo.s.wrnxm && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndinfo.s.wrnxm ? "WRNXM " : "");

		if (ndinfo.s.req_perr && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndinfo.s.req_perr ? "REQ_PERR" : "");

		if (ndinfo.s.rsp_perr && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndinfo.s.rsp_perr ? "RSP_PERR " : "");

		if (ndinfo.s.dat_perr && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndinfo.s.dat_perr ? "PERR " : "");

		if (ndinfo.s.dat_nderr && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"%s", ndinfo.s.dat_nderr ? "NDERR " : "");

		if (ndinfo.s.opcode && (fr < OTX2_GHES_ERR_REC_FRU_TEXT_LEN))
			fr += snprintf(&err_rec->fru_text[fr], OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
					"OP%x ", (int)ndinfo.s.opcode ? (int)ndinfo.s.opcode : 0);

		tad->validation_bits |= CPER_MEM_VALID_RESPONDER_ID;
		tad->responder_id = ndinfo.s.srcid;
	}
	err_rec->fru_text[fr] = '\0';

	tad->validation_bits |= CPER_MEM_VALID_PA |
							CPER_MEM_VALID_PA_MASK |
							CPER_MEM_VALID_ERROR_TYPE;

	CSR_WRITE(CAVM_TADX_DERR_ADDR(tadx), daddr.u);
	CSR_WRITE(CAVM_TADX_NDERR_INFO(tadx), ndinfo.u);

	otx2_send_ghes(err_rec, err_ring, OCTEONTX_SDEI_RAS_TAD_EVENT);
}


int cn10k_ras_tad_isr(uint32_t id, uint32_t flags, void *cookie)
{
	uint8_t tad;
	cavm_tadx_int_w1c_t tad_int;

	for (tad = 0; tad < get_num_tads(); tad++) {
		/* Check TAD Errors */
		tad_int.u = CSR_READ(CAVM_TADX_INT_W1C(tad));
		if (tad_int.u) {
			debug_ras("TAD %d error detected 0x%llx\n", (uint8_t) tad, (uint64_t) tad_int.u);
			if (tad_int.u & TAD_ERROR_MASK)
				cn10k_ras_tad_notify(tad, tad_int);
			CSR_WRITE(CAVM_TADX_INT_W1C(tad), tad_int.u);
		}
	}
	return 0;
}
