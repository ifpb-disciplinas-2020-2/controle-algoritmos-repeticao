/*
Escreva um programa em linguagem C que incremente e escreva o valor 
de uma única variável (iniciada com o valor 1) até que o usuário digite o valor zero
*/
#include <stdio.h>
int main(){
    int contador = 1;
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    while (numero != 0){
        printf("Contador: %d", ++contador);
        printf("\nDigite um número: ");
        scanf("%d", &numero);
    }
    return 0;
}