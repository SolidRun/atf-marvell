/*
 * Copyright (C) 2020 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <stdio.h>
#include <debug.h>
#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <plat_scfg.h>
#include <octeontx_security.h>
#include <octeontx_dram.h>
#include <octeontx_utils.h>

#include "cavm-csrs-ap.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-smmu.h"

/* Flush the L2 Cache */
void l2c_flush(void)
{
#if 0
	/* Select the L2 cache */
	union cavm_ap_csselr_el1 csselr_el1;
	union cavm_ap_ccsidr_el1 ccsidr_el1;
	union cavm_ccs_const ccs_const;

	unsigned int sets, ways, clusters, tads;
	int cluster, tad, tg, way, index;

	ccs_const.u = CSR_READ(CAVM_CCS_CONST);
	clusters = ccs_const.s.clu;
	tads = ccs_const.s.tadclu;
	csselr_el1.s.level = 2;
	__asm__ volatile ("msr csselr_el1, %0" : : "r"((uint64_t)csselr_el1.u));
	__asm__ volatile ("mrs %0, ccsidr_el1" : "=&r"(ccsidr_el1.u));

	sets = ((ccsidr_el1.s.numsets + 1) / tads / clusters);
	ways = (ccsidr_el1.s.associativity + 1);
	for (cluster = 0; cluster < clusters; cluster++) {
		for (tad = 0; tad < tads; tad++) {
			for (tg = 0; tg < 2; tg++) {
				for (way = 0; way < ways; way++) {
					for (index = 0; index < sets; index++) {
						uint64_t encoded = 0;

						encoded |= cluster << 25;
						encoded |= tad << 24;
						encoded |= tg << 23;
						encoded |= way << 18;
						encoded |= index << 8;
						__asm__ volatile
				("sys #0,c11,c0,#5, %0" : : "r" (encoded));
					}
				}
			}
		}
	}
#endif
}

void octeontx_security_setup(void)
{
	/* FIXME for t106xx. Either EBF or ATF should configure SAM block
	* for ASC regions
	*/
	VERBOSE("Flushing L1C\n");
	dcsw_op_all(DCCISW);
#if 0
	VERBOSE("Flushing L2C\n");
	l2c_flush();
#endif
	VERBOSE("Flushing IC\n");
	__asm__ volatile("ic iallu\n"
			 "isb\n");
}
/*
 * This function configures IOBN to grant access for eMMC controller
 * to secure/non-secure memory based on input parameter passed
 */
void octeontx_configure_mmc_security(int secure)
{
	/*
	 * rsl_idx - PCC function number for the RSL device
	 * (stream ID<7:0>)
	 * bus_idx - Stream's bus number (stream_id<15:8>).
	 */
	uint64_t rsl_idx = CAVM_PCC_DEV_CON_E_MIO_EMM & 0xFF;
	uint64_t bus_idx = (CAVM_PCC_DEV_CON_E_MIO_EMM >> 8) & 0xFF;
	uint64_t domain_idx = (CAVM_PCC_DEV_CON_E_MIO_EMM >> 16) & 0xFF;
	cavm_iobnx_rslx_streams_t iobn_rslx_stream;
	cavm_iobnx_domx_busx_streams_t iobn_domx_busx_stream;

	/* Check for MMC boot, if not return here */
	if (plat_octeontx_bcfg->bcfg.boot_dev.boot_type != OCTEONTX_BOOT_EMMC)
		return;

	for (int iobn_idx = 0; iobn_idx < plat_octeontx_scfg->iobn_count;
				iobn_idx++) {
		if (secure) {
			/*
			 * While booting from MMC device, it is
			 * necessary to configure IOBN as to grant
			 * access for eMMC controller to secure memory,
			 * where images are loaded
			 */
			iobn_rslx_stream.u = CSR_READ(
				CAVM_IOBNX_RSLX_STREAMS(iobn_idx,
							rsl_idx));
			iobn_rslx_stream.s.strm_nsec = 0;
			iobn_rslx_stream.s.phys_nsec = 0;
			CSR_WRITE(CAVM_IOBNX_RSLX_STREAMS(
						iobn_idx, rsl_idx),
						iobn_rslx_stream.u);

			iobn_domx_busx_stream.u = CSR_READ(
				CAVM_IOBNX_DOMX_BUSX_STREAMS(iobn_idx,
				domain_idx, bus_idx));
			iobn_domx_busx_stream.s.strm_nsec = 0;
			iobn_domx_busx_stream.s.phys_nsec = 0;
			CSR_WRITE(CAVM_IOBNX_DOMX_BUSX_STREAMS(
				iobn_idx, domain_idx, bus_idx),
				iobn_domx_busx_stream.u);
		} else {
			/*
			 * Configure IOBN and mark MMC controller in
			 * NODE0 as acting for non-secure domain.
			 */
			iobn_rslx_stream.u = CSR_READ(
				CAVM_IOBNX_RSLX_STREAMS(
					iobn_idx, rsl_idx));
			iobn_rslx_stream.s.strm_nsec = 1;
			iobn_rslx_stream.s.phys_nsec = 1;
			CSR_WRITE(CAVM_IOBNX_RSLX_STREAMS(
					iobn_idx, rsl_idx), iobn_rslx_stream.u);

			/*
			 * Do not change IOBNX_DOMX_BUSX_STREAMS
			 * (changing IOBNX_RSLX_STREAMS was sufficient).
			 */
		}
	}
}

#if 0
/*
 * Helper function for setting-up stream security in IOBN.
 */
static void set_iobn_stream_security(int domain_idx, int bus_idx, int dev_idx,
				     int strm_ns, int phys_ns)
{
	int iobn_idx;

	for (iobn_idx = 0; iobn_idx < plat_octeontx_scfg->iobn_count;
	     iobn_idx++) {
		cavm_iobnx_domx_devx_streams_t iobn_comx_devx_stream;
		cavm_iobnx_domx_busx_streams_t iobn_domx_busx_stream;

		iobn_domx_busx_stream.u = CSR_READ(
			CAVM_IOBNX_DOMX_BUSX_STREAMS(iobn_idx, domain_idx,
						     bus_idx));
		iobn_domx_busx_stream.s.strm_nsec = strm_ns;
		iobn_domx_busx_stream.s.phys_nsec = phys_ns;
		CSR_WRITE(CAVM_IOBNX_DOMX_BUSX_STREAMS(
			  iobn_idx, domain_idx, bus_idx),
			  iobn_domx_busx_stream.u);

		iobn_comx_devx_stream.u = CSR_READ(
			CAVM_IOBNX_DOMX_DEVX_STREAMS(iobn_idx, domain_idx,
						     dev_idx));
		iobn_comx_devx_stream.s.strm_nsec = strm_ns;
		iobn_comx_devx_stream.s.phys_nsec = phys_ns;
		CSR_WRITE(CAVM_IOBNX_DOMX_DEVX_STREAMS(
			  iobn_idx, domain_idx, dev_idx),
			  iobn_comx_devx_stream.u);
	}
}
#endif

/*
 * This function configures PCI EP streams' security in IOBN.
 *
 * On entry,
 *   secure: 0 to configure stream for NON-secure lookup
 *           1 to configure stream for SECURE lookup
 */
void octeontx_configure_pem_ep_security(int pem, int secure)
{
	/* FIXME for 106xx */
}
