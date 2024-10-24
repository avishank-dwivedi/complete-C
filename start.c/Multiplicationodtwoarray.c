#include<stdio.h>
int main(){
    int i,j , m ,n ;
    int arr[m][n];
    printf("enter the value row and column ");
    scanf("%d %d ",&m , &n);
    printf("finll index valuue of 2d arr \n");
    //enter element
    for(i=0 ; i<m ; i++){
        for(j=0 ; j<n ; j++ ){
            scanf("%d" , &arr[m][n]);
        }
    }
    //
    for(i=0 ; i<m; i++){
        for(j=0 ; j<n ; j++){
            printf("%d",arr[m][n]);
        }
    }
    
 return 0;
}