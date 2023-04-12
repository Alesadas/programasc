#include<stdio.h>

int main(){
 int i, numero, cont;
cont=0;
printf("ingresa el numero:\n");
scanf("%d",&numero);
for ( i = 1; i <=numero; i++){
    cont=cont+i;
    printf("%d,",cont);
    }
return 0;

}
