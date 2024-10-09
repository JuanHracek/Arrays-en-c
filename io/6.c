// 6. Escribir un programa en C que reciba dos argumentos enteros 𝑎 y 𝑏. El programa lee por entrada estándar un número arbitrario de enteros e imprime los que están entre 𝑎 y 𝑏, es decir en el intervalo [𝑎, 𝑏]

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b;

   printf("Ingrese 2 numeros: \n");
      scanf("%d", &a);
      scanf("%d", &b);

  while(1) {
    if(a < b) {
      a++;
      printf("%d\n", a);
      
    }
    else{
      break;
    }
  }
    
  
  return 0;
  
}
