//Determine cuantos elementos de la serie de Fibonacci se encuentran entre 1000 y 2000.
#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, temp;
    int contador = 0;

    while (num2 <= 2000) {
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;

        if (num2 >= 1000 && num2 <= 2000) {
            contador++;
        }
    }

    printf("Hay %d elementos de la serie de Fibonacci entre 1000 y 2000.\n", contador);

    return 0;
}
