#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Convertir_a_mayusculas(char *palabra) {
  int i = 0;
  while(palabra[i] != '\0') {
    palabra[i] = toupper(palabra[i]); //uso el toupper para convertir la palabra;
    i++;
  }
}



int main(int argc, char* argv[]) {
  char *palabra = argv[1];
  Convertir_a_mayusculas(palabra);
  printf("%s", palabra);

  return 0;


  //made by JuanHracek

}