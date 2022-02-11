#include <stdio.h>

int main() {
  //Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais um número qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve gerar um novo vetor sem esse número. (Considere que não haverão números repetidos no vetor).

  int vetor[21];
  int num = 0;
  int contador = 20;

  for(int i = 0; i < contador; i++) {
    printf("Informe um número: ");
    scanf("%d", &vetor[i]);
  }

  
  printf("Informe um outro número: ");
  scanf("%d", &num);

  for(int i = 0; i < contador; i++) {
    if(num == vetor[i]) {

      vetor[i] = vetor[i + 1];
      vetor[i + 1] = num;
      contador = 19;
    }
  }

  for(int i = 0; i < contador; i++) {
    printf("%d ", vetor[i]);
  }

  //Resultado
  //Programa funcionou corretamente solicitando ao usuário que insira 20 números e em seguida pede para ler mais um número. Depois ele compara se este número está entre os 20 lidos anteriormente. Caso esteja, é impresso um array somente com os números inseridos menos o número comparado. No contrário é impresso os 20 números inseridos.
  
}