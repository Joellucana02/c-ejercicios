//Joel Lucana 5to 2da
//Ejercicio 6
//Mas nformacion: https://www.c-programming-simple-steps.com/return-statement.html

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void numbers(int top, int bottom, int num){
    int q=0,w=0,m=0,x;
    for(x=0; x<num;x++){
        int res = ((rand() % (top-bottom-1))+bottom)-2;
        printf(":%d\n", res);
        if(res==1){
            q++;
        }else if(res==2){
            w++;
        }else if(res==3){
            m++;
        }
        
    }
    if(q>w&&q>m){
            printf("futbol: %d", q);
        }
        if(w>q&&w>m){
            printf("natacion: %d", w);
        }
        if(m>q&&m>w){
            printf("voley: %d", m);
        }
}

int main(){
    int t=1, b=3, c=20;
    int e, s,i,j=0,jj=0;
    //int bottom= 85,top=200, num=15;
    srand(time(0));
    // printf("%d\n", rand());
    for(i=0;i<30;i++){
    printf("ingrese su edad---");
    scanf("%d", &e);
    printf("1: male, 2: female---");
    scanf("%d", &s);
    if(s==1){
        j++;
    }else if(s==2){
        jj++;
    }
    }
    //printf("v: %d, m:%d", j, jj);
    if(j>jj){
    numbers(t,b,c);
    }
    return 0;
}