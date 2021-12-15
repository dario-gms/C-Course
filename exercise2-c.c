#include <stdio.h>

int main(){
  //c)
  //A <- 10
  //B <- 20
  //C <- A
  //B <- C
  //A <- B
  //Escrever A, B, C

  int a = 10;
  int b = 20;
  int c = a;
  b = c;
  a = b;
  printf("valor de a %d, valor de b %d, valor de c %d\n", a, b, c);
  //Resultado final:
  //valor de a 10, valor de b 10, valor de c 10
}