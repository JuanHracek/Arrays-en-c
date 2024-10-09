// Escribir un programa que elija al azar un número entre uno y mil. Pedir al usuario que ingrese un número intentando adivinar. Indicar si el número correcto es menor o mayor al número ingresado. Darle al usuario un número limitado de preguntas, cinco por ejemplo. ¿Cuántas preguntas necesita el usuario para poder adivinar siempre el número?
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int n;
  int conteo = 0;
  int intentos;
  srand(time(NULL));
  int r;
  r = rand() % 1000 + 1;
  printf("Ingrese la cantudad de intentos que quiera: ");
  scanf("%d", &intentos);
  printf("%d", r);

  for(int i = 0; i < intentos; i++) {

  printf("Ingrese un numero: \n");
  scanf("%d", &n);
  if(n > r) {
    printf("el numero es menor\n");
  }
  else if(n < r) {
    printf("es mayor\n");
  }
  else if(n == r) {
    printf("Acertaste\n");
    printf("Numero de intentos: %d", conteo);
    break;
    
  }
    conteo++;

    }
}