# Copyright (c) 2020 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

# include cn10k platform common makefile
include plat/marvell/octeontx/cn10k/platform.mk

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/cn10k/cn10kb/include

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/cn10kb/plat_cn10kb_setup.c

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/cn10kb/plat_cn10kb_ecam.c

MARVELL_PHY_1780 := 1
ifdef MARVELL_PHY_1780
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_1780
    PLAT_INCLUDES     +=	-Ilib/libphy/marvell_88x1780/include

    BL31_LIBS         +=	lib/libphy/libphy_88x1780.a
    BL31_SOURCES      +=	drivers/marvell/octeontx/cn10k/phy/phy_marvell_1780.c
endif

