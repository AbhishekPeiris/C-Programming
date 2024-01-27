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
	
	return 0;
}
