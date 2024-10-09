#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(void){
  int random = rand() % 10;
  FILE *fp = fopen("nombres.txt", "r");
  char array_palabras[10][10];
  char *palabra_completa;
  char palabra_completandose[20];
  char letra;

  for(int i = 0; i < 50; i++){
    fscanf(fp,"%s", array_palabras[i]);
  }

  palabra_completa = array_palabras[random];
  int tamano = strlen(palabra_completa);
  for(int i = 0; i < tamano; i++){
    palabra_completandose[i] = '_'; 
  }

  printf("Hola! estas jugando al ahorcado. Ingrese una letra\n");
  printf("%s\n", palabra_completa);

  while(1){
    int encontradas = 0;
    printf(" %s\n", palabra_completandose);
    scanf(" %c", &letra);
    system("clear");
   

    for(int i = 0; i < tamano; i++){
      if(palabra_completa[i] == letra){
        palabra_completandose[i] = letra;
        encontradas = 1;
      }
    }

    if(encontradas == 1){
      printf("Acertaste\n");
    }
    else if(encontradas == 0){
      printf("No es\n");
    }

    while(strcmp(palabra_completa, palabra_completandose) == 0){
      puts("Esa es la palabra!!!");
      return 0;
    }

    if()

    
  }
  return 0;
  
}
