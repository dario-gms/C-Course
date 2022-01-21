#include <stdio.h>

int main() {
  //Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que permita a entrada das seguintes informações: a) o número total de mercadorias no estoque; b) o valor de cada mercadoria. Ao final imprimir o valor total em estoque e a média de valor das mercadorias.

  int quantidade = 0;
  int contador = 0;
  double valor = 0;
  double total = 0;
  double media = 0;

  printf("Informe o número total de mercadorias em estoque: \n");
  scanf("%d", &quantidade);

  while(contador < quantidade) {
    contador++;
    printf("Informe o valor da mercadoria %d: \n", contador);
    scanf("%lf", &valor);
    total = total + valor;
  }
  media = total / quantidade;
  printf("O valor total das mercadorias em estoque é de R$ %.2f e o valor médio das mercadorias é de R$ %.2f.\n", total, media);

  //Resuldado
  //Programa funcionou corretamente solicitando ao usuário a quantidade de mercadorias e o valor de cada mercadoria, exibindo no final o valor total e o valor médio. 
}