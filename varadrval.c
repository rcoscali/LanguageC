#include <stdio.h>

int main()
{
  int i, j;
  i = 3;
  j = i;
  printf("i = %d / adresse de i = %p\n", i, &i);
  printf("j = %d / adresse de j = %p\n", j, &j);
}
