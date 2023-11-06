#include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main(void);

int
main(void)
{
    int nbNotes;                    // Entier : nbNotes
    float note, sommeDesNotes;      // Réels : note, sommeDesNotes

    // Afficher : Entrez des notes (entre 0 et 20)
    // Afficher  : Pour stopper, saisir une note hors de cet intervalle.
    printf("Entrez des notes (entre 0 et 20)\nPour stopper, saisir une note hors de cet intervalle.\n");

    nbNotes = 0;        // nbNotes <-- 0
    sommeDesNotes = 0;      // sommeDesNotes <-- 0

    do
      {                                         // Faire
        scanf("%f", &note);                     //      Entrer : note
        nbNotes++;                              //      nbNotes <-- nbNotes + 1
        sommeDesNotes = sommeDesNotes + note;   //      sommeDesNotes <-- sommeDesNotes + note
    }
    while((note >= 0) && (note <= 20));         // Tant que (note >= 0) ET (note <= 20)

    nbNotes--;  // La dernière note ne compte pas (en dehors de l'intervalle 0 - 20)
    sommeDesNotes = sommeDesNotes - note;   // La dernière note ne compte pas

    if(nbNotes > 0) {       // Si(nbNotes > 0)
                            //      Afficher : Vous avez saisi nbNotes note(s)
        printf("Vous avez saisi %d note(s)\n", nbNotes);
        printf("La moyenne des notes est : %2.2f\n", sommeDesNotes / nbNotes);
    }
    else                    // Sinon
                            //      Afficher : ERREUR : Vous n'avez pas saisi de note.
        printf("ERREUR : Vous n'avez pas saisi de note.\n");

    return 0;
}
