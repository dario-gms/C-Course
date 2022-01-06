#include <stdio.h>

int main(){
  //Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados. 

  int a = 0;
  int b = 0;
  int c = 0;

  printf("Informe o número do primeiro lado: \n");
  scanf("%d", &a);
  printf("Informe o número do segundo lado: \n");
  scanf("%d", &b);
  printf("Informe o número do terceiro lado: \n");
  scanf("%d", &c);

  if (a < b + c && b < a + c && c < a + b){
    printf("Os valores informados formam um triângulo.\n");
  }
  else {
    if (a > b + c && b > a + c && c > a + b){
      printf("Os valores informados não formam um triângulo.\n");
    } else {
      printf("Os valores informados não formam um triângulo.\n");
    }
  }
  //Resultado
  //Realizado testes e confirmado que o programa está funcionando corretamente. 
  //Obs: Se um numero for igual a soma dos outros 2 numeros, ele não é um triângulo, pois o valor precisa ser menor e não igual ou maior. Ex: 1, 2, 3: 1 < 5, 2 < 4 e 3 = 3, portanto não é um triângulo. Ex2: 2, 3, 4: 2 < 7, 3 < 6 e 4 < 5 portanto é um triângulo.
}