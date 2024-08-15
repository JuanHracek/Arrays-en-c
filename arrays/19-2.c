#include <stdio.h>
#include <stdlib.h>

void cifrar(char* palabra, int n) {
  int i = 0;
  while(palabra[i] != '\0') {
    palabra[i] = ((palabra[i] - 'a' + n) % 26) + 'a';
    i++;
  }
}

int main(int argc, char* argv[]) {
  int n = atoi(argv[1]);
  char* palabra = argv[2];
  cifrar(palabra, n);
  printf("%s", palabra);
  return 0;
}
