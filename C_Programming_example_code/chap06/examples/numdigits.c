/* Obliczanie liczby cyfr w liczbie ca³kowitej */

#include <stdio.h>

int main(void)
{
  int digits = 0, n;

  printf("Podaj nieujemn¹ liczbê ca³kowit¹: ");
  scanf("%d", &n);

  do {
    n /= 10;
    digits++;
  } while (n > 0);

  printf("Liczba jest %d-cyfrowa.\n", digits);

  return 0;
}
