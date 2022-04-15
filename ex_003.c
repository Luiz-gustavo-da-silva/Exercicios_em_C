#include <stdio.h>

int main(void)
{

    int valor = 0;
    scanf("%d", &valor);

    if (valor < 0 || valor > 255)
    {
        printf("Número %d não suportado!!", valor);
    }
    else
    {
        if (valor >= 128)
        {
            printf("1");
            valor = valor - 128;
        }
        else
        {
            printf("0");
        }
        if (valor >= 64)
        {
            printf("1");
            valor = valor - 64;
        }
        else
        {
            printf("0");
        }
        if (valor >= 32)
        {
            printf("1");
            valor = valor - 32;
        }
        else
        {
            printf("0");
        }
        if (valor >= 16)
        {
            printf("1");
            valor = valor - 16;
        }
        else
        {
            printf("0");
        }
        if (valor >= 8)
        {
            printf("1");
            valor = valor - 8;
        }
        else
        {
            printf("0");
        }
        if (valor >= 4)
        {
            printf("1");
            valor = valor - 4;
        }
        else
        {
            printf("0");
        }

        if (valor >= 2)
        {
            printf("1");
            valor = valor - 2;
        }
        else
        {
            printf("0");
        }

        if (valor >= 1)
        {
            printf("1");
            valor = valor - 1;
        }
        else
        {
            printf("0");
        }
    }
}