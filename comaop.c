#include <stdio.h>

int
main() 
{
	int a, b;
	b = ((a = 3), (a + 2));
	printf("b = %d\n", b); 
} 

