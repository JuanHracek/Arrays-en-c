#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *c;
  FILE *fp = fopen("hola.txt", "r");
  while((c = getc(fp)) != EOF){
    putchar(c);
    
  }

  return 0;
}