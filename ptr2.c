#include <stdio.h>

int main() 
{
	int i = 3, j = 6;
	int *p1, *p2;
	p1 = &i;
	p2 = &j;
    printf("avant p1 = p2\n");
    printf(" i = %d   /  adresse de  i = %p\n", i, &i);
    printf(" j = %d   /  adresse de  j = %p\n", j, &j);
    printf("p1 = %p   /  adresse de p1 = %p\n", p1, &p1);
    printf("p2 = %p   /  adresse de p1 = %p\n", p2, &p2);
	p1 = p2;
    printf("après p1 = p2\n");
    printf(" i = %d   /  adresse de  i = %p\n", i, &i);
    printf(" j = %d   /  adresse de  j = %p\n", j, &j);
    printf("p1 = %p   /  adresse de p1 = %p\n", p1, &p1);
    printf("p2 = %p   /  adresse de p1 = %p\n", p2, &p2);
}
