/* Wypisuje tabelê kwadratów kolejnych liczb w pêtli for */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("Program wypisuje tabelê kwadratów.\n");
  printf("Podaj liczbê wierszy tabeli: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%10d%10d\n", i, i * i);

  return 0;
}
