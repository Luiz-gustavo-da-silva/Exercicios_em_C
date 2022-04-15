#include <stdio.h>
#include <string.h>
int main()
{
    double nota1, nota2, nota3=0;
    int peso1, peso2, peso3=0;
    double resultado=0;
    double notarec=0;
    scanf("%lf, %d", &nota1, &peso1);
    scanf("%lf, %d", &nota2, &peso2);
    scanf("%lf, %d", &nota3, &peso3);

    resultado=(double)((double)((double)(nota1*peso1)+(double)(nota2*peso2)+(double)(nota3*peso3))/(double)(peso1+peso2+peso3));

    if (resultado<3)
    {
        printf("O aluno foi REPROVADO com média %.2lf", resultado);
    }else if(resultado>=3 && resultado<7){
        notarec = 10-resultado;
        printf("O aluno ficou em RECUPERAÇÂO com média %.2lf precisando de %.2lf", resultado, notarec);
    }else if (resultado>=7)
    {
        printf("O aluno foi APROVADO com a média %.2lf", resultado);
    }
    
    
}