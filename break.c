#include <stdio.h>

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("i = %d\n", i);
		if (i == 3)
			break;
	}
	printf("valeur de i a la sortie de la boucle = %d\n", i);
}
