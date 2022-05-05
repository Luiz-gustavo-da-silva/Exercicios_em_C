#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num=0;
    int numvet=0;
    int linha=0;
    int coluna=0;
    int indiceL=0;
    int indiceC=0;
    scanf("%d", &num);
    int vetor[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d ", &vetor[i]);
    }

    scanf("%d %d", &linha, &coluna);
    scanf("%d %d", &indiceL, &indiceC);
    
    printf("%d", vetor[(indiceL*coluna)+indiceC]);
    return 0;
}