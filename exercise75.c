#include <stdio.h>

int main() {
  // Escreva um algoritmo que imprima as seguintes seqüências de números: (1, 1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6 7 8 9 10) (3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, até que o primeiro número (antes da vírgula), também chegue a 10.
  
  int num = 0;
  int sequencia = 0;


  for(sequencia = 0; sequencia < 1; sequencia++) {
    for(num = 1; num <= 10; num++) {
      printf("(%d, 1 2 3 4 5 6 7 8 9 10) \n", num);      
    }
  }

  //Resultado
  //Programa funcionou corretamente imprimindo a seguencia de números solicitada no exercício.
}