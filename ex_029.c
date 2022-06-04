#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int tamanho(int n, char str[]){
    int count = 0;
    while(count < n && str[count] != '\0'){
        count = count + 1;
    } 
    return count;
}

void exibir(char frase []){
    int value = (frase[0] - '0') * 100 + (frase[1] - '0') * 10 + (frase[2] - '0');
    int tam = tamanho(value, frase);
    if(value >= 0 && tam == value && frase[value] == '\0'){
        printf("%d == %d OK!", tam, value);
    } else {
        printf("Resultado inesperado! Um \\n talvez?");
    }
}

int main()
{
    int tamanhopalavra=0;
    int acumulatamanho=0;
    char palavra[16];
    char *vetor;

    scanf("%16[^\n]", palavra);
    tamanhopalavra=strlen(palavra);
    acumulatamanho=tamanhopalavra;
    vetor = malloc(sizeof(char)*tamanhopalavra);
    strcpy(vetor, palavra);
    
    while(tamanhopalavra==16){
        scanf("%16[^\n]", palavra);
        tamanhopalavra=strlen(palavra);
        acumulatamanho+=tamanhopalavra;
        vetor = realloc(vetor, sizeof(char)*(tamanhopalavra+acumulatamanho));
        strcat(vetor, palavra);
    }
    

    exibir(vetor);
    free(vetor);
    return 0;
}