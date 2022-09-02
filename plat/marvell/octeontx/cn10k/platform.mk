# Copyright (c) 2021 Marvell
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

ERRATA_N2_2280757	:= 1
ERRATA_N2_2242400	:= 1
ERRATA_N2_2189731	:= 1
ERRATA_N2_2002655	:= 1
ERRATA_N2_2242415	:= 1
ERRATA_DSU_2313941	:= 1
#ERRATA_N2_2340933	:= 1
ERRATA_N2_2388450	:= 1
WORKAROUND_CVE_2022_23960 := 1
WORKAROUND_IPBUPERS-503 := 1

USE_COHERENT_MEM	:= 0

SAVE_FATAL_ERRLOGS	:= 0

# System coherency is managed in hardware
HW_ASSISTED_COHERENCY	:=	1

NEOVERSE_Nx_EXTERNAL_LLC :=	1

RAS_EXTENSION		:=       1
HANDLE_EA_EL3_FIRST	:=       1

ENABLE_BACKTRACE	:=      1

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

ifdef BUILD_UEFI
    $(eval $(call add_define,BUILD_UEFI))
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
				-Iinclude/drivers/marvell/octeontx/cn10k\
				-I${LIBTIM_DIR} \
				$(LIBMCESD_INCLUDES)

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/plat_non_fip_image.c\
				plat/marvell/octeontx/cn10k/plat_security.c	\
				plat/marvell/octeontx/cn10k/plat_bcfg_init.c	\
				plat/marvell/octeontx/cn10k/plat_setup.c	\
				plat/marvell/octeontx/cn10k/plat_tim.c		\
				plat/marvell/octeontx/cn10k/cn10k_ea.c		\
				plat/marvell/octeontx/cn10k/aarch64/plat_octeontx_common.S	\
				lib/cpus/aarch64/neoverse_n2.S			\
				plat/marvell/octeontx/cn10k/aarch64/plat_helpers.S	\
				plat/marvell/octeontx/cn10k/plat_portm_cfg.c	\
				plat/marvell/octeontx/cn10k/plat_io_storage.c	\
				drivers/marvell/octeontx/cn10k/qlm_cn10k.c	\
				drivers/marvell/octeontx/cn10k/qlm_gserm.c	\
				drivers/marvell/octeontx/cn10k/rpm.c		\
				drivers/marvell/octeontx/cn10k/ehsm-drv.c	\
				drivers/marvell/octeontx/cn10k/emmc_driver_calls.c \
				drivers/marvell/octeontx/cn10k/emmc_driver_funcs.c \
				drivers/marvell/octeontx/cn10k/emmc_wrapper_funcs.c \
				drivers/marvell/octeontx/cn10k/eth_link_mgmt_intf.c \
				drivers/marvell/octeontx/cn10k/rnm.c		\
				$(LIBMCESD_SOURCES) \
				drivers/marvell/octeontx/cn10k/fw_load.c	\
				drivers/marvell/octeontx/cn10k/gserm/gserm.c	\
				drivers/marvell/octeontx/smi.c

#rvu driver is same as octeon tx2.
BL2_SOURCES		+=	drivers/marvell/octeontx/cn10k/sh_fwdata.c	\
				drivers/marvell/octeontx/cn10k/rvu.c		\
				drivers/marvell/octeontx/cn10k/portm_helper.c	\
				drivers/marvell/octeontx/cn10k/fdtebf_helper.c	\
				plat/marvell/octeontx/cn10k/plat_board_cfg.c	\
				plat/marvell/octeontx/cn10k/plat_scfg.c		\
				plat/marvell/octeontx/cn10k/plat_cn10k_iobn.c	\
				${LIBTIM_SRCS}

BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_topology.c	\
				drivers/marvell/octeontx/cn10k/rvu.c		\
				drivers/marvell/octeontx/cn10k/rpm_intf.c	\
				drivers/marvell/octeontx/cn10k/portm_helper.c	\
				drivers/marvell/octeontx/cn10k/fdtebf_helper.c	\
				drivers/marvell/octeontx/cn10k/phy/phy_mgmt.c	\
				drivers/marvell/octeontx/cn10k/sfp_mgmt.c	\
				drivers/marvell/octeontx/cn10k/phy/phy_gen.c	\
				drivers/marvell/octeontx/cn10k/phy/phy_marvell.c\
				drivers/marvell/octeontx/cn10k/phy/phy_marvell_1514.c\
				drivers/marvell/octeontx/cn10k/spi_smc_load.c	\
				drivers/marvell/octeontx/cn10k/tim_update.c	\
				drivers/arm/gic/v3/gic-x00.c			\
				plat/marvell/octeontx/cn10k/plat_pm.c		\
				plat/marvell/octeontx/cn10k/plat_pwrc.c		\
				plat/marvell/octeontx/cn10k/plat_scmi.c		\
				plat/marvell/octeontx/cn10k/plat_legacy_pm_ops.c\
				plat/marvell/octeontx/cn10k/plat_svc.c		\
				plat/marvell/octeontx/cn10k/plat_npc_mcam_profile.c\
				drivers/marvell/octeontx/cn10k/sh_fwdata.c	\
				drivers/marvell/octeontx/cn10k/mac_data_mgmt.c	\
				drivers/marvell/octeontx/cn10k/ppr.c		\
				drivers/marvell/octeontx/cn10k/rpm_flash_ops.c	\
				plat/marvell/octeontx/cn10k/dram_mapping.c	\
				drivers/io/io_storage.c				\
				drivers/io/io_block.c
ifeq (${RAS_EXTENSION},1)
BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_ras.c \
				plat/marvell/octeontx/cn10k/smc_ras.c \
				plat/marvell/octeontx/cn10k/dss_ras.c \
				plat/marvell/octeontx/cn10k/tad_ras.c \
				plat/marvell/octeontx/cn10k/mdc_ras.c \
				lib/extensions/ras/std_err_record.c \
				lib/extensions/ras/ras_common.c
endif

ifeq (${SAVE_FATAL_ERRLOGS},1)
$(eval $(call add_define,SAVE_FATAL_ERRLOGS))
BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/crashdump.c
endif

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
endif
