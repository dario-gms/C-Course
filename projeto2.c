#include <stdio.h>
#include <string.h>

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
  sprintf(palavrasecreta, "MELANCIA");
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

  int acertou = 0;

  escolhepalavra();
  abertura();
  
  do {
    
    desenhaforca();
    chuta();

  } while (!acertou && !enforcou());
  printf("Fim de jogo!\n");


}
