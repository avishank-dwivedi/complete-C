//Q1 write a programe to calculate  area of a square
//int type. 
# include <stdio.h>
int main (){
    int side;
    printf("enter side ");
    scanf("%d", &side);

    printf ("area is : %d",side*side);
    return 0;
} 
// float type
# include <stdio.h>
int main (){
    float side;
    printf("enter side ");
    scanf("%f", &side);

    printf ("area is : %f",side*side);
    return 0;
}
//Q2 write a programme to calculate area of a circle.
# include <stdio.h>
int main (){
    float radius;
    printf("enter radius");
    scanf("%f",&radius);

    printf("area is : %f",3.14* radius*radius);
    return 0;
}

// 03 solve int a= 1.999999;
# include <stdio.h>
# include  <math.h>
int main (){
    int a= (int) 1.999999;
    printf("%d \n",a);
    return 0;
}

// 04 write a proggrame that number is divisible by 2 or not 
 #include <stdio.h >
 #include <math.h> 
 int main (){
    int x;
    printf("enter any num =");
    scanf("%d", x);
    printf("%d ",x % 2 ==0 );
    return 0;
 }
 // 05 write a programme to cheq the numeber is even or odd 
  # include <stdio.h>
  # include <math.h>
 
  int main (){
    int x;
    printf("enter any number");
    scanf("%d", &x);
    printf("%d",x%2==0);
    return 0;

}
// 07 these are the following are valid or not 
// A. int a=8^8
# include <stdio.h>
# include <math.h>
int main (){
    int a= 8^8;
    printf("%d",a);
}

int main (){
    int x;
    int y=x;
    printf("%d",y);
}    

int main (){
    char star ='*';
    printf("*");


}

// 08 print 1 ( true)or 0 (false) for the following statements:
// A. if its sunday & its snowing -> true

# include <stdio.h>
# include <math.h>
int  main (){
    int issunday =1;
    int issnowing=1;
    printf("%d \n", issunday && issnowing);
    return 0;
}

int main (){
    int issunday =0;
    int issnoeing =1;
    printf("%d \n", issunday && issnoeing);
}
// B. if its monday or its raining 
int main (){
    int itsmonday =0;
    int itsraining =1;
    printf("%d \n", itsmonday || itsraining);
}

// C. if a number is greater than 9 & less than 100-> ( two digit number )
# include <stdio.h>
# include <math.h>
int main (){
    int x;
    printf("enter any number ");
    scanf("%d",&x);
    printf("%d \n" , x>9 && x<100 );
    return 0;
}  
// Q9 write a programe to cheq if a student passed or fail.
# include <stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);

    if (marks>30){
        printf("pass");

    }
    else {
        printf("fail");
    }
}

// Q10. write a programe to give grade to a student 

# include<stdio.h>
int main (){
    int marks;
    printf("enter your marks (0-100):");
    scanf("%d",&marks);
    if (marks<30){
        printf("grade C \n");
    }
    else if (marks>=30 &&marks<70){
        printf("grade B \n");

    }
    else if (marks>=70 &&marks<90){
        printf(" grade A \n");

    }
    else {
        printf(" grade A+ \n");
    }
        
    return 0;
    



}

// Q11. will this code;
 # include <stdio.h>
 int main (){
    int x=2;

    if (x=1){
        printf("x is equal to 1");
    }else{
        printf("x is not equal to 1");
    }

}
// Q12. write a programe to find if a character entered by user is upper case or not.
#include <stdio.h>
int main (){
    char ch;
    printf("enter character");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z'){
        printf("upper case \n");
    }
    else if (ch>='a' && ch<='z'){
        printf("lower case \n");
    }    
    else{
        printf("not english letter \n");
    }
    return 0;
    }

// Q13. print the number from 0 to 10
# include<stdio.h>
int main(){
    for(int i=0;i<=10;i=i+1){
        printf("%d \n",i);
    }
}

// Q14. print the table of 2(two)

#include <stdio.h>
int main (){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);

    }
    return 0;
}

// Q15. keep taking as input from user until user enters an odd number .
# include <stdio.h>
int main (){
    int n;
    do {
        printf("enter number");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%2 !=0){
            break;
        }
    } while(1);
        return 0;
}

// Q16. keep taking a number as input from user until user enters a number which is multiple of 7.
# include <stdio.h>
int main (){
    int n;
    do {
        printf("enter number");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%7 ==0){
            break;
        }
    } while(1);
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

// Q19. print the factorial of a number n.

# include <stdio.h>

int main (){
    int n ;
    printf("enter number :");
    scanf("%d",&n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact =fact*i;
    }

    printf("fina factorial id %d",fact);
    return 0;
}

// Q20. print reverse of the table for a number n.

#include<stdio.h>
int main (){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    for(int i=10;i>=1;i--){
    printf("%d\n", n *i);

}
}

// Q21 calculate the sum of all number between 5 to 50. ( including 5&50)

# include<stdio.h>
 int main(){
   
    int sum=0;
    for (int i=5;i<=50;i++){
       
        sum=sum+i;
        
    }
    printf("%d", sum);

}

// Q22. write 2 function- one to print "hello"& second to print"good bye".
# include <stdio.h>
void printhello();
void printgoodbye();

int main (){
    printhello();
    printgoodbye();
    return 0;
}
    void printhello(){
        printf("hello!\n");
    }
    void printgoodbye(){
        printf("goodbye:\n");
    }

// Q23. write a function that prints namaste if user is indian & bonjour if user is french.
# include <stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter f for french &i for indian :");
    char ch;
    scanf("%c",&ch);

    if (ch == 'i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("namaste\n");
}

void bonjour(){
    printf("bonjour\n");
}


//Q24. use library functions to calculate the square of a number given by user. 
 # include <stdio.h>
 # include <math.h>

 void calculatenumber(float value);

int main (){
    int n=4;
    printf("%f",pow(n,2));

    return 0;
}

// Q25. write functions to calculate area of a square, a circle & a rectangle. 
# include <stdio.h>
# include <math.h> 
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

int main (){
    float a= 5.0;
    float b= 10.0;

    printf("area is : %f",rectanglearea(a,b));
    return 0; 
}

float squarearea(float side){
    return side*side;
}

float circlearea(float rad){
    return 3.14*rad*rad;
}

float rectanglearea(float a, float b){
    return a*b;
}

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

// Q28. Write a function to convert celsius to fahrenheit
# include<stdio.h>

float convertTemp(float celsius);

int main (){
    float far=convertTemp(0);
    printf("far :%f",far);
    return 0;

}

float convertTemp(float celsius){
    float far =celsius  *(9/5)+32;
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
