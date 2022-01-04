#include <stdio.h>

int main() {
  //Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'. 

  int conta = 0;
  double saldo = 0;
  double debito = 0;
  double credito = 0;

  printf("Informe o número da conta: \n");
  scanf("%d", &conta);
  printf("Informe o saldo da conta: \n");
  scanf("%lf", &saldo);
  printf("informe o valor de débito em conta: \n");
  scanf("%lf", &debito);
  printf("Informe o valor de crédito na conta: \n");
  scanf("%lf", &credito);

  saldo = saldo - debito + credito;
  if(saldo >= 0) {
    printf("Saldo atual R$ %.2f. Seu saldo está positivo!\n", saldo);
  } else {
    printf("Saldo atual R$ %.2f. Seu saldo está negativo.\n", saldo);
  }

  //Resultado
  //Programa funcionou como esperado, exibindo valor do saldo atual - débito em conta e exibindo se o valor está positivo ou negativo.
}