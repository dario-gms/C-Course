#include <stdio.h>

int main (){
  //b)
  //A <- 30
  //B <- 20
  //C <- A + B
  //Escrever C
  //B <- 10
  //Escrever B, C
  //C <- A + B
  //Escrever A, B, C


  int a = 30;
  int b = 20;
  int c = a + b;
  printf("valor de c é %d\n", c);

  b = 10;
  printf("valor de b %d e c %d\n", b, c);

  c = a + b;
  printf("valor de a %d, valor de b %d valor de c %d\n", a, b, c);

  //Resultado final:
  // Valor de c é 50
  // Valor de b 10 e c 50
  // Valor de a 30, valor de b 10 valor de c 40
}