/*
Imprimindo os números de 1 ate 5
*/
#include <stdio.h>
int main(){
    for (int numero = 1; numero <= 5; numero = numero + 1){
        // imprime o valor atual a cada iteração
        printf("%d \n", numero); // 1, 2, 3, 4, 5
    }
    return 0;
}