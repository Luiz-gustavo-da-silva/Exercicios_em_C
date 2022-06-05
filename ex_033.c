#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct participante{
    char item[10];
    double preco;
    double quantidade;
} festa;

int main(){
    festa *participantes;
    int sn=1;
    int cont=0;
    int tamanhovetor=2;
    int numpessoas=0;
    double acumulavalor=0;
    participantes = calloc(1, sizeof(festa));

    while(sn==1){
        scanf("%s", participantes[cont].item);
        scanf("%lf", &participantes[cont].preco);
        scanf("%lf", &participantes[cont].quantidade);
        scanf("%d", &sn);
        cont++;
        participantes = realloc(participantes, sizeof(festa)*tamanhovetor);
        tamanhovetor++;
    }

    scanf("%d", &numpessoas);

    for (int i = 0; i < cont; i++)
    {
        acumulavalor += participantes[i].preco*participantes[i].quantidade;
    }

    printf("Valor: R$ %.2lf\n", acumulavalor);
    printf("Divisão R$ %.2lf para cada participante.", acumulavalor/(double)(numpessoas));

    return 0;
}
