#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int i = 0;
  while(argv[1][i] != 0) i++;
  printf("es: %i\n", i);
  return 0;
}

