/* Wypisuje tabel� kwadrat�w kolejnych liczb w p�tli while */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("Program wypisuje tabel� kwadrat�w.\n");
  printf("Podaj liczb� wierszy tabeli: ");
  scanf("%d", &n);

  i = 1;
  while (i <= n) {
    printf("%10d%10d\n", i, i * i);
    i++;
  }

  return 0;
}
