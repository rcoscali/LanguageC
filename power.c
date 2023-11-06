#include <stdio.h>

int puissance(int, int);
int main(void);

int
puissance(int a, int n)
{
	if (n == 0)
		return(1);
	return(a * puissance(a, n-1));
}

int
main(void)
{
	int a = 2, b = 5;
	printf("%d\n", puissance(a, b));
}
