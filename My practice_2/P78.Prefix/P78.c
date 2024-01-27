// Pretfix
#include <stdio.h>
int main(){
	
	int X = 10;
	
	// Prefix Increment
	
	++X;
	
	printf("(2)--> X = %d\n" , X);//11
	printf("(3)--> X = %d\n" , X++);//11
	printf("(4)--> X = %d\n" , X);//12
	
	printf("(5)--> X = %d\n" , X++);//12
	printf("(6)--> X = %d\n" , X++);//13
	printf("(7)--> X = %d\n" , X);//14
	
	printf("(8)--> X = %d\n" , ++X);//15
	printf("(9)--> X = %d\n" , X);//15
	
	printf("(10)--> X = %d\n" , ++X);//16
	printf("(11)--> X = %d\n" , ++X);//17
	printf("(12)--> X = %d\n" , X);//17
	
	printf("\n***************************\n");
	
	// Prefix Decrement
	
	--X;
	
	printf("(2)--> X = %d\n" , X);//16
	printf("(3)--> X = %d\n" , X--);//16
	printf("(4)--> X = %d\n" , X);//15
	
	printf("(5)--> X = %d\n" , X--);//15
	printf("(6)--> X = %d\n" , X--);//14
	printf("(7)--> X = %d\n" , X);//13
	
	printf("(8)--> X = %d\n" , --X);//12
	printf("(9)--> X = %d\n" , X);//12
	
	printf("(10)--> X = %d\n" , --X);//11
	printf("(11)--> X = %d\n" , --X);//10
	printf("(12)--> X = %d\n" , X);//10
	
	
	return 0;
}
