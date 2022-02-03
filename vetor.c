#include <stdio.h>

int main(void) {

  //declarando e inicializando o vetor notas

  float notas[5] = {7, 8, 9.5, 9.9, 5.2};

  printf("Exibindo os valores do vetor \n\n");

  for(int i = 0; i < 5; i++) {
    printf("notas[%d] = %.1f \n", i, notas[i]);
  }

  return 0;

}