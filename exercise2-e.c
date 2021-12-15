#include <stdio.h>

int main() {
  //e)
  //A <- 10
  //B <- 5
  //C <- A + B
  //B <- 20
  //A <- 10
  //Escrever A, B, C

  int a = 10;
  int b = 5;
  int c = a + b;
  b = 20;
  a = 10;
  printf("valor de a %d, valor de b %d, valor de c %d\n", a, b, c);

  //Resultado final
  //valor de a 10, valor de b 20, valor de c 15.
}