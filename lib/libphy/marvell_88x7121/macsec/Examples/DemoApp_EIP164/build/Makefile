#------------------------------------------------------------------------------
#
#    Module        : ddk164
#    Version       : 3.1.1
#    Configuration : DDK-164-BSD
#
#    Date          : 2021-Aug-12
#
# Copyright (c) 2008-2021 by Rambus, Inc. and/or its subsidiaries.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
# 1. Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#------------------------------------------------------------------------------

##############################################################################
##  Makefile for the Demo Application
##  How to use :
##  i)    $ make
##  ii)   For cleaning : $ make clean
##############################################################################

#### User Edit Section : Variables to be set by the User
##   User may not need to modify anything other than this section

  ##-->: { Here follow the variables to be set by the User

	# Set KERNEL_DIR to the path to the Kernel Source directory for which you
	# wish to compile.
	#KERNEL_DIR:=

	# Set ARCH according to the target architecture
	# supported values: x86 and powerpc
	#ARCH:=x86
	#ARCH:=powerpc

	# Set CROSS_COMPILE to the path to the cross compiler binutils
	# concatenated with the prefix they have before normal binutils name
	# For example :
	# If we have cross compiler for Power-PC in /opt/eldk/target/usr/bin/
	# by the file name ppc_4xxFP-gcc, we set it as below :
	#CROSS_COMPILE:=/opt/eldk/target/usr/bin/

	# path to driver Module.symvers file
	# this is used during linking
	ifeq ($(PATH_DRIVER_SYMVERS),)
		PATH_DRIVER_SYMVERS:=$(PWD)/../../Driver_EIP164/build
	endif
	ifeq ($(PATH_DRIVER_PKTIO_SYMVERS),)
		PATH_DRIVER_PKTIO_SYMVERS:=$(PWD)/../../Driver_PacketIO/build
	endif

	# paths to DDK-internal components
	PATH_DRIVER_SECY_API:=../../Integration/Adapter_EIP164/incl
	PATH_DRIVER_CFYE_API:=../../Integration/Adapter_EIP163/incl
	PATH_DRIVER_PKTIO_API:=../../Integration/Adapter_PktIO/incl
	PATH_DRIVER_BIN:=../../Examples/Driver_EIP164/build
	PATH_DRIVER_PKTIO_BIN:=../../Examples/Driver_PacketIO/build
	PATH_KIT:=../../Kit
	LIB_DRIVER_NAME:=driver_164_u
	LIB_DRIVER_FILENAME:=lib$(LIB_DRIVER_NAME).a
	LIB_DRIVER_PKTIO_NAME:=driver_pktio_u
	LIB_DRIVER_PKTIO_FILENAME:=lib$(LIB_DRIVER_PKTIO_NAME).a

	# Set HOST_HW_PLATFORM
	# supported values: FPGA
	#HOST_HW_PLATFORM:=FPGA

  ##<--:  } End of User Edit Section

#### User should not need to modify anything below this line
##############################################################################

## Make sure that ARCH, KERNEL_DIR and CROSS_COMPILE are set

ifndef KERNEL_DIR
  ERROR_KERNEL_DIR_NOT_SET:=YES
endif

ifeq (${EIP164_HW_VERSION},HW1.0)
  EXTRA_CFLAGS += -DEIP164_DEVICE_HW10
endif

ifeq (${EIP164_HW_CONFIGURATION},d)
  EXTRA_CFLAGS += -DDEVICE_CONFIGURATION_D
endif


ifeq (${ARCH},x86)
  HOST_COMPILER:=gcc
  COMPILER:=gcc
  # cs_*.h files respond to ARCH_X86
  EXTRA_CFLAGS += -DARCH_X86
  LIB_PATH=/usr/lib
else ifeq (${ARCH},powerpc)
  ifndef CROSS_COMPILE
    ERROR_CROSS_COMPILE_NOT_SET:=YES
  endif
  ifndef CROSS_LIB_PATH
    ERROR_CROSS_LIB_PATH_NOT_SET:=YES
  endif
  HOST_COMPILER:=gcc
  COMPILER:=${CROSS_COMPILE}gcc
  EXTRA_CFLAGS += -DARCH_POWERPC
  LIB_PATH:=${CROSS_LIB_PATH}
else ifeq (${ARCH},arm)
  ifndef CROSS_COMPILE
    ERROR_CROSS_COMPILE_NOT_SET:=YES
  endif
  ifndef CROSS_LIB_PATH
    ERROR_CROSS_LIB_PATH_NOT_SET:=YES
  endif
  HOST_COMPILER:=gcc
  COMPILER:=${CROSS_COMPILE}gcc
  EXTRA_CFLAGS += -DARCH_ARM
  LIB_PATH:=${CROSS_LIB_PATH}
else ifeq (${ARCH},arm64)
  ifndef CROSS_COMPILE
    ERROR_CROSS_COMPILE_NOT_SET:=YES
  endif
  ifndef CROSS_LIB_PATH
    ERROR_CROSS_LIB_PATH_NOT_SET:=YES
  endif
  HOST_COMPILER:=gcc
  COMPILER:=${CROSS_COMPILE}gcc
  EXTRA_CFLAGS += -DARCH_ARM64
  LIB_PATH:=${CROSS_LIB_PATH}
else
  ERROR_ARCH_NOT_SET:=YES
endif

ifeq ($(KERNELRELEASE),)
  PWD:= $(shell pwd)
endif

ifeq ($(DDK_PWD_OVERRIDE),)
   DDK_PWD_OVERRIDE := `pwd`
else
   override PWD := $(DDK_PWD_OVERRIDE)
endif


PATH_BASE=$(PWD)/..

ifeq ($(LIB_DRIVER_PATH),)
  LIB_DRIVER_PATH:=$(PATH_BASE)/$(PATH_DRIVER_BIN)
else
  PATH_DRIVER_SYMVERS=$(LIB_DRIVER_PATH)
endif

ifeq ($(LIB_DRIVER_PKTIO_PATH),)
  LIB_DRIVER_PKTIO_PATH:=$(PATH_BASE)/$(PATH_DRIVER_PKTIO_BIN)
endif

# Include Paths
INCLUDE_KIT:= \
 -I$(PATH_BASE)/$(PATH_KIT)/DriverFramework/Basic_Defs_API/incl \
 -I$(PATH_BASE)/$(PATH_KIT)/DriverFramework/CLib_Abstraction_API/incl \
 -I$(PATH_BASE)/$(PATH_KIT)/Log/incl \
 -I$(PATH_BASE)/$(PATH_KIT)/SABuilder_MACsec/incl \
 -I$(PATH_BASE)/$(PATH_KIT)/SABuilder_MACsec/Example_AES/incl


INCLUDE_DRIVER_API:= \
 -I$(PATH_BASE)/$(PATH_DRIVER_SECY_API) \
 -I$(PATH_BASE)/$(PATH_DRIVER_SECY_API)/../src \
 -I$(PATH_BASE)/$(PATH_DRIVER_CFYE_API) \
 -I$(PATH_BASE)/$(PATH_DRIVER_PKTIO_API)

INCLUDE_DEMOAPP:= \
  -I$(PWD) \
  -I$(PWD)/$(HOST_HW_PLATFORM)

INCLUDE_KERNEL:= \
  -I$(PATH_BASE)/$(PATH_KIT)/Log/src/printk

INCLUDE_USER:= \
  -I$(PATH_BASE)/$(PATH_KIT)/Log/src/printf

INCLUDE_ALL:= \
  $(INCLUDE_KIT) \
  $(INCLUDE_DRIVER_API) \
  $(INCLUDE_DEMOAPP)

# Compiler Flags
WARNING_FLAGS += -Wall
WARNING_FLAGS_USER = \
    -W -Wextra -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations \
    -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs \
    -Wcast-qual -Wundef -Wwrite-strings
#DEBUG_FLAGS=
#CODE_COVERAGE_FLAGS=
#PROFILING_FLAGS=
#BACKWARD_COMPATIBILITY_FLAGS=

ifeq (${DEBUG_DDK},y)
   DEBUG_FLAGS += -g
   DEBUG_FLAGS += -DDEBUG
endif

ifeq (${COVER_DDK},y)
   DEBUG_FLAGS += -g
   USER_CFLAGS += -ftest-coverage
   USER_CFLAGS += -fprofile-arcs
   USER_LFLAGS += -lgcov
endif

ifeq (${PROFILE_DDK},y)
   USER_CFLAGS += -pg
   USER_LFLAGS += -pg
endif

EXTRA_CFLAGS += \
	$(BACKWARD_COMPATIBILITY_FLAGS) \
	$(INCLUDE_ALL) \
	$(INCLUDE_KERNEL) \
	$(WARNING_FLAGS) \
	$(DEBUG_FLAGS) \
	$(CODE_COVERAGE_FLAGS) \
	$(PROFILING_FLAGS) \
	$(CONFIG_FLAGS)
# above INCLUDE_KERNEL will also be present for user-mode builds
# we conquer that by ensuring the user-mode include is first in the path

USER_CFLAGS += \
    $(INCLUDE_USER) \
    $(WARNING_FLAGS_USER) \
    -DDA_MACSEC_USERMODE

KBUILD_EXTRA_SYMBOLS:= $(PATH_DRIVER_SYMVERS)/Module.symvers
KBUILD_EXTRA_SYMBOLS += $(PATH_DRIVER_PKTIO_SYMVERS)/Module.symvers

.PHONY = clean

default: da_macsec_k da_macsec_u_combined

obj-m:=da_macsec_k.o

da-objs:=$(patsubst %.c,%.o,$(subst $(PWD)/,,$(wildcard $(PATH_BASE)/src/*.c)))


da_macsec_k-objs:= \
  ../$(PATH_KIT)/Log/src/log.o \
  ../$(PATH_KIT)/SABuilder_MACsec/Example_AES/src/aes.o \
  $(da-objs)

da_macsec_k:
	@if [ "$(ERROR_ARCH_NOT_SET)" = "YES" ]; then \
	  echo "ARCH not set or unsupported"; \
	  exit 1; \
	fi
	@if [ "$(ERROR_KERNEL_DIR_NOT_SET)" = "YES" ]; then \
	  echo "KERNEL_DIR not set"; \
	  exit 1; \
	fi
	@if [ "$(ERROR_CROSS_COMPILE_NOT_SET)" = "YES" ]; then \
	  echo "CROSS_COMPILE not set"; \
	  exit 1; \
	fi
	@if [ ! -f $(PATH_DRIVER_SYMVERS)/Module.symvers ]; then \
	  echo "Failed to locate $(PATH_DRIVER_SYMVERS)/Module.symvers"; \
	  echo "Please build the driver first"; \
	  exit 1; \
	fi
	@if [ ! -f $(PATH_DRIVER_PKTIO_SYMVERS)/Module.symvers ]; then \
	  echo "Failed to locate $(PATH_DRIVER_PKTIO_SYMVERS)/Module.symvers"; \
	  echo "Please build the packet i/o driver first"; \
	  exit 1; \
	fi

#	echo "EXTRA_CFLAGS=$(EXTRA_CFLAGS)"
	make DDK_PWD_OVERRIDE=$(DDK_PWD_OVERRIDE) $(EXTRA_KBUILD_FLAGS) ARCH=$(ARCH) CROSS_COMPILE=$(strip $(CROSS_COMPILE)) -C $(KERNEL_DIR) SUBDIRS=$(PWD) M=$(PWD) modules

da_macsec_u_combined:
	@if [ ! -f $(LIB_DRIVER_PATH)/$(LIB_DRIVER_FILENAME) ]; then \
	  echo "Failed to locate $(LIB_DRIVER_PATH)/$(LIB_DRIVER_FILENAME)"; \
	  echo "Please build the driver first"; \
	  exit 1; \
	fi
	@if [ ! -f $(LIB_DRIVER_PKTIO_PATH)/$(LIB_DRIVER_PKTIO_FILENAME) ]; then \
	  echo "Failed to locate $(LIB_DRIVER_PKTIO_PATH)/$(LIB_DRIVER_PKTIO_FILENAME)"; \
	  echo "Please build the packet i/o driver first"; \
	  exit 1; \
	fi
	$(COMPILER) -c ../src/*.c $(USER_CFLAGS) $(EXTRA_CFLAGS)
	$(COMPILER) -c $(PATH_BASE)/$(PATH_KIT)/SABuilder_MACsec/Example_AES/src/*.c $(USER_CFLAGS) $(EXTRA_CFLAGS)
	$(COMPILER) -c $(PATH_BASE)/$(PATH_KIT)/Log/src/log.c $(USER_CFLAGS) $(EXTRA_CFLAGS)
	OBJLIST=`ls *.o |grep -v "_k\.o"|grep -v "\.mod\.o"` ; \
	$(COMPILER) -o da_macsec_u_combined $$OBJLIST \
	               -L$(LIB_PATH) -L$(LIB_DRIVER_PATH) -l$(LIB_DRIVER_NAME) \
	               -L$(LIB_DRIVER_PKTIO_PATH) -l$(LIB_DRIVER_PKTIO_NAME) \
	               -lpthread -lc $(USER_LFLAGS)

clean:	clean_module

clean_module:
	rm -rf .tmp_versions *.o .*.cmd .*.flags *.mod.c *.ko *.symvers
	rm -f *.order *.markers da_macsec_u_combined
	rm -f *.gcno *.gcda *.out

# end of file
