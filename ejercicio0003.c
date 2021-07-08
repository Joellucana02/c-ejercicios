//Joel Lucana 5to 2da
//Ejercicio 3
//Mas nformacion: https://iq.opengenus.org/boolean-in-c/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 

int main(){
    int t, mul, i;
    bool condition= true;
    do
    {
    printf("Ingrese un valor \n");
    scanf("%d", &t);
        if(t==mul){
            condition = false;

        }
        /* code */
    for(i=10;i>1;i--){
        if(t%i==0){
            mul = i*8;
        printf("num: %d",mul);
        }
    }
    
    } while (condition);
    
    
    return 0;
}
