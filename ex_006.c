#include <stdio.h>
#include <math.h>
int main(void)
{
    double nota=0;
    double somanotas=0;
    double somainverso=0;
    double multipli=1;
    double mediaari=0;
    double mediaharm=0;
    double mediageom=0;
    double erromedio=0;
    double resultadoerro=0;
    double mediageohar=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &nota);
        somanotas=somanotas+nota;
        somainverso=somainverso +(1/nota);
        multipli = (double)(multipli*nota);
    }
    mediaari= somanotas/10;
    mediaharm= 10/somainverso;

    double decimal=0.1;
    mediageom= pow(multipli, decimal);
    mediageohar=(mediageom+mediaharm)/2;
    resultadoerro= (mediageohar*100)/mediaari;

    printf("Média aritmética é %.2lf\n", mediaari);
    printf("Média harmônica é %.2lf\n", mediaharm);
    printf("Média geométrica é %.2lf\n", mediageom);
    printf("Erro médio é %.2lf %\n", resultadoerro-100);
}