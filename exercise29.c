#include <stdio.h>

int main() {
  //Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2 maiores.

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int resultado = 0;

  printf("Informe o primeiro número: \n");
  scanf("%d", &num1);
  printf("Informe o segundo número: \n");
  scanf("%d", &num2);
  printf("Informe o terceiro número: \n");
  scanf("%d", &num3);

  if(num1 < num2 && num2 < num3) {
    resultado = num2 + num3;
    printf("Os dois maiores números foram %d e %d e a soma destes dois números é de %d.\n",num2, num3, resultado);    
  } else {
    if(num1 < num3 && num3 < num2) {
      resultado = num3 + num2;
      printf("Os dois maiores números foram %d e %d e a soma destes dois números é de %d.\n", num3, num2, resultado);
    }
    if(num2 < num1 && num1 < num3) {
      resultado = num1 + num3;
      printf("Os dois maiores números foram %d e %d e a soma destes dois números é de %d.\n", num1, num3, resultado);
    }
    if(num2 < num3 && num3 < num1){
      resultado = num3 + num1;
      printf("Os dois maiores números foram %d e %d e a soma destes dois números é de %d.\n", num3, num1, resultado);
    }
    if(num3 < num1 && num1 < num2){
      resultado = num1 + num2;
      printf("Os dois maiores números foram %d e %d e a soma destes dois números é de %d.\n", num1, num2, resultado);
    }
    if(num3 < num2 && num2 < num1){
      resultado = num2 + num1;
      printf("Os dois maiores números foram %d e %d e a soma destes dois números é de %d.\n", num2, num1, resultado);
    }
  }
  //Resultado
  //Programa funcionando corretamente, exibindo os maiores números inseridos independente da ordem e a soma dos maiores.

}