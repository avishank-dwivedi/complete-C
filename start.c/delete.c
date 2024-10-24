#include<stdio.h>
int main(){
    int i,l;
    printf("Emter the length of array :");
    scanf("%d",&l);
    int arr[l];
    for(i=0; i<l; i++){
        printf("Enter the %d th index value of array =",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<l; i++){
    printf("%d ",arr[i]);
    }
    for(i=3; i<l-1; i++){
        arr[i]=arr[i+1];
    }
    l=l-1;
    printf("\n");
    for(i=0; i<l; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

/**
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row, col;

    printf("Enter the row and column of the element you want to delete: ");
    scanf("%d %d", &row, &col);

    // Delete the element
    for (int i = row; i < 2; i++) {
        for (int j = col; j < 2; j++) {
            arr[i][j] = arr[i + 1][j];
        }
    }

    // Print the updated array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

   return 0;
}*/