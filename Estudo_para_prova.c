#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char **prefix;
    char **suffix;
    char **palavras;
    char palavra[50];
    int cont=0;
    int sn=0;
    int n=0;
    int contador=1;
    int quantpref, quantsuf=0;

    // printf("primeiro \n");
    scanf("%d", &n);
    
    prefix = malloc(sizeof(char*)*n);

    for(int i=0; i<n; i++){
        prefix[i] = malloc(sizeof(char)*50);
    }
    quantpref = n;

    for (int i = 0; i < n; i++)
    {
        scanf(" %50[^\n]", prefix[i]);
    }
    // printf("segundo \n");
    scanf("%d", &n);
    quantsuf = n;
    suffix = malloc(sizeof(char*)*n);

    for(int i=0; i<n; i++){
        suffix[i] = malloc(sizeof(char)*50);
    }

    for (int i = 0; i < n; i++)
    {
        scanf(" %50[^\n]", suffix[i]);
    }

    // printf("terceiro \n");
    while(sn!=-1){

        // printf("Estou lendo \n");
       
        scanf(" %50[^\n]", palavra);

        if(strcmp(palavra,"-1")==0){
            sn=-1;
        }else{
            palavras = malloc(sizeof(char*)*contador);

            for(int i=0; i<contador; i++){
                palavras[i] = malloc(sizeof(char)*50);
            }
            strcpy(palavras[cont], palavra);
            contador++;
            cont++;
        }

    }

    // remove prefixo

    char ** novovetor;

    novovetor = malloc(sizeof(char*)*contador);

    for(int i=0; i < contador; i++){
        novovetor[i] = malloc(sizeof(char)*50);
    }

   

   

    

    return 0;
}