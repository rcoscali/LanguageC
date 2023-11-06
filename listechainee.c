#include <stdio.h>
#include <stdlib.h>

int main(void);

struct cellule
{
  int valeur;
  struct cellule *suivant;
};

typedef struct cellule *liste;

liste
insere(int element, liste Q)
{
  liste L;
  L = (liste)malloc(sizeof(struct cellule));
  L->valeur = element;
  L->suivant = Q;
  return(L);
}

int
main(void)
{
  liste L, P;
  L = insere(1, insere(2, insere(3, insere(4, NULL))));
  printf("\n impression de la liste:\n");
  P = L;
  while (P)
    {
      printf("%d \t", P->valeur);
      P = P->suivant;
      if (!P)
        printf("\n");
    }
}
