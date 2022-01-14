#include <stdio.h>

int main() {
  //Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPITA)

  double num1 = 0;
  double num2 = 0;
  double resultado = 0;

  printf("Informe um número:\n");
  scanf("%lf", &num1);
  printf("Informe outro número:\n");
  scanf("%lf", &num2);

  do {
    printf("Informe um valor diferente:\n");
    scanf("%lf", &num2);
    resultado = num1 / num2;

  } while(num2 == 0);

  
  printf("O resultado da divisão de %.2f com %.2f é %.2f.\n", num1, num2, resultado);

  //resultado
  //Programa funcionou corretamente repetindo a solicitação de n2 toda vez que o usuário digitar 0 e imprimindo o resultado da divisão de n1 com n2 quando o valor informado é diferente de 0.
}