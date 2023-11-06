#include <stdio.h>

int main(void);

int
main(void)
{
  int A, B;

  printf("Entrez une valeur pour l'entier A ? ");
  scanf("%d", &A);
  printf("Entrez une valeur pour l'entier B ? ");
  scanf("%d", &B);
  printf("Le division entière de '%d / %d' = %d et le reste est %d\n", A, B, A/B, A%B);
}
