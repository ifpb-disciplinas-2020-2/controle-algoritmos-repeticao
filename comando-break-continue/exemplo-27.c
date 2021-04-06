#include <stdio.h>
int main(){
  for (int cont = 0; cont <= 10; cont++){
    if (cont == 5)
      continue; //volta para o comando de repetição e não o interrompe
    printf("Contador: %d\n", cont);
  }
  return 0;
}