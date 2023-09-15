/*Faça um programa definindo uma função que necessite de três argumentos, e que retorne 
a soma desses três argumentos. Utilize passagem de parâmetro por referência.*/

#include <stdio.h>

double sum(double *num1, double *num2, double *num3){
    return *num1 + *num2 + *num3;
}

int main(){

    double number1 = 1.0, number2 = 2.5, number3 = 3.2;
    printf("Resultado: %.2lf \n", sum(&number1, &number2, &number3));
    
}
