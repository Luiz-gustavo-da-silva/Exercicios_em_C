#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct aluno{
    char matricula[4];
    char nome[10];
    char codigo[4];
    double num1;
    double num2;
} turma;

int main(){
    int num =0;
    turma alunos[10];

    scanf("%d", &num);

    for(int i = 0 ; i<num ; i++){
        scanf("%4[^\n], ", alunos[i].matricula);
        scanf("%10[^\n],", alunos[i].nome);
        scanf(" %4[^\n],", alunos[i].codigo);
        scanf(" %lf,", &alunos[i].num1);
        scanf(" %lf", &alunos[i].num2);
    }

    // printf("%s", alunos[i].matricula);
    for(int i = 0 ; i<num ; i++){
        double media =((alunos[i].num1*1)+(alunos[i].num2*2))/3;
        printf("%s, média final = %.1lf", alunos[i].nome, media);
        printf("\n");
    }
    
    return 0;
}