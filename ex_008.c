#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char vetor[10];
    int posicao_ultimo_num = 0;
    int pos1 = 0;
    int posfinal = 0;
    int soma;
    scanf("%s", &vetor);

    posicao_ultimo_num = strlen(vetor);

    pos1 = (int)(vetor[0]);
    posfinal = (int)(vetor[posicao_ultimo_num - 1]);

    printf("O último numero é: %c\n", vetor[posicao_ultimo_num - 1]);
    printf("O primeiro número é: %c\n", vetor[0]);
    printf("A soma é: %d", (pos1 - 48) + (posfinal - 48));
    return 0;
}