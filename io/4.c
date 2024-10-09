#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int suma = 0;
  while(scanf("%d\n", &n) != EOF) {
    suma += n;
  }
  printf("La suma total es: %d\n", suma);
  return 0;
}