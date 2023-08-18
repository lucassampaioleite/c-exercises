/*Construa um programa em C que preenche uma matriz 10x20 
(200 elementos) com valores de 1 até 200.*/

#include <stdio.h>
int main() {
    int matriz[10][20];
    int valor = 1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}