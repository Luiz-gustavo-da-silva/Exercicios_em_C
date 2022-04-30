#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mesclanum(int vetorum[], int vetordois[]){
    int tamanhovetorum =sizeof(vetorum)/4;
    int tamanhovetordois =sizeof(vetordois)/4;
    printf("%d %d", tamanhovetorum,tamanhovetordois);

    // for (int i = 0; i < (+); i++)
    // {
    //     if(i%2==0){
    //         printf("%d ", vetorum[i]);
    //     }else{
    //         printf("%d ", vetordois[i]);
    //     }
    // }
    
 
}

int main()
{
    int tamanhovetorum=0;
    int tamanhovetordois=0;

    scanf("%d", &tamanhovetorum);
    int vetorum[tamanhovetorum];

    for (int i = 0; i < tamanhovetorum; i++)
    {
        scanf("%d", &vetorum[i]);
    }

    scanf("%d", &tamanhovetordois);
    int vetordois[tamanhovetordois];

    for (int i = 0; i < tamanhovetordois; i++)
    {
        scanf("%d", &vetordois[i]);
        
    }

    mesclanum(vetorum, vetordois);

}