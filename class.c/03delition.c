//in the begning

/*
#include <stdio.h>
int main(){
    int i,n=5,poss;
    int arr[10];

    for(i=0;i<n ; i++){
    printf("enter %dth element :",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
    arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
    printf("the remain %d vakue is:",i);
    printf("%d",arr[i]);
    printf("\n");
    }
return 0;

// in the last
}*/

/*
#include <stdio.h>
int main(){
    int i,n=5,poss;
    int arr[10];

    for(i=0;i<n ; i++){
    printf("enter %dth element :",i);
    scanf("%d",&arr[i]);
    }
   
    n--;
    for(i=0;i<n;i++){
    printf("the remain %d vakue is:",i);
    printf("%d",arr[i]);
    printf("\n");
    }
return 0;


}*/

// random delete

#include <stdio.h>
int main(){
    int i,n=5,poss = 2;
    int arr[10];

    for(i=0;i<n ; i++){
    printf("enter %dth element :",i);
    scanf("%d",&arr[i]);
    }

    for(i=poss; i<n-1;i++){
    arr[i]=arr[i+1];
    }
   
    n--;
    for(i=0;i<n;i++){
    printf("the remain %d vakue is:",i);
    printf("%d",arr[i]);
    printf("\n");
    }
return 0;


}