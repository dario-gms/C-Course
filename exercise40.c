#include <stdio.h>

int main() {
  //Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total - desconto), sabendo-se que: 
  //- Se quantidade <= 5 o desconto será de 2% 
  //- Se quantidade > 5 e quantidade <=10 o desconto será de 3% 
  //- Se quantidade > 10 o desconto será de 5%

  char produto[20];
  int quantidade = 0;
  double preco = 0;
  double total = 0;

  printf("Informe o nome do produto aquirido:\n");
  scanf("%s", produto);
  printf("Informe a quantidade adquirida:\n");
  scanf("%d", &quantidade);
  printf("Informe o valor unitário do produto aquirido: \n");
  scanf("%lf", &preco);

  total = quantidade * preco;
  if(quantidade <= 5){
    total = total - total * 0.02;
    printf("Você adquiriu %d unidades do produto %s e o valor total a pagar com desconto é de R$%.2f.\n", quantidade, produto, total);
  } else {
    if(quantidade > 5 && quantidade <= 10){
      total = total - total * 0.03;
      printf("Você adquiriu %d unidades do produto %s e o valor total a pagar com desconto é de R$%.2f.\n", quantidade, produto, total);
    } else {
      total = total - total * 0.05;
      printf("Você adquiriu %d unidades do produto %s e o valor total a pagar com desconto é de R$%.2f.\n", quantidade, produto, total);
    }
  }

  //Resultado
  //Programa funcionou normalmente exibindo o desconto correto para a quantidade desejada do produto.
}