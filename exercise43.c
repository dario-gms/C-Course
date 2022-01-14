#include <stdio.h>

int main() {
  //) Seja o seguinte algoritmo: 
  //  ver exercício 43
  //  Faça um teste de mesa e complete o quadro a seguir para os seguintes valores das variáveis: 
  //                  Variáveis 
  //  a   b   C     Mens 
  //  1   2   3 
  //  3   4   5 
  //  2   2   4 
  //  4   4   4 
  //  5   3   3


  int a = 0;
  int b = 0;
  int c = 0;

  printf("Informe o valor da 'a':\n");
  scanf("%d", &a);
  printf("Informe o valor de 'b':\n");
  scanf("%d", &b);
  printf("Informe o valor de 'c':\n");
  scanf("%d", &c);
  
  if(a < b + c && b < a + c && c < a + b){
    if(a == b && b == c){
      printf("Triângulo equilátero.\n");
    } else {
      if(a == b || b == c || a == c){
        printf("Triângulo isóseles.\n");
      } else {
        printf("Triângulo escaleno.\n");
      }
    }
  } else {
    printf("Não é possível formar um triângulo.\n");
  }

  //Resultado
  //   Variáveis 
  //  a   b   C     Mens 
  //  1   2   3   - Não é possível formar um triângulo;
  //  3   4   5   - Triângulo escaleno;
  //  2   2   4   - Não é possível formar um triângulo;
  //  4   4   4   - Triângulo equilátero;
  //  5   3   3   - Triângulo isóseles.
  
}