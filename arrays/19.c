#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

  int desplazamiento = atoi(argv[2]);
  char* codigo_comun = (argv[1]);

  for (int i = 0; i < strlen(codigo_comun); i++){
      int caracter_desplazado = codigo_comun[i] +           desplazamiento;

      if (caracter_desplazado > 122){
        caracter_desplazado -= 58;
      }
      if (codigo_comun[i] < 65 || codigo_comun[i] > 122){
        continue;
      }

      codigo_comun[i] = caracter_desplazado;
    }
    printf("%s\n", codigo_comun);
    return 0;
  }