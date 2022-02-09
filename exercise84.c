#include <stdio.h>

int main() {
  //Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma. 

  int N = 0;
  int A[N];
  int B[N];
  int C[N];

  printf("Informe a quantidade de números que você deseja somar: ");
  scanf("%d", &N);

  for(int i = 0; i < N; i++) {
    printf("Informe um valor para A: ");
    scanf("%d", &A[i]);
    printf("Informe um valor para B: ");
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < N; i++) {
    C[i] = A[i] + B[i];
    printf("A soma de %d + %d é %d.\n",A[i], B[i], C[i]);
  }

}