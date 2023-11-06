#include <stdio.h>

#define N 4

int main(void);

int tab[N] = {1, 2, 3, 4};

int
main(void)
{
	int i;
	for (i = 0; i < N; i++)
		printf("tab[%d] = %d\n", i, tab[i]);
}
