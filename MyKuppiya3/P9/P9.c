// What will be the output a a and b?

#include <stdio.h>

void main(){
	
	int a=3,b=2;
	
	a = a==b==0;
	
	/* 
	  a == b ---> 3-1 = 2 ---> 1 ---> a=1
	  b == 0 ---> 2-2 = 0 ---> 2 ---> b=2
	*/
	
	printf("%d,%d" , a,b);
}