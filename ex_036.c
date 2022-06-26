#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct time{
    char nome[50];
    int gols_marc;
    int gols_sofri;
} times;

times * ordena(times * v, int t){
    for(int i=0;i<t;i++){
		for(int j=i+1; j<t;j++){
			if(v[i].gols_marc < v[j].gols_marc){
				times aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
        }
    }

    return v;
}

void print_func(times *v, int t){
    
    for (int i = 0; i < t; i++)
    {
       printf("%d - %s\n", i+1, v[i].nome);
       printf("Gols marcados: %d\n", v[i].gols_marc);
       printf("Gols sofridos: %d\n", v[i].gols_sofri);
    }
    
}


int main(){

    times * lista;
    int q=0;
    scanf("%d", &q);
    lista = calloc(q, sizeof(times));
    

    for(int i=0; i<q; i++){
        scanf(" %50[^\n]", lista[i].nome);
        scanf("%d", &lista[i].gols_marc);
        scanf("%d", &lista[i].gols_sofri);
    }
    
        

    lista=ordena(lista, q);
    print_func(lista, q);


    return 0;
}