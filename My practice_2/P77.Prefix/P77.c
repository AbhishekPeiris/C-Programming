// Prefix
#include <stdio.h>
int main(){
	
	int a = 10;
	
	printf("(1)--> a = %d\n" , a);//10
	
	// Prefix Increment 
	
	++a;
	
	printf("(2)--> a = %d\n" , a);//11
	printf("(3)--> a = %d\n" , ++a);//12
	printf("(4)--> a = %d\n" , a);//12
	
	// Prefix Decrement
	
	--a;
	
	printf("(5)--> a = %d\n" , a);//11
	printf("(6)--> a = %d\n" , --a);//10
	printf("(7)--> a = %d\n" , a);//10
	
	// Prefix Increment
	
	++a;
	
	printf("(8)--> a = %d\n" , a);//11
	printf("(9)--> a = %d\n" , ++a);//12
	printf("(10)--> a = %d\n" , a);//12
	
	// Prefix Decrement
	
	--a;
	
	printf("(11)--> a = %d\n" , a);//11
	printf("(12)--> a = %d\n" , --a);//10
	printf("(13)--> a = %d\n" , a);//10
	
	return 0;
}
