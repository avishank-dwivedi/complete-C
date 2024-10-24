// Functions(it is a block of code that perform particular task)
// it can used multiple times
// it increase code reusability 
// syntax 1. function prototype \ declaratuon 
// void printhello();
// syntax 2. function definition 
// void printhello(){
    //printf("HELLO");
//}
// syntax 3. function call 
// int main(){
    //printhello();
    //return 0;
//}

# include <stdio.h>
// declaration/prototype
void printhello();

int main(){
    printhello();//function call 
    return 0;

}

// function definition 
void printhello(){
    printf("hello!");
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



/// properties of functions 
// Execution always starts from main .
// A function gets called directly or indirectly from main .
// There can be multiple function in a programe .


// Functions type 
//1. library function (special function inbuilt in C   scanf(),printf())
//2. user defined  (declaration &defined by programmer )

 // Pasing arguiments 
 //1. viod printhello();
 //2. void printtable(int n);
 //3. int sum (int a,int b);

# include <stdio.h >
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("%d:",s);
    return 0;  
}

int sum(int a, int b){
    return a+b;
}


# include <stdio.h>
int sum(int a, int b);
void printtable (int n);

int main (){
    int n;
    printf ("enter number:");
    scanf("%d",&n);
    

    printtable(n);

    return 0;
}

int sum(int x,int y){
    return x+y;
}

void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}



// Argument v/s Parameter 
// arguement-- (values that are passed in function call )
// used to send values
// actual parameter .
// Parameter --(values in function declaration & definition)
// used to recives values 
// form parameters 

// NOTE 
// a. function can only return one value at a time 
// b. change to parameters in functions dont change the values in calling function.
// because a copy of agruments is passed to function 

// Q. Adding GST on any item price.
# include <stdio.h>

void calculateprice(float value);
 int main (){
    float value = 100.0;
    calculateprice(value);
    return 0;
 }

 void calculateprice(float value ){
    value =value +(0.18 * value);
    printf("final price is:%f", value );
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
    
# include <stdio.h>
 # include <math.h>

 void calculatenumber(float value);
int main () {
    int x=10;
    printf("%f",pow(x,2));

    return 0;
}
