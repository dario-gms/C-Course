#include <stdio.h>

int main () {
  int linha = 0;
  int coluna = 0;

  for (linha=1; linha <=10; linha++) {
    for(coluna= 1; coluna <=60; coluna++)
    if(linha == 1 || linha == 10 || coluna == 1 || coluna == 60)
  printf("+");
    else
      printf(" ");
      printf("\n");
      
  }
  //Resultado
  //Criado o retângulo utilizando somente for, if e else, vi que é possível criar utilizando a função gotoxy(incluindo conio.h ou windows.h), mas como ainda não conheço essa funções, optei por fazer com o fof, if e else.
}
