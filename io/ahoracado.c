#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
  srand(time(NULL));
  FILE *fp = fopen("nombres.txt", "r");
  int random = rand() % 10;
  char *palabra_completa;
  char palabra_completandose[20];
  char array_palabras[10][10];
  char letra;
  int vidas = 5;
  
  for(int i = 0; i < 50; i++){
    fscanf(fp, "%s", array_palabras[i]); 
  }
  palabra_completa = array_palabras[random];
  int tamano = strlen(palabra_completa);
  for(int i = 0; i < tamano; i++){
    palabra_completandose[i] = '_';
  }

 printf("Estas jugando al ahorcado ingrese una letra\n");
  printf("%s\n", palabra_completa);


  while(1){
    int encontrada = 0;
    printf("%s \n", palabra_completandose);
    scanf(" %c", &letra);
    system("clear");

  

  for(int i = 0; i < tamano; i++){
    if(palabra_completa[i] == letra){
      palabra_completandose[i] = letra;
      encontrada = 1;
    }
  }

  if(encontrada == 1){
    printf("Muy bien la letra %c esta en la palabra, te quedan %d vidas\n", letra, vidas);
  }

    else if(encontrada == 0){
      vidas--;
      printf("Muy mal la letra %c no esta en la palabra, te quedan %d vidas\n", letra, vidas);
      
    }

    while(strcmp(palabra_completa, palabra_completandose) == 0){
      printf("¡GENIAL GANASTE la palabra era %s!!\n", palabra_completa);
      return 0;
    }
    if(vidas == 0){
      printf("PERDISTE HAJSDHAJSHDJAS. La palabra era %s\n", palabra_completa);
      return 0;
    }
  
    }

  return 0;

    }