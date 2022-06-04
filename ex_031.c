#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int truedata(char *data, int *dia, int *mes, int *ano)
{
    char *pedaco;
    int cont = 1;
    int sn = 1;
    int *d;
    if (data[2] == '/')
    {
        pedaco = strtok(data, "/");
    }
    else if(data[2] == '-')
    {
        pedaco = strtok(data, "-");
    }else if(data[2] != '/' && data[2] != '-'){
        return 0;
    }

    while (pedaco != NULL)
    {
        if(cont == 1)
        {
             printf("%s", pedaco);
        }
        else
        {
           printf("/%s", pedaco);
        }
        cont++;

        if (data[2] == '/')
        {
            pedaco = strtok(NULL, "/");
        }
        else
        {
            pedaco = strtok(NULL, "-");
        }
        
    }
    printf("\n");
    return sn;
}
int main()
{

    char *palavra;
    char **vetor;
    int *dia = 0;
    int *mes = 0;
    int *ano = 0;
    int trueorfalse;
    int cont = 0;
    int contlinhas=1;

    vetor = (char *)calloc(1, sizeof(char));
    vetor[0]=(char *)calloc(100, sizeof(char*));
    palavra = (char *)calloc(100, sizeof(char));


    while (strcmp(palavra, "FIM") != 0)
    {
        scanf(" %100[^\n]", palavra);
        if (strcmp(palavra, "FIM") == 0)
        {
            break;
        }
        
        vetor = realloc(vetor, sizeof(char*)*contlinhas);
        vetor[contlinhas]=(char *)calloc(100, sizeof(char*));
        strcpy(vetor[cont], palavra);
        cont++;
        contlinhas++;
    }

    for (int i = 0; i < cont; i++)
    {
        trueorfalse = truedata(vetor[i], dia, mes, ano);
        if (trueorfalse == 0)
        {
            printf("INVALIDO!\n");
        }
    }

    return 0;
}