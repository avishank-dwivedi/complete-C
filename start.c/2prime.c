#include<stdio.h>
int main(){
    int n;
    printf( "enter the value of prime number");
    scanf("%d",& n);
    int flag;
    for(int i=2; i<n/2 ; i++){
     if(n%i==0){
        flag=0;
        break;
     }
    }
    if (flag ==0){
        printf("%d is a not prime number \n ", n);
    }
    else{
        printf("%d is  a prime number \n", n);
    }
    return 0;
}




// fabonace series

/*

#include<stdio.h>
int main(){
    int i,n;
    int f=0;
    int s=1;
    printf("enter the limit");
    scanf("%d", & i);
    for(int a=0 ; a<i ; a++){
        printf("%d \t",f);
        n=f+s;
        f=s;
        s=n;
    }
    
  return 0;  
}
*/