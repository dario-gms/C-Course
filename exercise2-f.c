#include <stdio.h>

int main() {
  //f)
  //X <- 1
  //Y <- 2
  //Z <- Y - X
  //Escrever Z
  //X <- 5
  //Y <- X + Z
  //Escrever X, Y, Z

  int x = 1;
  int y = 2;
  int z = y - x;
  printf("O valor de z é %d\n", z);

  x = 5;
  y = x +z;
  printf("O valor de x %d, o valor de y %d, o valor de z %d\n", x, y, z);

  //Resultado final
  //O valor de z é 1
  //O valor de x 5, o valor de y 6, o valor de z 1
}