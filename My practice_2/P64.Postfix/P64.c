#include <stdio.h>
int main(){
	
	int X = 5;
	
	printf("(1)--> X = %d\n" , X);//5
	
	X++;
	
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
	
	// ++X++ meya walangu natha
	
	/*
	printf("(13)--> X = %d\n" , ++X++);//13
	printf("(14)--> X = %d\n" , X);//14
	
	printf("(15)--> X = %d\n" , ++X++);//15
	printf("(16)--> X = %d\n" , ++X++);//17
	printf("(17)--> X = %d\n" , X);//18
	
	printf("(18)--> X = %d\n" , ++X++);//19
	printf("(19)--> X = %d\n" , ++X);//21
	printf("(20)--> X = %d\n" , X);//21
	
	printf("(21)--> X = %d\n" , ++X++);//22
	printf("(22)--> X = %d\n" , X++);//23
	printf("(23)--> X = %d\n" , X);//24
	
	printf("(24)--> X = %d\n" , X++);//24
	printf("(25)--> X = %d\n" , ++X++);//26
	printf("(26)--> X = %d\n" , X);//27
	
	printf("(27)--> X = %d\n" , ++X);//28
	printf("(28)--> X = %d\n" , ++X++);//29
	printf("(29)--> X = %d\n" , X);//30
	*/
	return 0;
	
}
