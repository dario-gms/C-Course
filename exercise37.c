#include <stdio.h>

int main(){
  //Uma fruteira está vendendo frutas com a seguinte tabela de preços: 
  //  Até 5 Kg      |       Acima de 5 Kg 
  //Morango R$ 2,50 por Kg R$ 2,20 por Kg 
  //Maçã R$ 1,80    por Kg R$ 1,50 por Kg 

  //Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total.

  //Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.

  int kilos_morango = 0;
  int kilos_maca = 0;
  int kilos_totais = 0;
  double morango = 0;
  double maca = 0;
  double valor_compra = 0;

  printf("informe quantos quilos de morango você deseja: \n");
  scanf("%d", &kilos_morango);
  printf("Informe quantos quilos de maçã voce deseja: \n");
  scanf("%d", &kilos_maca);

  kilos_totais = kilos_morango + kilos_maca;

  if(kilos_totais <= 5) {
    morango = 2.50;
    maca = 1.80;
    valor_compra = (kilos_morango * morango) + (kilos_maca * maca);
    if(valor_compra > 25.00) {
      valor_compra = valor_compra - valor_compra * 0.10;
      printf("O cliente comprou %d Kg de morangos e %d Kg de maçãs e o valor total da sua compra foi de R$%.2f.\n", kilos_morango, kilos_maca, valor_compra);
    } else {
      printf("O cliente comprou %d Kg de morangos e %d Kg de maçãs e o valor total de sua compra foi de R$%.2f.\n", kilos_morango, kilos_maca, valor_compra);
    }
  } else {
    if(kilos_totais > 5){
      morango = 2.20;
      maca = 1.50;
      valor_compra = (kilos_morango * morango) + (kilos_maca * maca);
      if(kilos_totais > 5 && kilos_totais <= 8 && valor_compra < 25.00) {
        printf("O cliente comprou %d Kg de morangos e %d Kg de maçãs e o valor total da sua compra foi de R$%.2f.\n", kilos_morango, kilos_maca, valor_compra);
      } else {
        valor_compra = valor_compra - valor_compra * 0.10;
        printf("O cliente comprou %d Kg de morangos e %d Kg de maçãs e o valor total de sua compra foi de R$%.2f.\n", kilos_morango, kilos_maca, valor_compra);
      }
    }
  }
  //Resultado
  //Programa funcionando corretamente exibindo o preço certo com desconto se for acima de 8gk ou 25 reais.
}