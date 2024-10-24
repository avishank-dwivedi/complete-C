/*
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the value of row m: ");
    scanf("%d",&m);
    printf("Enter the value of coloum n: ");
    scanf("%d",&n);
    int arr1[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter %d row and %d coloum value",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[m][n];
        for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter %d row and %d coloum value",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
             arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}
*/
/*

#include <stdio.h>
int main(){
    int row1=2,column1=2 , i,j;
    int arr1[row1][column1],arr2[row1][column1];
    int arr[row1][column1];
    /*
    for(int i=0; i<row1;i++){
       for(int j=0;j<column1;j++){
         printf("entrer first  %d rows1 sparce %d columns1 matrix ",i,j);
         scanf("%d",& arr1[i][j]);
       }
    }
    for(int i=0; i<row1;i++){
        for(int j=0;j<column1;j++){
          printf("entrer second  %d sparce %d matrix ",i,j);
          scanf("%d ",& arr2[i][j]);
        }
    }

     


    arr1[column1][column1]={
        {1 , 2 },
        {0 , 0 }
    };
    arr2[row1][column1]={
        {0 , 0 },
        {0 , 1 }
    };
    int arr[row1][column1];

    for(int i=0 ; i<row1 ; i++){
        for(int j=0; j<column1; j++){
            arr[i][j]=arr1[i][j] - arr2[i][j];
        }
    } 
    printf("resuting spacse matrix is: \n");
    for(i=0; i<row1; i++){
        for(j=0; j<column1 ; j++){
            printf("%d\n",arr[i][j]);
        }
        printf("\n");
    } 
    return 0;


}
*/


#include <stdio.h>

int main() {
    int row1 = 2, column1 = 2, i, j;
    int arr1[2][2] = {
        {1, 2},
        {0, 0}
    };
    int arr2[2][2] = {
        {0, 0},
        {0, 1}
    };
    int arr[2][2];

    for (i = 0; i < row1; i++) {
        for (j = 0; j < column1; j++) {
            arr[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("Resulting sparse matrix is: \n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < column1; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
