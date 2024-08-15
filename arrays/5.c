#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int array[100];
  int i;
  int max = 0;
  int min = 100;
  srand(time(NULL));
  for (i = 0; i < 100; i++) {
    array[i] = rand() % 101;
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
    printf("%d", array[i]);
  }
  printf("El máximo es: %d\n", max);
  printf("El mínimo es: %d\n", min);
  return 0;
}