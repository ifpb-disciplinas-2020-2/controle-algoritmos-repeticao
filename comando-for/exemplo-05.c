/*
Escreva um programa em linguagem C que leia um número inteiro e exiba a sua tabuada
número = 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
*/
#include <stdio.h>
int main(){
    //ler um número
    int numero;
    printf("digite um número \n");
    scanf("%d", &numero);
    for(int contador=1; contador <=10; contador++ ){
        int produto = numero*contador;
        printf("%d x %d = %d \n", numero, contador, produto);
    }
    return 0;
}