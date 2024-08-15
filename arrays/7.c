#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

  int numeros[40];

  for(int i = 40 - 1; i > 0 - 1; i--) {
    numeros[i] = i + 1;
    if(i % 2 == 0) {
      
    }
    else{
      printf("Los numeros son: %d\n", numeros[i]);
    }
  }

  
  
}