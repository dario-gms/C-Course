#include <stdio.h>

int main(){

  //Os pares de instruções abaixo produzem o mesmo resultado?
  //A <- (4/2)+(2/4) e A <- 4/2+2/4
  //B <- 4/(2+2)/4 e B <- 4/2+2/4
  //C <- (4+2)*2-4 e C <- 4+2*2-4

  int a = (4/2) + (2/4);
  int a1 = 4/2 + 2/4;
  if (a == a1){ 
    printf ("o valor de a é %d e o valor de a1 é %d ambos são iguais.\n\n", a, a1);
  } else {
    printf("a é igual a %d e a1 é igual a %d. Os valores não são iguais\n\n", a, a1);
  }

  int b = 4/(2+2)/4;
  int b1 = 4/2+2/4;
  if (b == b1) {
    printf("O valor de b é %d e o valor de b1 é %d ambos são iguais.\n\n", b, b1);
  } else {
    printf("b é igual a %d e b1 é igual a %d. Os valores não são iguais.\n\n", b, b1);
  }

  int c = (4+2)*2-4;
  int c1 = 4+2*2-4;
  if(c == c1) {
    printf("O valor de c é %d e o valor de c1 é %d ambos são iguais.\n\n", c, c1);
  } else {
    printf("c é igual a %d e c1 é igual a %d. Os valores não são iguais.\n\n", c, c1);
  }

  //o valor de a é 2 e o valor de a1 é 2 ambos são iguais.
  //b é igual a 0 e b1 é igual a 2. Os valores não são iguais.
  //c é igual a 8 e c1 é igual a 4. Os valores não são iguais.

}