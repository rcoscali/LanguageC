#include <stdio.h>

extern void fonction();

void fonction() 
{
	static int n = 0; 
	printf("appel numero %d\n", ++n); 
	return;
}

int main()
{ 
	int i;
	for (i = 0; i < 5; fonction(), i++);
} 
