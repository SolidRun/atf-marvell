/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <lib/extensions/ras.h>
#include <octeontx_irqs_def.h>
#include <plat_ras.h>
#include <plat/common/platform.h>
#include <octeontx_sdei.h>
#include <lib/el3_runtime/context_mgmt.h>

#if SDEI_SUPPORT
#include <services/sdei.h>
#endif

/*
 * It is number of all RAS interrupts.
 */
#define NUMBER_OF_RAS_INTERRUPTS	(RAS_PPI_IRQS + \
					MDC_SPI_IRQS + \
					MCC_SPI_IRQS + \
					LMC_SPI_IRQS)

#define RAS_PPI_HANDLER			0
#define RAS_MDC_HANDLER			1
#define RAS_MCC_HANDLER			2
#define RAS_LMC_HANDLER			3
#define RAS_HANDLERS			4

static int plat_ras_mdc_handler(const struct err_record_info *info,
		int probe_data, const struct err_handler_data *const data)
{
	int ret;

	cm_el1_sysregs_context_save(NON_SECURE);

	ret = otx2_mdc_isr(data->interrupt, data->flags, data->cookie);

	/* issue EOI to controller */
	if (data->interrupt)
		plat_ic_end_of_interrupt(data->interrupt);

	return ret;
}

static int plat_ras_mcc_handler(const struct err_record_info *info,
		int probe_data, const struct err_handler_data *const data)
{
	int ret;

	cm_el1_sysregs_context_save(NON_SECURE);

	ret = otx2_mcc_isr(data->interrupt, data->flags, data->cookie);

	/* issue EOI to controller */
	if (data->interrupt)
		plat_ic_end_of_interrupt(data->interrupt);

	return ret;
}

static int plat_ras_lmc_handler(const struct err_record_info *info,
		int probe_data, const struct err_handler_data *const data)
{
	int ret;

	cm_el1_sysregs_context_save(NON_SECURE);

	ret = otx2_lmc_isr(data->interrupt, data->flags, data->cookie);

	/* issue EOI to controller */
	if (data->interrupt)
		plat_ic_end_of_interrupt(data->interrupt);

	return ret;
}

struct ras_interrupt otx2_ras_interrupts[NUMBER_OF_RAS_INTERRUPTS];

struct err_record_info otx2_err_records[RAS_HANDLERS] = {
#ifdef notyet
	[RAS_PPI_HANDLER] = {
		.probe = otx2_ppi_probe,
		.handler = plat_ras_ppi_handler,
	},
#endif
	[RAS_MDC_HANDLER] = {
		.probe = otx2_mdc_probe,
		.handler = plat_ras_mdc_handler,
	},
	[RAS_MCC_HANDLER] = {
		.probe = otx2_mcc_probe,
		.handler = plat_ras_mcc_handler,
	},
	[RAS_LMC_HANDLER] = {
		.probe = otx2_lmc_probe,
		.handler = plat_ras_lmc_handler,
	},
};

REGISTER_ERR_RECORD_INFO(otx2_err_records);
REGISTER_RAS_INTERRUPTS(otx2_ras_interrupts);

static void plat_ras_initialize_interrupt_array(void)
{
	int i, idx = 0;

	for (i = 0; i < RAS_PPI_IRQS; i++) {
		otx2_ras_interrupts[idx].intr_number = RAS_PPI_IRQ(i);
		otx2_ras_interrupts[idx].err_record =
				&otx2_err_records[RAS_PPI_HANDLER];
		idx++;
	}

	for (i = 0; i < MDC_SPI_IRQS; i++) {
		otx2_ras_interrupts[idx].intr_number = MDC_SPI_IRQ(i);
		otx2_ras_interrupts[idx].err_record =
				&otx2_err_records[RAS_MDC_HANDLER];
		idx++;
	}

	for (i = 0; i < MCC_SPI_IRQS; i++) {
		otx2_ras_interrupts[idx].intr_number = MCC_SPI_IRQ(i);
		otx2_ras_interrupts[idx].err_record =
				&otx2_err_records[RAS_MCC_HANDLER];
		idx++;
	}

	for (i = 0; i < LMC_SPI_IRQS; i++) {
		otx2_ras_interrupts[idx].intr_number = LMC_SPI_IRQ(i);
		otx2_ras_interrupts[idx].err_record =
				&otx2_err_records[RAS_LMC_HANDLER];
		idx++;
	}
}

int otx2_ras_init(void)
{
	struct otx2_ghes_err_ring *err_ring;
	uint32_t ring_len;
	ras_config_t *cfg;
	struct octeontx_estatus_record *rec;
	int i = 0;
	int ret = 0;

	plat_ras_initialize_interrupt_array();
	ras_init();

	/* set default GHES ring size (based on total ring mem length) */
	cfg = &plat_octeontx_bcfg->ras_config;
	for (i = 0; i < ARRAY_SIZE(cfg->fdt_ghes); i++) {
		err_ring = cfg->fdt_ghes[i].base[GHES_PTR_RING];
		ring_len = cfg->fdt_ghes[i].size[GHES_PTR_RING];
		err_ring_init(err_ring, ring_len, 0, 1);
	}

	/* set default BERT ring size */
	err_ring = cfg->fdt_bert.base[GHES_PTR_RING];
	ring_len = cfg->fdt_bert.size[GHES_PTR_RING];
	err_ring_init(err_ring, ring_len, BERT_RAS_RING_SIZE, 0);

#if DEBUG_RAS
	otx2_begin_ghes(cfg, "bert", &err_ring);
	if (err_ring) {
		debug_ras("BERT ring head/tail/size %u/%u/%u\n",
			  err_ring->head, err_ring->tail, err_ring->size);
	}
#endif

	for (i = 0; i < ARRAY_SIZE(cfg->fdt_ghes); i++) {
		if (IS_NOT_MC_SDEI_EVENT(cfg->fdt_ghes[i].id))
			continue;
		ret = otx2_estatus_ghes(cfg, cfg->fdt_ghes[i].name, &rec);
		if (ret)
			continue;
		rec->estatus.raw_data_offset = sizeof(struct acpi_hest_generic_status) + sizeof(struct acpi_hest_generic_data);
		rec->estatus.data_length = sizeof(*rec) - sizeof(struct acpi_hest_generic_status);
		rec->gdata.revision = 0x201; // ACPI 4.x
		rec->gdata.validation_bits |= ACPI_HEST_GEN_VALID_FRU_STRING;
		rec->gdata.error_data_length = sizeof(*rec) - rec->estatus.raw_data_offset;
		memcpy((guid_t *)rec->gdata.section_type, &CPER_SEC_PLATFORM_MEM, sizeof(guid_t));
		debug_ras("%s cper init %s\n", __func__, cfg->fdt_ghes[i].name);
	}

	return 0;
}
