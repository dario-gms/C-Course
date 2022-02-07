#include <stdio.h>

int main() {
  //Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma e o resultado da contagem.

  double notas[21];
  double total;
  double media;
  int acima_media = 0;

  for(int i = 1; i <= 20; i++) {
    printf("Informa a nota do %dº aluno: ", i);
    scanf("%lf", &notas[i]);
    total = total + notas[i];
    media = total / 20;
  }
  for(int i = 1; i <= 20; i++) {
    if(notas[i] > media) {
      acima_media++;
    }
  }
  

  printf("A média da nota desta turma é de %.1f pontos e o total de alunos com a nota acima da média é de %d alunos.\n", media, acima_media); 

  //Resultado 
  //Programa funcionando corretamente solicitando que o usuário insira a nota de 20 alunos, calcule a média e informe quantos alunos conseguiram uma nota acima da média da turma. 
}