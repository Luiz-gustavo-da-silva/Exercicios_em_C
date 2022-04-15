#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int testa_divisor(int numero, int divisor)
{
    if (numero % divisor == 0)
    {
       return divisor;   
    }else{
        return 0; 
    }
}

int soma_divisores(int value, int acumulo)
{
    acumulo = acumulo + value;
    return acumulo;
}
int testa_amigos(int v4, int v3, int somadivisores, int valordavez)
{
    int somadivisordois=0;
    int contadoramigos=1;

    if (somadivisores <= v4 && somadivisores >= v3)
        {

            for (int b = 1; b < somadivisores; b++)
            {
                if (somadivisores % b == 0)
                {
                    somadivisordois = somadivisordois + b;
                }
            }
        }
        
        if (somadivisordois==valordavez && valordavez!=somadivisores)
        {
            printf("O %d possui um amigo!\n", valordavez);
            return contadoramigos;
        }else{
            return 0;
        }
        
}

int main()
{
    int v1, v2, v3, v4 = 0;
    int num=0;
    int somadivisores = 0;
    int somadivisordois=0;
    int valordavez=0;
    int contadoramigos=0;
    int i, a = 0;

    scanf("%d %d\n%d %d", &v1, &v2, &v3, &v4);

    for (i = v1; i < v2; i++)
    {
        valordavez=i;

        for (a = 1; a < i; a++)
        {
            num=testa_divisor(i, a);
            somadivisores=soma_divisores(num,somadivisores);
            
        }
        
        contadoramigos=contadoramigos + testa_amigos(v4, v3, somadivisores, valordavez);

        somadivisordois=0;
        somadivisores=0;
    }

    if (contadoramigos==0)
    {
       printf("Os intervalos nao apresentam amigos!");
    }
    
   
    return 0;
}