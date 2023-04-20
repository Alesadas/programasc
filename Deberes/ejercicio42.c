//Determinar a cuanto es igual el promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000
//Determinar a cuanto es igual el promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000
#include<stdio.h>
#include<math.h>
int main() {
    int num1 = 0, num2 = 1, temp, promedio;
    int contador = 0;

    while (num2 <= 1000){
        temp = num2;
        num2 = num1 + num2;
        promedio =trunc(num2/temp);
        num1 = temp;

        if (num2 >= 0&& num2 <= 1000){
            contador++;
        }
    }

    printf("el promedio entero de la serie de fibonacci entre 0 y 1000 es:\n%d",contador);
    return 0;
}
