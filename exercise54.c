#include <stdio.h>

int main() {
  //Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Aceitar somente valores maiores que 0 para N. Caso o valor informado (para N) não seja maior que 0, deverá ser lido um novo valor para N.

  int N = 0;
  printf("Informe um número: \n");
  scanf("%d", &N);

  while (N <= 0) {
    printf("Insira um número maior que 0: \n");
    scanf("%d", &N);
  }
  
  printf("A ordem de impressão dos números inteiros é: \n");
  for(int i = 1; i <= N; i++) {
    printf("%d\n", i);
  }
  //Resultado
  //Programa funcionou corretamente repetindo a solicitação de número caso o valor inserido não seja maior que 0 e imprimindo até a quantidade solicitada.
}