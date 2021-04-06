/*
Escreva um programa em linguagem C que
incremente e escreva o valor de uma única variável 
(iniciada com o valor 1) até que o usuário digite o valor zero.
*/
#include <stdio.h>
int main(){
  int numero;
  int contador = 1;
  do{ //executar no mínimo uma vez!
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Contador: %d \n", contador++);
  }while(numero !=0 );

  // printf("Digite um número: ");
  // scanf("%d", &numero);
  // while(numero !=0 ){
  //   printf("Contador: %d \n", contador++);
  //   printf("Digite um número: ");
  //   scanf("%d", &numero);
  // }
  return 0;
}