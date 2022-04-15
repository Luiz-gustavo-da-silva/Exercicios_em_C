#include <stdio.h>

int main(void)
{
    int A, B, C, D =0;

    scanf("%d %d %d %d",&A, &B, &C, &D);

    if (B<C)
    {
        printf("Valores Não Aceitos condições violadas: ");
    }else if(D<A){
        printf("Valores Não Aceitos condições violadas: ");
    }else if((C+D) < (A+B)){
        printf("Valores Não Aceitos condições violadas: ");
    }else if(C< 0 && D>0 || C< 0 && D<0 || C> 0 && D<0 ){
        printf("Valores Não Aceitos condições violadas: ");
    }else{
        printf("Valores Aceitos");
    }
    
    if (B<=C)
    {
        printf("%d ", 1);
    }
    if(D<A){
        printf("%d ", 2);
    }
    if((C+D) <= (A+B)){
        printf("%d ", 3);
    }
    if(C< 0 && D>0 || C< 0 && D<0 || C> 0 && D<0 ){
        printf("%d ", 4);
    }

}