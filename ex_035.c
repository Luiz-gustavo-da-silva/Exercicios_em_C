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


pessoas criar(char nome[50], int idade, char sexo){
  pessoas vetor[1];
  
  strcpy(vetor[0].nome, nome);
  vetor[0].idade=idade;
  vetor[0].sexo=sexo;
  
  return vetor[0];
}

void inserir(pessoas *vetor, pessoas vetorparcial, int tamanho){
    vetor[tamanho]=vetorparcial;
}

int deletar(pessoas *vetor, pessoas vetorparcial, int tamanho){  
  int cont=0;
  
    for(int i=0; i<tamanho;i++){
        if(strcmp(vetor[i].nome, vetorparcial.nome) == 0 && vetor[i].idade == vetorparcial.idade && vetor[i].sexo == vetorparcial.sexo){
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
    pessoas vetorparcial[1];
    int tamanhovetor=2;
    int tamanho=0;
    int criarstruct=1;
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
            vetorparcial[0]=criar(nome, idade, sexo);
            inserir(vetor, vetorparcial[0], tamanho);
            vetor = realloc(vetor, sizeof(pessoas)*tamanhovetor);
            tamanhovetor++;
            tamanho++;
        }else if(opcao=='d'){
            vetorparcial[0]=criar(nome, idade, sexo);
          
            int sn = deletar(vetor, vetorparcial[0], tamanho);
          
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
