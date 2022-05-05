#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            scanf("%d ", &matriz[i][a]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int a = 2; a >= 0; a--)
        {
            printf("%d ", matriz[a][i]);
        }
        printf("\n");
    }

    
    return 0;
}