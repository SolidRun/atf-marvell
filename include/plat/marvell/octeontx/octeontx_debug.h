/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>

#ifndef OCTEONTX_DEBUG_H
#define OCTEONTX_DEBUG_H

/*
 * This file is included automatically via the cmd-line.
 *
 * The optional parameters that can be changed are:
 *
 *   MRVL_TF_LOG_LEVEL_DEFAULT
 *   MRVL_TF_LOG_MODULES_DEFAULT
 *   MRVL_TF_LOG_SETTING_OVERRIDE
 */

#ifndef __ASSEMBLER__

/*
 * For ATF Runtime Logging, the level is set to VERBOSE in order to
 * automatically include all debugging messages.
 * During initialization the maximum level is set to the configured
 * value via 'tf_log_set_max_level()' - see 'initialize_tf_logging()'.
 */
#undef LOG_LEVEL
#define LOG_LEVEL LOG_LEVEL_VERBOSE

/*
 * These are the settings used for the bitmap of enabled log modules.
 * When a module logs a message, it includes its bitmap value.
 *
 * The global variable 'mrvl_tf_log_modules' is consulted to determine if
 * the message should be logged (according to the enabled modules).
 * This global is initialized at startup to a value chosen via the [EBF] startup
 * menu.  See 'initialize_tf_logging()'.
 *
 * Each module is compiled with the definition 'MRVL_TF_LOG_MODULE' set
 * to a default (based on the pathspec); see Makefile macro 'DEF_LOG_MODULES'.
 * Each code module may redefine 'MRVL_TF_LOG_MODULE' to allow the module
 * logging to be more precise.
 * For example, all modules in "drivers/..." are compiled with:
 *    -DMRVL_TF_LOG_MODULE=LOG_MODULE_DRIVERS
 * However, a network driver might redefine this to be 'LOG_MODULE_ETH',
 * thus allowing only the network driver messages to be logged (assuming that
 * the network driver had been enabled for message logging in the [EBF] startup
 * menu).
 *
 * Implementation note: this order must match EBF 'atf_trace_module_t'.
 * Implementation note: update 'plat_log_module_prefix' when changing these.
 */
enum mrvl_tf_log_module_e {
	MRVL_TF_LOG_MODULE_BLX = 1 << 0,
	MRVL_TF_LOG_MODULE_COMMON = 1 << 1,
	MRVL_TF_LOG_MODULE_DRIVERS = 1 << 2,
	MRVL_TF_LOG_MODULE_LIB = 1 << 3,
	MRVL_TF_LOG_MODULE_PLAT = 1 << 4,
	MRVL_TF_LOG_MODULE_SERVICES = 1 << 5,
	MRVL_TF_LOG_MODULE_LIBTIM = 1 << 6,
	/* default modules end here */

	/* custom modules start here */
	MRVL_TF_LOG_MODULE_RVU = 1 << 9,
	MRVL_TF_LOG_MODULE_PARSE = 1 << 10,
	MRVL_TF_LOG_MODULE_PLAT_ECAM = 1 << 11, /* platform-specific */
	MRVL_TF_LOG_MODULE_GEN_ECAM = 1 << 12, /* generic */
	MRVL_TF_LOG_MODULE_UPDATE = 1 << 13,
	MRVL_TF_LOG_MODULE_ETH_CMD = 1 << 14,
	MRVL_TF_LOG_MODULE_ETH_LINK = 1 << 15,
	MRVL_TF_LOG_MODULE_ETH_LINK_MGMT = 1 << 16,
	MRVL_TF_LOG_MODULE_ECP_SM_HIST = 1 << 17,
	MRVL_TF_LOG_MODULE_GSERM = 1 << 18,
	MRVL_TF_LOG_MODULE_ETH_SFP_MGMT = 1 << 19,
	MRVL_TF_LOG_MODULE_ETH_PHY_MGMT = 1 << 20,
	MRVL_TF_LOG_MODULE_RAS = 1 << 21,
	MRVL_TF_LOG_MODULE_PPR = 1 << 22,
};

/*
 * This defines the default MODULE logging bitmask.
 * This value is used if either of the following is true:
 *
 *  1. The device tree does not contain a setting
 *  2. The macro 'MRVL_TF_LOG_SETTING_OVERRIDE' is set (see below)
 */
#define MRVL_TF_LOG_MODULES_DEFAULT ( \
	MRVL_TF_LOG_MODULE_BLX | \
	MRVL_TF_LOG_MODULE_PLAT | \
	MRVL_TF_LOG_MODULE_DRIVERS | \
	0)

/*
 * This defines the default verbosity logging level.
 * This value is used if either of the following is true:
 *
 *  1. The device tree does not contain a setting
 *  2. The macro 'MRVL_TF_LOG_SETTING_OVERRIDE' is set (see below)
 */
#define MRVL_TF_LOG_LEVEL_DEFAULT LOG_LEVEL_NOTICE

/* Use this to override the configured logging settings with the defaults. */
#undef MRVL_TF_LOG_SETTING_OVERRIDE

#undef ERROR
#undef NOTICE
#undef WARN
#undef INFO
#undef VERBOSE

# define ERROR(...)	tf_log(LOG_MARKER_ERROR __VA_ARGS__)
# define NOTICE(...)	(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			 tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
# define WARN(...)	tf_log(LOG_MARKER_WARNING __VA_ARGS__)
# define INFO(...)	(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			 tf_log(LOG_MARKER_INFO __VA_ARGS__) : (void)0
# define VERBOSE(...)	(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			 tf_log(LOG_MARKER_VERBOSE __VA_ARGS__) : (void)0

extern unsigned long mrvl_tf_log_modules;

#endif /* __ASSEMBLER__ */
#endif /* OCTEONTX_DEBUG_H */
