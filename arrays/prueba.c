#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int numeros[100];
  for(int i = 0; i < 100; i++) {
    numeros[i] = rand() % 9;
    printf("%d\n", numeros[i]);
  }
  return 0;
}