//Joel Lucana 5to 2da
//Ejercicio 4
//Mas nformacion: https://iq.opengenus.org/boolean-in-c/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 
#include <string.h>
int main(){
    int t, mul, i;
    bool x = true;
    int a;
    do
    {
    
    printf("Ingrese un valor: \n");
    scanf("%d", &a);
    if (a>999999 || a==0000000)
    {
        int sa = a%1000;
        int sas = a%10000;
        int sasa = a-sas;
        int res =((sa*10000)+sas);
        //printf(":%d :%d :%d, :%d  :%d",a, sa,sas,sasa,res);
        if(a==((sa*10000)+sas)||a==0000000){
            printf("Capicua.");
        }else{
            printf("No capicua.");
        }
        
        /* code */
    }else{
    printf("Solo 7 digitos. \n");
        x = false;
    }

    } while (x);
    

    return 0;
}
