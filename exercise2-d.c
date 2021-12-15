#include <stdio.h>

int main () {
  //d)
  //A <- 10
  //B <- A +1
  //A <- B +1
  //A <- A +1
  //Escrever A
  //A <- B +1
  //Escrever A, B

  int a = 10;
  int b = a +1;
  a = b +1;
  a = a +1;
  printf ("valor de a %d\n", a);

  a = b +1;
  printf("valor de a %d, valor de b %d\n", a, b); 

  //Resultado final:
  //valor de a 13
  //valor de a 12, valor de b 11

}