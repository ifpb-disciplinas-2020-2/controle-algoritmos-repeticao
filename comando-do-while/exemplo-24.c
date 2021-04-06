/*
Escreva um programa em linguagem C que leia um número indeterminado de números positivos. 
O algoritmo deve calcular, imprimir a soma e a média, e continuar até ser digitado o zero. 
media = soma/n
*/
#include <stdio.h>
int main(){
  int soma = 0;
  int contador = 0;
  int numero;
  double media;
  do{
    printf("Digite um número: ");
    scanf("%d", &numero);
    soma = soma + numero; // soma +=numero;
    contador++;
  }while(numero !=0 );
  media = ((double) soma / contador);
  printf("Soma: %d, Média: %.2lf \n", soma, media);
  return 0;
}