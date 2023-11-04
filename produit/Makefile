##
## Makefile for produit
##

.PHONY: all clean

all: produit

produit: produit.o main.o
	gcc -O2 -o $@ $^

produit.o: produit.c produit.h
	gcc -O2 -Wall -pedantic -c -o $@ $<

main.o: main.c produit.h
	gcc -O2 -Wall -Wno-unused-result -pedantic -c -o $@ $<

clean:
	rm -f *.o *~ produit
