#include <stdio.h>

int
main()
{
  int A, B;

  printf("Entrez une valeur pour l'entier A ? ");
  scanf("%d", &A);
  printf("Entrez une valeur pour l'entier B ? ");
  scanf("%d", &B);
  printf("Le produit de '%d x %d' = %d\n", A, B, A*B);
}
