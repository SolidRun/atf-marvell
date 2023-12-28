/*
 * Copyright (c) 2023 Marvell.
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

/* Definitions of IRQ PPI (Per-Processor Interrupt) IDs (range 0x10 - 0x1f) */
#define PPI_IRQ_OFFSET			0x10

/* Secure physical generic timer IRQ (interrupt 0xd)*/
#define SEC_TIMER_PPI_IRQ_BASE	(0xd + PPI_IRQ_OFFSET)
#define SEC_TIMER_PPI_IRQ		(SEC_TIMER_PPI_IRQ_BASE)

/* Definitions of IRQ SPI (Shared Peripheral Interrupt) IDs (range 0x20-0x3FC) */
#define SPI_IRQ_OFFSET			0x20

/* UAA definitons (range 0x20 - 0x27) */
#define UAA_SPI_IRQ_DEVS		0x8
#define UAA_SPI_IRQ_BASE		(SPI_IRQ_OFFSET)
#define UAA_SPI_IRQ(dev)		((dev) + UAA_SPI_IRQ_BASE)

/* Base SPI for GPIO interrupt to be handled in ATF (range 0x3e - 0x41)*/
#define GPIO_SPI_IRQS			0x4
#define GPIO_SPI_IRQ_BASE		(UAA_SPI_IRQ_BASE)
#define GPIO_SPI_IRQ(irq)		((irq) + GPIO_SPI_IRQ_BASE)

/* Default SPI to be used by kernel GPIO driver when intercepting interrupts (interrupt 0x42)*/
#define GPIO_SPI_NSEC_IRQS		0x1
#define GPIO_SPI_IRQ_NSEC_BASE	(GPIO_SPI_IRQ_BASE + GPIO_SPI_IRQS)
#define GPIO_SPI_IRQ_NSEC(irq)	((irq) + GPIO_SPI_IRQ_NSEC_BASE)

/* interrupt 0x5f */
#define EMMC_SPI_IRQS		1
#define EMMC_SPI_IRQ_BASE	(GPIO_SPI_IRQ_NSEC_BASE)
#define EMMC_SPI_IRQ(irq)	((irq) + EMMC_SPI_IRQ_BASE)

/* interrupt (range 0x78 - 0x79) */
#define XSPI_SPI_IRQS		2
#define XSPI_SPI_IRQ_BASE	(EMMC_SPI_IRQ_BASE)
#define XSPI_SPI_IRQ(irq)	((irq) + XSPI_SPI_IRQ_BASE)

#endif /* __PLATFORM_IRQS_DEF_H__ */
