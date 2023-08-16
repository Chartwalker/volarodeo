include ../src/config.mk

.PHONY: libs includes clean 

all: clean includes libs 

libs:
	@$(TSC_SBP_ECHOE) "\tmake "$(TSC_CDPA_LIB)
	@$(TSC_SBP_ECHOE) "\t--done\n"

includes:


clean:
	@if [ -f ./$(TSC_CFN_LIBSYMBIOT).a ]; then $(TSC_SBP_RM) ./$(TSC_CFN_LIBSYMBIOT).a; fi 
