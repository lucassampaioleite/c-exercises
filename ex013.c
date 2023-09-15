/*Faça um programa com uma função que necessite de um argumento. A função retorna
o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu argumento 
for zero ou negativo.*/

#include <stdio.h>

char positiveOrNegative(double number){
    return number > 0 ? 'P' : 'N';
}

int main(){
    double number;
    scanf("%lf", &number);
    printf("%c\n", positiveOrNegative(number));
    
}