#include <stdio.h>

int main() {
  //Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.

  int horastotais = 0;
  int horainicio = 0;
  int horafinal = 0;
  int dia = 24;

  printf("Informe a hora que iniciou o jogo(Informar somente a hora, sem minutos e número de 0 a 24):\n");
  scanf("%d", &horainicio);
  printf("Informe a hora que terminou o jogo:\n");
  scanf("%d", &horafinal);
  
  
  if (horainicio > horafinal) {
    horastotais = (dia - horainicio) + horafinal;
    printf("A duração do jogo foi de %d horas.\n", horastotais); 
  } else {
    horastotais = horafinal - horainicio;
    printf("A duração do jogo foi de %d horas.\n", horastotais); 
  }

  //Resultado
  //Programa funcionou corretamente exibindo a quantidade total de horas do jogo.

}
