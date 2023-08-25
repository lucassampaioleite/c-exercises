/*Escreva um programa que declare um inteiro, um double e um char, 
e ponteiros para inteiro, double, e char. Associe as variáveis aos
ponteiros. Modifique os valores de cada variável usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main() {
    int integerNumber = 1;
    double realNumber = 1.0;
    char character = 'L';
  
    int *pointerInteger = &integerNumber;
    double *pointerReal = &realNumber;
    char *pointerCharacter = &character;

    printf("Valores antes das modificações: \n");
    printf("Inteiro = %d, real = %lf, caractere = %c \n", integerNumber, realNumber, character);
    printf("Inteiro = %d, real = %lf, caractere = %c \n", *pointerInteger,*pointerReal, *pointerCharacter);

    *pointerInteger = 5;
    *pointerReal = 5.0;
    *pointerCharacter = 'A';

    printf("Valores após as modificações: \n");
    printf("Inteiro = %d, real = %lf, caractere = %c \n", integerNumber, realNumber, character);
    printf("Inteiro = %d, real = %lf, caractere = %c \n", *pointerInteger,*pointerReal, *pointerCharacter);
    
    return 0;
}