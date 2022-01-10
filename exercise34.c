#include <stdio.h>

int main() {
  //Seja o seguinte algoritmo: 
  // início 
  //    ler x 
  //    ler y 
  //  z  (x*y) + 5 
  //  se z <= 0 então 
  //    resposta  ‘A’ 
  //  senão 
  //  se z <= 100 então 
  //    resposta  ‘B’ 
  //  senão 
  //    resposta  ‘C’ 
  //  fim_se 
  //  fim_se 
  //  escrever z, resposta 
  // fim

  double x = 0;
  double y = 0;

  printf("informe o valor de x:\n");
  scanf("%lf", &x);
  printf("Informe o valor de y:\n");
  scanf("%lf", &y);

  double z = (x * y) + 5;
  if(z <= 0){
    printf("O valor de z é %2.f. Resposta A.\n", z);
  } else {
    if(z <= 100){
      printf("O valor de z é %2.f. Resposta B.\n", z);
    } else {
      printf("O valor de z é %2.f. Resposta C.\n", z);
    }
  }
  //Resultado
  //Faça o seguinte teste de mesa:
  //   Variáveis 
  //  X | Y | Z | Resposta
  //  3 | 2 |11 | resposta b
  // 150| 3 |455| resposta c
  //  7 |-1 |-2 | resposta a
  // -2 | 5 |-5 | resposta a
  // 50 | 3 |155| resposta c
}
