#include <stdio.h>

int main() {
  int row, col, i, j;
  int matA[10][10], matB[10][10], sum[10][10];

  printf("Enter the number of rows and columns of the matrices: ");
  scanf("%d %d", &row, &col);

  printf("Enter the elements of matrix A: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      scanf("%d", &matA[i][j]);
    }
  }

  printf("Enter the elements of matrix B: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      scanf("%d", &matB[i][j]);
    }
  }

  // Add the two matrices
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      sum[i][j] = matA[i][j] + matB[i][j];
    }
  }

  // Print the result
  printf("The sum of the two matrices is: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}