/*
#include<stdio.h> 
 int sum(int a, int b)
 {
 return(a+b);
 }
 int main ()
 {
    int add=sum(10,30);
    printf("sum is %d ", add);
    
 }*/
 // call by fxn 
 
 #include<stdio.h>
 void swap(int *x , int*y){
  int temp = *x;
  *x = *y ;
  *y = temp ;
  return ;
 }

 int main ()
 {
   int a= 30 , b = 20 ;
   printf("%d and %d \n " ,a,b);
   swap(&a ,&b);
   printf("%d and %d \n ", a,b);
   return 0;
 }
 
 /*
// passing array as parameter
#include<stdio.h>
int fxn1(int array[]){
   for(int i=0 ; i<4 ; i++){
    printf("%d\n", array[i]);
   } 
}
int main()
{
   int arr[]= {23 ,24,25,26};
   fxn1(arr);
   return 0;
} */