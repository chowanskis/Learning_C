/* Wypisuje tabel� kwadrat�w kolejnych liczb w p�tli for */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("Program wypisuje tabel� kwadrat�w.\n");
  printf("Podaj liczb� wierszy tabeli: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%10d%10d\n", i, i * i);

  return 0;
}
