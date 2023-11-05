#include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int
main() 
{
    int reponse;        // Entier : reponse
    int nbEssais = 0;   // Entier : nbEssais
    
    do
      {                                  // Faire
        printf("Combien font 2 x 2 ? "); // Afficher : "Combien font 2 x 2 ? "
        scanf("%d", &reponse);           // Entrer : reponse
    
        if(reponse != 4)                 // Si(reponse != 4)
            printf("\nFaux, recommencez\n"); // Afficher : "Faux, recommencez "
        
        nbEssais++;     // nbEssais <-- nbEssais + 1
            
    } while (reponse != 4); // Tant que (reponse != 4)
    
    // Afficher : "Bravo ! Vous avez trouvé en nbEssais essais."
    printf("\nBravo ! Vous avez trouvé en %d essais.\n", nbEssais);
    
    return 0;
}
