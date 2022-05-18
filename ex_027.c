#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[101];
    char *pedaco;
    int cont, contincidencia = 0;
    char conjunto_de_palavras[50][50];
    char conjunto_de_palavras_final[50][50];
    int i, a = 0;
    int teste, teste1 = 0;
    int cont1 = 0;
    int teste3 = 0;
    fgets(texto, 100, stdin);

    pedaco = strtok(texto, " ");

    while (pedaco != NULL)
    {
        // printf("%s\n", pedaco);
        strcpy(conjunto_de_palavras[cont], pedaco);
        cont++;
        pedaco = strtok(NULL, " ");
    }

    for (i = 0; i < cont; i++)
    {
        for (a = 0; a < cont; a++)
        {
            teste = strcmp(conjunto_de_palavras[i], conjunto_de_palavras[a]);
            if (teste == 0)
            {
                contincidencia++;
            }
        }

        for (int g = 0; g < cont1; g++)
        {
            teste1 = strcmp(conjunto_de_palavras_final[g], conjunto_de_palavras[i]);
            if (teste1 == 0)
            {
                teste3 = 1;
            }
        }

        if (teste3 == 0)
        {
            printf("%d: %s\n", contincidencia, conjunto_de_palavras[i]);
            strcpy(conjunto_de_palavras_final[cont1], conjunto_de_palavras[i]);
            cont1++;
        }
        teste3=0;
        contincidencia = 0;
    }

    return 0;
}
