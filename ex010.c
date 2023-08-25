/*Escreva um programa que contenha duas variáveis inteiras. Compare
os seus endereços e em seguida exiba o maior endereço.*/

#include <stdio.h>

int main(){
    int number1 = 5;
    int number2 = 10;
    printf("O endereço de number1 = %p e number2 = %p \n", &number1, &number2);
    printf("O endereço de number1 = %ld e number2 = %ld \n", (long int)&number1, (long int)&number2);
    printf("O maior endereço é %p \n", (&number1 > &number2 ? &number1 : &number2));

    return 0;
}
