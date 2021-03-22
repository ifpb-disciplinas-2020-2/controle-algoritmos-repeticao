/*
Escreva um programa em linguagem C que leia um número inteiro positivo e não-nulo,
calcule e exiba o valor de H, conforme a seguinte equação:
H = 1 + 1/2 + 1/3 + 1/4 +... + 1/N
*/
#include <stdio.h>
int main(){
    int numero;
    float H = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for(int contador=1; contador<=numero; contador++){
        H = H + ((float) 1/contador);
        // printf("Contador: %d, H: %lf\n", contador, H);
    }
    printf("Valor de H: %.3f\n", H);
    return 0;
}