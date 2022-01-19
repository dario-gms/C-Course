#include <stdio.h>

int main() {
  // Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.

  
  int contador = 0;
  double num = 0;
  double media = 0;
  double total = 0;

  while (contador < 10) {
    printf("Informe um número: \n");
    scanf("%lf", &num);
    contador++;
    total = total + num;
  }

  media = total / 10;
  printf("A média dos números inseridos é de : %.1f.\n", media);

  //Resultado
  //Programa funcionou normalmente imprimindo a média dos números inseridos.
  
}