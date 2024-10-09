// 14. Escribir un programa en C que funcione como el comando cp de Unix.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c;
  FILE *fp = fopen("hola.txt", "r");
  FILE *fp2 = fopen("hola2.txt", "w");

  while((c = getc(fp)) != EOF){
    putc(c, fp2);
  }
}