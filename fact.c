#include <stdio.h>

int main()
{
	int n, i, fact;
	for (n = 5, i = (fact = 1); i <= n; fact *= i++);
	printf("%d! = %d \n", n, fact);
}
