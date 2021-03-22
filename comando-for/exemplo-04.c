/*
Escreva um programa em linguagem C que exiba o quadrado dos números ímpares contidos no intervalo de 1 a 10
*/
#include <stdio.h>
int main(){
    // for(int numero=1; numero <=10; numero=numero+2){
    //     int quadrado = numero * numero;
    //         printf("%d -> %d \n", numero, quadrado);
    // }
    for(int numero=1; numero <=10; numero++){
        int quadrado = numero * numero;
        if(numero % 2 != 0){
            printf("%d -> %d \n", numero, quadrado);
        }
    }
    return 0;
}