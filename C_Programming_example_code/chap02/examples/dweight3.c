/* Obliczanie gabarytu przesyłki o wymiarach wprowadzanych przez użytkownika */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
  int height, length, width, volume, weight;

  printf("Podaj wysokość przesyłki: ");
  scanf("%d", &height);
  printf("Podaj długość przesyłki: ");
  scanf("%d", &length);
  printf("Podaj szerokość przesyłki: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / INCHES_PER_POUND;

  printf("Objętość (cale sześcienne): %d\n", volume);
  printf("Gabaryt (funty rozliczeniowe): %d\n", weight);

  return 0;
}
