/* Zarz¹dzanie kontem */

#include <stdio.h>

int main(void)
{
  int cmd;
  float balance = 0.0f, credit, debit;

  printf("*** ACME saldomagik ***\n");
  printf("Polecenie: 0=zeruj, 1=dopisz, 2=ujmij, ");
  printf("3=saldo, 4=koniec\n\n");

  for (;;) {
    printf("Podaj polecenie: ");
    scanf("%d", &cmd);
    switch (cmd) {
      case 0:
        balance = 0.0f;
      break;
      case 1:
        printf("Podaj kwotê uznania: ");
        scanf("%f", &credit);
        balance += credit;
        break;
      case 2:
        printf("Podaj kwotê obci¹¿enia: ");
        scanf("%f", &debit);
        balance -= debit;
        break;
      case 3:
        printf("Bie¿¹ce saldo: %.2f z³\n", balance);
        break;
      case 4:
        return 0;
      default:
        printf("Polecenia: 0=zeruj, 1=dopisz, 2=ujmij, ");
        printf("3=saldo, 4=koniec\n\n");
      break;
    }
  }
}
