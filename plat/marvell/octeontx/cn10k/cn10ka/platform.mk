# Copyright (C) 2020 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

RAS_EXTENSION		:=       0
HANDLE_EA_EL3_FIRST	:=       1

# Enable GIC v4 extension
GIC_ENABLE_V4_EXTN      :=       1

# Enable MPAM for Linux
ENABLE_MPAM_FOR_LOWER_ELS	:= 1

# override default platform CSR include path
PLAT_CSR_INCLUDE        :=       include/plat/marvell/octeontx/cn10k/csr

# enable Marvel ATF Runtime Logging
USE_MRVL_TF_LOGGING     :=       1

# Include common Marvell platform's makefile helper
include plat/marvell/octeontx/platform.mk

PLAT_XLAT_TABLES_DYNAMIC := 1
$(eval $(call add_define,PLAT_XLAT_TABLES_DYNAMIC))

SCMI_WITH_LEGACY_PM	:=	1
ifdef SCMI_WITH_LEGACY_PM
    $(eval $(call add_define,SCMI_WITH_LEGACY_PM))
endif

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
# DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

#LIBMCESD_SOURCES	:=	$(shell find ${LIBMCESD_DIR} -type f -name "*.c")
#LIBMCESD_INCLUDES	:=	$(foreach file, $(shell find ${LIBMCESD_DIR} -type d), -I$(file))

LIBTIM_DIR		:=	drivers/marvell/libtim
include ${LIBTIM_DIR}/libtim.mk

LIBMCESD_DIR		:=      drivers/marvell/cn10k/gserm/mcesd
LIBMCESD_SOURCES	:=	$(filter %.c, $(call rwildcard, $(LIBMCESD_DIR), *))
LIBMCESD_INCLUDES	:=	$(patsubst %,-I%, $(sort $(dir $(call rwildcard, $(LIBMCESD_DIR), *))))

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/cn10k			\
				-Iplat/marvell/octeontx/cn10k/cn10ka/include		\
				-I${LIBTIM_DIR} \
				$(LIBMCESD_INCLUDES)

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/cn10ka/plat_cn10ka_setup.c		\
				plat/marvell/octeontx/cn10k/plat_non_fip_image.c		\
				plat/marvell/octeontx/cn10k/plat_security.c	\
				plat/marvell/octeontx/cn10k/plat_bcfg_init.c	\
				plat/marvell/octeontx/cn10k/plat_setup.c	\
				plat/marvell/octeontx/cn10k/plat_tim.c		\
				plat/marvell/octeontx/cn10k/aarch64/plat_octeontx_common.S	\
				plat/marvell/octeontx/cn10k/aarch64/plat_helpers.S		\
				plat/marvell/octeontx/cn10k/plat_portm_cfg.c	\
				drivers/marvell/ehsm-drv.c		\
				drivers/marvell/qlm/qlm_cn10k.c			\
				drivers/marvell/qlm/qlm_gserm.c		\
				drivers/marvell/rpm.c		\
				drivers/marvell/cn10k/mmc/emmc_driver_calls.c \
				drivers/marvell/cn10k/mmc/emmc_driver_funcs.c \
				drivers/marvell/cn10k/mmc/emmc_wrapper_funcs.c \
				drivers/marvell/eth_link_mgmt_intf.c	\
				$(LIBMCESD_SOURCES) \
				drivers/marvell/cn10k/gserm/gserm.c

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/cn10ka/plat_cn10ka_ecam.c		\
				drivers/marvell/sh_fwdata_cn10k.c		\
				drivers/marvell/rvu.c		\
				plat/marvell/octeontx/cn10k/plat_board_cfg.c	\
				plat/marvell/octeontx/cn10k/plat_scfg.c		\
				plat/marvell/octeontx/cn10k/plat_cn10k_iobn.c			\
				${LIBTIM_SRCS}

BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_topology.c		\
				drivers/marvell/sh_fwdata_cn10k.c		\
				drivers/marvell/rvu.c		\
				drivers/marvell/rpm_intf.c		\
				drivers/marvell/spi_smc_load.c		\
				drivers/marvell/tim_update.c		\
				drivers/arm/gic/v3/gic-x00.c		\
				plat/marvell/octeontx/cn10k/plat_pm.c			\
				plat/marvell/octeontx/cn10k/plat_pwrc.c		\
				plat/marvell/octeontx/cn10k/plat_scmi.c		\
				plat/marvell/octeontx/cn10k/plat_legacy_pm_ops.c		\
				plat/marvell/octeontx/cn10k/plat_svc.c		\
				plat/marvell/octeontx/cn10k/plat_npc_mcam_profile.c

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
endif

