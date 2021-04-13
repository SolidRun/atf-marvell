# Copyright (C) 2021 Marvell
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

ARM_ARCH_MINOR		:=	2
# Allow to use armv8.2 specific instructions
TF_CFLAGS_aarch64	:=	$(patsubst -march=%, -march=armv8.2-a, $(TF_CFLAGS_aarch64))

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/otx2/f95o/include		\
				-Ilib/libphy/marvell_88x5113/include			\
				-Ilib/libphy/marvell_88x5113/serdes/src/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/f95o/plat_f95o_setup.c	\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserc.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserc_ops.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/f95o/plat_f95o_ecam.c	\

BL31_SOURCES		+=	plat/marvell/octeontx/otx2/f95o/plat_f95o_svc.c		\
				drivers/marvell/octeontx/otx2/bphy.c			\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif
