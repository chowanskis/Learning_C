/* Obliczanie gabarytu przesy³ki o wymiarach 12 x 10 x 8 cali */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Wymiary(cale): %dx%dx%d\n", length, width, height);
  printf("Objêtoœæ (cale szeœcienne): %d\n", volume);
  printf("Gabaryt (funty rozliczeniowe): %d\n", weight);

  return 0;
}
