/*Crie um programa que leia duas matrizes de números reais e 
dimensões 2x3. Em seguida, imprima a soma destas duas matrizes.*/

#include <stdio.h>
#define ROWS 2
#define COLUMNS 3

int main() {
    float matrix1[ROWS][COLUMNS];
    float matrix2[ROWS][COLUMNS];
    float matrix_sum[ROWS][COLUMNS];
    
    printf("Preenchimento da matriz 1: \n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("Digite o elemento da posição [%d][%d] da matriz 1: ", i, j);
            scanf("%f", &matrix1[i][j]);
        }
    }

    printf("Preenchimento da matriz 2: \n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("Digite o elemento da posição [%d][%d] da matriz 2: ", i, j);
            scanf("%f", &matrix2[i][j]);
        }
    }

    printf("\nMatriz resultado: \n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];;
            printf("%.2f ", matrix_sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}