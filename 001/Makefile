# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the kernel character device drivers.
#

KERNEL := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

obj-m := foo.o

all:
	$(MAKE) -C $(KERNEL) M=$(PWD) modules

clean:
	-rm -f *.o *.ko *.mod.c Module.symvers modules.order
