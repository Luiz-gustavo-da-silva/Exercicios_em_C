#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int l;
    int tamanho=0;
    int acumulamaior=0;
    int acumulamenor=0;
    int acumula_tamanho=0;
    int espaco=0;
    int mais_proximo=0;
    int indice=0;
    double media=0;
    char lixo[1];
    scanf("%d", &l);
    scanf("%c",lixo);
    char nomes[l][200];
    
    for(int i = 0; i < l; i++){
        scanf("%200[^\n]", nomes[i]);
        scanf("%c",lixo);
    }

    //testa maior
    acumulamaior=strlen(nomes[0]);

    for(int i = 0 ; i<l ;i++){
        tamanho=strlen(nomes[i]);
        if(tamanho > acumulamaior){
            acumulamaior=tamanho;
        }
        acumula_tamanho+=tamanho;
    }
    //testa menor
    acumulamenor=strlen(nomes[0]);

    for(int i = 0 ; i<l ;i++){
        tamanho=strlen(nomes[i]);
        
        if(tamanho < acumulamenor){
            acumulamenor=tamanho;
        }
    }

    media=(double)(acumula_tamanho)/(double)(l);
    mais_proximo=media-(strlen(nomes[0]));
    indice=0;
    if(mais_proximo<0){
        mais_proximo=mais_proximo*-1;
    }
    for(int i =0; i<l;i++){
        espaco=media-(strlen(nomes[i]));
        if(espaco<0){
            espaco=espaco*-1;
        }
        if(espaco<mais_proximo){
            mais_proximo=espaco;
            indice=i;
        }
    }


    printf("Tamanho máximo: %d\n", acumulamaior);
    printf("Tamanho mínimo: %d\n", acumulamenor);
    printf("Tamanho médio: %.2lf\n", media);
    printf("Tamanho mais próximo da média %d\n", strlen(nomes[indice]));
    printf("Textos\n");
    printf("%s", nomes[indice]);
    return 0;
}