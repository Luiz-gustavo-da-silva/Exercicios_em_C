#include <stdio.h>
#include <stdlib.h>

int main(void) {
     
    char elemento;
    int recuo = 0;
    int quantidade_linhas=0;
    
  
    scanf("%d %c", &quantidade_linhas, &elemento);
    
    for (int linha = 1; linha <= quantidade_linhas-1; linha++) {
        
        for (int coluna = 1; coluna <= quantidade_linhas-1; coluna++) {
            
            if (coluna == linha || (coluna == (quantidade_linhas-1) - recuo))
                printf("%c", elemento);
            else
                printf(" ");
            
            if (coluna == (quantidade_linhas-1)) {
                recuo++;
                printf("\n");
            }
        }
        
    }
    
  
    return 0;
}
