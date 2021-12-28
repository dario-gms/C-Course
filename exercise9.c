#include <stdio.h>

int main(){
  //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

  int salario = 0;
  double percentual = 0;
  double reajuste = 0;

  printf("Informe o salário atual:\n");
  scanf("%d", &salario);
  printf("informe o percentual de reajuste:\n");
  scanf("%lf", &percentual);

  percentual = percentual / 100;
  reajuste = salario * percentual + salario;
  printf("O valor do novo salário é de R$%.2f. \n", reajuste);
  //Resultado final
  //Com base no salário minimo 1100 e incluindo a porcetagem de reajuste de 10% o resultado final seria 1210,00, baseado no novo valor do salário minimo 2021.
}