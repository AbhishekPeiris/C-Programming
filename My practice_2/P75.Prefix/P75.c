#include <stdio.h>
int main(){
	
	int X = 4;
	
	printf("(1)--> X = %d\n" , X);//4
	
	--X;
	
	printf("(2)--> X = %d\n" , X);//3
	printf("(3)--> X = %d\n" , X--);//3
	printf("(4)--> X = %d\n" , X);//2
	
	printf("(5)--> X = %d\n" , X--);//2
	printf("(6)--> X = %d\n" , X--);//1
	printf("(7)--> X = %d\n" , X);//0
	
	printf("(8)--> X = %d\n" , --X);//-1
	printf("(9)--> X = %d\n" , X);//-1
	
	printf("(10)--> X = %d\n" , --X);//-2
	printf("(11)--> X = %d\n" , --X);//-3
	printf("(12)--> X = %d\n" , X);//-3
	

	return 0;
	
}
