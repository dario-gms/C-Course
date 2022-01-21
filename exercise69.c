#include <stdio.h>
#include <string.h>

int main() {
  //Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que permita a entrada das seguintes informações: ler o valor da mercadoria e perguntar ‘MAIS MERCADORIAS (S/N)?’. Ao final, imprimir o valor total em estoque e a média de valor das mercadorias em estoque.

  int quantidade = 0;
  int resultado = 0;
  char mais_sim[2] = "S";
  char mais_nao[2];
  double valor = 0;
  double total = 0;
  double media = 0;

  do {
    printf("Informe o valor da mercadoria: \n");
    scanf("%lf", &valor);
    quantidade++;

    total = total + valor;

    printf("Deseja adicionar mais mercadorias (S/N): \n ");
    scanf("%s", mais_nao);
    
    resultado = strcmp (mais_sim, mais_nao);
    if (resultado != 0){
      printf("Foram adicionados %d produtos ao estoque. Processo de inclusão encerrado.\n", quantidade);
    }
  } while (resultado == 0);
  media = total / quantidade;
  printf("O valor total em produtos no estoque é de R$ %.2f e o valor médio é de R$ %.2f.\n", total, media);

  //Resultado
  //Programa funcionou corretamente solicitando ao usuário que insira o valor valor da mercadoria e calculando o valor total a cada valor inserido. Por final exibindo o valor total e o valor médio de acordo com a quantidade de produtos inseridos.   
  
}