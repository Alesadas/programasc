#include<stdio.h>
int primo (int numero){
int i, cont=0;
if (numero<2){
    return 0;
}
for (i=2,i<num, i++){
    if(numero%i==0){
        cont=cont+1;
        return 0;
    }
    
}
return 1;
}
int main (){
    int numero;
    printf ("digite un numero:\n ");
    scanf("%d",&numero);
    if(primo(numero)){
        printf("%d es primo\n ", numero);
    }
    else {
        printf("%d no es primo\n", numero);
    }
    return 0;
}