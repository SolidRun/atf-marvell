/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLATFORM_IRQS_DEF_H__
#define __PLATFORM_IRQS_DEF_H__

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

/* Definitions of IRQ SPI (Shared Peripheral Interrupt) IDs (range 0x20-0x3F) */
#define SPI_IRQ_OFFSET			0x20

/* UAA definitons (range 0x40 - 0x47) */
#define UAA_SPI_IRQ_DEVS		0x8
#define UAA_SPI_IRQ_BASE		(0x0 + SPI_IRQ_OFFSET)
#define UAA_SPI_IRQ(dev)		((dev) + UAA_SPI_IRQ_BASE)

/* Watchdog interrupt (interrupt 0x48)*/
#define GTI_WATCHDOG_SPI_IRQ_BASE		(UAA_SPI_IRQ_BASE + UAA_SPI_IRQ_DEVS)
#define GTI_WATCHDOG_SPI_IRQ_DEVS		0x1
#define GTI_WATCHDOG_SPI_IRQ(dev)		(GTI_WATCHDOG_SPI_IRQ_BASE)

/* PEM definitions (range 0x49 - 0x50) */
#define PEM_SPI_IRQ_DEVS		0x2

/*
 * Each of PEM has 4 interrupts
 * (INTA, INTB, INTC, INTD)
 */
#define PEM_SPI_IRQS_PER_DEV			0x4

#define PEM_SPI_IRQ_BASE		(GTI_WATCHDOG_SPI_IRQ_BASE + GTI_WATCHDOG_SPI_IRQ_DEVS)
#define PEM_SPI_IRQ(dev, irq)	((dev) * PEM_SPI_IRQS_PER_DEV + (irq) + PEM_SPI_IRQ_BASE)

/* Base SPI for GPIO interrupt to be handled in ATF (range 0x51 - 0x54)*/
#define GPIO_SPI_IRQS			0x4
#define GPIO_SPI_IRQ_BASE		(PEM_SPI_IRQ_BASE + (PEM_SPI_IRQ_DEVS*PEM_SPI_IRQS_PER_DEV))
#define GPIO_SPI_IRQ(irq)		((irq) + GPIO_SPI_IRQ_BASE)

/* Default SPI to be used by kernel GPIO driver when intercepting interrupts (interrupt 0x55)*/
#define GPIO_SPI_NSEC_IRQS		0x1
#define GPIO_SPI_IRQ_NSEC_BASE	(GPIO_SPI_IRQ_BASE + GPIO_SPI_IRQS)
#define GPIO_SPI_IRQ_NSEC(irq)	((irq) + GPIO_SPI_IRQ_NSEC_BASE)


#define BPHY_PSM_IRQ_BASE		(GPIO_SPI_IRQ_NSEC_BASE + GPIO_SPI_NSEC_IRQS)
#define BPHY_PSM_IRQS_NUMBER		(END_OF_BPHY_IRQS - BPHY_PSM_IRQ_BASE)
#define BPHY_PSM_IRQ(irq)		((irq) + BPHY_PSM_IRQ_BASE)

#define BPHY_PSM_GPINT_IRQS		0x8
#define BPHY_PSM_GPINT_IRQ_BASE		BPHY_PSM_IRQ_BASE
#define BPHY_PSM_GPINT_IRQ(irq)		((irq) + BPHY_PSM_GPINT_IRQ_BASE)

#define BPHY_PSM_ERRINT_IRQS		0x1
#define BPHY_PSM_ERRINT_IRQ_BASE	(BPHY_PSM_GPINT_IRQ_BASE + BPHY_PSM_GPINT_IRQS)
#define BPHY_PSM_ERRINT_IRQ(irq)	((irq) + BPHY_PSM_ERRINT_IRQ_BASE)

#define BPHY_PSM_QOVF_IRQS		0x4
#define BPHY_PSM_QOVF_IRQ_BASE		(BPHY_PSM_ERRINT_IRQ_BASE + BPHY_PSM_ERRINT_IRQS)
#define BPHY_PSM_QOVF_IRQ(irq)		((irq) + BPHY_PSM_QOVF_IRQ_BASE)

#define BPHY_PSM_QTO_IRQS		0x4
#define BPHY_PSM_QTO_IRQ_BASE		(BPHY_PSM_QOVF_IRQ_BASE + BPHY_PSM_QOVF_IRQS)
#define BPHY_PSM_QTO_IRQ(irq)		((irq) + BPHY_PSM_QTO_IRQ_BASE)

#define BPHY_PSM_JERR_IRQS		0x3
#define BPHY_PSM_JERR_IRQ_BASE		(BPHY_PSM_QTO_IRQ_BASE + BPHY_PSM_QTO_IRQS)
#define BPHY_PSM_JERR_IRQ(irq)		((irq) + BPHY_PSM_JERR_IRQ_BASE)

#define BPHY_PSM_JERR_HI_IRQS		0x1
#define BPHY_PSM_JERR_HI_IRQ_BASE	(BPHY_PSM_JERR_IRQ_BASE + BPHY_PSM_JERR_IRQS)
#define BPHY_PSM_JERR_HI_IRQ(irq)	((irq) + BPHY_PSM_JERR_HI_IRQ_BASE)

#define BPHY_PSM_JNFAT_IRQS		0x3
#define BPHY_PSM_JNFAT_IRQ_BASE		(BPHY_PSM_JERR_HI_IRQ_BASE + BPHY_PSM_JERR_HI_IRQS)
#define BPHY_PSM_JNFAT_IRQ(irq)		((irq) + BPHY_PSM_JNFAT_IRQ_BASE)

#define BPHY_PSM_JNFAT_HI_IRQS		0x1
#define BPHY_PSM_JNFAT_HI_IRQ_BASE	(BPHY_PSM_JNFAT_IRQ_BASE + BPHY_PSM_JNFAT_IRQS)
#define BPHY_PSM_JNFAT_HI_IRQ(irq)	((irq) + BPHY_PSM_JNFAT_HI_IRQ_BASE)

#define BPHY_PSM_JTO_IRQS		0x3
#define BPHY_PSM_JTO_IRQ_BASE		(BPHY_PSM_JNFAT_HI_IRQ_BASE + BPHY_PSM_JNFAT_HI_IRQS)
#define BPHY_PSM_JTO_IRQ(irq)		((irq) + BPHY_PSM_JTO_IRQ_BASE)

#define BPHY_PSM_JTO_HI_IRQS		0x1
#define BPHY_PSM_JTO_HI_IRQ_BASE	(BPHY_PSM_JTO_IRQ_BASE + BPHY_PSM_JTO_IRQS)
#define BPHY_PSM_JTO_HI_IRQ(irq)	((irq) + BPHY_PSM_JTO_HI_IRQ_BASE)

#define BPHY_PSM_DERR_IRQS		0x3
#define BPHY_PSM_DERR_IRQ_BASE		(BPHY_PSM_JTO_HI_IRQ_BASE + BPHY_PSM_JTO_HI_IRQS)
#define BPHY_PSM_DERR_IRQ(irq)		((irq) + BPHY_PSM_DERR_IRQ_BASE)

#define BPHY_PSM_DERR_HI_IRQS		0x1
#define BPHY_PSM_DERR_HI_IRQ_BASE	(BPHY_PSM_DERR_IRQ_BASE + BPHY_PSM_DERR_IRQS)
#define BPHY_PSM_DERR_HI_IRQ(irq)	((irq) + BPHY_PSM_DERR_HI_IRQ_BASE)

#define BPHY_PSM_AERR_IRQS		0x3
#define BPHY_PSM_AERR_IRQ_BASE		(BPHY_PSM_DERR_HI_IRQ_BASE + BPHY_PSM_DERR_HI_IRQS)
#define BPHY_PSM_AERR_IRQ(irq)		((irq) + BPHY_PSM_AERR_IRQ_BASE)

#define BPHY_PSM_AERR_HI_IRQS		0x1
#define BPHY_PSM_AERR_HI_IRQ_BASE	(BPHY_PSM_AERR_IRQ_BASE + BPHY_PSM_AERR_IRQS)
#define BPHY_PSM_AERR_HI_IRQ(irq)	((irq) + BPHY_PSM_AERR_HI_IRQ_BASE)

#define BPHY_PSM_MTO_IRQS		0x3
#define BPHY_PSM_MTO_IRQ_BASE		(BPHY_PSM_AERR_HI_IRQ_BASE + BPHY_PSM_AERR_HI_IRQS)
#define BPHY_PSM_MTO_IRQ(irq)		((irq) + BPHY_PSM_MTO_IRQ_BASE)

#define BPHY_PSM_MTO_HI_IRQS		0x1
#define BPHY_PSM_MTO_HI_IRQ_BASE	(BPHY_PSM_MTO_IRQ_BASE + BPHY_PSM_MTO_IRQS)
#define BPHY_PSM_MTO_HI_IRQ(irq)	((irq) + BPHY_PSM_MTO_HI_IRQ_BASE)

#define BPHY_PSM_BCN_ERR_IRQS		0x1
#define BPHY_PSM_BCN_ERR_IRQ_BASE	(BPHY_PSM_MTO_HI_IRQ_BASE + BPHY_PSM_MTO_HI_IRQS)
#define BPHY_PSM_BCN_ERR_IRQ(irq)	((irq) + BPHY_PSM_BCN_ERR_IRQ_BASE)

#define END_OF_BPHY_IRQS		(BPHY_PSM_BCN_ERR_IRQ_BASE + BPHY_PSM_BCN_ERR_IRQS)
/* End of BPHY PSM interrupts */

/* Default SPI to be used by per-core CWD GTI interrupt (range 0x64 - 0x7c )*/
#define GTI_CWD_SPI_IRQS		0x18
#define GTI_CWD_SPI_IRQ_BASE		END_OF_BPHY_IRQS
#define GTI_CWD_SPI_IRQ(irq)		((irq) + GTI_CWD_SPI_IRQ_BASE)

/* interrupt 0x7d */
#define MDC_SPI_IRQS		1
#define MDC_SPI_IRQ_BASE	(GTI_CWD_SPI_IRQ_BASE + GTI_CWD_SPI_IRQS)
#define MDC_SPI_IRQ(irq)	MDC_SPI_IRQ_BASE

/* interrupt 0x7e */
#define TAD_SPI_IRQS		1
#define TAD_SPI_IRQ_BASE	(MDC_SPI_IRQ_BASE + MDC_SPI_IRQS)
#define TAD_SPI_IRQ(irq)	TAD_SPI_IRQ_BASE

/* interrupt 0x7f */
#define DSS_SPI_IRQS		1
#define DSS_SPI_IRQ_BASE	(TAD_SPI_IRQ_BASE + TAD_SPI_IRQS)
#define DSS_SPI_IRQ(irq)	DSS_SPI_IRQ_BASE

/* interrupt 0x80 */
#define EMMC_SPI_IRQS		1
#define EMMC_SPI_IRQ_BASE	(DSS_SPI_IRQ_BASE + DSS_SPI_IRQS)
#define EMMC_SPI_IRQ(irq)	EMMC_SPI_IRQ_BASE

/* interrupt (range 0x81 - 0x8c) */
#define RAS_CORE_SPI_IRQS	PLATFORM_CORE_PER_CLUSTER
#define RAS_CORE_SPI_IRQ_BASE	(EMMC_SPI_IRQ_BASE + EMMC_SPI_IRQS)
#define RAS_CORE_SPI_IRQ(core)	((core) + RAS_CORE_SPI_IRQ_BASE)

/* interrupt (range 0x8d - 0x8e) */
#define XSPI_SPI_IRQS		2
#define XSPI_SPI_IRQ_BASE	(RAS_CORE_SPI_IRQ_BASE + RAS_CORE_SPI_IRQS)
#define XSPI_SPI_IRQ(irq)	((irq) + XSPI_SPI_IRQ_BASE)

/* PEM MISC interrupts (for EACH PEM): INT_SUM, RST_INT (range 0x8f .. 0x8f + (PEM_SPI_IRQ_DEVS * 2 - 1)) */
#define PEM_SPI_MISC_IRQ_DEVS		PEM_SPI_IRQ_DEVS
#define PEM_SPI_MISC_IRQS_PER_DEV	0x2
#define PEM_SPI_MISC_IRQ_BASE		(XSPI_SPI_IRQ_BASE + XSPI_SPI_IRQS)
#define PEM_SPI_MISC_IRQ(dev, irq)	((dev) * PEM_SPI_MISC_IRQS_PER_DEV + (irq) + PEM_SPI_MISC_IRQ_BASE)
#endif /* __PLATFORM_IRQS_DEF_H__ */
