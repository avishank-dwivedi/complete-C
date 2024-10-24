// continue statement   (skip to next itrtion)
# include <stdio.h>
int main (){
    for(int i=1; i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}
 // Q17. print all the numbers from 1 to 10 except for 6.     
  #include<stdio.h>
  int main (){
    for(int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d \n",i);
    }

    return 0;
  }

  // Q18. print all the odd numbers from 5 to 50.

  #include <stdio.h>
  int main (){
    for(int i=5;i<=50;i++){
        if(i %2== 0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;

  }
