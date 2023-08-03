GCC=gcc
FLAGS=-std=c99 -Wall -pedantic -Iinclude -lm
LIBS=$(wildcard libs/*.c)
SOURCE=pi_approximator.c
BINARY=$(SOURCE:.c=)

all:
	$(GCC) $(FLAGS) -o $(BINARY) $(SOURCE) $(LIBS)

clean:
	rm $(BINARY)

.phony: all clean
