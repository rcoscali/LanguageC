#include <stdio.h>
#define N 8
char tab[N] = "exemple"; 
int main()
{ 
	int i;
	for (i = 0; i < N; i++) 
		printf("tab[%d] = %c\n", i, tab[i]);
}
