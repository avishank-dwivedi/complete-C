// to repeat some arts of the programe 
// types 1. for loop   2. while   3. do while 

 // FOR LOOP 

//for  (initialisation;condition;updation){
// do something 
//  }

# include <stdio.h>
int main (){
    for( int i=1;i<=5;i=i+1){
        printf("devansh \n" );
    }
}


# include <stdio.h>
int main (){
    for( int i=10;i>=1;i=i-1){
        printf("%d \n",i ) ;
    }
}

// loop counter can be float or even character 

# include <stdio.h> 
int main (){
    for(float i=1.0; i<=5.0;i++ ){
        printf("%f \n",i);
    }
  
    return 0;
}

int main (){
    for(char ch='a'; ch<='z';ch++){
        printf("%c \n",ch);
    }
    return 0;
}
