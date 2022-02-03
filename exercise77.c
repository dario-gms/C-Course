#include <stdio.h>

int main() {
  //Dado o seguinte vetor: 
  //   1 2 3 4 5 6 7 8 
  //V {5 1 4 2 7 8 3 6} 
  //Qual será o conteúdo do vetor V depois de executado o algoritmo abaixo? 
  //Para i de 8 até 5 passo -1 Faça 
  //  v [i] v [8 - i + 1] 
  //  v [8 - i + 1] aux 
  //Fim_Para 

  //v [3] v [1] 
  //v [v [3]] v [v [2]]

  int i;
  int aux;
  int V[8] = {5, 1, 4, 2, 7, 8, 3, 6};

  for (i = 8; i >= 1; i--) {
    aux = V[i];
    V[i] = V [8 - i + 1];
    V[8 - i + 1] = aux;
  }
  V[3] = V[1];
  V[V[3]] = V[V[2]];

  printf("O valor de V é %d. \n", V[i]);

  //Resuitado V = 5;
}