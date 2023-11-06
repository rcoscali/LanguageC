#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NB_ELEMENTS 10

int main(void);
void imprime_tab1(int*, int);
void imprime_tab2(char**, int);
int comp_int(const void*, const void*);
int comp_str(const void*, const void*);

void
imprime_tab1(int* tab, int nb)
{
  int i;
  printf("\n");
  for (i = 0; i < nb; i++)
    printf("%d \t",tab[i]);
  printf("\n");
  return;
}

void
imprime_tab2(char** tab, int nb)
{
  int i;
  printf("\n");
  for (i = 0; i < nb; i++)
    printf("%s \t",tab[i]);
  printf("\n");
  return;
}

int
comp_int(const void* a, const void* b)
{
  return(*(int*)a - *(int*)b);
}

int
comp_str(const void* s1, const void* s2)
{
  return(strcmp(*(const char**)s1,*(const char**)s2));
}

int
main(void)
{
  int *tab1;
  char *tab2[NB_ELEMENTS] =
    {
      "toto", "Auto", "auto", "titi", "a", "b", "z", "i" , "o", "d"
    };
  int i;

  tab1 = (int*)malloc(NB_ELEMENTS * sizeof(int));
  for (i = 0 ; i < NB_ELEMENTS; i++)
    tab1[i] = random() % 1000;
  imprime_tab1(tab1, NB_ELEMENTS);
  qsort(tab1, NB_ELEMENTS, sizeof(int), comp_int);
  imprime_tab1(tab1, NB_ELEMENTS);
  /************************/
  imprime_tab2(tab2, NB_ELEMENTS);
  qsort(tab2, NB_ELEMENTS, sizeof(tab2[0]), comp_str);
  imprime_tab2(tab2, NB_ELEMENTS);
  return(EXIT_SUCCESS);
}
