#include <stdio.h>

int main(){
  //Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito: 
  //- Ter no mínimo 65 anos de idade. 
  //- Ter trabalhado no mínimo 30 anos. 
  //- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. 

  //Com base nas informações acima, faça um algoritmo que leia: o número do empregado (código), o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'

  int code = 0;
  int ano_nasc = 0;
  int ano_ingresso = 0;
  int idade = 0;
  int anos_trab = 0;

  printf("Informe o código do colaborador: \n");
  scanf("%d", &code);
  printf("informe o ano de nascimento do colaborador: \n");
  scanf("%d", &ano_nasc);
  printf("Informe o ano de ingresso do colaborador: \n");
  scanf("%d", &ano_ingresso);

  idade = 2021 - ano_nasc;
  anos_trab = 2021 - ano_ingresso;

  if(idade >= 60 && anos_trab >= 25) {
    printf("O colaborador %d possui %d anos e já possui %d anos trabalhados, o mesmo está apto para requerer sua aposentadoria.\n", code, idade, anos_trab);
  } else {
    if(idade >= 65 || anos_trab >= 30){
      printf("O colaborador %d possui %d anos e já possui %d anos trabalhados, o mesmo está apto para requerer sua aposentadoria.\n", code, idade, anos_trab);
    }
    else {
      printf("O colaborador %d não está apto a requerer o à aposentadoria.\n", code);
    }
  }

  //Resultado
  //Programa funcionou normalmente exibindo se o colaborador está apto ou não, somente nos casos em que ele cumpre os requisitos do exercício.

}