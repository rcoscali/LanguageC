#include <stdio.h>

int main(void);

int
main(void)
{
	enum booleen {faux, vrai};
	enum booleen b;
	b = vrai;
	printf("b = %d\n", b);
}
