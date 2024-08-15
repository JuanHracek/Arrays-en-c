#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

  int n = atoi(argv[1]);

  int numeros[n];

  for(int i = 0; i < n; i++){
    numeros[i] = i + 1;
    printf("%d\n", numeros[i]);
  }
}