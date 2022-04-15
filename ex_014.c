#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int visorretangulo(double esquerdo, double inferior, double direito, double superior, double v1, double v2, double v3, double v4){
    if(esquerdo>v1 && inferior > v2 && direito<v3 && superior<v4 ){
            return 1;
        }else if(esquerdo<v1 && inferior < v2 && direito>v3 && superior>v4){
            return 2;
        }else{
            return 0;
        }
}
int main()
{
    double esquerdo, inferior, direito, superior=0;
    double v1, v2, v3, v4=0;
    int op=0;
    int cont=0;
    scanf("%lf %lf %lf %lf",&esquerdo,&inferior,&direito,&superior);

    while(cont!=1){
        
        scanf("%lf %lf %lf %lf",&v1, &v2 ,&v3 ,&v4);
        
        if (v1 == 0 && v2 == 0 && v3 == 0 && v4 == 0)
        {
            break;
            cont=1;
        }
        op=visorretangulo(esquerdo, inferior, direito, superior, v1, v2, v3, v4);
        if (op==1){
            printf("(<%.2lf,%.2lf>,<%.2lf,%.2lf>) contem (<%.2lf,%.2lf>,<%.2lf,%.2lf>).\n", v1,v2, v3, v4, esquerdo, inferior, direito, superior);
        }else if(op==2){
            printf("(<%.2lf,%.2lf>,<%.2lf,%.2lf>) contem (<%.2lf,%.2lf>,<%.2lf,%.2lf>).\n", esquerdo, inferior, direito, superior, v1,v2, v3, v4);
        }else{
            printf("Nao posso afirmar!\n");
        }
        
    }
    
    return 0;
}