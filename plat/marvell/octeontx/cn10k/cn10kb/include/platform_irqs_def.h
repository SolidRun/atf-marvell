/*
 * Copyright (c) 2022 Marvell
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLATFORM_IRQS_DEF_H__
#define __PLATFORM_IRQS_DEF_H__

#include <platform_def.h>

/*******************************************************************************
 * Definitions of IRQs
 ******************************************************************************/

/* Definitions of SGI IRQs (range 0-7 NS, 8-15 Secure) */
#define SGI_IRQ_OFFSET			0x0

#define IRQ_SEC_SGI(x)		((SGI_IRQ_OFFSET) + 8 + (x))

/* SGI used for SDEI signaling */
#if SDEI_SUPPORT
#define SDEI_SGI_IRQS		1
#define SDEI_SGI_IRQ		IRQ_SEC_SGI(0)
#endif

/* Definitions of IRQ PPI (Per-Processor Interrupt) IDs (range 0x10 - 0x1f) */
#define PPI_IRQ_OFFSET			0x10

/* Secure physical generic timer IRQ (interrupt 0xd)*/
#define SEC_TIMER_PPI_IRQ_BASE	(0xd + PPI_IRQ_OFFSET)
#define SEC_TIMER_PPI_IRQ		(SEC_TIMER_PPI_IRQ_BASE)

/* Definitions of IRQ SPI (Shared Peripheral Interrupt) IDs (range 0x20-0x3FC) */
#define SPI_IRQ_OFFSET			0x20

/* UAA definitons (range 0x20 - 0x27) */
#define UAA_SPI_IRQ_DEVS		0x8
#define UAA_SPI_IRQ_BASE		(0x0 + SPI_IRQ_OFFSET)
#define UAA_SPI_IRQ(dev)		((dev) + UAA_SPI_IRQ_BASE)

/* Watchdog interrupt (interrupt 0x28)*/
#define GTI_WATCHDOG_SPI_IRQ_BASE		(UAA_SPI_IRQ_BASE + UAA_SPI_IRQ_DEVS)
#define GTI_WATCHDOG_SPI_IRQ_DEVS		0x1
#define GTI_WATCHDOG_SPI_IRQ(dev)		(GTI_WATCHDOG_SPI_IRQ_BASE)

/* PEM definitions (range 0x29 - 0x3d) */
/*
 * cn10kb has 6 PEMs
 */
#define PEM_SPI_IRQ_DEVS		6

/*
 * Each of PEM has 4 interrupts
 * (INTA, INTB, INTC, INTD)
 */
#define PEM_SPI_IRQS_PER_DEV			0x4

#define PEM_SPI_IRQ_BASE		(GTI_WATCHDOG_SPI_IRQ_BASE + GTI_WATCHDOG_SPI_IRQ_DEVS)
#define PEM_SPI_IRQ(dev, irq)	((dev) * PEM_SPI_IRQS_PER_DEV + (irq) + PEM_SPI_IRQ_BASE)

/* Base SPI for GPIO interrupt to be handled in ATF (range 0x3e - 0x41)*/
#define GPIO_SPI_IRQS			0x4
#define GPIO_SPI_IRQ_BASE		(PEM_SPI_IRQ_BASE + (PEM_SPI_IRQ_DEVS*PEM_SPI_IRQS_PER_DEV))
#define GPIO_SPI_IRQ(irq)		((irq) + GPIO_SPI_IRQ_BASE)

/* Default SPI to be used by kernel GPIO driver when intercepting interrupts (interrupt 0x42)*/
#define GPIO_SPI_NSEC_IRQS		0x1
#define GPIO_SPI_IRQ_NSEC_BASE	(GPIO_SPI_IRQ_BASE + GPIO_SPI_IRQS)
#define GPIO_SPI_IRQ_NSEC(irq)	((irq) + GPIO_SPI_IRQ_NSEC_BASE)

/* Default SPI to be used by per-core CWD GTI interrupt (range 0x43 - 0x5b )*/
#define GTI_CWD_SPI_IRQS		0x18
#define GTI_CWD_SPI_IRQ_BASE	(GPIO_SPI_IRQ_NSEC_BASE + GPIO_SPI_NSEC_IRQS)
#define GTI_CWD_SPI_IRQ(irq)	((irq) + GTI_CWD_SPI_IRQ_BASE)

/* interrupt 0x5c */
#define MDC_SPI_IRQS		1
#define MDC_SPI_IRQ_BASE	(GTI_CWD_SPI_IRQ_BASE + GTI_CWD_SPI_IRQS)
#define MDC_SPI_IRQ(irq)	MDC_SPI_IRQ_BASE

/* interrupt 0x5d */
#define TAD_SPI_IRQS		1
#define TAD_SPI_IRQ_BASE	(MDC_SPI_IRQ_BASE + MDC_SPI_IRQS)
#define TAD_SPI_IRQ(irq)	TAD_SPI_IRQ_BASE

/* interrupt 0x5e */
#define DSS_SPI_IRQS		1
#define DSS_SPI_IRQ_BASE	(TAD_SPI_IRQ_BASE + TAD_SPI_IRQS)
#define DSS_SPI_IRQ(irq)	DSS_SPI_IRQ_BASE

/* interrupt 0x5f */
#define EMMC_SPI_IRQS		1
#define EMMC_SPI_IRQ_BASE	(DSS_SPI_IRQ_BASE + DSS_SPI_IRQS)
#define EMMC_SPI_IRQ(irq)	EMMC_SPI_IRQ_BASE

/* interrupt (range 0x60 - 0x67) */
#define RAS_CORE_SPI_IRQS	PLATFORM_CORE_PER_CLUSTER
#define RAS_CORE_SPI_IRQ_BASE	(EMMC_SPI_IRQ_BASE + EMMC_SPI_IRQS)
#define RAS_CORE_SPI_IRQ(core)	((core) + RAS_CORE_SPI_IRQ_BASE)

/* interrupt (range 0x68 - 0x69) */
#define XSPI_SPI_IRQS		2
#define XSPI_SPI_IRQ_BASE	(RAS_CORE_SPI_IRQ_BASE + RAS_CORE_SPI_IRQS)
#define XSPI_SPI_IRQ(irq)	((irq) + XSPI_SPI_IRQ_BASE)

/* PEM MISC interrupts (for EACH PEM): INT_SUM, RST_INT (range 0x6a .. 0x6a + (PEM_SPI_IRQ_DEVS * 2 - 1)) */
#define PEM_SPI_MISC_IRQ_DEVS		PEM_SPI_IRQ_DEVS
#define PEM_SPI_MISC_IRQS_PER_DEV	0x2
#define PEM_SPI_MISC_IRQ_BASE		(XSPI_SPI_IRQ_BASE + XSPI_SPI_IRQS)
#define PEM_SPI_MISC_IRQ(dev, irq)	((dev) * PEM_SPI_MISC_IRQS_PER_DEV + (irq) + PEM_SPI_MISC_IRQ_BASE)
#endif /* __PLATFORM_IRQS_DEF_H__ */
