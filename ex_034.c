#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct cartola{
    char nome[200];
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofridos;
} times;

typedef struct lista_final{
    char nome[200];
    int pontos_obtidos;
    int total_de_partidas;
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofridos;
    int saldo_de_gols;
} times_final;

void ler(int t, times v[t]){

    for (int i = 0; i < t; i++)
    {
        scanf("%200[^;]; %d %d %d %d %d", v[i].nome, &v[i].vitorias, &v[i].empates, &v[i].derrotas, &v[i].gols_feitos, &v[i].gols_sofridos);
    }
}

void ordena(int t, times_final v[t]){
	for(int i=0;i<t;i++)
		for(int j=i+1; j<t;j++)
			if(v[i].pontos_obtidos > v[j].pontos_obtidos){
				times_final aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}else if(v[i].pontos_obtidos == v[j].pontos_obtidos){
                if(v[i].vitorias > v[j].vitorias){
                    times_final aux = v[i];
				    v[i] = v[j];
				    v[j] = aux;
                }else if(v[i].vitorias == v[j].vitorias){
                    if(v[i].saldo_de_gols > v[j].saldo_de_gols){
                        times_final aux = v[i];
				        v[i] = v[j];
				        v[j] = aux;
                    }
                }
            }
}

void printa(int t, times_final v[t]){
    int cont=0;
	printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");
	for(int i=t-1;i>=0;i--){
		printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", v[i].nome, v[i].pontos_obtidos, v[i].total_de_partidas, v[i].vitorias, v[i].empates, v[i].derrotas, v[i].gols_feitos, v[i].gols_sofridos, v[i].saldo_de_gols);
	}
    printf("\n");
    printf("\nTimes na zona da libertadores:");

    for (int i=t-1;i>=0;i--)
    {
        printf("%s", v[i].nome);
        cont++;
        if(cont==6){
            break;
        }
    }
    printf("\n");
    cont=0;
    printf("\nTimes rebaixados:");
    for (int i=0;i<t;i++)
    {
        printf("%s", v[i].nome);
        cont++;
        if(cont==4){
            break;
        }
    }
}

int main(){

    int t=0;
    scanf("%d", &t);

    times time[t];
    times_final time_lista_final[t];

    ler(t, time);
   
    for (int i = 0; i < t; i++)
    {
        strcpy(time_lista_final[i].nome,time[i].nome);
        time_lista_final[i].pontos_obtidos = (time[i].vitorias*3)+(time[i].empates*1);
        time_lista_final[i].total_de_partidas = time[i].vitorias + time[i].derrotas + time[i].empates;
        time_lista_final[i].vitorias = time[i].vitorias;
        time_lista_final[i].empates = time[i].empates;
        time_lista_final[i].derrotas = time[i].derrotas;
        time_lista_final[i].gols_feitos = time[i].gols_feitos;
        time_lista_final[i].gols_sofridos = time[i].gols_sofridos;
        time_lista_final[i].saldo_de_gols =  time[i].gols_feitos - time[i].gols_sofridos;
    }

    ordena(t, time_lista_final);
    printa(t, time_lista_final);

    
    return 0;
}