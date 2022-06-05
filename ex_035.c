#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct pessoa{
    char nome[50];
    int idade;
    char sexo;
} pessoas;

// Não sei o que fazer aqui!
// void criar(char nome[50], int idade, char sexo){

// }
void inserir(char nome[50], int idade, char sexo, pessoas *vetor, int tamanho){
    strcpy(vetor[tamanho].nome, nome);
    vetor[tamanho].idade=idade;
    vetor[tamanho].sexo=sexo;
}

int deletar(char nome[50], int idade, char sexo, pessoas *vetor, int tamanho){
    int cont=0;
    for(int i=0; i<tamanho;i++){
        if(strcmp(vetor[i].nome,nome)==0 && vetor[i].idade==idade && vetor[i].sexo==sexo){
            for (int a = i; a < tamanho; a++)
            {
                vetor[a]=vetor[a+1];
            }  
            cont=1;
        }
    }
    return cont;

}

void imprimir(pessoas*vetor, int t){
    for(int i=0;i<t;i++){
        printf("%s,%d,%c", vetor[i].nome, vetor[i].idade, vetor[i].sexo);
        printf("\n");
    }
}


int main(){
    pessoas*vetor;
    int tamanhovetor=2;
    int tamanho=0;
    int t=0;
    char nome[50];
    char opcao='a';
    int idade=0;
    char sexo;
    vetor = calloc(1, sizeof(pessoas));

    
    while(opcao != 'p'){

        scanf(" %c", &opcao);
        if(opcao=='p'){
            break;
        }
        scanf(" %50[^\n]", nome);
        scanf("%d", &idade);
        scanf(" %c", &sexo);	

        if(opcao=='i'){
            inserir(nome, idade, sexo, vetor, tamanho);
            vetor = realloc(vetor, sizeof(pessoas)*tamanhovetor);
            tamanhovetor++;
            tamanho++;
        }else if(opcao=='d'){
            int sn = deletar(nome, idade, sexo, vetor, tamanho);
            if(sn==1){
                tamanhovetor--;
                tamanho--;
            }
            vetor = realloc(vetor, sizeof(pessoas)*tamanhovetor);
        }
    }

    imprimir(vetor, tamanho);
    return 0;
}