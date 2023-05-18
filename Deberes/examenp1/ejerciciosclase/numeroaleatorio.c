/* Generar números aleatorios 0 al 10 - Por Solución Ingenieril*/
#include <stdio.h> /* Declaración librerías*/
#include <stdlib.h>
#include <time.h> /* Nueva librería necesaria para la función srand */

int main() {
	int numero; //Variable donde se guardará nuestro numero aleatorio
	
	srand(time(NULL)); //Generamos numero aleatorio en base al tiempo
	numero=rand() % 100; //Le indicamos que el numero será entre 0-10
	
	printf("%d",numero); //Mostramos el resultado
	return 0;
    }