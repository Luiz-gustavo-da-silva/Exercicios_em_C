#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct pessoa_t{
	int idade;
	char nome[20];
}pessoa;

typedef struct int_vector_t{
	int t;
	int dados[20];
}int_vector;

typedef struct int_vector_d_t{
	int t;
	int *dados;
}int_vector_d;

int_vetor rand_vec(int q){
	int_vector v;
	for(int i=0;i<q; i++)
		v.dados[i] = rand()%10;
	v.t = q;
	return v;
}

void apaga_ultimo(char str[]){
	if(strlen(str) > 0)
		str[strlen(str)-1] = '\0';
}

void read_line(char d[], int t, FILE *f){
	fgets(d,t,f);
	while(d[0] == '\n'){
		fgets(d,t,f);
	}
	if(d[strlen(d)-1] == '\n'){
		apaga_ultimo(d);
	}
}


void apaga_t(char str[], int t){
	if(t < strlen(str) && t >= 0)
		for(int i = t;i<strlen(str)-1;i++){
			str[i] = str[i+1];
		}
}

void preenche(pessoa pessoas[], int t){
	for(int i=0; i<t; i++){
		read_line(pessoas[i].nome,20,stdin);
		scanf("%d", pessoas[i].nome);
	}
}

bool iguais(pessoa p1, pessoa p2){
	if(strcmp(p1.nome, p2.nome) == 0){
		if(p1.idade == p2.idade)
			return true;
	}
	return false;
}

bool ref_iguais(pessoa *p1, pessoa *p2){
	if(strcmp(p1->nome, p2->nome) == 0){
		if(p1->idade == p2->idade)
			return true;
	}
	return false;
}


pessoa cria_pessoa(int idade, char nome[]){
	pessoa r;
	strcpy(r.nome,nome);
	r.idade = idade;
	return r;
}

int main(void) {
	char *str = "testt";
	char *str2 = "testa";

	char dest[20];

	//atribuir uma string à outra
	//str = str2; //não funciona
	strcpy(dest,str);
	//dets == str2?
	//dets < str2?
	//dets > str2?
	strcmp(dest,str);

	char *r = strstr(str,dest);
	if(r == NULL){
		printf("Encontrado!\n");
	}
	else{
		printf("Encontrado!\n");
	}
	//concatena duas strings
	strcat(dest,str);

	apaga_ultimo(str);
	
  printf("Hello World\n");

	int n = 10;
	char lista[n][20];
	scanf("%s", lista[0]);
	//fgets(lista[0],20,stdin);
	read_line(lista[0],20,stdin);


	pessoa pessoas[10];

	read_line(pessoas[0].nome,20,stdin);
	scanf("%d", pessoas[0].nome);

	preenche(pessoas, 10);

	if(iguais(pessoas[0], pessoas[1]))
		printf("pessoas[0] e [1] são iguais\n");

	pessoa *pessoa_ref1 = &pessoas[0];
	pessoa *pessoa_ref2 = &pessoas[2];
	if(iguais_ref(pessoa_ref1, pessoa_ref2))
		printf("pessoas[0] e [1] são iguais\n");

	if(iguais_ref(&pessoas[2], &pessoas[0]))

	pessoa p_teste = cria_pessoa(35, "julio");

	int *v = malloc(sizeof(int)*1000);
	pessoa *pessoas_heap = malloc(sizeof(pessoa)*1000);
	pessoas_heap = realloc(pessoas_heap,sizeof(pessoa)*900);

	int_vector_d v2;
	v2.dados = malloc(sizeof(int)*50);
	v2.t = 50;
	
  return 0;
}