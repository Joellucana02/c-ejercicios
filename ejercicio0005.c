//Joel Lucana 5to 2da
//Ejercicio 5
//Mas nformacion: https://www.c-programming-simple-steps.com/return-statement.html
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void numbers(int top, int bottom, int num){
    int i,j,m=top;
    for(i=0; i<num;i++){
        int res = (rand() % (top-bottom))+bottom;
        printf(":%d\n", res);
        if(j<res){
            j = res;
            
        }else if(m>res){
            m=res;
        }
            printf("mayor: %d menor: %d", j, m);
    }
}

int main(){
    int t=500, b=100, c=17;
    //int bottom= 85,top=200, num=15;
    srand(time(0));
    // printf("%d\n", rand());
    numbers(t,b,c);
    return 0;
}
