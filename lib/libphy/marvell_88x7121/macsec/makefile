# /*******************************************************************************
# Copyright (c) 2014 Marvell.
# If you received this File from Marvell and you have entered into a commercial
# license agreement (a "Commercial License") with Marvell, the File is licensed
# to you under the terms of the applicable Commercial License.
# *******************************************************************************/
# /********************************************************************
# Sample makefile to show all the required files in the /macsec/
# folder that are needed for the X7121 MACSec features.
# ********************************************************************/
#
# 'make all'    build the .o libraries
# 'make clean'  removes all .o and executable files
#

TARGET = mzdAPI
# define the C compiler to use
CC = gcc -DLINUX -std=c99 -pedantic -DHAVE_UNISTD_H -DMZD_MACSEC_SUPPORT=1

# define any compile-time flags
CFLAGS = -Wall -O2  

# /macsec/OSPlatformSpecific is not needed in non-Windows platform
INCLUDES =  -I. \
            -I../ \
            -I../serdes \
            -I../serdes/C112GX4 \
            -I../macsec \
            -I../macsec/Examples/Driver_EIP164/build \
            -I../macsec/Examples/Driver_EIP164/build/FPGA \
            -I../macsec/Integration/Adapter_EIP163/incl \
            -I../macsec/Integration/Adapter_EIP163/src \
            -I../macsec/Integration/Adapter_EIP164/incl \
            -I../macsec/Integration/Adapter_EIP164/src \
            -I../macsec/Integration/Adapter_EIP164/src/FPGA \
            -I../macsec/Integration/Adapter_EIP164/src/um \
            -I../macsec/Integration/DriverFramework/src \
            -I../macsec/Integration/DriverFramework/src/UMDevXS \
            -I../macsec/Integration/InterruptDispatcher/incl \
            -I../macsec/Integration/InterruptDispatcher/src \
            -I../macsec/Integration/UMDevXS/KernelPart/incl \
            -I../macsec/Integration/UMDevXS/UserPart/incl \
            -I../macsec/Integration/WorkerThread/incl \
            -I../macsec/Kit/DriverFramework/Basic_Defs_API/incl \
            -I../macsec/Kit/DriverFramework/CLib_Abstraction_API/incl \
            -I../macsec/Kit/DriverFramework/Device_API/incl \
            -I../macsec/Kit/EIP163/incl \
            -I../macsec/Kit/EIP163/src \
            -I../macsec/Kit/EIP164/incl \
            -I../macsec/Kit/EIP164/src \
            -I../macsec/Kit/EIP201/docs \
            -I../macsec/Kit/EIP201/incl \
            -I../macsec/Kit/EIP201/src \
            -I../macsec/Kit/EIP217/src \
            -I../macsec/Kit/List/incl \
            -I../macsec/Kit/List/src \
            -I../macsec/Kit/Log/incl \
            -I../macsec/Kit/Log/src/printf \
            -I../macsec/Kit/SABuilder_MACsec/Example_AES/incl \
            -I../macsec/Kit/SABuilder_MACsec/incl \
            -I../macsec/Kit/SABuilder_MACsec/src

LD = ld
LDFLAGS = -nostdlib -r -X -N
LIB_DIR= mzdMACSec_lib

LFLAGS = -L./mzdMACSecAPI

LIBS = -lm

# define the C source files
SRCS = ../mzdAPI.c \
       ../mzdAPIInternal.c \
       ../mzdDiagnostics.c \
       ../mzdFEC.c \
       ../mzdFwDownload.c \
       ../mzdHwAPBusCntl.c \
       ../mzdHwCntl.c \
       ../mzdHwMacSecCntl.c \
       ../mzdHwSerdesCntl.c \
       ../mzdInitialization.c \
       ../mzdIntrIOConfig.c \
       ../mzdMacAPI.c \
       ../mzdMacDiagIntr.c \
       ../mzdUtils.c \
       ../serdes/mcesdInitialization.c \
       ../serdes/mcesdUtils.c \
       ../serdes/C112GX4/mcesdC112GX4_RegRW.c \
       ../serdes/C112GX4/mcesdC112GX4_HwCntl.c \
       ../serdes/C112GX4/mcesdC112GX4_FwDownload.c \
       ../serdes/C112GX4/mcesdC112GX4_DeviceInit.c \
       ../serdes/C112GX4/mcesdC112GX4_API.c \
       ../macsec/mzdMACSecAPI.c \
       ../macsec/mzdMACSecDiagIntr.c \
       ../macsec/Integration/Adapter_EIP163/src/adapter_cfye.c \
       ../macsec/Integration/Adapter_EIP163/src/adapter_cfye_ext.c \
       ../macsec/Integration/Adapter_EIP163/src/adapter_cfye_rule.c \
       ../macsec/Integration/Adapter_EIP163/src/adapter_cfye_stats.c \
       ../macsec/Integration/Adapter_EIP163/src/adapter_cfye_support.c \
       ../macsec/Integration/Adapter_EIP163/src/adapter_cfye_vport.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_debug.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_driver164_init.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_init_support.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_lock_internal.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_memxs.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_secy.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_secy_ext.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_secy_sa.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_secy_stats.c \
       ../macsec/Integration/Adapter_EIP164/src/adapter_secy_support.c \
       ../macsec/Integration/Adapter_EIP164/src/FPGA/adapter_init.c \
       ../macsec/Integration/Adapter_EIP164/src/um/adapter_interrupts.c \
       ../macsec/Integration/Adapter_EIP164/src/um/adapter_lock.c \
       ../macsec/Integration/Adapter_EIP164/src/um/adapter_sleep.c \
       ../macsec/Integration/DriverFramework/src/device_generic.c \
       ../macsec/Integration/DriverFramework/src/UMDevXS/hwpal_device_umdevxs.c \
       ../macsec/Integration/InterruptDispatcher/src/FPGA/intdispatch.c \
       ../macsec/Kit/EIP163/src/eip163.c \
       ../macsec/Kit/EIP164/src/eip164_device.c \
       ../macsec/Kit/EIP164/src/eip164_rules.c \
       ../macsec/Kit/EIP164/src/eip164_secy.c \
       ../macsec/Kit/EIP201/src/eip201.c \
       ../macsec/Kit/List/src/list.c \
       ../macsec/Kit/Log/src/log.c \
       ../macsec/Kit/SABuilder_MACsec/Example_AES/src/aes.c \
       ../macsec/Kit/SABuilder_MACsec/src/sa_builder_eip164.c \
       ../macsec/Kit/SABuilder_MACsec/src/sa_builder_macsec.c 


OBJS = $(SRCS:.c=.o)

MAIN = mzdAPI

.PHONY: depend clean

all:    $(MAIN)
	@echo  

$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@  

$(TARGET): $(OBJECTS)
	@if ! [ -a $(LIB_DIR) ]; then mkdir $(LIB_DIR); fi
	$(LD) $(LDFLAGS) -Map $(LIB_DIR)/$(TARGET).map -o $(LIB_DIR)/$(TARGET).o $(OBJS) 
    
clean:
	$(RM) *.o *~ $(MAIN) ../*.o 
	$(RM) *.o *~ $(MAIN) ../serdes/C112GX4/*.o 
	$(RM) *.o *~ $(MAIN) ../serdes/*.o 
	$(RM) *.o *~ $(MAIN) ../macsec/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/Adapter_EIP163/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/Adapter_EIP164/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/Adapter_EIP164/src/um/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/Adapter_EIP164/src/FPGA/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/InterruptDispatcher/src/FPGA/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/DriverFramework/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/DriverFramework/src/UMDevXS/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Integration/DriverFramework/src/FPGA/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/EIP163/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/EIP164/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/EIP201/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/List/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/Log/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/SABuilder_MACsec/Example_AES/src/*.o
	$(RM) *.o *~ $(MAIN) ../macsec/Kit/SABuilder_MACsec/src/*.o
	$(RM) $(OBJDIR)/*.o 
	$(RM) $(TARGET)
	$(RM) $(LIB_DIR)/*.o 

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
