#include<stdio.h>

int main(){
int i, numero, cont;
cont=0;
printf("digita el numero:\n");
scanf("%i",&numero);
for ( i = 1; i <=numero; i++)
{
    if(numero%i==0){
        cont=cont+1;
    }
}
if(cont>2){
    printf("el numero no es primo es compuesto.\n");
}
else{
    printf("el numero es primo.\n");
}
return 0;
}