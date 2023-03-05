/* Wypisuje tabel� kwadrat�w kolejnych liczb w p�tli for */

#include <stdio.h>

int main(void)
{
  int i, n, odd, square;

  printf("Program wypisuje tabel� kwadrat�w.\n");
  printf("Podaj liczb� wierszy tabeli: ");
  scanf("%d", &n);

  i = 1;
  odd = 3;
  for (square = 1; i <= n; odd += 2) {
    printf("%10d%10d\n", i, square);
    ++i;
    square += odd;
  }

  return 0;
}
