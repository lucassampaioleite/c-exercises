/*Crie uma matriz [5][5] e seguida preencha de forma que seja uma matriz identidade.*/

#include <stdio.h>
#define ROWS_COLUMNS 5

int main() {
    int matrix[ROWS_COLUMNS][ROWS_COLUMNS];
        
    for (int i = 0; i < ROWS_COLUMNS; i++) {
        for (int j = 0; j < ROWS_COLUMNS; j++) {
            if(i == j){
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    printf("Matriz identidade: \n");
    for (int i = 0; i < ROWS_COLUMNS; i++) {
        for (int j = 0; j < ROWS_COLUMNS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}