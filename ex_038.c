#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  char name[50];
  int q_aero;
  char pais[50];
} Cidade;
    
int main (){

    int t=0;
    int p=0;
    int acumula_menor_valor=0;
    int indicel=0;
    // int indicec=0;
    scanf("%d", &t);

    Cidade cidades[t];
    int matriz[t][t];

    for(int i =0; i<t; i++){
        scanf(" %50[^\n]", cidades[i].name);
        scanf(" %50[^\n]", cidades[i].pais);
        scanf("%d", &cidades[i].q_aero);
    }

    for (int l = 0; l < t; l++)
    {
        for (int c = 0; c < t; c++)
        {
            scanf("%d ", &matriz[l][c]);
        }
    }

    scanf("%d", &p);
    if(p==0){
        acumula_menor_valor = matriz[1][p];
    }else{
        acumula_menor_valor = matriz[0][p];
    }
    

    for (int l = 0; l < t; l++)
    {
        for (int c = 0; c < t; c++)
        {
            if(c==p && matriz[l][c] != -1){
                if(matriz[l][c]<acumula_menor_valor){
                    acumula_menor_valor = matriz[l][c];
                    indicel = l;
                }
            }
        }
    }

    printf("Voo mais barato chegando em %s: %s (%s) - %d aeroporto(s) - R$%d", cidades[p].name, cidades[indicel].name, cidades[indicel].pais,cidades[indicel].q_aero, acumula_menor_valor);

    // for (int l = 0; l < t; l++)
    // {
    //     for (int c = 0; c < t; c++)
    //     {
    //         printf("|%d|", matriz[l][c]);
    //     }
    //     printf("\n");
    // }
    
    // for(int i =0; i<t; i++){
    //     printf("%s ", cidades[i].name);
    //     printf("%d ", cidades[i].q_aero);
    //     printf("%s ", cidades[i].pais);
    //     printf("\n");
    // }

    return 0;
}