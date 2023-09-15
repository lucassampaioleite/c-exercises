/*Crie uma função que receba como argumento um vetor e o seu tamanho e retorna a 
soma de todos os elementos do vetor*/

#include <stdio.h>

double sumArray(double array[], int size) {
    double sum = 0;    
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }    
    return sum;
}

int main(){
    double array[] = {1.0, 2.5, 3.2, 4.1, 5.8};
    int size = sizeof(array) / sizeof(array[0]); 
    
    printf("Resultado: %.2lf\n", sumArray(array, size));
}