/*Faça um programa para ler a nota da prova de 15 alunos e armazene-as 
em um vetor. Em seguida, calcule e imprima a media geral da turma.*/

#include <stdio.h>
#include <limits.h>
#define NUMBER_STUDENTS 15
int main() {
    float grades[NUMBER_STUDENTS], grades_sum = 0.0, class_avg;

    for (int i = 0; i < NUMBER_STUDENTS; i++) {
        printf("Digite a nota do %dº estudante: ", i+1);
        scanf("%f", &grades[i]);
        grades_sum += grades[i];
    }

    class_avg = grades_sum/NUMBER_STUDENTS;    
    printf("\nA média geral da turma é: %.2f\n", class_avg); 
       
    return 0;
}
