#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

  int n = atoi(argv[1]);
char* dinos[26] = {"Achelousaurus", "Brachiosaurus", "Compsognathus", "Diplodocus", "Eoraptor", "Gallimimus", "Iguanodon", "Jurassic", "Liopleurodon", "Mamenchisaurus", "Nodosaurus", "Oviraptor", "Pachycephalosaurus", "Raptor", "Stegosaurus", "TyrannosaurusRex", "Velociraptor", "Yangchuanosaurus", "Zupaysaurus"};

  char* abecedario[26];

  for(int i = 0; i < 26; i++) {
    abecedario[i] = "a" + 1;
  }

  for(int i = 0; i < 26; i++) {
    printf("%s => %s \n", abecedario[i], dinos[i]);
  }

}