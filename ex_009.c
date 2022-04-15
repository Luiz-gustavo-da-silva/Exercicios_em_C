#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{   
    char vetor[10];
    int tamanhopalavra = 0;
    int tamanhopalavrafixo = 0;
    int cont = 0;
    int simounao;
    int imparoupar = 0;
    int rodadas = 0;

    scanf("%s", &vetor);

    tamanhopalavra = strlen(vetor) - 1;
    tamanhopalavrafixo = strlen(vetor) - 1;

    int ultimonum = (int)(vetor[tamanhopalavrafixo]);
    ultimonum = ultimonum - 48;

    if ((ultimonum % 2) > 0)
    {
        imparoupar = 0;
    }
    else
    {
        imparoupar = 1;
    }

    for (int i = 0; i < strlen(vetor) - 1; i++)
    {
        if (vetor[i] == vetor[tamanhopalavra])
        {
            cont++;
            tamanhopalavra--;
        }
        else
        {
            if (imparoupar == 0)
            {
                printf("%s não é Palíndromo e impar.", vetor);
            }
            else
            {
                printf("%s não é Palíndromo e par.", vetor);
            }

            simounao = 1;
            break;
        }
    }

    if (simounao != 1 && imparoupar == 0)
    {
        printf("%s é Palíndromo e impar.", vetor);
    }
    else if (simounao != 1 && imparoupar == 1)
    {
        printf("%s é Palíndromo e par.", vetor);
    }

    return 0;
}