#include <stdio.h>

int main() {
  // Ler dois valores e imprimir uma das três mensagens a seguir: 
  // ‘Números iguais’, caso os números sejam iguais 
  // ‘Primeiro é maior’, caso o primeiro seja maior que o segundo; 
  // ‘Segundo maior’, caso o segundo seja maior que o primeiro.

  int num1 = 0;
  int num2 = 0;

  printf("Informe o valor do primeiro número:\n");
  scanf("%d", &num1);
  printf("Informe o valor do segundo número:\n");
  scanf("%d", &num2);

  if(num1 == num2){
    printf("Os números inseridos são iguais.\n");
  } else {
    if(num1 > num2) {
      printf("O primeiro número é maior que o segundo.\n");
    } else {
      printf("O segundo número é maior que o primeiro.\n");
    }
  }

  //Resultado
  //Programa funcionou corretamente exibindo qual é o maior número ou se os números são iguais.
}