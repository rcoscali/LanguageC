#include <stdio.h>

int main(void);

int
main(void)
{
	int n, i, fact;
	for (n = 5, i = (fact = 1); i <= n; fact *= i++);
	printf("%d! = %d \n", n, fact);
}
