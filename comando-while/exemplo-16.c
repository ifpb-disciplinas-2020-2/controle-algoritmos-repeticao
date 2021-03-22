#include <stdio.h>
int main(){
  int numero = 19;
  // verificando se o número informado é par e maior que zero
  while (numero <= 0 || numero % 2 != 0){ 
     printf("\n Valor não permitido");
     printf("\n Digite um valor: ");
     scanf("%d", &numero);
  }
  printf("Número: %d \n", numero); //número válido: par e positivo
  return 0; 
}