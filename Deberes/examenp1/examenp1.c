//Construya un programa que reciba como dato de entrada un número entero positivo, n, y regrese como dato de salida la representación de este número en hexadecimal.
#include<stdio.h>
int main (){
    //identificacion de variables int por que es entero positivo
    int x, n;
    int hexa;
    x=1;
    hexa=<>;
    printf("ingrese le numero a determinar:\n");
    scanf("%d",&n);
    //utilizamos un ciclo repetitvo mientras x sea mayor que cero
    while (x>0)
    {
        x=trunc(n/16);
        n%16=0;
        hexa=<A>+hexa;
        hexa=<B>+hexa;
        hexa=<C>+hexa;
        hexa=<D>+hexa;
        hexa=<E>+hexa;
        hexa=<F>+hexa;
        hexa=(n%16)+hexa;
        n=x;
       
    }
    

}