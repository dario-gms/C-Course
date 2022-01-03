#include <stdio.h>

int main () {
  // Analise os algoritmos abaixo e diga o que será impresso na tela ao serem executados:

  // a) A <- 10
  //    B <- 20
  //    Escrever B
  //    B <- 5
  //    Escrever A, B

  int a = 10;
  int b = 20;

  printf("valor de b é %d\n\n", b);
  b = 5;
  printf("valor de a %d e valor de b %d\n", a, b);

  // Na primeira impressão de b o valor será 5. Na impressão de A e B os valores serão 10 e 5.
}
