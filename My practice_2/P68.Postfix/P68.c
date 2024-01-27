#include <stdio.h>
int main(){
	
	int X = 20;
	
	printf("(1)--> X = %d\n" , X);//20
	
	X--;
	
	printf("(2)--> X = %d\n" , X);//19
	printf("(3)--> X = %d\n" , X--);//19
	printf("(4)--> X = %d\n" , X++);//18
	printf("(5)--> X = %d\n" , X);//19
	
	printf("(6)--> X = %d\n" , X);//19
	printf("(7)--> X = %d\n" , --X);//18
	printf("(8)--> X = %d\n" , X++);//18
	printf("(9)--> X = %d\n" , X);//19
	
	printf("(10)--> X = %d\n" , X);//19
	printf("(11)--> X = %d\n" , X--);//19
	printf("(12)--> X = %d\n" , ++X);//19
	printf("(13)--> X = %d\n" , X);//19
	
	printf("(14)--> X = %d\n" , X);//19
	printf("(15)--> X = %d\n" , --X);//18
	printf("(16)--> X = %d\n" , ++X);//19
	printf("(17)--> X = %d\n" , X);//19
	
	printf("(18)--> X = %d\n" , X--);//19
	printf("(19)--> X = %d\n" , X--);//18
	printf("(20)--> X = %d\n" , X++);//17
	printf("(21)--> X = %d\n" , ++X);//19
	printf("(22)--> X = %d\n" , X);//19
	
	X++;
	
	printf("(23)--> X = %d\n" , ++X);//21
	printf("(24)--> X = %d\n" , --X);//20
	printf("(25)--> X = %d\n" , X);//20
	
	printf("(26)--> X = %d\n" , X++);//20
	printf("(27)--> X = %d\n" , --X);//20
	printf("(28)--> X = %d\n" , --X);//19
	printf("(29)--> X = %d\n" , ++X);//20
	printf("(30)--> X = %d\n" , ++X);//21
	printf("(31)--> X = %d\n" , X++);//21
	printf("(32)--> X = %d\n" , X);//22
	

	return 0;
	
}
