/* Obliczanie gabarytu przesy�ki o wymiarach wprowadzanych przez u�ytkownika */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  printf("Podaj wysoko�� przesy�ki: ");
  scanf("%d", &height);
  printf("Podaj d�ugo�� przesy�ki: ");
  scanf("%d", &length);
  printf("Podaj szeroko�� przesy�ki: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Obj�to�� (cale sze�cienne): %d\n", volume);
  printf("Gabaryt (funty rozliczeniowe): %d\n", weight);

  return 0;
}
