//Joel Lucana 5to 2da
//Ejercicio 1
//Mas informacion: https://www.tutorialspoint.com/rand-and-srand-in-c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void numbers(int bottom, int top, int num){
    int i;
    for(i=0; i<num;i++){
        printf(":%d\n", (rand() % (top-bottom))+bottom);
    }
}
int main(){
    int bottom= 85,top=200, num=15;
    srand(time(0));
     printf("%d\n", rand());
    numbers(bottom,top,num);
    return 0;
}
