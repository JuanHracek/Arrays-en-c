#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char* argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int p = atoi(argv[2]);
  int tablero[n + 2][n +  2];
  for(int i = 0; i < n + 2; i++) {
    tablero[0][i] = 9;
    tablero[i][0] = 9;

    tablero[n+1][i] = 9;
    tablero[i][n+1] = 9;
  }

  for(int i = 1; i < n + 1; i++) {
    for(int j = 1; j < n + 1; j++) {
      if (rand() % 101 < p) {
        tablero[i][j] = -1;
      }
      else {
        tablero[i][j] = 0;
      }
    }
  }
  for(int i = 1; i < n + 1; i++) {
    for(int j = 1; j < n + 1; j++) {
      if(tablero[i][j] != -1) {
        int count = 0;
        count += tablero[i - 1][j] < 0 ? 1 : 0;
        count += tablero[i - 1][j + 1] < 0 ? 1 : 0;

        count += tablero[i][j + 1] < 0 ? 1 : 0;
        count += tablero[i + 1][j + 1] < 0 ? 1 : 0;
        count += tablero[i + 1][j] < 0 ? 1 : 0;
        count += tablero[i][j - 1] < 0 ? 1 : 0;
        count += tablero[i - 1][j - 1] < 0 ? 1 : 0;
        tablero[i][j] = count;
      }
    }
  }
  for(int i = 0; i < n + 1; i++) {
    for(int j = 0; j < n + 1; j++) {
      if(tablero[i][j] < 0) {
        printf("* ");
      }
      else {
        printf("%d", tablero[i][j]);
        
      }
    printf("\n");
    
    }
  }
  
  return 0;
}