#include <stdio.h>

int main () {
  //Faça um algoritmo para ler uma quantidade e a seguir ler esta quantidade de números. Depois de ler todos os números o algoritmo deve apresentar na tela o maior dos números lidos e a média dos números lidos.

  int quantidade = 0;
  int num = 0;
  double total = 0;
  int maior_num = 0;
  int contador = 0;
  double media = 0;

  printf("Informe a quantidade de números que você deseja incluir: \n");
  scanf("%d", &quantidade);

  for (contador = 0; contador < quantidade; contador++) {
    printf("Informe um valor: \n");
    scanf("%d", &num);

    if (num > maior_num) {
      maior_num = num;
    }

    total = total + num;
  }
  media = total / quantidade;
  printf("O maior número inserido foi %d e a média dos números inseridos é de %.2f.\n", maior_num, media);

  //Resultado
  //Programa funcionou corretamente solicitando a quantidade de números que o usuário deseja ler e solicitando o valor de cada numero solicitado, posteriormente imprimindo o maior dos números e a média de todos os números inseridos.

  
}