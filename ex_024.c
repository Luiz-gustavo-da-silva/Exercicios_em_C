#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void strremove(char s1[], char s2[], char res[])
{
    int cont = 0;
    int tamanhostr1 = ((int)(strlen(s1)) - 1);

    for (int i = tamanhostr1; i < (int)(strlen(s2)); i++)
    {
        res[cont] = s2[i];
        cont++;
    }

    printf("%s", res);
}

void strinsert(char s1[], char s2[], char res[], int pos)
{
    int cont=0;

    for (int i = 0; i < strlen(s2); i++)
    {

        if (i == pos || pos == 0)
        {
            for (int a = 0; a < strlen(s1) - 1; a++)
            {
                res[cont] = s1[a];
                cont++;
            }
            pos = -1;
        }
        res[cont] = s2[i];
        cont++;
    }
    printf("%s", res);
}

int main()
{
    char opcao[51];
    int teste = 0;
    char str1[51] = " ";
    char str2[51] = " ";
    char testestring[51] = "strremove\n";
    char res[51] = " ";
    int pos = 0;

    fgets(opcao, 50, stdin);
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);

    teste = strcmp(testestring, opcao);

    if (teste == 0)
    {
        strremove(str1, str2, res);
    }
    else
    {
        scanf("%d", &pos);
        strinsert(str1, str2, res, pos);
    }
    return 0;
}