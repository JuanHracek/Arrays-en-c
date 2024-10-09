#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
  srand(time(NULL));
  FILE *fp = fopen("nombres.txt", "r");
  int random = rand() % 10;
  char *palabra_completa;
  char palabra_completandose[20];
  char array_palabras[10][16];
  char letra;
   int vidas = 5;
  
//-------------------------------------------------
  for(int i = 0; i < 10; i++){
    fscanf(fp, "%s", array_palabras[i]);
  }
  //----------------------------------------
//-------------------------------------------------
  palabra_completa = array_palabras[random];

  int tamanio = strlen(palabra_completa);


  for(int i = 0; i < tamanio; i++){
    palabra_completandose[i] = '_';  
  }
//-----------------------------------------------------
  puts("ahoracado de mierda");

  while(1){
    printf("%s \n", palabra_completa);
    printf("%s \n", palabra_completandose);
    scanf(" %c", &letra);
    int encontrada = 0;
    system("clear");
    
 

//--------------------------------------
    for(int i = 0; i < tamanio; i++){
      if(palabra_completa[i] == letra){
        palabra_completandose[i] = letra;
        encontrada = 1;
      }

    }
    //-------------------------------------------

      if(encontrada == 1){
        puts("adivinaste\n");
      }

      else if(encontrada == 0){
        vidas--;
      printf("pete de mierda, te quedan %d\n", vidas);
        
      }

      while(strcmp(palabra_completa, palabra_completandose) == 0){
        puts("Ganaste el je\n");

        return 0;
      }

      if(vidas == 0){

        printf("perdiste pete, la palabra era %s\n", palabra_completa);
        return 0;
      }

  
      
    

    
  }

  
  return 0;
  

  

}