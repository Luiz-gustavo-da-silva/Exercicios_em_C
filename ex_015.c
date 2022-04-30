#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int vetornumeros[20];
    int vetormultiplotres[20];
    int vetormultiploquatro[20];
    int vetorsemmultiplos[20];
    int contmulttres, contmultnemum = 0;
    int contmultquatro=0;
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &vetornumeros[i]);

        if (vetornumeros[i] % 3 == 0)
        {
            vetormultiplotres[contmulttres] = vetornumeros[i];
            contmulttres++;
        }

        if (vetornumeros[i] % 4 == 0)
        {
            vetormultiploquatro[contmultquatro] = vetornumeros[i];
            contmultquatro++;
        }

        if (vetornumeros[i] % 3 != 0 && vetornumeros[i] % 4 != 0)
        {
            vetorsemmultiplos[contmultnemum] = vetornumeros[i];
            contmultnemum++;
        }
    }

    printf("a)");
    for (int i = 0; i < contmulttres; i++)
    {
        printf("%d", vetormultiplotres[i]);
        if (i != (contmulttres - 1))
        {
            printf(",");
        }
    }
    printf("\n");
    printf("b)");
    for (int i = 0; i < contmultquatro; i++)
    {
        printf("%d", vetormultiploquatro[i]);
        if (i != (contmultquatro - 1))
        {
            printf(",");
        }
    }
    printf("\n");
    printf("c)");
    for (int i = 0; i < contmultnemum; i++)
    {
        printf("%d", vetorsemmultiplos[i]);
        if (i != (contmultnemum - 1))
        {
            printf(",");
        }
    }

    return 0;
}