#include <stdio.h>

int main() {
  // Escreva um algoritmo para ler 10 números e ao final da leitura escrever a soma total dos 10 números lidos.

  int contador = 0;
  int num = 0;
  int total = 0;

  while (contador < 10) {
    printf("Informe um número: \n");
    scanf("%d", &num);
    contador++;

    total = total + num;
  }
  printf("A soma dos números inseridos é %d. \n", total);

  //Resultado
  //Programa funcionou corretamente exibindo a soma dos 10 números inseridos.
}