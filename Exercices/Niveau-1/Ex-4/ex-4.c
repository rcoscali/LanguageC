#include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main(void);

int
main(void)
{
	int reponse;	// Entier : reponse

	do
      {				                     // Faire
		printf("Combien font 2 x 2 ? "); // Afficher : "Combien font 2 x 2 ? "
		scanf("%d", &reponse);		     // Entrer : reponse

		if(reponse != 4) 			     // Si(reponse != 4)
          printf("\nFaux, recommencez\n"); //  Afficher : "Faux, recommencez "

	}
    while (reponse != 4);	// Tant que (reponse != 4)

	printf("\nBravo !\n");	// Afficher : "Bravo !"
	return 0;
}
