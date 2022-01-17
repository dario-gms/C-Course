#include <stdio.h>
#include <string.h>

int main() {
  //Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota. 
  //Acrescente uma mensagem 'NOVO CÁLCULO (S/N)?' ao final do exercício . Se for respondido 'S' deve retornar e executar um novo cálculo, caso contrário deverá encerrar o algoritmo.

  double nota1 = 0;
  double nota2 = 0;
  double media = 0;
  char refazer1[2];
  char refazer2[2] = "S";
  int result = 0;

  do {

    printf("Informe a primeira nota: \n");
    scanf("%lf", &nota1);
    printf("Informe a segunda nota: \n");
    scanf("%lf", &nota2);

    while(nota1 < 0 || nota1 > 10) {
      printf("Primeira nota inválida!\n");
      printf("Informe novamente a primeira nota: \n");
      scanf("%lf", &nota1);
    }
    while(nota2 <0 || nota2 > 10) {
      printf("Segunda nota inválida!\n");
      printf("informe novamente a segunda nota: \n");
      scanf("%lf", &nota2);
    }

    media = (nota1 + nota2) / 2;
    printf("A média deste aluno foi de %.2f.\n", media);
    printf("Deseja realizar novo cálculo de notas (S/N)?\n");
    scanf("%s", refazer1);

    result = strcmp(refazer1, refazer2);
    if(result != 0) {
      printf("Tudo bem. Até a próxima!\n");
    }
  } while(result == 0);

  //Resultado
  //Programa funcionou corretamente repetindo a solicitaçaõ até que o usuário inserisse uma nota válida e perguntando no final se o usuário deseja realizar novo cálculo.
}