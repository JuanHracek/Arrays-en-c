#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char palabra[100];
  int letras = 0;

  printf("Ingrese una palabra:\n");
    scanf("%s", palabra);

  int longitud = strlen(palabra);
  for(int i = 0; i < longitud; i++) {
    letras++;
  }
  printf("Numero de caracteres: %d\n", letras);

  return 0;
  
  

}