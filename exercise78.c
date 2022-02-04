#include <stdio.h>
#include <string.h>

int main() {
  // Escreva um algoritmo que permita a leitura dos nomes de 10 pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo deve permitir a leitura de mais 1 nome qualquer de pessoa e depois escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.  

  char nome[11][20];
  char nome2[2][20];
  int compara;
  
  for(int i = 0; i < 10; i++) {
    
    printf("Informe um nome: \n");
    scanf("%s", &nome[i][20]);
  }

  do {
    printf("Informe um nome para comparar ao banco de dados: \n");
    scanf("%s", &nome2[0][20]);
      for(int i = 1; i <= 10; i++) {
        compara = strcmp(nome[i], nome2[1]);
        if(compara == 0) {
        printf("Este nome foi encontrado no banco de dados!\n");
        break;
      } 
    }
    if(compara != 0) {
      printf("Nome não encontrado! \n");
    }
    

  } while (compara != 0);
  
  //Resultado
  //Programa funcionou corretamente comparando o nome inserido no final com os 10 primeiros nomes inseridos. 
}