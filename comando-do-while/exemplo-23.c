// O que esse algoritmos faz?
#include <stdio.h>
# define CONTROLE 1 //constante 
int main(){
  int opcao;
  // const int CONTROLE=1;
  do {
    printf("bloco de código a ser repetido \n"); //exemplificar
    printf("Repetir a execução? \n Para sim, digite 1; \n Para não, outra tecla\n");
    scanf("%i", &opcao);
  } while (opcao == CONTROLE);
  return 0;
}