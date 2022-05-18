#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void strsplit(char frase[51], char caracter[51], char conjunto_de_palavras[20][51])
{
    char *pedaco;
    int cont = 0;

    if (caracter[0] == ' ')
    {
        pedaco = strtok(frase, " ");
    }
    else
    {
        pedaco = strtok(frase, caracter);
    }

    while (pedaco != NULL)
    {
        // printf("%s\n", pedaco);
        strcpy(conjunto_de_palavras[cont], pedaco);
        cont++;
        if (caracter[0] == ' ')
        {
            pedaco = strtok(NULL, " ");
        }
        else
        {
            pedaco = strtok(NULL, caracter);
        }
    }

    for (int i = 0; i < cont; i++)
    {
        printf("%s\n", conjunto_de_palavras[i]);
    }
}

int main()
{

    char frase[51]=" ";
    char conjunto_de_palavras[20][51];
    char palavra[51]=" ";

    fgets(frase, 50, stdin);
    scanf("%s", &palavra);

    strsplit(frase, palavra, conjunto_de_palavras);

    return 0;
}