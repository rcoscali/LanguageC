#include <stdio.h>

int main(void);
void echange(int a, int b);

void
echange(int a, int b)
{
	int t;
	printf("debut fonction :\n a = %d \t b = %d\n", a, b);
	t = a;
	a = b;
	b = t;
	printf("fin fonction :\n a = %d \t b = %d\n", a, b);
	return;
}

int
main(void)
{
	int a = 2, b = 5;
	printf("debut programme principal :\n a = %d \t b = %d\n", a, b);
	echange(a,b);
	printf("fin programme principal :\n a = %d \t b = %d\n", a, b);
}
