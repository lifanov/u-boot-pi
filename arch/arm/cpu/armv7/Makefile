#
# (C) Copyright 2000-2003
# Wolfgang Denk, DENX Software Engineering, wd@denx.de.
#
# See file CREDITS for list of people who contributed to this
# project.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston,
# MA 02111-1307 USA
#

include $(TOPDIR)/config.mk

LIB	= $(obj)lib$(CPU).o

START	:= start.o

COBJS	+= cache_v7.o

COBJS	+= cpu.o
COBJS	+= syslib.o

ifneq ($(CONFIG_AM33XX)$(CONFIG_OMAP44XX)$(CONFIG_OMAP54XX)$(CONFIG_TEGRA20),)
SOBJS	+= lowlevel_init.o
endif

SRCS	:= $(START:.o=.S) $(COBJS:.o=.c)
OBJS	:= $(addprefix $(obj),$(COBJS) $(SOBJS))
START	:= $(addprefix $(obj),$(START))

all:	$(obj).depend $(START) $(LIB)

$(LIB):	$(OBJS)
	$(call cmd_link_o_target, $(OBJS))

#########################################################################

# defines $(obj).depend target
include $(SRCTREE)/rules.mk

sinclude $(obj).depend

#########################################################################
=======
obj-$(if $(filter am33xx,$(SOC)),y) += am33xx/
obj-$(if $(filter armada-xp,$(SOC)),y) += armada-xp/
obj-$(CONFIG_AT91FAMILY) += at91/
obj-$(CONFIG_BCM2835) += bcm2835/
obj-$(if $(filter bcm281xx,$(SOC)),y) += bcm281xx/
obj-$(if $(filter bcmcygnus,$(SOC)),y) += bcmcygnus/
obj-$(if $(filter bcmnsp,$(SOC)),y) += bcmnsp/
obj-$(CONFIG_ARCH_EXYNOS) += exynos/
obj-$(CONFIG_ARCH_HIGHBANK) += highbank/
obj-$(CONFIG_ARCH_KEYSTONE) += keystone/
obj-$(if $(filter ls102xa,$(SOC)),y) += ls102xa/
obj-$(if $(filter mx5,$(SOC)),y) += mx5/
obj-$(CONFIG_MX6) += mx6/
obj-$(CONFIG_OMAP34XX) += omap3/
obj-$(CONFIG_OMAP44XX) += omap4/
obj-$(CONFIG_OMAP54XX) += omap5/
obj-$(CONFIG_RMOBILE) += rmobile/
obj-$(CONFIG_ARCH_S5PC1XX) += s5pc1xx/
obj-$(CONFIG_SOCFPGA) += socfpga/
obj-$(if $(filter stv0991,$(SOC)),y) += stv0991/
obj-$(CONFIG_ARCH_SUNXI) += sunxi/
obj-$(CONFIG_TEGRA20) += tegra20/
obj-$(CONFIG_U8500) += u8500/
obj-$(CONFIG_ARCH_UNIPHIER) += uniphier/
obj-$(CONFIG_VF610) += vf610/
obj-$(CONFIG_ZYNQ) += zynq/
