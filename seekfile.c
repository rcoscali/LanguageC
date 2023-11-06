#include <stdio.h>
#include <stdlib.h>
#define NB 50
#define F_SORTIE "sortie"

int main(void);

int
main(void)
{
  FILE *f_in, *f_out;
  int *tab;
  int i;
  tab = (int*)malloc(NB * sizeof(int));
  for (i = 0 ; i < NB; i++)
    tab[i] = i;
  /* ecriture du tableau dans F_SORTIE */
  if ((f_out = fopen(F_SORTIE, "w")) == NULL)
    {
      fprintf(stderr,
              "Impossible d’ecrire dans le fichier %s\n",
              F_SORTIE);
      return(EXIT_FAILURE);
    }
  fwrite(tab, NB * sizeof(int), 1, f_out);
  fclose(f_out);
  /* lecture dans F_SORTIE */
  if ((f_in = fopen(F_SORTIE, "r")) == NULL)
    {
      fprintf(stderr,
              "Impossible de lire dans le fichier %s\n",
              F_SORTIE);
      return(EXIT_FAILURE);
    }

  /* on se positionne a la fin du fichier */
  fseek(f_in, 0, SEEK_END);
  printf("\n position %ld", ftell(f_in));

  /* deplacement de 10 int en arriere */
  fseek(f_in, -10 * sizeof(int), SEEK_END);
  printf("\n position %ld", ftell(f_in));
  fread(&i, sizeof(i), 1, f_in);
  printf("\t i = %d", i);

  /* retour au debut du fichier */
  rewind(f_in);
  printf("\n position %ld", ftell(f_in));
  fread(&i, sizeof(i), 1, f_in);
  printf("\t i = %d", i);

  /* deplacement de 5 int en avant */
  fseek(f_in, 5 * sizeof(int), SEEK_CUR);
  printf("\n position %ld", ftell(f_in));
  fread(&i, sizeof(i), 1, f_in);
  printf("\t i = %d\n", i);
  fclose(f_in);
  return(EXIT_SUCCESS);
}
