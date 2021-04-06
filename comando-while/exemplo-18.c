/*
Escreva um programa em linguagem C que leia um número inteiro e 
exiba quantos de algarismos o número informado possui
12  -> 2 ->       10 + 2
2   -> 1 ->          + 2 
123 -> 3 -> 100 + 20 + 3
*/
#include <stdio.h>
int main(){
  int numero, contador=1;
  printf("Digite um número: ");
  scanf("%d", &numero);
  while (numero >= 10){ //123, resto: 3, quociente: 12
    contador++;
    numero = numero / 10 ;//2  
  }
  printf("Algarismo(s): %d\n", contador);
  return 0; 
}