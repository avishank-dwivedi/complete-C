// POINTERS
// A variable that stores the memory address of another variable.
// SYNTAX
// int age = 23;  (normal we can use)
// int*ptr =&age; ( but in case of pointers we can stored variables like this)
// int_age = *ptr;

# include<stdio.h>
 
 int main (){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d",_age);
    return 0;
 }


// Declaring a pointers 
// int *ptr;
// char *ptr;
// float *ptr;

// Format specifier

// printf("%p",&age);
// printf("%p",ptr);
// printf("%p",&ptr);

# include<stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;

    // address
    // printf("%p \n",&age);
    printf("%u \n",&age);

    printf("%u \n",ptr);

    printf("%u \n",&ptr);

    return 0;
}

// How to print those value which is stored in the pointers.
# include<stdio.h>

int main (){
    int age = 22;
    int *ptr = &age;

    // value print
    printf("%d \n",age);
    printf("%d \n",*ptr);
    printf("%d \n",*(&age));
}

/////
# include<stdio.h>

int main (){
    int x;
    int *ptr;

    ptr = &x;
    *ptr=0; // x = 0

    printf("x = %d \n",x); // 0
    printf(" *ptr = %d \n",*ptr); // 0

    *ptr +=5;
    printf("x = %d \n",x); // 0
    printf(" *ptr = %d \n",*ptr); // 0

    (*ptr)++;
    printf("x = %d \n",x); // 0
    printf(" *ptr = %d \n",*ptr); // 0


}

# include<stdio.h>

int main (){
    int x=10;
    int *p;
    p=&x;

    *p+=90;



    printf("%d",x);
    
}

// Q print factorial of n.
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

