/*
Escreva um programa em linguagem C que leia um número e exiba os seus divisores exatos.
n=10
1, 2, 5, 10
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for(int contador=1; contador<=numero; contador++){
        if(numero % contador == 0){ //resto da divisão é igual a zero
            printf("Divisor: %d \n", contador);
        }
    }

    return 0;
}