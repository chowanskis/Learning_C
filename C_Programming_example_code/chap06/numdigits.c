/* Obliczanie liczby cyfr w liczbie ca�kowitej */

#include <stdio.h>

int main(void)
{
  int digits = 0, n;

  printf("Podaj nieujemn� liczb� ca�kowit�: ");
  scanf("%d", &n);

  do {
    n /= 10;
    digits++;
  } while (n > 0);

  printf("Liczba jest %d-cyfrowa.\n", digits);

  return 0;
}
