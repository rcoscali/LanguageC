#include <stdio.h>

int main(void);

int
main(void)
{
	enum booleen {faux = 12, vrai = 23};
	enum booleen b;
	b = vrai;
	printf("b = %d\n", b);
}
