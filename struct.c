#include <stdio.h>
#include <math.h>

int main(void);

struct complexe
{
	double reelle;
	double imaginaire;
};

int
main(void)
{
	struct complexe z = {3, 4};
	double norme;

	norme = sqrt(z.reelle * z.reelle + z.imaginaire * z.imaginaire);
	printf("norme de (%f + i %f) = %f \n", z.reelle, z.imaginaire, norme);
}
