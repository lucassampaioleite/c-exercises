/*Faça um programa para imprimir de acordo com o desenho abaixo para um n informado 
pelo usuário. Use uma função que receba um valor n inteiro e imprima até a n-ésima
linha.
1
2  2 
3  3  3 
4  4  4 
   ...
n  n  n  n  n  n . . . n
*/

#include <stdio.h>

void printLadderFormat(int number){
    int i, j;
    for(i=1; i<=number; i++){
        for(j=1; j<=i; j++){
            printf("%d ",i);
        }
        printf("\n"); 
    }
}

int main(){
    int number;
    scanf("%d", &number);
    printLadderFormat(number);    
}