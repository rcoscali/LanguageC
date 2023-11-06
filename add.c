#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int add(int,...);
int main(void);

int
add(int nb,...)
{
  int res = 0;
  int i;
  va_list liste_parametres;
  va_start(liste_parametres, nb);
  for (i = 0; i < nb; i++)
    res += va_arg(liste_parametres, int);
  va_end(liste_parametres);
  return(res);
}

int
main(void)
{
  printf("%d\n", add(4,10,2,8,5));
  printf("%d\n", add(6,10,15,5,2,8,10));
  return(EXIT_SUCCESS);
}
