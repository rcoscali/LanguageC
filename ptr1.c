#include <stdio.h>

int main(void);

int
main(void)
{
	int i = 3;
	int* p = (int*)NULL;
	p = &i;
	printf("*p = %d\n", *p);
}
