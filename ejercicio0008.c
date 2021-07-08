//Joel Lucana 5to 2da
//Ejercicio 8
//Mas nformacion: https://www.programiz.com/c-programming/c-pointers
//                https://www.youtube.com/watch?v=XJnIdRXUi7A
/*
8o) Dado un número X y un número Y, ambos al azar entre 85 y 150, y sabiendo que X debe
ser mayor que Y, realizar 25 veces el experimento de hallar la cantidad de combinaciones
de X objetos agrupados en Y.  */
#include<stdio.h>
#include<string.h>
#include <time.h>
int numbers(int top, int bottom){
        return ((rand() % (top-bottom))+bottom);
}
int print(int n, int r)
{
    int co, m, v, b;
    v = n-r;        
    m = fact(n);
    b = fact(v);
    v = fact(r);
    co = m/(b*v);
    printf("la cantidad de agrupaciones: %d", co);
}
int fact(int f){
    int i, factorial=1;
    if (f < 0) printf("Error!");
    else {
        for (i = 1; i <= f; ++i) {
            factorial *= i; 
        }
    }
    return factorial;
}
int main()
{   int max=85,min=150;
    int n,r,j; 
    for(j=0;j<25;j++){
    do
    {
        srand(time(0));
        n = numbers(max,min);
        r = numbers(max,min);
    } while (n>r);
    
    print(n,r);      
    }
    return 0;
}