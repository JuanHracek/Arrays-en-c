#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  srand(time(NULL));
  char* Mano[3] = {"Cuatro de copas", "Ancho de espada", "Tres de basto"};

  
    int Random = rand() % 3;
    printf("La mano es: %s", Mano[Random]);
  
  return 0;
}

