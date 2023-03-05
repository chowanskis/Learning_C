/* Sumowanie szeregu liczb */

#include <stdio.h>

int main(void)
{
  int n, sum = 0;

  printf("Program podlicza sumê szeregu liczb "
         "ca³kowitych.\n");
  printf("Podaj liczby (0 koñczy szereg): ");
  scanf("%d", &n);

  while (n != 0) {
    sum += n;
    scanf("%d", &n);
  }

  printf("Suma wynosi: %d\n", sum);
  return 0;
}
