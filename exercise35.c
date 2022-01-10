#include <stdio.h>

int main() {
  //Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
  //até 20 litros, desconto de 3% por litro Álcool 
  //acima de 20 litros, desconto de 5% por litro 
  //até 20 litros, desconto de 4% por litro Gasolina 
  //acima de 20 litros, desconto de 6% por litro

  //Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90.

  int tipo = 0;
  int quant_combustivel = 0;
  double A = 3.30;
  double G = 2.90;
  double desconto = 0;
  double valor_total = 0;

  printf("Informe quantos litros de combustível foi abastecido: \n");
  scanf("%d", &quant_combustivel);
  printf("    ****Tipo de combustível****\nDigite 1 para álcool e 2 para gasolina.\n");
  scanf("%d", &tipo);

  if(tipo == 1 && quant_combustivel <= 20) {
    desconto = A - A * 0.03;
    valor_total = quant_combustivel * desconto;
    printf("O combustível selecionado foi álcool, a quantidade abastecida foi de %d litros, sendo o preço do litro do álcool de R$%.2f com desconto fica R$%.2f e o valor total foi de R$%.2f.\n", quant_combustivel, A, desconto, valor_total);
  } else {
    if(tipo == 1 && quant_combustivel > 20) {
      desconto = A - A * 0.05;
      valor_total = quant_combustivel * desconto;
      printf("O combustível selecionado foi álcool, a quantidade abastecida foi de %d litros, sendo o preço do litro do álcool de R$%.2f com desconto fica R$%.2f e o valor total foi de R$%.2f.\n", quant_combustivel, A, desconto, valor_total);
    }
    if(tipo == 2 && quant_combustivel <= 20) {
      desconto = G - G * 0.04;
      valor_total = quant_combustivel * desconto;
      printf("O combustível selecionado foi gasolina, a quantidade abastecida foi de %d litros, sendo o preço do litro da gasolina de R$%.2f com desconto fica R$%.2f e o valor total foi de R$%.2f.\n", quant_combustivel, G, desconto, valor_total);
    }
    if(tipo == 2 && quant_combustivel > 20) {
      desconto = G - G * 0.06;
      valor_total = quant_combustivel * desconto;
      printf("O combustivel selecionado foi gasolina, a quantidade abastecida foi de %d litros, sendo o preço do litro da gasolina de R$%.2f com desconto fica R$%.2f e o valor total foi de R$%.2f.\n", quant_combustivel, G, desconto, valor_total);
    }
  }
  //Resultado
  //Programa funcionou corretamente exibindo o desconto no produto selecionado correspondente. 

}