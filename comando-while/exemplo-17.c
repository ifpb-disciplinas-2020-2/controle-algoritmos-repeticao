/*
Escreva um programa em linguagem C que leia uma quantidade indeterminada de números inteiros, 
calcule e exiba quantos números positivos e negativos foram digitados.
 O algoritmo deve continuar até ser digitado o zero
*/
#include <stdio.h>
int main(){
  int numero;
  int positivos=0, negativos=0;
  printf("Digite um número: ");
  scanf("%d", &numero);
  while(numero!=0){
    if(numero > 0){
      positivos++; //positivos = positivos+1;
    }
    if(numero <0 ){
      negativos++;
    }
    printf("Digite um número: ");
    scanf("%d", &numero);
  }
  printf("Positivos: %d, Negativos: %d\n", positivos, negativos);
  return 0; 
}