//relational operators 1 ==   2 >,>=  3 <,<=  4 !=
# include <stdio.h>
int main(){
    printf("%d",4==4);
}

int main(){
    printf("%d", 4==3);
}

int main (){
    printf("%d", 4>3);
}

int main (){
    printf("%d",4>4);
}

int main (){
    printf ("%d \n",4!=4);
    printf("%d \n", 4==4);
    
}
// logical operators  (&&  AND, || OR,  ! NOT)
 int main (){
    printf("%d \n",!((5>1)&& (3>4)));
 }

 int main (){
    printf("%d \n",!(5>1)&& (3>4));
 }

 // assignment operators  =,+=,-=,*=,/=
 # include <stdio.h>
 # include <math.h>
 int main (){
    int a=1;
    int b=4;
    a=a+b;
    printf("%d \n",a);
    return 0;
 }

 int main (){
    int a=1;
    int b=4;
    a+=b;
    printf("%d \n",a);
    return 0;
 }
 

int main (){
    int a=1;
    int b=4;
    a-=b; // a = a-b
    printf("%d \n",a);
    return 0;
 }
  


// increment operator 
// ++i (pre increment)
// i++ (post increment)
int main (){
int i=1;
// printf("%d \n ,i++"); // use, then increse 
// printf("%d \n",i);

printf("%d \n", ++i); // increase, then use 
printf("%d \n",i);
return 0;
}
 

// --1(pre decrement)
// i++(post decrement)

int main (){
    int i=1;
    printf("%d \n", --i);
}


int main (){
    int i=1;
    printf("%d \n", i++);
}



