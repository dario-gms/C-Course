#include <stdio.h>

int main() {
  //Faça um programa que leia 100 valores e no final, escreva o maior e o menor valor lido.


  int num = 0;
  int maior_num = 0;
  int menor_num = 0;
  int contador = 1;
  
  printf("informe um número: \n");
  scanf("%d", &num);
  maior_num = num;
  menor_num = num;

  while (contador < 100) {
    printf("Informe um número: \n");
    scanf("%d", &num);
    contador++;
    
    if(num > maior_num) {
      maior_num = num;
    }
    if(num < menor_num) {
      menor_num = num;
    }
    

  }
  printf("O menor número inserido foi %d e o maior foi %d.\n", menor_num, maior_num);

  //Resultado
  //Programa funcionou corretamente exibindo o menor número inserido e o maior número inserido, independente da ordem de inserção.
  
}