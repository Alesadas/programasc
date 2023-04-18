#include<stdio.h>
int numero,i,primo=1;
printf ("ingrese un numero positivo\n");
scanf("%d",&numero);

for ( i = 1; i <=numero, i++)
{
    if(numero%i==0){
        cont=cont+1;
        break;
    }
    if(primo=1){
        printf("%d es numero primo", numero);

    }
    
    else{
         print("%d no es numero primo", numero);

    }
   
    return 0;

}

