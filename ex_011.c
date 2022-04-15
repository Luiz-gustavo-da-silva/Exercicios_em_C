#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int conversor(int value, int base)
{
    int result = 0;
    int temp = value;
    int mult = 1;
    while (temp > 0)
    {
        result = result + (temp % base) * mult;
        mult = mult * 10;
        temp = temp / base;
    }
    return result;
}

int main()
{
    int value, base, result, temp;
    int mult = 1;
    do
    {
        scanf("%d", &value);
        if (value == -1)
        {
            break;
        }

        scanf("%d", &base);

        switch (base)
        {
        case 2:
            result=conversor(value, 2);
            break;

        case 3:
            result=conversor(value, 3);
            break;

        case 4:
            result=conversor(value, 4);
            break;

        case 5:
            result=conversor(value, 5);
            break;

        case 6:
            result=conversor(value, 6);
            break;

        case 7:
            result=conversor(value, 7);
            break;

        case 8:
            result=conversor(value, 8);
            break;

        default:
            break;
        }
        printf("Numero %d(10) na base %d = %d(%d)\n", value, base, result, base);
    } while (value != -1);

    printf("Programa Encerrado!");
    return 0;
}