/*Crie um programa em C que le 6 valores inteiros e, em seguida, 
mostre na tela os valores lidos*/

#include <stdio.h>
#define TAM 6
int main() {
    int array[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite o elemento da posição %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Vetor original: [ ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");
    
    return 0;
}