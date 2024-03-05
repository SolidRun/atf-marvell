/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <utils.h>
#include <debug.h>
#include <plat/common/platform.h>
#include <lib/extensions/ras.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <octeontx_irqs_def.h>
#include <arch_helpers.h>
#include <drivers/arm/gicv3.h>
#include <plat_ras.h>
#include <bl31/interrupt_mgmt.h>

#include <cavm-csrs-gic.h>

static int gic_nerr_recs;
struct gic_err_info {
	uint64_t status;
	uint64_t misc0;
	uint64_t misc1;
	uint64_t erraddr;
	uint32_t sev;
	uint32_t recnum;
};

enum {
	GIC_SW_ERROR = 0,
	GIC_SPI_RAM_ERROR = 1,
	GIC_SGI_RAM_ERROR = 3,
	GIC_TGT_SPI_ERROR = 5,
	GIC_PPI_RAM_ERROR = 7,
	GIC_LPI_RAM_ERROR = 9,
	GIC_PTS_RAM_ERROR = 11,
	GIC_TGT_LPI_ERROR = 13,
	GIC_VICM_RAM_ERROR = 15,
	GIC_VTGT_VSPA_RAM_ERROR = 17,
	GIC_VTGT_VSTR_RAM_ERROR = 19,
	GIC_VTGT_VRES_RAM_ERROR = 21,
	GIC_VTGT_SEARCH_RAM_ERROR = 23,
	GIC_ITS_RAM_ERROR = 25,
	GIC_ITS_XLAT_ERROR = 27,
};

static uint8_t gic_err_types[] = {
	GIC_SW_ERROR,
	GIC_SPI_RAM_ERROR,
	GIC_SPI_RAM_ERROR,
	GIC_SGI_RAM_ERROR,
	GIC_SGI_RAM_ERROR,
	GIC_TGT_SPI_ERROR,
	GIC_TGT_SPI_ERROR,
	GIC_PPI_RAM_ERROR,
	GIC_PPI_RAM_ERROR,
	GIC_LPI_RAM_ERROR,
	GIC_LPI_RAM_ERROR,
	GIC_PTS_RAM_ERROR,
	GIC_PTS_RAM_ERROR,
	GIC_TGT_LPI_ERROR,
	GIC_TGT_LPI_ERROR,
	GIC_VICM_RAM_ERROR,
	GIC_VICM_RAM_ERROR,
	GIC_VTGT_VSPA_RAM_ERROR,
	GIC_VTGT_VSPA_RAM_ERROR,
	GIC_VTGT_VSTR_RAM_ERROR,
	GIC_VTGT_VSTR_RAM_ERROR,
	GIC_VTGT_VRES_RAM_ERROR,
	GIC_VTGT_VRES_RAM_ERROR,
	GIC_VTGT_SEARCH_RAM_ERROR,
	GIC_VTGT_SEARCH_RAM_ERROR,
	GIC_ITS_RAM_ERROR,
	GIC_ITS_RAM_ERROR,
	GIC_ITS_XLAT_ERROR
};


void cn10k_ras_gic_notify(struct gic_err_info *errinfo, int sev)
{
	struct cper_sec_platform_err *cper_rec;
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	bool fatal = 0;
	int fr = 0;

	if (errinfo == NULL)
		return;

	err_rec = otx2_begin_ghes(&plat_octeontx_bcfg->ras_config,
			"gic", &err_ring);
	if (!err_rec)
		return;

#if SDEI_SUPPORT
	cm_el1_sysregs_context_save(NON_SECURE);
#endif

	cper_rec = &err_rec->u.gic;

	err_rec->error_severity = sev;
	/* Set the firmware record type to 2 for platform errors */
	cper_rec->fwrec.record_type = 2;
	cper_rec->fwrec.revision = 2;
	cper_rec->fwrec.record_identifier_guid = CPER_SEC_PLATFORM_GIC;

	cper_rec->module_id = CPER_PLAT_ERR_CN10K_GIC;
	cper_rec->reserved0 = 0;
	cper_rec->perr.gic.error_sev = errinfo->sev;
	cper_rec->perr.gic.error_type = gic_err_types[errinfo->recnum];
	cper_rec->perr.gic.validation_bits = CPER_GICERR_ERRTYPE_VALID |
					CPER_GICERR_ERRSEV_VALID;
	cper_rec->perr.gic.misc0 = errinfo->misc0;
	cper_rec->perr.gic.misc1 = errinfo->misc1;
	cper_rec->perr.gic.erraddr = errinfo->erraddr;

	fr = snprintf((char *)err_rec->fru_text, OTX2_GHES_ERR_REC_FRU_TEXT_LEN - fr,
			"GIC %d.%d Sev %d", errinfo->recnum,
			gic_err_types[errinfo->recnum], sev);
	err_rec->fru_text[fr] = '\0';

	fatal = (err_rec->error_severity == CPER_SEV_FATAL);
	if (err_rec)
		otx2_send_ghes(&plat_octeontx_bcfg->ras_config,
			err_rec,
			OCTEONTX_SDEI_RAS_GIC_EVENT,
			fatal);
}

/* Probe to check the GIC error interrupt status */
int cn10k_ras_gic_probe(const struct err_record_info *info, int *probe_data)
{
	int idx;
	cavm_gict_errx_status_t status;

	for (idx = 0; idx < gic_nerr_recs; idx++) {
		status.u = octeontx_read64(CAVM_GICT_ERRX_STATUS(idx));
		if (status.s.v) {
			VERBOSE("RAS GIC[%d] 0x%lx\n", idx, (long) status.u);
			*probe_data = idx;
			return 1;
		}
	}

	return 0;
}

/* Function to configure and enable GIC RAS */
void cavm_gic_ras_enable(void)
{
	cavm_gicd_sac_t sac;
	cavm_gict_devid_t devid;
	cavm_gict_errx_ctlr_t erxctl;
	cavm_gict_errirqcrx_t errirq;
	int idx;

	sac.u = octeontx_read32(CAVM_GICD_SAC_FUNC());
	sac.s.gictns = 0;
	octeontx_write32(CAVM_GICD_SAC_FUNC(), sac.u);

	devid.u = octeontx_read32(CAVM_GICT_DEVID_FUNC());
	gic_nerr_recs = devid.s.numrecords;

	debug_ras("%s records %d\n", __func__, gic_nerr_recs);

	for (idx = 1; idx < gic_nerr_recs; idx++) {
		debug_ras("ERX[%d]FR 0x%lx\n", idx,
			(long) octeontx_read64(CAVM_GICT_ERRX_ADDR(idx)));
		erxctl.u = octeontx_read64(CAVM_GICT_ERRX_CTLR(idx));
		erxctl.s.rp = 1;
		erxctl.s.cfi = 1;
		erxctl.s.ue = 1;
		erxctl.s.fi = 1;
		octeontx_write64(CAVM_GICT_ERRX_CTLR(idx), erxctl.u);
	}

	errirq.s.spiid = RAS_GIC_SPI_IRQ(0);
	octeontx_write64(CAVM_GICT_ERRIRQCRX(0), errirq.u);
}

/* Handler to check the RAS interrupt status and report the erros */
int cn10k_ras_gic_isr(uint32_t id, uint32_t flag, void *cookie)
{
	int idx;
	cavm_gict_errx_status_t status;
	struct gic_err_info errinfo;
	int severity;

	memset(&errinfo, 0, sizeof(struct gic_err_info));

	for (idx = 0; idx < gic_nerr_recs; idx++) {
		status.u = octeontx_read64(CAVM_GICT_ERRX_STATUS(idx));
		if (!status.s.v)
			continue;

		ERROR("GIC RAS intr: errx_status%d: 0x%lx\n", idx, (long) status.u);
		if (status.s.ce & status.s.of)
			severity = CPER_SEV_CORRECTED;
		else if (status.s.ue)
			severity = CPER_SEV_RECOVERABLE;
		else
			severity = CPER_SEV_INFORMATIONAL;

		octeontx_write64(CAVM_GICT_ERRX_STATUS(idx), status.u);

		errinfo.status = status.u;
		errinfo.misc0 = octeontx_read64(CAVM_GICT_ERRX_MISC0_A(idx));
		errinfo.misc1 = octeontx_read64(CAVM_GICT_ERRX_MISC1_B(idx));
		errinfo.erraddr = octeontx_read64(CAVM_GICT_ERRX_ADDR(idx));
		errinfo.sev = severity;
		errinfo.recnum = idx;

		status.u = octeontx_read64(CAVM_GICT_ERRX_STATUS(idx));
		ERROR("GIC RAS[%d]: Addr 0x%lx Misc0 0x%lx Misc1 0x%lx\n", idx,
				(long) errinfo.erraddr,
				(long) errinfo.misc0,
				(long) errinfo.misc1);
		cn10k_ras_gic_notify(&errinfo, severity);
	}

	return 0;
}

int cn10k_ras_enable_gic(void)
{
	/* Enable GIC ras interrupts*/
	cavm_gic_ras_enable();

	return 0;
}
