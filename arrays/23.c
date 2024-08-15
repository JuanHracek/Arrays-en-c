// ej. 23
// Escribir un programa que reciba un argumento entero e imprima el mes del año correspondiente o un error si el
//argumento es menor a 1 o mayor a 12


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

  int mes = atoi(argv[1]);


  char* meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

  if(mes < 1 || mes > 12) {
    printf("Error");
  }

      else {
        printf("El nunero de mes es: %s\n", meses[mes - 1]);
      }


  return 0;
}




  
