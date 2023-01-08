GCC=gcc
FLAGS=-std=c99 -Wall -pedantic -Iinclude

all:
	$(GCC) $(FLAGS) -o pi_calc pi_calc.c libs/randlib.c

.phony: all
