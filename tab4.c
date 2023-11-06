#include <stdio.h>

int main(void);

#define N 8

char tab[N] = "exemple";

int
main(void)
{
	printf("Nbre de char = %lu\n", sizeof(tab)/sizeof(char));
}
