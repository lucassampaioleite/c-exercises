/*Escreva uma função que dado um número real passado como parâmetro por valor, 
retorne a parte inteira e a parte fracionária desse número por referência.*/

#include <stdio.h>

void splitNumber(double num, int *integerPart, double *remainder) {
    *integerPart = (int)num;
    *remainder = num - *integerPart;
}

int main(){
    double number, remainder;
    int integerPart;

    scanf("%lf", &number);
    splitNumber(number, &integerPart, &remainder);
    printf("Número %lf: %d e %lf \n", number, integerPart, remainder);
}