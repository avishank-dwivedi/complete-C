/*
# include <stdio.h>
void printHW(int count);
int main(){
    printHW(5);
    return 0;

}
// recursive function 
void printHW(int count){
    if (count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);
}

// recursion by math 
// f(x)=x^2

// Q26.Sum of first n natural numbers.
#include<stdio.h>
int sum (int n);

int main(){
    printf("sum is: %d",sum(5));

    return 0;
}

// recursive function 
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 =sum(n-1); //sum of 1 to n
    int sumN= sumNm1+n;
    return sumN;

}

// Q27 print factorial of n.
#include<stdio.h>

int fact(int n);
int main (){
    printf("factorial is:%d",fact(5));
    return 0;
}

int fact (int n){
    if (n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}  

// PROPERTIES OF RECURSION 
// A. Anythink that can be done with Iteration, can be done with recursion and vice-versa.
// B. Recursion can something give the most simple solution. 
// C. Base case is the condition which stops recursion. 
// D. Itetration has infinite loop & recursion has stack overflow.

// Q28. Write a function to convert celsius to fahrenheit
# include<stdio.h>

float convertTemp(float celsius);

int main (){
    float far=convertTemp(37);
    printf("far :%f",far);
    return 0;

}

float convertTemp(float celsius){
    float far =celsius  *(9.0/5.0)+32;
    return far ;
}

// Q29. write a function to calculate percentage of a student from marks in science, math & sanskrit.

# include<stdio.h>
int calcpercentage (int science, int math, int sanskrit);

int main (){
    int sc = 90;
    int math = 98;
    int sanskrit = 95;

    printf("percentage is: %d", calcpercentage(sc,math,sanskrit));
    return 0; 
}

int calcpercentage(int science, int math, int sanskrit){
    return((science + math + sanskrit) / 3);
}

// Q30. Write a function to print n term of the fibonacci sequence.

# include<stdio.h>

int fib(int n);

int main(){
    printf("%d",fib(6));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }


    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
    int fibn=fibnm1+fibnm2;
    //printf(" fib of %d is: \n", n, fibn); 
    return fibn;
}

// Q31. write a function to find sum of digits of a number.
// Q32. write a function to find square root of a number.
// Q32. writea function to print "hot" or "cold" depend on the teperature user enters.
// Q33. make your own pow function.

// 31.
# include<stdio.h>




int sum (int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);

    int sumN=sum(n-1)+n;
}
    int main (){

    
    printf(" sum is:%d \n",sum(5));
}

// 32.
#include<stdio.h>
int squareroot (int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans =sqrt(n);
    printf("%d",ans);

}
int main(){
    squareroot(50);
}
*/
    
// 33.

#include <stdio.h>
#include <math.h>

// Function to classify temperature
void classifyTemperature(int temperature) {
    if (temperature > 50) {
        printf("hot!!!");
    }
    else if (temperature <= 50 && temperature > 30) {
        printf("normal");
    }
    else {
        printf("cold");
    }
}

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    classifyTemperature(temp);

    return 0;
}





