#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of pyr");
    scanf("%d",& n);
    for(i=0 ; i<n ; i++){
        for(j=1; j<i+1 ; j++){
            printf("*");
        }
     printf("\n") ;
    }
 return 0;
}
/*
#include <stdio.h>
int main()
{
    int i, j, k, row;
    printf("enter the number of rows: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
        {
            printf("  ");
        }
        for (k=1; k<=2*i-1; k++)    
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/
