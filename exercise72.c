#include <stdio.h>

int main() {
  //Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever: 
  //- o maior preço lido 
  //- a média aritmética dos preços dos produtos

  int contador = 0;
  int quantidade = 15;
  int codigo = 0;
  int cod_maior = 0;
  double valor = 0;
  double total = 0;
  double media = 0;
  double maior_valor = 0;

  for (contador = 1; contador <= quantidade; contador++) {
    printf("Informe o código do produto %d de %d: \n", contador, quantidade);
    scanf("%d", &codigo);
    printf("Informe o valor do produto %d: \n", codigo);
    scanf("%lf", &valor);
    total = total + valor;

    if(maior_valor < valor) {
      maior_valor = valor;
      cod_maior = codigo;
    }
  }
  media = total / quantidade;
  printf("O produto com maior valor é o produto %d, custa R$ %.2f e o valor médio dos produtos inseridos é de R$ %.2f. \n", cod_maior, maior_valor, media);

  //Resultado
  //Programa funcionou corretamente solicitando o código de cada produto e o seu valor respectivo e imprimindo o produto com o maior valor e o valor médio dos produtos inseridos.
}