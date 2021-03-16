/*
Escreva um programa em linguagem C que exiba a seguinte mensagem:
0 5 10 15 20 25 30 35 40 45 50 Terminou!

*/
#include <stdio.h>
int main(){
    // printf("0 5 10 15 20 25 30 35 40 45 50 Terminou!");
    for(int contador=0; contador <=50; contador=contador+5){
        printf("%d ", contador);
    }
    // for(int contador=0; contador <=10; contador=contador+1){
    //     printf("%d ", contador*5);
    // }
    printf("Terminou! \n");
    return 0;
}