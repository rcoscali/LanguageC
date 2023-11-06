#include <stdio.h>

int main(void);

int
main(void)
{
	char c;
	do
	{
		c = getchar();
		if (c != EOF)
			putchar(c);
	}
	while (c != EOF);
}
