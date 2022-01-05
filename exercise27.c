#include <stdio.h>

int main() {
  //utilizar Seleção Aninhada ou Concatenada.
  //Ler um valor e escrever se é positivo, negativo ou zero.

  int numero = 0;
  printf("Insira um número: \n");
  scanf("%d", &numero);

  if(numero == 0) {
    printf("O número inserido é 0.\n");
  } else {
    if(numero < 0) {
      printf("O número inserido foi %d e este número é negativo.\n", numero);
    }
    else {
      printf("O número inserido foi %d e este número é positivo.\n", numero);
    }
  }
  //Resultado
  //Programa funcionou corretamente exibindo corretamente a mensagem de acordo com o tipo de número inserido.
}