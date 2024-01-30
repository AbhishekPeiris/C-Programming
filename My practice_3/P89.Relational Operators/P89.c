// C Program to demonstarte the working of arithmatic operators
#include <stdio.h>
int main(){
	
	int a = 5 , b = 5 , c = 10;
	
	/*
	  True  ---> 1
	  False ---> 0
	*/
    
    // is it the same? ---> ==
	printf("%d == %d ---> %d\n" , a , b , a == b);//1
	printf("%d == %d ---> %d\n" , a , c , a == c);//0
	
    printf("\n***************\n");
    
    // greater  than ---> >
    printf("%d > %d ---> %d\n" , a , b , a > b);//0
    printf("%d > %d ---> %d\n" , a , c , a > c);//0
    
    printf("\n***************\n");
    
    // less than ---> <
    printf("%d < %d ---> %d\n" , a , b , a < b);//0
    printf("%d < %d ---> %d\n" , a , c , a < c);//1
    
    printf("\n***************\n");
    
    // not equal ---> !=
    printf("%d != %d ---> %d\n" , a , b , a != b);//0
    printf("%d != %d ---> %d\n" , a , c , a != c);//1
    
    printf("\n***************\n");
    
    // greater than or equal ---> >=
    printf("%d >= %d ---> %d\n" , a , b , a >= b);//1
    printf("%d >= %d ---> %d\n" , a , c , a >= c);//0
    
    printf("\n***************\n");
    
    // less than or equal ---> <=
    printf("%d <= %d ---> %d\n" , a , b , a <= b);//1
    printf("%d <= %d ---> %d\n" , a , c , a <= c);//1
    
    return 0;
    
    
    
    
    
    
    
    
    
	
}
