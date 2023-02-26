/* Obliczanie gabarytu przesy³ki o wymiarach wprowadzanych przez u¿ytkownika */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  printf("Podaj wysokoœæ przesy³ki: ");
  scanf("%d", &height);
  printf("Podaj d³ugoœæ przesy³ki: ");
  scanf("%d", &length);
  printf("Podaj szerokoœæ przesy³ki: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Objêtoœæ (cale szeœcienne): %d\n", volume);
  printf("Gabaryt (funty rozliczeniowe): %d\n", weight);

  return 0;
}
