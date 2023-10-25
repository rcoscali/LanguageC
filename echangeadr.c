#include <stdio.h>

void echange (int *adr_a, int *adr_b)
{
	int t;
	t = *adr_a;
	*adr_a = *adr_b;
	*adr_b = t;
	return;
}
int main()
{
	int a = 2, b = 5;
	printf("debut programme principal :\n a = %d \t b = %d\n", a, b);
	echange(&a,&b);
	printf("fin programme principal :\n a = %d \t b = %d\n", a,	b);
}
