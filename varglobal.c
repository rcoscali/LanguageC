#include <stdio.h>

int n = 10;

void fonction(void);
int main(void);

void
fonction(void)
{
	int n = 0;
	n++;
	printf("appel numero %d\n", n++);
	return;
}

int
main(void)
{
	int i;
	for (i = 0; i < 5; fonction(), i++);
}
