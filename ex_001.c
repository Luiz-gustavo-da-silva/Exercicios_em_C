#include <stdio.h>
#include <string.h>
int main()
{
    float valor=0;
    char de;
    char para;
    float c, f;
    float resultado;
    scanf("%f %c > %c", &valor, &de, &para);
    

    if (de =='C' && para=='F')
    {
        resultado= (valor*1.8)+32;
        printf("%.2f F", resultado);
    }else if(de=='C' && para=='K'){
        resultado= valor+273.15;
        printf("%.2f C", resultado);
    }else if(de=='F' && para=='C'){
        resultado=(valor-32)/1.8;
        printf("%.2f C", resultado);
    }else if(de=='K' && para=='C'){
        resultado = valor-273.15;
        printf("%.2f C", resultado);
    }
    
}