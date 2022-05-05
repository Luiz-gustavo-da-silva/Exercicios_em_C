#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int L1, C1, acumulaL, acumulaC = 0;
    char matriz[7][7] = {{'_', '_', '_', '_', '_', '_', '_'},
                         {'_', '_', '_', '_', '_', '_', '_'},
                         {'_', '_', '_', '_', '_', '_', '_'},
                         {'_', '_', '_', '_', '_', '_', '_'},
                         {'_', '_', '_', '_', '_', '_', '_'},
                         {'_', '_', '_', '_', '_', '_', '_'},
                         {'_', '_', '_', '_', '_', '_', '_'}};

    scanf("%d %d", &L1, &C1);
    while (L1 != -1 && C1 != -1)
    {

        acumulaL = L1;
        acumulaC = C1;
        scanf("%d %d", &L1, &C1);

        if (acumulaC > C1)
        {
            for (int i = acumulaL; i <= L1; i++)
            {
                for (int a = acumulaC; a >= C1; a--)
                {
                    matriz[i][a] = '#';
                }
            }
        }
        else if (L1 == acumulaL || C1 == acumulaC)
        {
            for (int i = acumulaL; i <= L1; i++)
            {
                for (int a = acumulaC; a <= C1; a++)
                {
                    matriz[i][a] = '#';
                }
            }
        }
        else if (acumulaL > L1)
        {
            for (int i = acumulaL; i >= L1; i--)
            {
                for (int a = acumulaC; a <= C1; a++)
                {
                    matriz[i][a] = '#';
                }
            }
        }
        
    }

    for (int i = 0; i < 7; i++)
    {
        for (int a = 0; a < 7; a++)
        {
            printf("%c", matriz[i][a]);
        }
        printf("\n");
    }

    return 0;
}