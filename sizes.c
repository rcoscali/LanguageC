#include <stdio.h>

int main(void);

int
main(void)
{
  char v1;
  unsigned char v2;
  short int v3;
  unsigned short int v4;
  int v5;
  unsigned int v6;
  long int v7;
  unsigned long int v8;
  long long int v9;
  unsigned long long int v10;
  float v11;
  double v13;
  long double v14;

  printf("sizeof(char) =                   %2ld (%2ld bits) [-pow(%2ld), pow(%2ld)[\n", (long)sizeof(v1),  (long)sizeof(v1) * 8,  (long)sizeof(v1)*8 -1, (long)sizeof(v1)*8 -1);
  printf("sizeof(unsigned char) =          %2ld (%2ld bits) [       0, pow(%2ld)[\n", (long)sizeof(v2),  (long)sizeof(v2) * 8,  (long)sizeof(v2)*8);
  printf("sizeof(short int) =              %2ld (%2ld bits) [-pow(%2ld), pow(%2ld)[\n", (long)sizeof(v3),  (long)sizeof(v3) * 8,  (long)sizeof(v3)*8 -1, (long)sizeof(v3)*8 -1);
  printf("sizeof(unsigned short int) =     %2ld (%2ld bits) [       0, pow(%2ld)[\n", (long)sizeof(v4),  (long)sizeof(v4) * 8,  (long)sizeof(v4)*8);
  printf("sizeof(int) =                    %2ld (%2ld bits) [-pow(%2ld), pow(%2ld)[\n", (long)sizeof(v5),  (long)sizeof(v5) * 8,  (long)sizeof(v5)*8 -1, (long)sizeof(v5)*8 -1);
  printf("sizeof(unsigned int) =           %2ld (%2ld bits) [       0, pow(%2ld)[\n", (long)sizeof(v6),  (long)sizeof(v6) * 8,  (long)sizeof(v6)*8);
  printf("sizeof(long int) =               %2ld (%2ld bits) [-pow(%2ld), pow(%2ld)[\n", (long)sizeof(v7),  (long)sizeof(v7) * 8,  (long)sizeof(v7)*8 -1, (long)sizeof(v7)*8 -1);
  printf("sizeof(unsigned long int) =      %2ld (%2ld bits) [       0, pow(%2ld)[\n", (long)sizeof(v8),  (long)sizeof(v8) * 8,  (long)sizeof(v8)*8);
  printf("sizeof(long long int) =          %2ld (%2ld bits) [-pow(%2ld), pow(%2ld)[\n", (long)sizeof(v9),  (long)sizeof(v9) * 8,  (long)sizeof(v9)*8 -1, (long)sizeof(v8)*8 -1);
  printf("sizeof(unsigned long long int) = %2ld (%2ld bits) [       0, pow(%2ld)[\n", (long)sizeof(v10), (long)sizeof(v10) * 8, (long)sizeof(v10)*8);
  printf("sizeof(float) =                  %2ld (%2ld bits)\n", (long)sizeof(v11), (long)sizeof(v11) * 8);
  printf("sizeof(double) =                 %2ld (%2ld bits)\n", (long)sizeof(v13), (long)sizeof(v13) * 8);
  printf("sizeof(long double) =            %2ld (%2ld bits)\n", (long)sizeof(v14), (long)sizeof(v14) * 8);
}
