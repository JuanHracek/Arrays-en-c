#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  char* jugador[15] = {"L.Messi", "L.Messi", "E.Fernandez", "A.Mac Allister", "J.Alvarez", "L.Messi", "J.Alvarez", "N.Molina", "L.Messi", "L.Messi", "J.Alvarez", "J.Alvarez", "L.Messi", "A.Di Maria", "L.Messi"};

  int time[15] = {10, 64, 87, 46, 67, 35, 57, 35, 73, 34, 39, 69, 23, 36, 108};

  for(int i = 0; i < 15; i++) {
    printf("Gol de %s a los %d minutos \n", jugador[i], time[i]);
  }
  
  return 0;
  
}