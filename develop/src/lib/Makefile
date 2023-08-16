include ../config.mk

.PHONY: libs includes test clean gui

all: clean includes libs gui test

includes:
	make -C $(TSC_CDPA_LIBSYMBIOT) includes

libs:
	make -C $(TSC_CDPA_LIBSYMBIOT) libs

test:
	make -C $(TSC_CDPA_LIBSYMBIOT) test

clean:
	make -C $(TSC_CDPA_LIBSYMBIOT) clean


