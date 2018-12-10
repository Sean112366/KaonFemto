#
# Makefile
#


.PHONY: help

help:
	@echo
	@echo " Run with 'make filename.root'"
	@echo

fit-%:
	@root -q -l 'Fit1D.C("$(patsubst fit-%,%,$@)")'
