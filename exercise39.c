#include <stdio.h>

int main(){
  //Para A = V, B = V e C = F, qual o resultado da avaliação das seguintes expressões: 
  //a) (A e B) ou (A xou B) 
  //b) (A ou B) e (A e C) 
  //c) A ou C e B xou A e não B

  int A = 0;
  int B = 0;
  int C = 1;

  if(A == 0 && B == 0) {
    printf("letra a verdadeiro.\n");
  } else {
    printf("letra a falso.\n");
  }
  if(A == 0 || B == 0) {
    printf("letra a2 verdadeiro.\n");
  } else {
    printf("letra a2 falso.\n");
  }

  if(A == 0 || B == 0){
    printf("letra b verdadeiro.\n");
  } else {
    printf("letra b falso.\n");
  }
  if(A == 0 && C == 0) {
    printf("letra b2 verdadeiro.\n");
  } else {
    printf("letra b2 falso.\n");
  }
  if(A == 0 || C == 0 ){
    printf("letra c verdadeiro.\n");
  } else {
    printf("letra c falso.\n");
  }
  if(B == 0 || A == 0 ) {
    printf("letra c2 verdadeiro.\n");
  } else {
    printf("letra c2 falso.\n");
  }
  if(!(B == 0)){
    printf("letra c3 verdadeiro\n");
  } else {
    printf("letra c3 falso.\n");
  }
  //Resultado
  //a) Verdadeiro e Verdadeiro
  //b) verdadeiro e falso
  //c) verdadeiro, verdadeiro e falso
}