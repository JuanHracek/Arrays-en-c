#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, num;
  int suma = 0;
  scanf("%d", &n);
  printf("tenes %d intentos\n", n);

    for(int i = 0; i < n; i++) {
    scanf("%d", &num);
      suma += num;
    if (num == 0) {
      printf("se encontro un 0\n");
      printf("la suma total es %d\n", suma);
      break;
    }
      
    
    }
  
}