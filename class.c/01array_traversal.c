#include <stdio.h>
int main(){
    int i,n,x;
    printf("enter the no of indexes :");
    scanf("%d",& n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the %d element of:",i);
        scanf("%d",& arr[i]);
    }
    for(i=0;i<n;i++){
        printf("the  %dth value of array : ",i);
        printf("%d", arr[i]);
        printf("\n");
    }
 return 0;
}

