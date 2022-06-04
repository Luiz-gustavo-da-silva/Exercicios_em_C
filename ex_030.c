#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int * truedata(char *data, int dia, int mes, int ano)
{
    int * resultado;
    resultado = (int *)calloc(4, sizeof(int));

    resultado[0]=1;
    resultado[1]=dia;
    resultado[2]=mes;
    resultado[3]=ano;

    if(dia>=1 && dia<=31){
        resultado[0]=1;
    }else{
        resultado[0]=0;
        return resultado;
    }
    if(mes>=1 && mes<=12){
        resultado[0]=1;
    }else{
        resultado[0]=0;
        return resultado;
    }

    if(data[2]!='/' && data[2]!='-'){
        resultado[0]=0;
        return resultado;
    }
    return resultado;
}
int main()
{

    char *palavra;
    int dia = 0;
    int mes = 0;
    int ano = 0;
    int *resultado;
    
    resultado = (int *)calloc(4, sizeof(int));
    palavra = (char *)calloc(255, sizeof(char));

    while (strcmp(palavra, "FIM") != 0)
    {
        scanf(" %255[^\n]", palavra);
        if (strcmp(palavra, "FIM") == 0)
        {
            break;
        }
        if(palavra[2]=='/'){
            sscanf(palavra, "%d/%d/%d", &dia, &mes, &ano);
        }else{
            sscanf(palavra, "%d-%d-%d", &dia, &mes, &ano);
        }
        

        resultado = truedata(palavra, dia, mes, ano);
        if (resultado[0] == 0)
        {
            printf("INVALIDO!\n");
        }else{
            if(resultado[1]<10){
                printf("0%d/",resultado[1]);
            }else{
                printf("%d/",resultado[1]);
            }

            if(resultado[2]<10){
                printf("0%d/",resultado[2]);
            }else{
                printf("%d/",resultado[2]);
            }

            printf("%d", resultado[3]);
            printf("\n");
        }
        
    }

    

    return 0;
}