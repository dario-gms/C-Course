#include <stdio.h>

int main (){
  //Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final é: 
 //               n1 * 2 + n2 * 3 + n3 * 5 
 //mediafinal = -----------------------------------
 //                           10

 double n1 = 0;
 double n2 = 0;
 double n3 = 0;
 double media = 0;

 printf("Insira a primeira nota:\n");
 scanf("%lf", &n1);
 printf("Insira a segunda nota:\n");
 scanf("%lf", &n2);
 printf("Insira a terceira nota:\n");
 scanf("%lf", &n3);

 media = (n1 * 2 / 10) + (n2 * 3 / 10) + (n3 * 5 / 10);

 printf("A média final das três notas informadas é de %.1f.\n", media);
 //Resultado
 //Inserindo as notas 3, 4, 8 a média final foi de 5.8. Pesquisei uma calculdadora de média ponderada e o resultado foi igual em todos os testes.
} 
