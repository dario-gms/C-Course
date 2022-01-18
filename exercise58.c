#include <stdio.h>

int main() {
  //Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem decrescente utilizando a estrutura ENQUANTO e um CONTADOR.

  int contador = 11;
  
  printf("A ordem decrescente dos números é: \n");
  while (contador >1) {
    contador--;
    printf("%d\n", contador);
  }
  //Resultado
  //Programa funcionou corretamente imprimindo em ordem decrescente os números de 1 a 10, utilizando estrutura enquanto e um contador.
}