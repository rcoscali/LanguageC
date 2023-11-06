#include <stdio.h>

#define N 5

int main(void);

int tab[5] = {1, 2, 6, 0, 7};

int
main(void)
{
	int i;
	int *p; p = tab;
	for (i = 0; i < N; i++)
		printf(" %d \n", p [i]);
}
