//add 2 matrix

#include <stdio.h>
int main(){
    int i, m ,n ,j;

    printf("enter the no. of rows and column of matrix");
    scanf("%d %d", &m ,&n);
    
    int a[m][n],b[m][n],c[m][n];

    printf("enter element of matrix a : \n");
    for(i=0; i<m; i++){
     for(j=0; j<n; j++){
        scanf("%d",& a[i][j]);
     }
    }
    
    printf("enter element of matrix b:\n");
    for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         scanf(" %d", b[i][j]);
     }
    }
    for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         c[i][j]=a[i][j]+b[i][j];
     }
    }
    printf("the sum of two matrix is : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("&d", c[i][j]);
             
        printf("\n");
        }  

        }  
return 0; 
}