#include <stdio.h>

int main() {
  // Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.

  double salario = 0;
  double valorvendas = 0;
  double comissao = 0;
  
  printf("Informe o valor do salário deste vendedor: \n");
  scanf("%lf", &salario);
  printf("Informe o valor total de vendas realizada: \n");
  scanf("%lf", &valorvendas);

  if (valorvendas <= 1500) {
    comissao = (valorvendas / 100) * 3;
    salario = salario + comissao;
    printf("Você recebeu de comissão um valor total de R$ %.2f e o seu salário do mês foi de R$ %.2f.\n", comissao, salario);
  } else {
    comissao = (valorvendas / 100) * 5;
    salario = salario + comissao;
    printf("Você recebeu de comissão um valor total de R$ %.2f e o seu salário do mês foi de R$ %.2f.\n", comissao, salario);    
  }

  //Resultado
  //Programa funcionando corretamente exibindo o valor da comissão de 3% quando o valor vendindo é menor ou igual a 1500 e 5% de comissão quando o valor das vendas é acima de 1500.
}