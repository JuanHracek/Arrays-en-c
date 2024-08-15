/* Escribir un programa que reciba un string como argumento y decida si la palabra es un palíndromo o no. */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int palindromo(char *palabra) {
  int final = 0;
  while (palabra[final] != 0) {
    final++;
  }
    final--;
  int i = 0;
  while (i < final) {
    if ((palabra[i]) != (palabra[final])) {
      return 0;
    
    }
    i++;
    final--;
  }
  return 1;
}

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  printf("%i\n", palindromo(palabra));
  return 0;
}