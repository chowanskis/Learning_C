/* Wypisuje tabelê kwadratów kolejnych liczb w pêtli while */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("Program wypisuje tabelê kwadratów.\n");
  printf("Podaj liczbê wierszy tabeli: ");
  scanf("%d", &n);

  i = 1;
  while (i <= n) {
    printf("%10d%10d\n", i, i * i);
    i++;
  }

  return 0;
}
