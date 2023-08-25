/*Escreva um programa que contenha duas variáveis inteiras. Leia
essas variáveis a partir do teclado. Em seguida, compare seus
endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

int main(){
    int number1;
    int number2;
    scanf("%d", &number1);
    scanf("%d", &number2);
    printf("O endereço de number1 = %p e number2 = %p \n", &number1, &number2);
    printf("O endereço de number1 = %ld e number2 = %ld \n", (long int)&number1, (long int)&number2);
    printf("O valor de number1 = %d e number2 = %d \n", number1, number2);
    if (&number1 > &number2){
        printf("O conteúdo do maior endereço é %d \n", number1);
    } else {
        printf("O conteúdo do maior endereço é %d \n", number2);
    }
    printf("O conteúdo do maior endereço é %d \n", (&number1 > &number2 ? number1 : number2));
    
    return 0;
}
