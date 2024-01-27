#include <stdio.h>

int main(){
	
	int X = 5;
	
	printf("(1)--> X = %d\n" , X);//5
	
	++X;
	
	printf("(2)--> X = %d\n" , X);//6
	printf("(3)--> X = %d\n" , X++);//6
	printf("(4)--> X = %d\n" , X);//7
	
	printf("(5)--> X = %d\n" , X++);//7
	printf("(6)--> X = %d\n" , X++);//8
	printf("(7)--> X = %d\n" , X);//9
	
	printf("(8)--> X = %d\n" , ++X);//10
	printf("(9)--> X = %d\n" , X);//10
	
	printf("(10)--> X = %d\n" , ++X);//11
	printf("(11)--> X = %d\n" , ++X);//12
	printf("(12)--> X = %d\n" , X);//12
	
	return 0;
}
