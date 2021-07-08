//Joel Lucana 5to 2da
//Ejercicio 2
//Mas nformacion: https://www.c-programming-simple-steps.com/return-statement.html
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void numbers(int top, int bottom, int num){
    int i;
    for(i=0; i<num;i++){
        printf(":%d\n", (rand() % (top-bottom))+bottom);
    }
}

int main(){
    int t, b, c;

    printf("Ingrese el maximo valor \n");
    scanf("%d", &t);
    printf("Ingrese el minimo valor \n");
    scanf("%d", &b);
    printf("Ingrese el valor de numeros random\n");
    scanf("%d", &c);
    //int bottom= 85,top=200, num=15;
    srand(time(0));
    // printf("%d\n", rand());
    numbers(t,b,c);
    return 0;
}
