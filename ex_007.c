#include <stdio.h>
#include <math.h>
int main(void)
{
    int num=0;
    int cont=0;
    int numatual=1;
    scanf("%d", &num);
    if (num<=0)
    {
        printf("Você entrou com %d, tente de novo na próxima",num);
    }else{

        for (int i = 1; i <= num; i++)
        {
            if (i<=4)
            {
                printf(" ");
            }
            
           for (int a = 1; a <= i; a++)
           {
               if (numatual<9)
               {
                   printf("%d  ", numatual);
                    numatual++;
               }else{
                   printf("%d ", numatual);
                    numatual++;
               }
               
               
           }
           printf("\n");
            
        }
        
    }
    
}