
#include <stdio.h>
int main(){
    int i , l;
    int arr[l];
    printf("enter the length of the array");
    scanf("%d",& arr[l]);
    printf("enter the %d intex number :",i );
    scanf("%d",& arr[i]);

    for(i=0 ; i<l ; i++){
        printf("%d" , arr[i]);
    }
    for(i=1; i<l-1 ; i++){
       arr[i]=arr[i-1];
    }
    l=l-i;
    printf("\n");  
     
    for(i=0;i<l;i++){
        printf("%d",arr[i]);
    }
    return 0;
}