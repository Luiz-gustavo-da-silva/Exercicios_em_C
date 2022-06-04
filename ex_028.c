#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double * n_repete(double *vetor, int n){
    int sn=0;
    double *novovetor;
    int contador=1;
    int cont=2;
    novovetor = (double*)calloc(1, sizeof(double*));
    
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < n; a++)
        {
            if(vetor[i]==vetor[a]){
                sn++;
            }
        }
        if(sn==1){
            novovetor[contador]=vetor[i];
            contador++;
            cont++;
            novovetor=realloc(novovetor, sizeof(double*)*cont);
        }
        sn=0;
    }

    novovetor[0]=cont-1;
    return novovetor;
}

int main()
{
    int n = 0;
    double *vetor;
    double *novovetor;
    int *numnovovetor=0;
    scanf("%d", &n);

    vetor = calloc(n, sizeof(double));
    
    // novovetor = (double*)calloc(n, sizeof(double*));

    for(int i=0; i<n; i++)
        scanf("%lf", &vetor[i]);

    novovetor= n_repete(vetor, n);
    
    printf("[");
    for(int i = 1; i < novovetor[0]; i++){
        if(i==1){
            printf("%.4lf", novovetor[i]);
        }else{
            printf(", %.4lf", novovetor[i]);
        }
    }
    printf("]");

    free(novovetor);
    free(vetor);
    
    return 0;
}