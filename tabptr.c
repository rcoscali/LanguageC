#include <stdio.h>
#include <stdlib.h>

int main(void);

void
init(int *tab, int n)
{
	int i;
	for (i = 0; i < n; i++)
		tab[i] = i + 1;
	return;
}

int
main(void)
{
	int i, n = 5;
	int *tab;
	tab = (int*)malloc(n * sizeof(int));
	init(tab, n);
	for (i = 0; i < n; i++)
      printf("Element tab[%d] = %d\n", i, tab[i]);
}
