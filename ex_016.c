#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetorlum[3];
    int vetorldois[3];
    int vetorltres[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetorlum[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetorldois[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetorltres[i]);
    }

    printf("A = [");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            printf("%d",  vetorlum[i]+vetorldois[i]-(5*vetorltres[i]));
        }else{
            printf("%d,", vetorlum[i]+vetorldois[i]-(5*vetorltres[i]));
        }
    }
    printf("]");

    return 0;
}