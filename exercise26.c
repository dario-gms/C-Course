#include <stdio.h>

int main() {
  //Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar compra'.

  int quant_atual = 0;
  int quant_max = 0;
  int quant_min = 0;
  int quant_med = 0;

  printf("Informe a quantidade de produtos disponíveis do estoque: \n");
  scanf("%d", &quant_atual);
  printf("Informe a quantidade máxima de produtos que o estoque suporta: \n");
  scanf("%d", &quant_max);
  printf("Informe a quantidade mínima de produtos para estoque: \n");
  scanf("%d", &quant_min);
  
  quant_med = (quant_max - quant_min) / 2;
  if(quant_atual >= quant_med) {
    printf("A quantidade atual de produtos é %d e a quantidade média recomendável é de %d, no momento não é necessário comprar mais produtos.\n", quant_atual, quant_med);
  } else {
    printf("A quantidade atual de produtos é %d e a quantidade média recomendável é de %d, é necessário comprar mais produtos!\n", quant_atual, quant_med);
  }
  //Resultado
  //Programa funcionando corretamente, exibindo a mensagem de necessidade de compra quando o a quantidade em disponível em estoque é menor que a média recomendável.
}