/* Sumuje wyrazy szeregu liczb ca�kowitych (z u�yciem zmiennych long) */

#include <stdio.h>

int main(void)
{
  long n, sum = 0;

  printf("Program podlicza sum� szeregu liczb "
         "ca�kowitych.\n");
  printf("Podaj liczby (0 ko�czy szereg): ");
  scanf("%ld", &n);

  while (n != 0) {
    sum += n;
    scanf("%ld", &n);
  }
  printf("Suma wynosi: %ld\n", sum);

  return 0;
}
