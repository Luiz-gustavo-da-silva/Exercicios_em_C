#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int divisor(int x, int y){
    int div=1;

    if(x<y){
         for (int i = 4; i < x; i++)
        {   
            if(x%i==0 && y%i==0){
                div=i;
                break;
            }
        }
    }

    if(x>y){
         for (int i = 4; i < y; i++)
        {   
            if(x%i==0 && y%i==0){
                div=i;
                break;
            }
        }
    }
    
    return div;
}

int auxiliar_mdc(int x, int y, int *result){

    if(x==1 || y==1){
        return 1;
    }
    if(x%2==0 && y%2==0){
        x=x/2;
        y=y/2;
        *result=(int)((*result)*2);
        return auxiliar_mdc(x, y, result);
    }else if(x%3==0 && y%3==0){
        x=x/3;
        y=y/3;
        *result=(int)((*result)*3);
        return auxiliar_mdc(x, y, result);
    }else{
        int div=divisor(x,y);
        if(div!=1){
            x=x/div;
            y=y/div;
            *result=(int)((*result)*div);

            return auxiliar_mdc(x, y, result);
        }
        
    }

}

void calc_mdc_mmc(int x, int y, int * pmdc, int * pmmc){

    int res=1;
    int *result=&res;

    auxiliar_mdc(x, y, result);
    
    *pmdc = (int)(*result);
    *pmmc = (x*y) / (int)(*(result));

}

int main (){
    int x, y=0;
    int mmc, mdc=0;
    int *pmmc = &mmc;
    int *pmdc = &mdc;

    scanf("%d", &x);
    scanf("%d", &y);

    calc_mdc_mmc(x, y, pmdc, pmmc);

    printf("MDC = %d, MMC = %d", (int)(*pmdc), (int)(*pmmc));
    
    return 0;
}