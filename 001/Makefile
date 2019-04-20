# Author: andrew.zhu@loostone.com
# Description: Makefile for foo module

KERNEL := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

SRC := /home/andrew/Documents/github/test/001
ccflags-y := -I$(SRC)/include/

obj-m := foo.o

all:
	$(MAKE) -C $(KERNEL) M=$(PWD) modules

.PHONEY: clean

clean:
	-rm -f *.o *.ko *.mod.c Module.symvers modules.order
