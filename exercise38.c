#include <stdio.h>

int main(){
  //Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve ser lido outro valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser mostrada a mensagem ‘senha incorreta’. Caso a senha esteja correta, deve ser mostrada a mensagem ‘Acesso permitido’.

  int user_code = 1234;
  int code = 0;
  int user_password = 9999;
  int password = 0;

  printf("Informe o seu código de usuário: \n");
  scanf("%d", &code);

  if(code != user_code){
    printf("Usuário inválido!\n");
  } else {
    printf("Informe a sua senha:\n");
    scanf("%d", &password);
    if(password != user_password) {
      printf("Senha incorreta!\n");
    } else {
      printf("Acesso permitido.\n");
    }
  }
  //Resultado
  //Programa funcionou corretamente, somente avançando para acesso permitido se o usuário inserir corretamente o código de acesso e a senha.
}