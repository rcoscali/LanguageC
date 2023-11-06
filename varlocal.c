#include <stdio.h>

int n;

void fonction(void);
int main(void);

void
fonction(void)
{
	printf("appel numero %d\n", ++n);
	return;
}

int
main(void)
{
	int i;
	for (i = 0; i < 5; fonction(), i++);
}
