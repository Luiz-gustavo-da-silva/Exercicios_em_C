#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void primo(int num, int primeiravez)
{
    int cont = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        if (primeiravez == 1)
        {
            printf("O numero %d e primo!", num);
        }
        else
        {
            printf("\nO numero %d e primo!", num);
        }
    }
    else
    {
        if (primeiravez == 1)
        {
            printf("O numero %d nao e primo!", num);
        }
        else
        {
            printf("\nO numero %d nao e primo!", num);
        }
    }
}

int somadivisoresfunc(int num, int primeiravez)
{
    int somadosdivisores = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            somadosdivisores = somadosdivisores + i;
        }
    }
    return somadosdivisores;
}
void amigos(int primeiravez, int num, int acumuladorsomadosdivisores, int somadosdivisores, int numanterior)
{

    if (primeiravez != 1)
    {
        if (acumuladorsomadosdivisores == num && somadosdivisores == numanterior)
        {
            printf(" Os numeros <%d,%d> sao amigos!", numanterior, num);
        }
        else
        {
            printf(" Os numeros <%d,%d> nao sao amigos!", numanterior, num);
        }
    }
}

int main()
{
    int num = 1;
    int numanterior;
    int somadosdivisores = 0;
    int acumuladorsomadosdivisores = -1;
    int primeiravez = 0;

    while (num != 0)
    {

        scanf("%d", &num);
        primeiravez++;
        if (num == 0)
        {
            break;
        }

        primo(num, primeiravez);

        somadosdivisores = somadivisoresfunc(num, primeiravez);

        amigos(primeiravez, num, acumuladorsomadosdivisores, somadosdivisores, numanterior);

        acumuladorsomadosdivisores = somadosdivisores;
        somadosdivisores = 0;
        numanterior = num;
    }
    return 0;
}