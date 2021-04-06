#include <stdio.h>
int main(){
  
for (int cont=0; cont <= 10; cont++){
  printf("Contador: %d\n", cont);
  if(cont==5) 
    break;
}
// int divisores =0;
//   int numero = 110000000;
//   for(int cont=1; cont<= numero; cont++){
//     if(numero % cont ==0)
//       divisores++;
//     if(divisores > 2) break;  
//   }
//   printf("Divisors: %d \n", divisores);
//   if(divisores ==2){
//     printf("primo!!\n");
//   }
return 0;
}