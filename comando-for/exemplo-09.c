/*
Escreva um programa em linguagem C que leia um número inteiro positivo e 
exiba a soma dos números de 1 até o valor do número informado.
n=9
soma=1+2+3+4..+9
*/
#include <stdio.h>
int main(){
    int numero;
    int soma = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for( int contador=1; contador <=numero; contador++){ // contador=contador+1; contador +=1
        soma = contador+soma;
        printf("Contador: %d, soma: %d\n",contador, soma);
    }
    printf("Valor total: %d\n", soma);
    return 0;
}