#include <stdio.h>

#define N 10

int main(void);

int
main(void)
{
	int tab[N];
	int i;

	for (i = 0; i < N; i++)
		printf("tab[%d] = %d\n", i, tab[i]);
}

