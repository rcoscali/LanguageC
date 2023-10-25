#include <stdio.h>

void func(void)
{
  double d;
  int a;
  float b;
  char c;

  printf("adresse de a = %p\n", &a);
  printf("adresse de b = %p\n", &b);
  printf("adresse de c = %p\n", &c);
  printf("avant:\n");
  printf("a = %d\n", a);
  printf("b = %f\n", b);
  printf("c = %c\n", c);
  a = 2;
  b = 1.234567;
  c = 'F';
  printf("après:\n");
  printf("a = %d\n", a);
  printf("b = %f\n", b);
  printf("c = %c\n", c);
}

void func2()
{
  unsigned char tab[150];
  int i;

  for (i = 0; i < 150; i++)
    {
      tab[i] = 255;
    }
}

int main()
{
  func();
  func2();
  func();
}
