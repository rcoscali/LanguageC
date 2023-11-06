#include <stdio.h>

int main(void);

int
main(void)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;
		printf("i = %d\n", i);
	}
	printf("valeur de i a la sortie de la boucle = %d\n", i);
}
