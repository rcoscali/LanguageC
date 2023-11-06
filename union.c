#include <stdio.h>

int main(void);

struct coordonnees
{
	unsigned int x;
	unsigned int y;
};

union point
{
	struct coordonnees coord;
	unsigned long mot;
};

int
main(void)
{
	union point p1, p2, p3;
	p1.coord.x = 0xf;
	p1.coord.y = 0x1;
	p2.coord.x = 0x8;
	p2.coord.y = 0x8;
	p3.mot = p1.mot ^ p2.mot;
	printf("p3.coord.x = %x\tp3.coord.y = %x\n", p3.coord.x, p3.coord.y);
}

