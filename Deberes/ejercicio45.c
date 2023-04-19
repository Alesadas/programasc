int main() {
   int num, i, j;
   int factorial;
   
   printf("Ingrese un número entero: ");
   scanf("%d", &num);
   
   for (i = 1; i <= num; i++) {
      factorial = 1;
      for (j = 1; j <= i; j++) {
         factorial=factorial*j;
      }
      printf("El factorial de %d es %lld\n", i, factorial);
   }
   
   return 0;
}