#include <stdio.h>

int main()
{
  int i = 3;
  int *p;
  p = &i;
  printf("i = %d / adresse de i = %p\n", i, &i);
  printf("p = %p / adresse de p = %p\n", p, &p);
}
