#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char A[41];
    char B[41];
    int cont = 0;
    int tamanhocerto = 0;
    int conttamanhovetor = 0;
    int vetorresultado[10];
    fgets(A, 40, stdin);
    fgets(B, 40, stdin);

    for (int i = 0; i < strlen(B) - 1; i++)
    {
        cont = i;
        if (toupper(B[i]) == toupper(A[0]))
        {
            for (int a = 0; a < strlen(A) - 1; a++)
            {
                if (toupper(B[cont]) == toupper(A[a]))
                {
                    cont++;
                    tamanhocerto++;
                }
            }
        }
        if (tamanhocerto == strlen(A) - 1)
        {
            vetorresultado[conttamanhovetor] = i;
            conttamanhovetor++;
        }
        tamanhocerto = 0;
    }

    printf("Repetições: %d\n", conttamanhovetor);
    
    if (conttamanhovetor != 0)
    {
        printf("Posições: ");
        for (int i = 0; i < conttamanhovetor; i++)
        {
            printf("%d ", vetorresultado[i]);
        }
    }

    return 0;
}