#include <stdio.h>

int main() {
  //Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a estrutura ENQUANTO).

  double num1 = 0;
  double num2 = 0;
  double resultado = 0;

  printf("Informe um número: \n");
  scanf("%lf", &num1);
  printf("Informe outro número: \n");
  scanf("%lf", &num2);

  while(num2 == 0) {
    printf("Informe outro número: \n");
    scanf("%lf", &num2);
    resultado = num1 / num2;
  }
  printf("O resultado da divisão do número %.2f e %.2f é %.2f.\n", num1, num2, resultado);
  
  //Resultado
  //Programa funcionou corretamente repetindo a mensagem de informe outro número enquanto o usuário digitar 0.
}