//Mejorar el programa anterior validando lo que ingresa el usuario. En primer lugar si el usuario ingresa un número 1000 < 𝑛 < 1 pedir que ingrese de nuevo un número válido. En segundo lugar chequear que el usuario ingrese un número válido, es decir caracteres que sean dígitos y no algo como “abc”.
  
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

 while(1) {

  printf("Ingrese un numero: \n");
  scanf("%d", &n);
  if(n > 1000 || n < 0) {
    printf("Ingrese un numero valido");
  }
  else if(n > r) {
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