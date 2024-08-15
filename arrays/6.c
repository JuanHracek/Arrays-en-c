
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int numeros[6] = {1, 2, 3, 4, 5, 6};

  for(int i = 6 - 1; i > 0 - 1; i--) {
    printf("Los numeros alrevez son: %d\n", numeros[i]);
  }
  return 0;
}
