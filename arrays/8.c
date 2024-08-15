#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
 int a = 0, b = 1, c;
  
  int n = atoi(argv[1]);

  int numeros[n];

  for(int i = 0; 1 < n; i++){
    numeros[i] = a;
    printf("%d\n", numeros[i]);
    c = a + b;
    a = b;
    b = c;
  }


  return 0;

  

  
}