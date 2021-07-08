//Joel Lucana 5to 2da
//Ejercicio 7
//Mas nformacion: https://www.programiz.com/c-programming/c-pointers
//                https://www.youtube.com/watch?v=XJnIdRXUi7A
/* 7o) Si se tiene X cartones, cada uno de distinto color, ¿cuántas combinaciones es posible
armar si se agrupan de Y cartones?  
 */
#include<stdio.h>
#include<string.h>

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
{
    int n,r; 
    printf("cantidad personas: ");
    scanf("%d", &n);
    printf("cantidad por grupo: ");
    scanf("%d", &r);
    print(n,r);      
    return 0;
}