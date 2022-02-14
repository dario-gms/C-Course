#include <stdio.h>

int main() {
  //Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.


  int vetor[30];
  int num = 0;
  int resultado = 0;
  int repetir = 0;


  for(int i = 0; i < 30; i++) {
    printf("\nInforme um número: ");
    scanf("%d", &vetor[i]);
  }



  printf("\nInforme outro número para comparar: ");
  scanf("%d", &num);
  for(int i = 0; i < 30; i++) {
    if(num == vetor[i]) {
      resultado++;
    }
  }

  printf("\nO número %d aparece %d vezes no vetor. \n",num, resultado);

  //Resultado
  //Programa funcionou corretamente solicitando que seja inserido 30 números em seguida ele pede que seja inserido mais um número. Por fim ele checa quantas vezes aquele número aparece no array.
  
}