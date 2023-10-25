#include <stdio.h>

int n;
void fonction();

void fonction()
{ 
	printf("appel numero %d\n", ++n); 
	return;
}

int main()
{ 
	int i;
	for (i = 0; i < 5; fonction(), i++);
}
