#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {

  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);


  int numeros[n];
  

  for(int i = 0; i < n; i++) {
    int random = rand() % m;
    numeros[i] = random;
    printf("%d\n", numeros[i]);
  }
  
  
  

   
}