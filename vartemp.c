#include <stdio.h>

void func(void);
void func2(void);
int main(void);

void
func(void)
{
  int a;
  float b;
  char c;

  printf("adresse de a = %p\n", (void*)&a);
  printf("adresse de b = %p\n", (void*)&b);
  printf("adresse de c = %p\n", (void*)&c);
  printf("avant:\n");
  printf("a = %d\n", a);
  printf("b = %f\n", (double)b);
  printf("c = %c\n", c);
  a = 2;
  b = (float)1.234567;
  c = 'F';
  printf("après:\n");
  printf("a = %d\n", a);
  printf("b = %f\n", (double)b);
  printf("c = %c\n", c);
}

void
func2(void)
{
  unsigned char tab[150];
  int i;

  for (i = 0; i < 150; i++)
    {
      tab[i] = 255;
    }
}

int
main(void)
{
  func();
  func2();
  func();
}
