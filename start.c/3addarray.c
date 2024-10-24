/*#include<stdio.h>
int main(){
    int i,j , m ,n , sum[2][3] , b[2][3] ;
    int arr[m][n];
    printf("enter the value row and column a ");
    scanf("%d %d ",&m , &n);
    printf("finll index valuue of 2d arr \n");
    //enter element
    for(i=0 ; i<m ; i++){
        for(j=0 ; j<n ; j++ ){
            scanf("%d" , &arr[m][n]);
        }
    }
   
     printf("enter the element of array b")

    
    //
    for(i=0 ; i<m; i++){
        for(j=0 ; j<n ; j++){
            printf("%d",arr[m][n]);
        }
    }
    
 return 0;
}*/



#include <stdio.h>
int main(){
    int a[2][3],b[2][3],sum[2][3],i,j, k,l;
    printf("enter the array A");
     for(i=0 ; i<=2 ; i++){
        for(j=0 ; j<=3 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the array B");
     for(k=0 ; k<=2 ; k++){
        for(l=0 ; l<=3 ; l++){
            scanf("%d",& b[k][l]);
            sum[2][3]= a[i][j]+ b[k][l];
        }
    }
    printf("the sum of matric is ");
     for(i=0; i<=2 ; i++){
        for(j=0 ; j<=3 ; j++){
            printf("%d ",sum[2][3]);
        }
        printf("%n");
    }
    return 0;
}
