#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int, char*[]);
void usage(char *);
int somme(int, int);
int produit(int, int);
int operateur_binaire(int, int, int(*)(int, int));

void
usage(char *cmd)
{
	printf("Usage: %s int [plus|fois] int\n", cmd);
	return;
}

int
somme(int a, int b)
{
	return(a + b);
}

int
produit(int a, int b)
{
	return(a * b);
}

int
operateur_binaire(int a, int b, int (*f)(int, int))
{
	return((*f)(a, b));
}

int
main(int argc, char *argv[])
{
	int a, b;
	if (argc != 4)
	{
		printf("Erreur : nombre invalide d’arguments\n");
		usage(argv[0]);
		return(EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!strcmp(argv[2], "plus"))
	{
		printf("%d\n", operateur_binaire(a, b, somme));
		return(EXIT_SUCCESS);
	}
	if (!strcmp(argv[2], "fois"))
	{
		printf("%d\n", operateur_binaire(a, b, produit));
		return(EXIT_SUCCESS);
	}
	else
	{
		printf("Erreur : argument(s) invalide(s)\n");
		usage(argv[0]);
		return(EXIT_FAILURE);
	}
}
