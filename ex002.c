/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre 
na tela os valores lidos na ordem inversa da leitura.*/

#include <stdio.h>
#define TAM 6
int main() {
    int array[TAM];
    
    for (int i = 0; i < TAM; i++) {
        printf("Digite o elemento da posição %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Vetor original na ordem inversa: [ ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", array[TAM-1-i]);
    }
    printf("]\n");

    printf("Vetor original na ordem inversa: [ ");
    for (int i = TAM-1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("]\n");

    return 0;
}
