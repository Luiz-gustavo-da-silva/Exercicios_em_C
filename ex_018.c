#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    int vetornum[num];
    int vetornumdois[num];
    if (num >= 0 && num <= 10)
    {
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &vetornum[i]);
        }
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &vetornumdois[i]);
        }
        for (int i = 0; i < num; i++)
        {
            printf("%d ", vetornum[i]+vetornumdois[i]);
        }
    }else{
        printf("Muitos elementos");
    }

    return 0;
}