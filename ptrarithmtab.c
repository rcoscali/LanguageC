#include <stdio.h>

#define N 5
int tab[5] = {1, 2, 6, 0, 7};

int main(void);

int
main(void)
{
  int *p;
  printf("\n ordre croissant:\n");
  for (p = &tab[0]; p <= &tab[N-1]; p++)
    printf(" %d \n",*p);
  printf("\n ordre decroissant:\n");
  for (p = &tab[N-1]; p >= &tab[0]; p--)
    printf(" %d \n",*p);
}
