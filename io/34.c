// Escribir un programa en C para realizar conversiones de temperatura de Fahrenheit a Celsius y viceversa. El programa debe aceptar como entrada un número y una letra: “F” o “C” y convertir la temperatura ingresada a Celsius si el usuario ingresó “F” o Fahrenheit si ingresó “C”
#include <stdio.h>
#include <stdlib.h>


int main(void) {

int n;
  char letra;
puts("Ingrese una letra: \n");
  scanf("%c", &letra);

  if(letra == 'F') {
    puts("ingrese un numero y lo pasare a Celcius\n");
    scanf("%d", &n);
   int resultado = (n - 32) * 5/9;
    printf("En Celcius es: %d\n", resultado);
  }

  else if(letra == 'C'){
    puts("Ingrese un numero y lo pasare a Fahrenheit: \n");
    scanf("%d", &n);
    int resultado = (n * 9/5) + 32;
    printf("En Fahrenheit es: %d\n", resultado);
  }

  else if("letra != 'F' || 'C'") {
    puts("Incorrecto. Ingrese 'F' o 'C'\n");
  }
return 0;
  }