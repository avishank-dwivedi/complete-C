// C Program to Insert an element
// at a specific position in an Array

 
#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    // initial array of size 10
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // element to be inserted
    x = 50;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int i,j,n,m,a[10][10],x,y,k;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }/*
    printf("Enter the row and column number where you want to insert the element\n");
    scanf("%d%d",&x,&y);
    printf("Enter the element to be inserted\n");
    scanf("%d",&k);
    for(i=m-1;i>=x;i--)
    {
        for(j=n-1;j>=y;j--)
        {
            a[i+1][j+1]=a[i][j];
        }
    }
    a[x][y]=k;
    printf("The new array is\n");
    for(i=0;i<m+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j, row, col, element;

  printf("Enter the row and column where you want to insert the element: ");
  scanf("%d %d", &row, &col);
  printf("Enter the element you want to insert: ");
  scanf("%d", &element);

  arr[row][col] = element;


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

return 0;
}*/
/*

#include <stdio.h>
 int main(){
    int i,j,row,column, element ;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("the values of insertiinomn");
    scanf("%d %d ",&row , &column );
    printf("insertion number");
    scanf("%d", & element);

    arr[row][column] = element;
     
    for(i=0;i<3 ; i++){
     for(j=0 ; j<3 ; j++){
        printf("%d",arr[i][j]);
     }
     printf("\n");
    }
     return 0;
}*/

