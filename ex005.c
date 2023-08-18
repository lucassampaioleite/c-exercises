/*Faça um programa que preencha um vetor com 10 números reais. 
Em seguida, calcule e mostre a quantidade de numeros negativos 
e a soma dos números positivos desse vetor.*/

#include <stdio.h>
#define TAM 10
int main() {
    float array[TAM], sum_positives;
    int counter_negatives;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o elemento da posição %d: ", i);
        scanf("%f", &array[i]);
    }

    for (int i = 0; i < TAM; i++) {
        if (array[i] < 0) {
            counter_negatives++;
        } else {
            sum_positives += array[i];
        }
    }
    
    printf("Quantidade de números negativos: %d\n", counter_negatives);
    printf("Soma dos números positivos: %.2f\n", sum_positives);
    
    return 0;
}
