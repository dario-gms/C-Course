#include <stdio.h>

int main () {
  // Ler o número de alunos existentes em uma turma e, após isto, ler as notas destes alunos, calcular e escrever a média aritmética dessas notas lidas. 

  int contador = 1;
  int alunos = 0;
  double nota = 0;
  double total = 0;
  double media = 0;
  

  printf("Informe a quantidade de alunos na turma:\n");
  scanf("%d", &alunos);

  while (contador <= alunos) {
    printf("Informe a nota do aluno %d: \n", contador);
    scanf("%lf", &nota);
    contador++;
    total = total + nota;
  }

  media = total / alunos;
  printf("A média de nota desta turma é de %.1f pontos.\n", media);

  //Resultado
  //Programa funcionou corretamente solicitando a quantidade de alunos da turma, pedindo a nota de cada um deles e imprimindo a média da nota da turma.
}