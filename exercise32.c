#include <stdio.h>

int main(){
  //Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.

  char time1[20];
  char time2[20];
  int gol_time1 = 0;
  int gol_time2 = 0;

  printf("Informe o nome do primeiro time:\n");
  scanf("%s", time1);
  printf("Informe a quantidade de gols do primeiro time:\n");
  scanf("%d", &gol_time1);
  printf("Informe o nome do segundo time:\n");
  scanf("%s", time2);
  printf("Informe a quantidade de gols do segundo time:\n");
  scanf("%d", &gol_time2);

  if(gol_time1 == gol_time2){
    printf("O time %s fez %d gols e o time %s fez %d gols e o resultado do jogo foi empate.\n",time1, gol_time1, time2, gol_time2);
  }else{
    if(gol_time1 > gol_time2){
      printf("O time %s fez %d gols e o time %s fez %d gols o time %s foi o campeão.\n", time1, gol_time1, time2, gol_time2, time1);
    } else {
      printf("O time %s fez %d gols e o time %s fez %d gols o time %s foi o campeão.\n", time1, gol_time1, time2, gol_time2, time2);
    }
  }
}