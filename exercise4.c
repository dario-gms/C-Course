#include <stdio.h>

int main(){

  //Reescreva as instruções abaixo com o mínimo de parênteses possível, mas sem alterar o resultado:
  //A <- 6*(3+2); B <- 2+(6*(3+2));
  //C <- 2+(3+6)/(2+4); D <- 2*(8/(3+1));
  //E <- 3+(16-2)/(2*(9-2)); F <- (6/3)+(8/2);
  //G <- ((3+(8/2))*4)+(3*2); H <- (6*(3*3)+6)-10; I <- (((10*8)+3)*9); J <- ((-12)*(-4))+(3*(-4));

  int A = 6*(3+2);
  printf("A = %d\n", A);
  //Não é possível retirar o parêntese, pois o valor seria diferente.

  int B = 2+6*(3+2);
  printf("B = %d\n", B);
  //Foi possível retirar um parêntese mudando de 2+6*(6*(3+2)) para 2+6*(3+2);

  int C = 2+3*6/(2+4);
  printf("C = %d\n", C);
  //Foi possível retirar um parêntese mudando de 2+(3*6)/(2+4) para 2+3*6/(2+4);

  int D = 2*8/(3+1);
  printf("D = %d\n", D);
  //Foi possível retirar um parêntese mudando de 2*(8/(3+1)) para 2*8/(3+1);

  int E = 3+(16-2)/(2*(9-2));
  printf("E = %d\n", E);
  //Não é possível retirar o parêntese, pois o valor seria diferente.

  int F = 6/3 + 8/2;
  printf("F = %d\n", F);
  //Neste caso foi possível retirar todos os parênteses.

  int G = (3+8/2)*4+3*2;
  printf("G = %d\n", G);
  //Neste caso foi possível retirar quase todos os parêtenses mudando de ((3+(8/2))*4)+(3*2) para (3+8/2)*4+3*2;

  int H = 6*3*3+6-10;
  printf("H = %d\n", H);
  //Neste caso foi possível retirar todos os parênteses.

  int I = (10*8+3)*9;
  printf("I = %d\n", I);
  //Foi possível retirar um parêntese mudando de (((10*8)+3)*9) para (10*8+3)*9;

  int J = -12*-4+3*-4;
  printf("J = %d\n", J);
  //Neste caso foi possível retirar todos os parênteses. 

  //Resultado final fica:
  // A = 30
  // B = 32
  // C = 5
  // D = 4
  // E = 4
  // F = 6
  // G = 34
  // H = 50
  // I = 747
  // J = 36
}