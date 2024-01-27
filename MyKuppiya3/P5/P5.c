// What will be the output?

#include <stdio.h>

void main(){
	
	int x=10;
	
	x += (x++) + (++x) + x;  
	
	/* 
	   x = x + (x++) + (++x) + x
	   x = 10 + 10 + 13 + 13
	   x = 46
	*/
	
	printf("%d" , x);
	
}