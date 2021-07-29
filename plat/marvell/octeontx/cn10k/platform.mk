# Copyright (C) 2021 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

RAS_EXTENSION		:=       1
HANDLE_EA_EL3_FIRST	:=       1

# Enable GIC v4 extension
GIC_ENABLE_V4_EXTN      :=	1
GICV3_SUPPORT_GIC600	:=	1

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

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable serdes diagnostic cmds
DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

# Define DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS to enable phys diagnostic cmds
DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS))
endif

#LIBMCESD_SOURCES	:=	$(shell find ${LIBMCESD_DIR} -type f -name "*.c")
#LIBMCESD_INCLUDES	:=	$(foreach file, $(shell find ${LIBMCESD_DIR} -type d), -I$(file))

LIBTIM_DIR		:=	drivers/marvell/octeontx/cn10k/libtim
include ${LIBTIM_DIR}/libtim.mk

LIBMCESD_DIR		:=      drivers/marvell/octeontx/cn10k/gserm/mcesd
LIBMCESD_SOURCES	:=	$(filter %.c, $(call rwildcard, $(LIBMCESD_DIR), *))
LIBMCESD_INCLUDES	:=	$(patsubst %,-I%, $(sort $(dir $(call rwildcard, $(LIBMCESD_DIR), *))))

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/cn10k	\
				-Iinclude/drivers/marvell/octeontx/cn10k \
				-I${LIBTIM_DIR} \
				$(LIBMCESD_INCLUDES)

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/plat_non_fip_image.c\
				plat/marvell/octeontx/cn10k/plat_security.c	\
				plat/marvell/octeontx/cn10k/plat_bcfg_init.c	\
				plat/marvell/octeontx/cn10k/plat_setup.c	\
				plat/marvell/octeontx/cn10k/plat_tim.c		\
				plat/marvell/octeontx/cn10k/aarch64/plat_octeontx_common.S	\
				plat/marvell/octeontx/cn10k/aarch64/plat_helpers.S		\
				plat/marvell/octeontx/cn10k/plat_portm_cfg.c	\
				plat/marvell/octeontx/cn10k/dlmalloc.c		\
				plat/marvell/octeontx/cn10k/plat_mem_alloc.c	\
				drivers/marvell/octeontx/cn10k/qlm_cn10k.c	\
				drivers/marvell/octeontx/cn10k/qlm_gserm.c	\
				drivers/marvell/octeontx/cn10k/rpm.c		\
				drivers/marvell/octeontx/cn10k/ehsm-drv.c	\
				drivers/marvell/octeontx/cn10k/emmc_driver_calls.c \
				drivers/marvell/octeontx/cn10k/emmc_driver_funcs.c \
				drivers/marvell/octeontx/cn10k/emmc_wrapper_funcs.c \
				drivers/marvell/octeontx/cn10k/eth_link_mgmt_intf.c \
				$(LIBMCESD_SOURCES) \
				drivers/marvell/octeontx/cn10k/fw_load.c		\
				drivers/marvell/octeontx/cn10k/gserm/gserm.c

#rvu driver is same as octeon tx2.
BL2_SOURCES		+=	drivers/marvell/octeontx/cn10k/sh_fwdata.c		\
				drivers/marvell/octeontx/cn10k/rvu.c		\
				plat/marvell/octeontx/cn10k/plat_board_cfg.c	\
				plat/marvell/octeontx/cn10k/plat_scfg.c		\
				plat/marvell/octeontx/cn10k/plat_cn10k_iobn.c			\
				${LIBTIM_SRCS}

BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_topology.c		\
				drivers/marvell/octeontx/cn10k/rvu.c		\
				drivers/marvell/octeontx/cn10k/rpm_intf.c		\
				drivers/marvell/octeontx/cn10k/phy/phy_mgmt.c		\
				drivers/marvell/octeontx/cn10k/phy/phy_gen.c		\
				drivers/marvell/octeontx/cn10k/phy/phy_marvell.c	\
				drivers/marvell/octeontx/cn10k/phy/phy_marvell_1514.c	\
				drivers/marvell/octeontx/cn10k/spi_smc_load.c		\
				drivers/marvell/octeontx/cn10k/tim_update.c		\
				drivers/arm/gic/v3/gic-x00.c		\
				plat/marvell/octeontx/cn10k/plat_pm.c			\
				plat/marvell/octeontx/cn10k/plat_pwrc.c		\
				plat/marvell/octeontx/cn10k/plat_scmi.c		\
				plat/marvell/octeontx/cn10k/plat_legacy_pm_ops.c		\
				plat/marvell/octeontx/cn10k/plat_svc.c		\
				plat/marvell/octeontx/cn10k/plat_npc_mcam_profile.c	\
				drivers/marvell/octeontx/cn10k/sh_fwdata.c \
				drivers/marvell/octeontx/cn10k/mac_data_mgmt.c \
				drivers/marvell/octeontx/cn10k/ppr.c		\
				drivers/marvell/octeontx/cn10k/rpm_flash_ops.c

ifeq (${RAS_EXTENSION},1)
BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_ras.c \
				plat/marvell/octeontx/cn10k/smc_ras.c \
				lib/extensions/ras/std_err_record.c \
				lib/extensions/ras/ras_common.c
endif

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
endif
