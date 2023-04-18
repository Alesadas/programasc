//Determine a cuanto es igual la suma de los elementos de la serie de fibonacci entre o y 100
#include<stdio.h>
int main(){
    int numero, i, a,b,c;
    a=0;
    b=1;
    printf("ingrese el valor para calcular la serie de fibonacci:\n");
    scanf("%d",&numero);
    if (numero>=0&&numero<=100){
        for (i = 1; i<=numero; i++){
            c=a+b;
            a=b;
            b=c;
            printf("%d,",a);
        }
    }
    else{
            printf("ingrese valores enteros positivos hasta 100.\n");
        }
    return 0;
}
