/*
 * Copyright (c) 2020 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <octeontx_ecam.h>
#include <octeontx_utils.h>
#include <platform_def.h>
#include <octeontx_irqs_def.h>
#include <plat_cn10k_configuration.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccpf.h"

/* NCB DID range for RVU0-31 */
#define RVU0_54_8ID 0x40
#define RVU31_57_8ID 0x5f

/* NCB DID range for PEM */
#define PEM_START_8ID 0x80
#define PEM_END_8ID 0x8f

/* NCB DID of RNG */
#define RNG_DID 0xf

/* NCB DID of ML */
#define ML_DID 0x28

/*
 * stream_uses_rslx_or_devx()
 *
 * This is used to indicate if a particular stream is affected by
 * IOBNX_RSLX_STREAMS or IOBNX_DOMX_DEVX_STREAMS.
 *
 * When programming IOBN security permissions, streams use a combination of
 * IOBNX_DOMX_BUSX_STREAMS and one of:
 *   IOBNX_DOMX_DEVX_STREAMS
 *   IOBNX_RSLX_STREAMS
 *
 * See HRM documentation for 'IOBNX_DOMX_BUSX_STREAMS'.
 *
 * This function helps distinguish the correct registers to use for
 * security permissions.
 *
 * on entry,
 *   streamid : one of 'CAVM_PCC_DEV_CON_E_xxx'
 *
 * returns,
 *   false  if specified streamid is affected by IOBNX_DOMX_DEVX_STREAMS
 *   !false if specified streamid is affected by IOBNX_RSLX_STREAMS
 */
static bool stream_uses_rslx_or_devx(uint32_t streamid)
{
	int domain_idx, bus_idx;

	domain_idx = STREAM_DMN_IDX(streamid);
	bus_idx = STREAM_BUS_IDX(streamid);

	/* Streams on same domain & bus as CAVM_PCC_DEV_CON_E_MRML are
	 * affected by IOBNX_RSLX_STREAMS.
	 */
	return (domain_idx == STREAM_DMN_IDX(CAVM_PCC_DEV_CON_E_MRML)) &&
	       (bus_idx == STREAM_BUS_IDX(CAVM_PCC_DEV_CON_E_MRML));
}

void octeontx_init_iobn(uint64_t config_base, uint64_t config_size)
{
	int rsl_idx, iobn_nr, did;
	int domain, bus, dev, j, inst;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	union cavm_ecamx_const ecamx_const;
	union cavm_ecamx_domx_const domx_const;
	union cavm_iobnx_ncbx_acc acc;
	union cavm_iobnx_cfg0 cfg0;
	union cavm_iobnx_cfg1 cfg1;
	int iobn5_domain_max;
	int set_all_domains;
	int strm_nsec, phys_nsec, num_stream_settings, num_common;
	uint32_t streamid;
	/*
	 * This array contains specific permissions settings for
	 * individual streams (i.e. devices).
	 *
	 * All other settings use the default (i.e. non-secure):
	 *   strm_nsec = 1
	 *   phys_nsec = 1
	 */
	/* Settings in this table are common to all OTX2 platforms. */
	const struct cn10k_stream_security_setting common_streams[] = {
		/* To get secure interrupts for GPIO, PHYS_NSEC must == 0 */
		{ CAVM_PCC_DEV_CON_E_GPIO, 1, 1 /* strm */, 0 /* phys */ },
		/* eHSM requires access to secure memory */
		{ CAVM_PCC_DEV_CON_E_EHSM, 1, 0 /* strm */, 0 /* phys */ },
#if RAS_EXTENSION
		{ CAVM_PCC_DEV_CON_E_APAX(0), 1, 0 /* strm */, 0 /* phys */ },
		{ CAVM_PCC_DEV_CON_E_MDC, 1, 0 /* strm */, 0 /* phys */ },
		{ CAVM_PCC_DEV_CON_E_TADX(0), 1, 0 /* strm */, 0 /* phys */ },
		{ CAVM_PCC_DEV_CON_E_DSSX(0), 1, 0 /* strm */, 0 /* phys */ },
#endif
	};
	/* These settings are platform-specific */
	struct cn10k_stream_security_setting *plat_streams;
	/* The current element of the 'set' of common + platform settings */
	const struct cn10k_stream_security_setting *stream_settings;

	/*
	 * Implementation note: this function traverses the entire list of
	 * devices, setting appropriate security settings for each,
	 * whith is either a default value, or one specified for the device.
	 *
	 * There is a set of devices which require specific settings.
	 * This set is comprised of two lists, the the family-specific
	 * (i.e. common) settings, and the platform-specific settings.
	 * When traversing the set, the current element is referred to
	 * as 'stream_settings'.
	 *
	 * The variable 'num_stream_settings' holds the count of all the
	 * elments in both lists.
	 * The variable 'num_common' serves as the separator
	 * to distinguish between the two lists.
	 */

	vsec_ctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_CTL);
	iobn_nr = vsec_ctl.s.inst_num;

	/* Retrieve platform stream settings and determine count. */
	plat_streams = plat_get_cn10k_stream_security(&j);

	num_common = ARRAY_SIZE(common_streams);
	num_stream_settings = num_common + j;

	/*
	 * Allow all IO units to access non-secure memory (default).
	 * Program secure devices individually as needed per 'stream_settings'.
	 */
	for (rsl_idx = 0; rsl_idx < 1024; rsl_idx++) {
		CSR_WRITE(CAVM_IOBNX_RSLX_STREAMS(iobn_nr, rsl_idx), 0x3);

		/* check if any individual streams require RSLX setting */
		for (j = 0; j < num_stream_settings; j++) {
			/* find correct element in appropriate list */
			if (j < num_common)
				stream_settings = &common_streams[j];
			else
				stream_settings = &plat_streams[j - num_common];
			/* Iterate all instances of the stream */
			for (inst = 0; inst < stream_settings->instances;
			     inst++) {
				streamid = stream_settings->streamid + inst;

				/* A stream will use DEVX or RSLX, not both */
				if (!stream_uses_rslx_or_devx(streamid))
					continue;
				/* Verify stream uses this RSLX register */
				if (STREAM_RSL_IDX(streamid) != rsl_idx)
					continue;

				/* configure security in IOBNX_RSLX_STREAMS */
				CSR_MODIFY(c,
					CAVM_IOBNX_RSLX_STREAMS(iobn_nr,
								rsl_idx),
					c.s.strm_nsec =
						stream_settings->strm_nsec;
					c.s.phys_nsec =
						stream_settings->phys_nsec);
			}
		}
	}

	ecamx_const.u = CSR_READ(CAVM_ECAMX_CONST(0));
	iobn5_domain_max = ecamx_const.s.domains;
	set_all_domains = 0;

	for (domain = 0; domain < iobn5_domain_max; domain++) {
		if (!set_all_domains) {
			/* FIXME : Domains may not be contiguous */
			domx_const.u = CSR_READ(CAVM_ECAMX_DOMX_CONST(
								0, domain));
			if (!domx_const.s.pres)
				continue;
		}

		for (bus = 0; bus < 256; bus++) {
			/* default setting */
			CSR_WRITE(CAVM_IOBNX_DOMX_BUSX_STREAMS(
				  iobn_nr, domain, bus), 0x3);

			/* check if individual streams require BUSX setting */
			for (j = 0; j < num_stream_settings; j++) {
				/* find correct element in appropriate list */
				if (j < num_common)
					stream_settings = &common_streams[j];
				else
					stream_settings =
						&plat_streams[j - num_common];
				strm_nsec = stream_settings->strm_nsec;
				phys_nsec = stream_settings->phys_nsec;

				/* Iterate all instances of the stream */
				for (inst = 0; inst <
				     stream_settings->instances;
				     inst++) {
					streamid = stream_settings->streamid;
					streamid += inst;

					/* Verify stream uses this domain/bus */
					if ((STREAM_DMN_IDX(streamid) !=
					    domain))
						continue;
					if ((STREAM_BUS_IDX(streamid) != bus))
						continue;

					/* configure IOBNX_BUSX_STREAMS */
					CSR_MODIFY(c,
						CAVM_IOBNX_DOMX_BUSX_STREAMS(
							iobn_nr, domain, bus),
					/*
					 * Only set a more-permissive
					 * value. If already set to
					 * be permissive (i.e. 0),
					 * another device on this bus
					 * has already been configured.
					 * Don't disrupt its settings.
					 * Refer to [96xx] HRM descr
					 * of this register.
					 */
					if (c.s.strm_nsec == 1)
						c.s.strm_nsec =
							strm_nsec;
					if (c.s.phys_nsec == 1)
						c.s.phys_nsec =
							phys_nsec
					); /* end of CSR_MODIFY */
				}
			}
		}

		for (dev = 0; dev < 32; dev++) {
			/* default setting */
			CSR_WRITE(CAVM_IOBNX_DOMX_DEVX_STREAMS(
				  iobn_nr, domain, dev), 0x3);

			/* check if individual streams require DEVX setting */
			for (j = 0; j < num_stream_settings; j++) {
				/* find correct element in appropriate list */
				if (j < num_common)
					stream_settings = &common_streams[j];
				else
					stream_settings =
						&plat_streams[j - num_common];
				strm_nsec = stream_settings->strm_nsec;
				phys_nsec = stream_settings->phys_nsec;

				/* Iterate all instances of the stream */
				for (inst = 0; inst <
				     stream_settings->instances;
				     inst++) {
					streamid = stream_settings->streamid;
					streamid += inst;

					/* stream uses DEVX or RSLX, not both */
					if (stream_uses_rslx_or_devx(streamid))
						continue;
					/* verify stream uses this domain/dev */
					if ((STREAM_DMN_IDX(streamid) !=
					    domain))
						continue;
					if ((STREAM_DEV_IDX(streamid) != dev))
						continue;

					/* Update stream for bus0 */
					if ((STREAM_BUS_IDX(streamid) != 0))
						continue;

					/* configure IOBNX_DEVX_STREAMS */
					CSR_MODIFY(c,
						CAVM_IOBNX_DOMX_DEVX_STREAMS(
							iobn_nr, domain, dev),
						c.s.strm_nsec = strm_nsec;
						c.s.phys_nsec = phys_nsec);
				}
			}
		}
	}

	/* Permit all access types for rvu0-31 NCB requests */
	for( did = RVU0_54_8ID; did <= RVU31_57_8ID; did++ ) {
		acc.u = CSR_READ(CAVM_IOBNX_NCBX_ACC(iobn_nr, did));
		acc.s.all_cmds = 1;
		CSR_WRITE(CAVM_IOBNX_NCBX_ACC(iobn_nr, did), acc.u);
	}

	/* Permit all access types for PEM NCB requests */
	for( did = PEM_START_8ID; did <= PEM_END_8ID; did++ ) {
		acc.u = CSR_READ(CAVM_IOBNX_NCBX_ACC(iobn_nr, did));
		acc.s.all_cmds = 1;
		CSR_WRITE(CAVM_IOBNX_NCBX_ACC(iobn_nr, did), acc.u);
	}

	/*
	 * Armv8.5-RNG random-number read instructions reads 128 bits,
	 * First 64 bits as the random number and second 64 bit result.
	 * So we need to allow more than 64 bit access for RNG block
	 * RNG IOBN = 1 and NCB = 0xf.
	 */
	if (iobn_nr == 1) {
		acc.u = CSR_READ(CAVM_IOBNX_NCBX_ACC(iobn_nr, RNG_DID));
		acc.s.all_cmds = 1;
		CSR_WRITE(CAVM_IOBNX_NCBX_ACC(iobn_nr, RNG_DID), acc.u);
	}

	/* Permit all access types for ML to access NCB requests */
	if (cavm_is_model(OCTEONTX_CN10KA) && (iobn_nr == 0)) {
		acc.u = CSR_READ(CAVM_IOBNX_NCBX_ACC(iobn_nr, ML_DID));
		acc.s.all_cmds = 1;
		CSR_WRITE(CAVM_IOBNX_NCBX_ACC(iobn_nr, ML_DID), acc.u);
	}

	/*
	 * Workaround for IPBUIOBN-38746: Conditional SCLK shuts off early.
	 * When the SCLK frequency has the potential to be four or more
	 * times faster than MESHCLK, force the conditional clock to be
	 * always on by setting IOBN()_CFG0/1[FORCE_SCLK/RCLK_COND_CLK_EN] = 1.
	 */

	if (cavm_is_model(OCTEONTX_CN10KA_PASS1_0) ||
	    cavm_is_model(OCTEONTX_CNF10KA_PASS1_X) ||
	    cavm_is_model(OCTEONTX_CNF10KB)) {
		cfg0.u = CSR_READ(CAVM_IOBNX_CFG0(iobn_nr));
		cfg0.s.force_sclk_cond_clk_en = 1;
		/* Each bit is control for a given NCB bus,
		 * where bit 8 is for NCB bus 0 and bit 11
		 * is for NCB bus 3.
		 */
		cfg0.s.clken = 0xF;
		CSR_WRITE(CAVM_IOBNX_CFG0(iobn_nr), cfg0.u);
		cfg1.u = CSR_READ(CAVM_IOBNX_CFG1(iobn_nr));
		cfg1.s.force_rclk_cond_clk_en = 1;
		CSR_WRITE(CAVM_IOBNX_CFG1(iobn_nr), cfg1.u);
	}
}
