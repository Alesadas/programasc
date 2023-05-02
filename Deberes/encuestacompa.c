//Naomi Lizano
//38. Leer un número entero y mostrar en pantalla su tabla de multiplicar.
 
 #include<stdio.h>


 int main(){
int i, n, resultado;

//ingreso de datos del usuario
printf("Ingrese el numero del que quiere saber su tabla de multiplicar\n");
scanf("%d", &n);

//validacion para negativos
while (n<0){
printf("Ingrese unicamente un numero entero positivo\n");
scanf("%d", &n);
}

//formula para tablas de multiplicar
    for (i=0; i<=12; i++){
        resultado=i*n;
        printf("%dx%d=%d\n",n, i, resultado);
    }
    return 0;
 }
 