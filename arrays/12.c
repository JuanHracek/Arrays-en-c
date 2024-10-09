#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {


  srand(time(NULL));
  int array[100];

  for(int i = 0; i <= 100; i++) {
    array[i] = rand() % 9;
    printf("Numero random es: %d\n", array[i]);
  }

  return 0;
}


