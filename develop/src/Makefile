include ./config.mk

.PHONY: libs includes test clean

all: clean includes libs $(TSC_CDN_GUI) test

includes:
	make -C ../include includes

libs:
	make -C ../lib libs

$(TSC_CDN_GUI):
	make -C ./$(TSC_CDN_GUI) all

test:

clean:


