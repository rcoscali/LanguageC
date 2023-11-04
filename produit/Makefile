##
## Makefile for produit
##

CC = gcc
CFLAGS = -O2 -Wall -Wno-unused-result -pedantic
DEBUGFLAGS = -O0 -g -Wall -Wno-unused-result -pedantic

.PHONY: all clean

all: produit

produit: produit.o main.o
	gcc -O2 -o $@ $^

produit.o: produit.c produit.h
	gcc $(CFLAGS) -c -o $@ $<

main.o: main.c produit.h
	gcc $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *~ produit
