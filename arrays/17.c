#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Convertir_a_minusculas(char *palabra) {
  int i = 0;
  while(palabra[i] != '\0') {
    palabra[i] = tolower(palabra[i]);
    i++;
  }
}



int main(int argc, char* argv[]) {
  char *palabra = argv[1];
  Convertir_a_minusculas(palabra);
  printf("%s", palabra);
  
  return 0;
  
}