/*
1. Crie um programa que:
a) Aloque dinamicamente um vetor de 5 números inteiros;
b) Solicite que o usuário digite os 5 números para compor o espaço alocado;
c) Mostre na tela os 5 números armazenados;
d) Libere a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int *pArray; 
  pArray = (int*) malloc(5 * sizeof(int));

  if(pArray == NULL){
    printf("Erro: memória insuficiente! \n");
    exit(1);
  }

  printf("Digite os elementos do vetor: \n");
  for (int i=0; i<5; i++){
    printf("p[%d]: ",i);
    scanf("%d", &pArray[i]);
  }

  printf("\nImprimindo os elementos do vetor: \n");
  for (int i=0; i<5; i++){
    printf("p[%d] = %d \n",i, pArray[i]);
  }

  free(pArray);
  return 0;
}