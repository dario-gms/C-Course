#include <stdio.h>

int main(){
  //As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra.

  int quantidade = 0;
  double custo = 0;
  double valortotal = 0;
  
  printf("Informe a quantidade de maçâs que você deseja comprar: \n");
  scanf("%d", &quantidade);
  if(quantidade >= 12){
    custo = 1.00;
  } else {
    custo = 1.30;
  }

  valortotal = quantidade * custo;
  printf("O valor total da sua compra foi de R$%.2f.\n", valortotal);

  //Resultado
  //Realizando o teste comprando 11 maçâs o resultado foi de 14,30, comprando 2 maças o resultado foi 2,60, comprando 12 maças o resultado foi 12,00 e comprando 15 maçãs foi 15,00.
}