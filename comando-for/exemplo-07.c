/*
Escreva um programa em linguagem C que leia 5 números reais, 
verifique e exiba quantos dos números lidos são maiores que 10
*/
#include <stdio.h>
int main(){
    int numeroMaiores = 0;
    for (int contador =1; contador <=5 ; contador++){
        float numero;
        printf("Digite um numero: \n");
        scanf("%f",&numero);
        if(numero > 10) {
            numeroMaiores = numeroMaiores + 1;
        }
        // numeroMaiores = numero>10 ? numeroMaiores+1: numeroMaiores;
    }
    printf("Tivemos %d números maiores que 10 \n", numeroMaiores);
    
    return 0;
}