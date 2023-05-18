#include<stdio.h>
int main(){
  
 int A[10];
// A[0]=10;
 //A[1]=34;
 //A[2]=56;
 //A[3]=78;
 //A[4]=50;
 //A[5]=60;
 //A[6]=7;
 //A[7]=8;
 //A[8]=19;
 //A[9]=100;
 for ( int i = 0; i < 10; i++)
 
 {
      A[i]=rand()%100;
      //scanf("%d",&A[i]);
 }    
for ( int i = 0; i < 10; i++)
{
    printf("%d",A[i]);
}
return 0;
}