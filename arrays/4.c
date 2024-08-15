//Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el promedio de los valores en el array.

// agragado el promedio

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char* argv[]) {
  
  srand(time(NULL));
  int numeros[100];

  int suma = 0;
  int min = 100;
  int max = 0;

 
  

  for(int i = 0; i < 100; i++) {
    int random = rand() % 100;
    if (numeros[100] > max) {
      max = numeros[100];
    }
    if (numeros[100] < min) {
      min = numeros[100];
    }
    numeros[100] = random;
    suma += numeros[100];
    printf("%d\n", numeros[100]);
  }
  int promedio = suma / 100;
  printf("El máximo es: %d\n", max);
  printf("El mínimo es: %d\n", min);
  printf("el promedio es: %d\n", promedio);

return 0;
  
  
}

