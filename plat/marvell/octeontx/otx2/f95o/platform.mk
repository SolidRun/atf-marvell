# Copyright (C) 2021 Marvell
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define ATF_ENABLE_PHY7121_MACSEC_FUNC to enable MACsec
ATF_ENABLE_PHY7121_MACSEC_FUNC                  :=      1
ifdef ATF_ENABLE_PHY7121_MACSEC_FUNC
    $(eval $(call add_define,ATF_ENABLE_PHY7121_MACSEC_FUNC))
endif

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS))
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

MARVELL_PHY_7121 := 1
ifdef MARVELL_PHY_7121
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_7121
    PLAT_INCLUDES     +=        -Ilib/libphy/marvell_88x7121/serdes/C112GX4     \
                                -Ilib/libphy/marvell_88x7121/serdes      \
                                -Ilib/libphy/marvell_88x7121    \

    BL31_LIBS         += lib/libphy/libphy_88x7121.a
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_7121.c
endif
