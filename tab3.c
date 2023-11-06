#include <stdio.h>

int main(void);

#define N 8

char tab[N] = "exemple";

int
main(void)
{
	int i;
	for (i = 0; i < N; i++)
		printf("tab[%d] = %c\n", i, tab[i]);
}
