#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int num;
    int suma = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        suma += num;
    }
    printf("la suma es %d", suma);
}