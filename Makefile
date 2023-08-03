GCC=gcc
FLAGS=-std=c99 -Wall -pedantic -Iinclude
LIBS=-lm

all:
	$(GCC) $(FLAGS) -o pi_calc pi_calc.c libs/randlib.c libs/getnum.c $(LIBS)

.phony: all
