#include <stdio.h>

int main(void);

int
main(void)
{
  const char * p1 = "Hello";
  const char * const p2 = "World";
  char * const p3 = "!";

  printf ("%s %s %s\n", p1, p2, p3);

  *p1 = 'h';
  p2 = "WORLD";
  *p2 = 'w';
  p3 = "!!";

  printf ("%s %s %s\n", p1, p2, p3);
}
