# Copyright (c) 2023 Marvell
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

ERRATA_N2_2280757	:= 1
ERRATA_N2_2242400	:= 1
ERRATA_N2_2189731	:= 1
ERRATA_N2_2002655	:= 1
ERRATA_N2_2242415	:= 1
ERRATA_DSU_2313941	:= 1
ERRATA_N2_2340933	:= 1
ERRATA_N2_2388450	:= 1
ERRATA_N2_2779511	:= 1
ERRATA_N2_2855383	:= 1
WORKAROUND_CVE_2022_23960 := 1

ENABLE_AMU		:= 1

# Enable NonSecure access for Coresight's ETE and TRBE blocks
#ENABLE_TRBE_FOR_NS		:= 1
#ENABLE_SYS_REG_TRACE_FOR_NS	:= 1
#ENABLE_TRF_FOR_NS		:= 1

USE_COHERENT_MEM	:= 0

#SAVE_FATAL_ERRLOGS	:= 0

#SKIP_REBOOT_ON_RAS_FATAL ?= 0
#$(eval $(call add_define,SKIP_REBOOT_ON_RAS_FATAL))

# System coherency is managed in hardware
HW_ASSISTED_COHERENCY	:=	1

NEOVERSE_Nx_EXTERNAL_LLC :=	1

#RAS_EXTENSION		:=       1

#ifeq (${OVERRIDE_EA_AT_EL3_FIRST},1)
#HANDLE_EA_EL3_FIRST_NS	:=	0
#else
#HANDLE_EA_EL3_FIRST_NS	:=	1
#endif

ENABLE_BACKTRACE	:=      1

# Enable GIC v4 extension
GIC_ENABLE_V4_EXTN      :=	1
GICV3_SUPPORT_GIC600	:=	1

# Enable MPAM for Linux
#ENABLE_MPAM_FOR_LOWER_ELS	:= 1

# override default platform CSR include path
PLAT_CSR_INCLUDE        :=       include/plat/marvell/octeontx/cn20k/csr

# enable Marvel ATF Runtime Logging
USE_MRVL_TF_LOGGING     :=       1

ifeq (${NEED_BL32},yes)
$(eval $(call add_define,INCLUDE_OPTEE))
endif

# Include common Marvell platform's makefile helper
include plat/marvell/octeontx/platform.mk

PLAT_XLAT_TABLES_DYNAMIC := 1
$(eval $(call add_define,PLAT_XLAT_TABLES_DYNAMIC))

SCMI_WITH_LEGACY_PM	:=	1
ifdef SCMI_WITH_LEGACY_PM
    $(eval $(call add_define,SCMI_WITH_LEGACY_PM))
endif

ifdef BUILD_UEFI
    $(eval $(call add_define,BUILD_UEFI))
endif

LIBTIM_DIR		:=	drivers/marvell/octeontx/cn20k/libtim
include ${LIBTIM_DIR}/libtim.mk

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/cn20k	\
				-Iinclude/drivers/marvell/octeontx/cn20k\
				-I${LIBTIM_DIR}

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn20k/plat_non_fip_image.c\
				plat/marvell/octeontx/cn20k/plat_security.c	\
				plat/marvell/octeontx/cn20k/plat_bcfg_init.c	\
				plat/marvell/octeontx/cn20k/plat_setup.c	\
				plat/marvell/octeontx/cn20k/plat_tim.c		\
				plat/marvell/octeontx/cn20k/plat_ecam.c		\
				plat/marvell/octeontx/cn20k/cn20k_ea.c		\
				plat/marvell/octeontx/cn20k/aarch64/plat_octeontx_common.S	\
				lib/cpus/aarch64/neoverse_hermes.S \
				plat/marvell/octeontx/cn20k/aarch64/plat_helpers.S	\
				plat/marvell/octeontx/cn20k/plat_io_storage.c	\
				drivers/marvell/octeontx/cn20k/ehsm-drv.c	\
				drivers/marvell/octeontx/cn20k/emmc_driver_calls.c \
				drivers/marvell/octeontx/cn20k/emmc_driver_funcs.c \
				drivers/marvell/octeontx/cn20k/emmc_wrapper_funcs.c \
				drivers/marvell/octeontx/cn20k/fw_load.c	\
				drivers/marvell/octeontx/cn20k/fdtebf_helper.c

BL2_SOURCES		+= 	plat/marvell/octeontx/cn20k/plat_board_cfg.c	\
				plat/marvell/octeontx/cn20k/plat_cn20k_iobn.c	\
				${LIBTIM_SRCS}

BL31_SOURCES		+=	plat/marvell/octeontx/cn20k/plat_topology.c	\
				drivers/marvell/octeontx/cn20k/spi_smc_load.c	\
				drivers/arm/gic/v3/gic-x00.c			\
				plat/marvell/octeontx/cn20k/plat_pm.c		\
				plat/marvell/octeontx/cn20k/plat_pwrc.c		\
				plat/marvell/octeontx/cn20k/plat_scmi.c		\
				plat/marvell/octeontx/cn20k/plat_legacy_pm_ops.c\
				drivers/io/io_storage.c				\
				drivers/io/io_block.c

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
endif
