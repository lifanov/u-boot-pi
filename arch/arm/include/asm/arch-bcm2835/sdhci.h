/*
 * (C) Copyright 2012,2015 Stephen Warren
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _BCM2835_SDHCI_H_
#define _BCM2835_SDHCI_H_

#ifdef CONFIG_BCM2836
#define BCM2835_SDHCI_BASE 0x3f300000
#else
#define BCM2835_SDHCI_BASE 0x20300000
#endif

int bcm2835_sdhci_init(u32 regbase, u32 emmc_freq);

#endif
