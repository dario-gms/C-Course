#include <stdio.h>

int main() {
  //Ler 10 valores e escrever quantos desses valores lidos são NEGATIVOS.

  int num = 0;
  int contador = 0;
  int negativos = 0;

  do {
    printf("Informe um  número: \n");
    scanf("%d", &num);
    contador++;

    if(num < 0) {
      negativos++;
    }
  } while (contador < 10);
  printf("Foi inserido %d números negativos. \n", negativos);

  //Resultado
  //Programa funcionou corretamente solicitando que o usuário insira 10 números e fazendo a contagem de quantos números negativos foram inseridos.
}