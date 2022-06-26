#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int sec_num(int n){

    if(n==1){
        return 1;
    }
    if(n%2==0){
        return n/2;
    }
    if(n%2!=0){
        return (n*3)+ 1;
    }
    
}


int main (){

    int n=0;
    int sn=1;
    scanf("%d", &n);

    while(sn!=0){
        if(n==1){
            sn=0;
        }
        printf("%d ", n);
        n=sec_num(n);
        
    }
    
    return 0;
}