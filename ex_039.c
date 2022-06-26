#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int fib(int n) {

  if (n == 1 || n==2) {
    return 1;
  }
  
  return fib(n-1) + fib(n-2);
}

int main() {
  int i;
  int n1, n2=0;
  int contador=1;
  int sn=1;
  int contador_elementos=0;

  scanf("%d %d", &n1, &n2);

  
  while(sn!=0){
    contador_elementos=0;

    for (i = 1; i <=  contador; i++) {

    num_seq=fib(i);

    if(fib(i)>=n1 && fib(i)<= n2){
      contador_elementos++;
    }
    
    if(num_seq >= n2){
      sn=0;
      break;
    }

  }

  contador++;
  }

  

  if(n1==1 && n2==2){  
    printf("Existem %d números de fibonacci entre %d e %d", contador_elementos-3, n1, n2);
  }else if(n1==1 && n2!=2){
    printf("Existem %d números de fibonacci entre %d e %d", contador_elementos-2, n1, n2);
  }else if(n1 == 0){
    printf("Existem %d números de fibonacci entre %d e %d", contador_elementos-1, n1, n2);
  }else{
    printf("Existem %d números de fibonacci entre %d e %d", contador_elementos, n1, n2);
  }
  


  return(0);
}