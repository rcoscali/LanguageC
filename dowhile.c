#include <stdio.h>

int main(void);

int main(void)
{
	int a;

	do
	{
		printf("Entrez un entier entre 1 et 10 ? ");
		scanf("%d", &a);
	}
	while((a < 1) || (a > 10));
}
