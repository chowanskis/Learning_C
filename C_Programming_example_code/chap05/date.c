/* Wypisywanie daty w zapisie urzêdowym */

#include <stdio.h>

int main(void)
{
  int month, day, year;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);

  printf("Zapis urzêdowy: %d", day);
  printf(" ");

  switch (month) {
    case 1:  printf("stycznia");     break;
    case 2:  printf("lutego");       break;
    case 3:  printf("marca");        break;
    case 4:  printf("kwietnia");     break;
    case 5:  printf("maja");         break;
    case 6:  printf("czerwca");      break;
    case 7:  printf("lipca");        break;
    case 8:  printf("sierpnia");     break;
    case 9:  printf("wrzeœnia");     break;
    case 10: printf("paŸdziernika"); break;
    case 11: printf("listopada");    break;
    case 12: printf("grudnia");      break;
  }

  printf(", 20%.2d r.\n", year);

  return 0;
}
