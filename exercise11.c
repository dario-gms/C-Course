#include <stdio.h>

int main(){
  //Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

  int salario = 0;
  int comissao = 0;
  int carrosvendidos = 0;
  int valorcarros = 0;
  int totalvendas = 0;
  double comissaoextra = 0;
  double salariofinal = 0;

  printf("Informe o valor do salário:\n");
  scanf("%d", &salario);
  printf("Informe o valor da comissão por carro vendido:\n");
  scanf("%d", &comissao);
  printf("Informe a quantidade de carros vendidos:\n");
  scanf("%d", &carrosvendidos);
  printf("Informe o valor do carro vendido:\n");
  scanf("%d", &valorcarros);

  comissao = comissao * carrosvendidos;
  totalvendas = carrosvendidos * valorcarros;
  comissaoextra = totalvendas * 0.05;
  salariofinal = salario + comissao + comissaoextra;

  printf("O valor final do salário deste funcionário é de R$%.2f.\n", salariofinal);

  //Resultado
  //Com base no valor de salario de 2500, valor da comissão por carro vendido de 400, quantidade de vendas 4 e valor de cada carro vendido de 30000 o valor do salário final seria de 10100.
}