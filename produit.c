#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a, b;
	if (argc != 3)
	{
		printf("Erreur : nombre invalide d’arguments\n"); 
		printf("Usage: %s int int\n", argv[0]); 
		return(EXIT_FAILURE);
	}
	a = atoi(argv[1]); 
	b = atoi(argv[2]);
	printf("Le produit de %d par %d vaut : %d\n", a, b, a * b);
	exit(EXIT_SUCCESS); 
}
