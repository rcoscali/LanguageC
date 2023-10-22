#include <stdio.h>
#define N 8
char tab[N] = "exemple"; 
int main()
{ 
	printf("Nbre de char = %lu\n", sizeof(tab)/sizeof(char));
}
