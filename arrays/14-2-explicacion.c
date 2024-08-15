#include <stdbool.h>  // Incluye la biblioteca para el tipo de dato booleano
#include <stdio.h>    // Incluye la biblioteca estándar de entrada/salida
#include <stdlib.h>   // Incluye la biblioteca estándar de utilidades

// Función que determina si una palabra es un palíndromo
int palindromo(char *palabra) {
  int final = 0;  // Inicializa la variable final en 0 para contar la longitud de la palabra

  // Bucle para calcular la longitud de la palabra
  while (palabra[final] != 0) { // Mientras no se llegue al carácter nulo ('\0') que indica el fin de la cadena
    final++;  // Incrementa final para contar el número de caracteres
  }

  final--;  // Decrementa final para que apunte al último carácter válido de la palabra

  int i = 0;  // Inicializa el índice i en 0 para empezar a comparar desde el principio de la palabra

  // Bucle para comparar los caracteres desde el principio y el final de la palabra
  while (i < final) {  // Mientras i sea menor que final (es decir, mientras no se crucen)
    // Compara el carácter en la posición i con el carácter en la posición final
    if ((palabra[i]) != (palabra[final])) {
      return 0;  // Si los caracteres no coinciden, la palabra no es un palíndromo, retorna 0
    }
    i++;       // Incrementa i para moverse al siguiente carácter desde el principio
    final--;   // Decrementa final para moverse al carácter anterior desde el final
  }

  return 1;  // Si todos los caracteres coinciden, la palabra es un palíndromo, retorna 1
}

int main(int argc, char *argv[]) {
  // Verifica si se ha pasado un argumento (una palabra) al programa
  if (argc < 2) {  // argc es el número de argumentos, si es menor que 2, no se pasó ningún argumento
    printf("Uso: %s <palabra>\n", argv[0]);  // Imprime un mensaje de uso indicando cómo usar el programa
    return 1;  // Retorna 1 para indicar que hubo un error (no se pasó un argumento)
  }

  char *palabra = argv[1];  // Obtiene el primer argumento pasado al programa (la palabra que se va a verificar)

  printf("%i\n", palindromo(palabra));  // Llama a la función palindromo y imprime el resultado (1 o 0)

  return 0;  // Retorna 0 para indicar que el programa se ejecutó correctamente
}
