// What will be the output?

#include <stdio.h>

void main(){
	
	int a=10 , b=2 , x=0;
	x = a+b*a+10/2*a;
	
	/*  
	   x = 10 + 2*10 + (10/2)*10
	     = 10 + 20 + 50
	     = 80
	*/   
	
	printf("value is - %d" , x);
}