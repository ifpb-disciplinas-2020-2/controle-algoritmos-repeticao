/*
Escreva um programa em linguagem C que simule
um jogo de adivinhação. O algoritmo deve calcular um número aleatório (selecionado) e 
ler uma quantidade indefinida de números positivos (informado). 
Ele será finalizado quando os números selecionado e informados forem iguais ou quando ultrapassar cinco tentativas. 
Por fim, devem ser exibidos: o número selecionado e a quantidade de tentativas.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int selecionado = rand() % 10;
  int informado;
  int tentativas=0;

  do{
    printf("Digite um número: ");
    scanf("%d", &informado);
    tentativas++;
  } while (informado != selecionado && tentativas < 5);
  if(informado == selecionado){
    printf("Parabéns, você acertou o número!!! \n");
  }else{
    printf("O número selecionado foi: %d \n", selecionado);
  }
  printf("Tentativas: %d \n", tentativas);
  return 0;
}