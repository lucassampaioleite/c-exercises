/*Escreva um programa que leia um número decimal (até 3 dígitos) e escreva o seu 
equivalente em numeração romana.*/

#include <stdio.h>

void convertToRoman(int decimal){

    int i, quotient, dec[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char rom[13][2] = {{'M',' '}, {'C','M'}, {'D',' '}, {'C','D'}, {'C',' '}, {'X','C'}, {'L',' '},
                       {'X','L'}, {'X',' '}, {'I','X'}, {'V',' '}, {'I','V'}, {'I',' '}};
    
    for (i=0; i<13; i++){
        quotient = decimal/dec[i];  
        decimal = decimal%dec[i];    
        if(quotient>0){             
            for(int k=0; k<quotient; k++){
                for(int j=0; j<2; j++){ 
                    if(rom[i][j]!=' ')     
                        printf("%c",rom[i][j]);
                }
            }
        }
    }
    printf("\n");
}


int main(){
    convertToRoman(1993);
}