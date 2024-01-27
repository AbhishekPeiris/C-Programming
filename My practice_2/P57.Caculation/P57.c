#include <stdio.h>
int main(){
	
	int x = 4+1;//5
	
	printf("(1)--> x = %d\n" , x);//5
	
	x = x-1;
	
	printf("(2)--> x = %d\n" , x);//4
	
	x = x-1;
	
	printf("(3)--> x = %d\n" , x);//3
	
	x = x-20;
	
	printf("(4)--> x = %d\n" , x);//-17
	
	x = x-34.8;
	
	printf("(5)--> x = %d\n" , x);//-51.8
	
	x = x-x;
	
	printf("(6)--> x = %d\n" , x);//0
	
	x = x-x-6;
	
	printf("(7)--> x = %d\n" , x);//-6
	
	x = x-20-30;
	
	printf("(8)--> x = %d\n" , x);//-56
	
	x = 8-2;
	
	printf("(9)--> x = %d\n" , x);//6
	
	
	
	
	
	return 0;
}
