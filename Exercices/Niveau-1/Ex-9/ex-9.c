#include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main() 
{
    const float TAUX_TVA = 0.2; // TVA à 20%
    float prixUnitaireHT;
    int nb;
    
    printf("Prix TTC\n");
        
    printf("\nSaisir le prix HT : ");
    scanf("%f", &prixUnitaireHT);
    
    printf("Saisir le nombre d'exemplaires : ");        
    scanf("%d", &nb);
    
    printf("\nPrix Total HT : \t%.2f", prixUnitaireHT * nb);
    printf("\nPrix TVA : \t\t%.2f", prixUnitaireHT * nb * TAUX_TVA);
    printf("\nPrix Total TTC : \t%.2f\n", prixUnitaireHT * nb * (1 + TAUX_TVA));
    
    return 0;
}
