// Escribir un programa en C para tomar notas. Usar un menú para elegir entre tomar notas, ver notas, borrar notas y salir. Almacenar las notas en un archivo de texto.
#include <stdio.h>
#include <stdlib.h>

void presskey(){
    puts("Presione enter para continuar");
    getchar();
}

void tomarNotas(){
    FILE *fp = fopen("notas.txt", "a");
    char nota[100];
    fgets(nota, 100, stdin);
    fprintf(fp, "%s", nota);
    fclose(fp);
    presskey();
}

void verNotas(){
  FILE *fp = fopen("notas.txt", "r");
  char line[100];
  while(fgets(line, 100, fp) != NULL)
      printf("%s", line);
      fclose(fp);
      presskey();

}


void borrarNotas(){
  FILE *fp = fopen("notas.txt","w");
  puts("Borrado Exitosamente");
  fclose(fp);
  presskey();
}
 

int main(void){


 char *texto;
 int opcion;

  while(1){

    puts("Bievenido al menu!\n");
    puts("1-Tomar notas");
    puts("2-Ver Notas");
    puts("3-Borrar Notas");
    puts("4-Salir");
    scanf("%d", &opcion);
    getchar();

    switch(opcion){

      case 1:
        tomarNotas();
      break;


      case 2:
        verNotas();

      break;

      case 3:
        borrarNotas();

      break;

      case 4:
        puts("Cerrando....");
      return 0;


      default:
      puts("cualquiera bro");
    }

  }
  

  return 0;
}