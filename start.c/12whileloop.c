# include <stdio.h>
int main (){
    int i=1;
    while(i<=10){
        printf("%d \n",i);
        i=i+1;
    }

}
#include <stdio.h>
int main (){
    int n;
    printf("enter number");
    scanf("%d \n",n);

    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
}

// Do while loop 
/* do{
    do something
}while(condition);
*/

# include<stdio.h>
int main (){
    int i =1;// i=5 for decending order 
    do{
        printf("%d\n",i);
        i++; // i-- for decending order 
    }while (i<=5); //i>=5

    return 0;
}
// print the sum of  first n namtural numbers 
# include <stdio.h> 
# include <math.h>
int main (){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum =sum+i;
      
       

    }
    printf("sum is %d \n",sum);
    return 0;
}

# include <stdio.h>
int main (){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    int sum =0;
    for (int j=n;j>=1;j--){
        sum=sum+j; 
        printf("%d \n",j);
    }

    printf("sum is %d \n",sum);

    return 0;
}

 