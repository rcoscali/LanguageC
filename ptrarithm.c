#include <stdio.h>

int main()
{
	int i = 3;
	int *p1, *p2;
	p1 = &i;
	p2 = p1 + 1;
	printf("p1 = %p \t p2 = %p\n", p1, p2);
}
