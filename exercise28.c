#include <stdio.h>

int main() {
  //Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  printf("Informe o primeiro número: \n");
  scanf("%d", &num1);
  printf("Informe o segundo número: \n");
  scanf("%d", &num2);
  printf("Informe o terceiro número: \n");
  scanf("%d", &num3);

  if(num1 < num2 && num2 < num3) {
    printf("O maior valor inserido foi %d.\n", num3);
  } else {
    if(num2 < num1 && num1 < num3){
      printf("O maior valor inserido foi %d.\n", num3);
    }
    if(num3 < num1 && num1 < num2){
      printf("O maior valor inserido foi %d.\n", num2);
    }
    if(num3 < num2 && num2 < num1){
      printf("O maior valor inserido foi %d.\n", num1);
    }
    if(num1 < num3 && num3 < num2){
      printf("O maior valor inserido foi %d.\n", num2);
    }
    if(num2 < num3 && num3 < num1){
      printf("O maior valor inserido foi %d.\n", num1);
    }
  }
  //Resultado
  //Testado as combinações possíveis e o programa funciona corretamente exibindo o maior valor inserido, independente da ordem.
  
}