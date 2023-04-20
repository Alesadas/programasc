//Leer un nuemro y calcular su factorial
#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"");
    int i,numero,f;
    i=1;
    f=1;
    printf("ingrese el numero para calcular su factorial:\n");
    scanf("%d",&numero);
    if (numero>=0)
    {
        while (i<=numero)
        {
            f=f*i;
            i++;
         
        }
        printf("el factorial del numero %d es:%d",numero,f);
           
  
    }
else {
    printf("ingrese numeros enteros positivos");
}  
return 0;
}