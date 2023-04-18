//Determinar a cuanto es igual el promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000
#include<stdio.h>
#include<math.h>
int main(){
    int numero,i,a,b,c,suma,promedio;
    a=0;
    b=1;
    printf("ingrese el valor para calcular la serie de Fibonacci:\n");
    scanf("%d",&numero);
    if (numero>=0&&numero<=1000){
        for ( i = 1; i <= numero; i++){
            c=a+b;
            a=b;
            b=c;
            printf("%d,",a);
        }
        while (i<=numero){
            suma=suma+i;
            printf("%d",suma);
        }
        while (i<=numero){
            promedio=trunc(suma/numero);
            printf("%d",promedio);
        }
    }
    else{
        printf("ingrese valores positivos hasta 1000.\n");
    }
    return 0;
}