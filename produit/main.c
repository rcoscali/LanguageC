/**
 * fichier: main.c
 * saisit 2 entiers et affiche leur produit
 */
#include <stdlib.h>
#include <stdio.h>

#include "produit.h"

int main(void)
{
  int a, b, c;
  printf("1ère opérande ? ");
  (void)scanf("%d",&a);
  printf("2ème opérande ? ");
  (void)scanf("%d",&b);
  c = produit(a,b);
  printf("le produit vaut %d\n",c);
  return EXIT_SUCCESS;
}
