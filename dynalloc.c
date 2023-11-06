#include <stdio.h>
#include <stdlib.h>

int main(void);

int main(void)
{
	int i = 3, *p;
	printf("valeur de p avant initialisation = %p\n", p);
	p = (int*)malloc(sizeof(int));
	printf("valeur de p après initialisation = %p\n", p);
	*p = i;
	printf("valeur de *p = %d\n", *p);
}
