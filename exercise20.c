#include <stdio.h>

int main() {
  //Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.

  int num1 = 0;
  int num2 = 0;

  printf("Informe o valor do primeiro número: \n");
  scanf("%d", &num1);
  printf("Informe o valor do segundo número: \n");
  scanf("%d", &num2);

  if(num1 < num2) {
    printf("%d, %d.\n", num1, num2);
  } else {
    printf("%d, %d.\n", num2, num1);
  }
  //Resultado
  //Realizando teste o programa funcionou corretament, exibindo os números em ordem crescente, independente do número inserido.
}