/*Construa um programa em C que preenche um vetor de 5 posições
e em seguida copie os valores em ordem crescente para outro vetor.*/

#include <stdio.h>
#include <limits.h>
#define TAM 5
int main() {
    int original_array[TAM], sorted_array[TAM];
    
    for (int i = 0; i < TAM; i++) {
        printf("Digite o elemento da posição %d: ", i);
        scanf("%d", &original_array[i]);
    }

    printf("Vetor original: [ ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", original_array[i]);
    }
    printf("]\n");

    for (int i = 0; i < TAM; i++) {
        int smallest = 0; 
        for (int j = 0; j < TAM; j++) {
            if(original_array[j] < original_array[smallest]){
                smallest = j;
            }
        }
        sorted_array[i] = original_array[smallest];
        original_array[smallest] = INT_MAX;
    }

    printf("Vetor ordenado: [ ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", sorted_array[i]);
    }
    printf("]\n");
    
    return 0;
}