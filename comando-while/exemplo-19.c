/*
Escreva um programa em linguagem C que calcule e exiba o valor de H,
 a partir dos N primeiros termos. Como entrada, 
 o usuário necessita informar um número (N) 
 positivo e não nulo (deve ser validado esse valor).

H = 1        - 1/3       + 1/5      - 1/7 + 1/9...
H = 1/(2n-1) - 1/(2n-1)  + 1/(2n-1) - 1/(2n-1)
*/
#include <stdio.h>
int main()
{
  int numero, contador = 1;
  float H = 0;
  printf("Digite um n-esimo termo da sequência: ");
  scanf("%d", &numero);
  // int sinal = 1;
  while (contador <= numero){
    if(contador % 2 ==0){
      H = H - ((float)1/(2*contador-1));
    }else{
      H = H + ((float)1/(2*contador-1));
    }
    // H = H + sinal * ((float)1 / (2 * contador - 1));
    // sinal = sinal * -1;
    contador++;
  }
  printf("Valor de H: %f\n", H);
  return 0;
}