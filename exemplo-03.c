/*
Escreva um programa em linguagem C que exiba os números de 10 a 1 (decrescente)
*/
#include <stdio.h>
int main(){
    for (int numero = 10; numero >= 1; numero = numero - 1){
        printf("%d \n", numero); 
    }
    return 0;
}