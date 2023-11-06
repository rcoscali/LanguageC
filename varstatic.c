#include <stdio.h>

extern void fonction(void);
int main(void);

void
fonction(void)
{
	static int n = 0;
	printf("appel numero %d\n", ++n);
	return;
}

int
main(void)
{
	int i;
	for (i = 0; i < 5; fonction(), i++);
}
