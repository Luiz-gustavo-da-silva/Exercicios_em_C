#include <stdio.h>

int main(void)
{

    char v1, v2;
    char operando;
    char matrizdechar[4][3];
    int cont1 = 0;
    int cont2 = 0;

    // valores fixos
    matrizdechar[0][0] = '0';
    matrizdechar[0][1] = '0';
    matrizdechar[1][0] = '0';
    matrizdechar[1][1] = '1';
    matrizdechar[2][0] = '1';
    matrizdechar[2][1] = '0';
    matrizdechar[3][0] = '1';
    matrizdechar[3][1] = '1';
    // fim

    scanf(" %c %c %c", &v1, &operando, &v2);

    printf("-------\n");
    printf("|%c|%c|r|\n", v1, v2);
    printf("+-+-+-+\n");
    if (operando == '&')
    {
        if (matrizdechar[0][0] == '0' || matrizdechar[0][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[0][0], matrizdechar[0][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[0][0], matrizdechar[0][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[1][0] == '0' || matrizdechar[1][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[1][0], matrizdechar[1][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[1][0], matrizdechar[1][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[2][0] == '0' || matrizdechar[2][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[2][0], matrizdechar[2][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[2][0], matrizdechar[2][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[3][0] == '0' || matrizdechar[3][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[3][0], matrizdechar[3][1]);
            printf("------\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[3][0], matrizdechar[3][1]);
            printf("-------\n");
        }
    }
    else if (operando == '|')
    {
        if (matrizdechar[0][0] == '0' && matrizdechar[0][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[0][0], matrizdechar[0][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[0][0], matrizdechar[0][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[1][0] == '0' && matrizdechar[1][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[1][0], matrizdechar[1][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[1][0], matrizdechar[1][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[2][0] == '0' && matrizdechar[2][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[2][0], matrizdechar[2][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[2][0], matrizdechar[2][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[3][0] == '0' && matrizdechar[3][1] == '0')
        {
            printf("|%c|%c|0|\n", matrizdechar[3][0], matrizdechar[3][1]);
            printf("------\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[3][0], matrizdechar[3][1]);
            printf("-------\n");
        }
    }
    else if (operando == '^')
    {
        if (matrizdechar[0][0] == '0' && matrizdechar[0][1] == '0' || matrizdechar[0][0] == '1' && matrizdechar[0][1] == '1')
        {
            printf("|%c|%c|0|\n", matrizdechar[0][0], matrizdechar[0][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[0][0], matrizdechar[0][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[1][0] == '0' && matrizdechar[1][1] == '0' || matrizdechar[1][0] == '1' && matrizdechar[1][1] == '1')
        {
            printf("|%c|%c|0|\n", matrizdechar[1][0], matrizdechar[1][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[1][0], matrizdechar[1][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[2][0] == '0' && matrizdechar[2][1] == '0' || matrizdechar[2][0] == '1' && matrizdechar[2][1] == '1')
        {
            printf("|%c|%c|0|\n", matrizdechar[2][0], matrizdechar[2][1]);
            printf("+-+-+-+\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[2][0], matrizdechar[2][1]);
            printf("+-+-+-+\n");
        }

        if (matrizdechar[3][0] == '0' && matrizdechar[3][1] == '0' || matrizdechar[3][0] == '1' && matrizdechar[3][1] == '1')
        {
            printf("|%c|%c|0|\n", matrizdechar[3][0], matrizdechar[3][1]);
            printf("-------\n");
        }
        else
        {
            printf("|%c|%c|1|\n", matrizdechar[3][0], matrizdechar[3][1]);
            printf("-------\n");
        }
    }
}