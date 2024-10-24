// Type conversion 

// 01 int op int    output(int)
// 02 int op float  output(float)
// 03 float op float  output(float)

// 01
 # include <stdio.h>
 # include <math.h>
 int main (){
    printf ("%d \n",2*2);
    return 0;
 }

// 02
 int main (){
    printf("%f \n",2.0*4);
    return 0;
 }

// 03
int main(){
    printf("%f\n", 4*5.0);
    return 0;
}

# include <stdio.h>
int main(){
    printf("%f\n", 4.0/5);
    return 0;
}

# include <stdio.h>
int main(){
    printf("%d\n", 3/2);
    return 0;
}

# include <stdio.h>
# include <math.h>
int main(){
    printf("%f\n", 3.0/2);
    return 0;
}    

// operator procedence 
// *,/,%, first priority during calculas
// +,-, second priority during calculas 
// =, third priority durind calculas 

# include <stdio.h>
# include <math.h>
int main (){
    int a =4*3/ 6*2;
    printf ("%d \n",a);
    return 0;
}

// practice question 4
# include<stdio.h>
# include<math.h>
int main(){
    int a =5*2-2*3;
    printf("%d \n",a);
    return 0;
}
 
# include<stdio.h>
# include<math.h>
int main(){
    int a= 5*2 /2*3;
    printf("%d /n", a);
    return 0 ;
}
# include<stdio.h>
# include<math.h>
int main (){
    int a=5*(2/2)*3;
    printf ("%d /n",a);
    return 0;
}
# include<stdio.h>
# include<math.h>
int main (){
    int a= 5+2/2*3;
    printf ("%d /n",a);
    return 0;
}