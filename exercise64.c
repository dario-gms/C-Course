#include <stdio.h>

int main() {
  //Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem ser somados. Escreva o valor final da soma efetuada.

  int contador = 0;
  int num = 0;
  int total = 0;

  while (contador < 10) {
    printf("Informe um número: \n");
    scanf("%d", &num);
    contador++;

    if(num < 40) {
      total = total + num;
    }
  }
  printf("A soma total dos números inseridos abaixo de 40 é de %d.\n", total);

  //Resultado
  //Programa funcionou corretamente exibindo a soma de todos os números abaixo de 40.
} 