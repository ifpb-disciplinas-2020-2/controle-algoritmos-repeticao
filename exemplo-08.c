/*
Escreva um programa em linguagem C que leia 8 números inteiros e exiba o maior valor lido
*/
#include <stdio.h>
int main(){
    int maior=0;
    for(int contador =1; contador<=8; contador++){
        int numero;
        printf("Digite um número: \n");
        scanf("%d", &numero);
        if(numero > maior) {
            maior = numero;
        }
    }
    printf("Maior: %d\n", maior);
    return 0;
}