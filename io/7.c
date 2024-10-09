#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  srand(time(NULL));
  int n, a, b;
  printf("Ingrese n, a y b\n");
  scanf("%d\n", &n);
  scanf("%d\n", &a);
  scanf("%d\n", &b);

  for(int i = 0; i < n; i++) {
    int r = a + rand() % (b - a + 1);
    printf("Numero random %d\n", r);  
  }
  
  
}