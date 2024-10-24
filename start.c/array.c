#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the values of n:");
    scanf("%d",&n);
    int arr[n];
    for(i=1 ;i<n; i++){
        printf("Enter the %d th arr value :",i);
        scanf("%d",&arr[i]);
    }
    for( i=1 ;i<n; i++){
        printf(" The %d th arr value of array :",i);
        printf("%d",arr[i]);
        printf("\n");
    }
 return 0;
}

// insertion in 1d
/*
#include <stdio.h>
int main(){
 int arr[100]={0};
 int i,x,poss, n=10;
 for(i=0; i<n; i++)
   arr[i]=i+1;

 for(i=0 ; i<n ; i++)
   printf("%d",arr[i]);
 printf("\n");

 x=50;

 poss=5;

 n++;

 for( i=n-1 ; i>=poss ; i--)
    arr[i]=arr[i-1];

 arr[poss-1]=x ;

 for(i=0 ; i<n ; i++)
   printf("%d", arr[i]);
 printf("\n");


 return 0 ;

}

*/
/*
#include <stdio.h>
int main(){
    int i , l ;
    printf("enter the length of an arrar");
    scanf("%d",& l);
    int arr[l];
    
    for(i=0 ; i<arr[l]; i++){
     printf("enter the %d index value " , i);
     scanf("%d",& arr[i]);
    }
    for( i = 0 ; i < l ; i++){
     printf( "%d" , arr[i]);
    }
    

     for(i = 1 ; i < l - 1 ; i++){
       arr[i] = arr[i+1];
     }

     l = l-1;
     printf("\n");
    for(i =0 ; i<=l ; i++){
     printf("%d",arr[i]);
    printf("\n");
    }
 return 0;
}
*/