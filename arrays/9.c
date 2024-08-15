#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int s = atoi(argv[2]);
    srand(s);
    int arraysito[10];
    int menor = INT_MAX;
    int mayor = INT_MIN;
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        int random = rand() % n;
        arraysito[i] = random;
        menor = random < menor ? random : menor;
        mayor = random > mayor ? random : mayor;
        
    }
    printf("%d↑ %d↓ ", mayor, menor);
    return 0;
}