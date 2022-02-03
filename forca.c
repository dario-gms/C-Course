#include <stdio.h>
#include <string.h>
#include "projeto2.h"
#include <time.h>
#include <stdlib.h>

char palavrasecreta[20];
char chutes[26];
int chutesdados = 0;

void abertura() {
  printf("*******************************\n");
  printf("*       Jogo da forca         *\n");
  printf("*******************************\n\n");
}

void chuta(){
  char chute;
  printf("Qual letra? ");
  scanf(" %c", &chute);

  chutes[chutesdados] = chute;
  chutesdados++;
}

void adicionapalavra() {

  char quer;

  printf("Você deseja adicionar uma nova palavra no jogo? (S/N)");
  scanf (" %c", &quer);

  if (quer == 'S') {

    char novapalavra[20];
    printf("Qual a nova palavra? ");
    scanf("%s", novapalavra);

    FILE* f;

    f = fopen("palavras.txt", "r+");
    if (f == 0) {
      printf("Desculpe, banco de dados não disponível\n\n");
      exit(1);
    }

    int qtd;
    fscanf(f, "%d", &qtd);
    qtd++;

    fseek(f, 0, SEEK_SET);
    fprintf(f, "%d", qtd);

    fseek(f, 0, SEEK_END);
    fprintf(f, "\n%s", novapalavra);

    fclose(f);
  }
}

int jachutou(char letra) {
  int achou = 0;
  
  for(int j = 0; j < chutesdados; j++) {
    if(chutes[j] == letra) {
      achou = 1;
      break;
    }
  }
  return achou;
}

int acertou() {
  for(int i = 0; i < strlen(palavrasecreta); i++) {
    if(!jachutou(palavrasecreta[i])) {
      return 0;
    }
  }
  return 1;
}

void desenhaforca() {
  printf("Você já deu %d chutes\n", chutesdados);

  for(int i = 0; i < strlen(palavrasecreta); i++) {
    if(jachutou(palavrasecreta[i])) {
      printf("%c ", palavrasecreta[i]);
    } else {
      printf("_ ");
    }
  }
}

void escolhepalavra() {
  FILE* f;

  f = fopen("palavras.txt", "r");
  if (f == 0) {
    printf("Desculpe, banco de dados não disponível\n\n");
    exit(1);
  }

  int qtddepalavras;
  fscanf(f, "%d", &qtddepalavras);

  srand(time(0));
  int randomico = rand() % qtddepalavras;

  for(int i = 0; i <= randomico; i++) {
    fscanf(f, "%s", palavrasecreta);
  }

  fclose(f);
}

int enforcou() {
  int erros = 0;
  
  for(int i = 0; i < chutesdados; i++) {
    int existe = 0;
    for( int j = 0; j < strlen(palavrasecreta); j++) {
      if(chutes[i] == palavrasecreta[j]) {
        existe = 1;
        break;
      }
    }
    if (!existe) erros++;
  }
  return erros >= 5;
  
}


int main () {

  escolhepalavra();
  abertura();
  
  do {
    
    desenhaforca();
    chuta();

  } while (!acertou() && !enforcou());
  adicionapalavra();
  printf("Fim de jogo!\n");


}
