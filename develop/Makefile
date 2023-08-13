include src/config.mk

.PHONY: all

all: ;
	./configure.sh
	make -C $(TSC_CDPA_SRC) all

include: ;
	./configure.sh
	make -C $(TSC_CPA_SRC) includes

libs: ;
	./configure.sh
	make -C $(TSC_CPA_SRC) libs

clean: ;
	./configure.sh
	make -C $(TSC_CPA_SRC) clean

