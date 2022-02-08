#include <stdio.h>

int main() {
  //Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X. Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.

  int A[10]; 
  int X = 0;
  int M[10];

  for(int i = 0; i <=9; i++) {
    printf("Informe um número: ");
    scanf("%d", &A[i]);
  }

  printf("informou outro número: ");
  scanf("%d", &X);

  for(int i = 0; i <=9; i++) {
    M[i] = X * A[i];
    printf("O resultado de %d x %d é %d.\n", X, A[i], M[i]);
  }
  
  //resultado
  //Programa funcionou corretamente solicitando que o usuário digite 10 números e em seguida que digite mais um, em seguida é exibida a multiplicação dos 10 números digitados com o número adicional. 
}