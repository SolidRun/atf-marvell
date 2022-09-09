 #
 # Copyright (c) 2020 Marvell.
 #
 # SPDX-License-Identifier:     BSD-3-Clause
 #
 # Redistribution and use in source and binary forms, with or without
 # modification, are permitted provided that the following conditions are met:
 #
 # 1. Redistributions of source code must retain the above copyright notice,
 # this list of conditions and the following disclaimer.
 #
 # 2. Redistributions in binary form must reproduce the above copyright notice,
 # this list of conditions and the following disclaimer in the documentation
 # and/or other materials provided with the distribution.
 #
 # 3. Neither the name of the copyright holder nor the names of its
 # contributors may be used to endorse or promote products derived from this
 # software without specific prior written permission.
 #
 # THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 # AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 # IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 # ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 # LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 # CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 # SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 # INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 # CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 # ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 # POSSIBILITY OF SUCH DAMAGE.
 #

# include cn10k platform common makefile
include plat/marvell/octeontx/cn10k/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
# DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/cn10k/cnf10kb/include

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/cnf10kb/plat_cnf10kb_setup.c		\
				drivers/marvell/octeontx/cn10k/bphy.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/cnf10kb/plat_cnf10kb_ecam.c		\

BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/cnf10kb/plat_cnf10kb_svc.c


MARVELL_PHY_3310 := 0
ifdef MARVELL_PHY_3310
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_3310
    PLAT_INCLUDES     += -Ilib/libphy/marvell_88x3310/include
    BL31_LIBS         += lib/libphy/libphy_88x3310.a
    BL31_SOURCES      += drivers/marvell/octeontx/cn10k/phy/phy_marvell_3310.c
endif
