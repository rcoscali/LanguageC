#include <stdio.h>
#include <alloca.h>
#define N 10

int main(void);

int
main(void)
{
  int i = 3;
  int* a = alloca(N);
  int j = 4;
  int* b = alloca(sizeof(int));
  *a = i;
  *b = j;
  printf("adresse de i = %p / valeur de i = %d\n", &i, i);
  printf("adresse de a = %p / valeur de a = %p / valeur de *a = %d\n", &a, a, *a);
  printf("adresse de j = %p / valeur de j = %d\n", &j, j);
  printf("adresse de b = %p / valeur de b = %p / valeur de *b = %d\n", &b, b, *b);
}
