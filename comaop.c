#include <stdio.h>

int main(void);

int
main(void)
{
	int a, b;
	b = ((a = 3), (a + 2));
	printf("b = %d\n", b);
}

