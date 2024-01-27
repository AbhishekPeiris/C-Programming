#include <stdio.h>
int main(){
	
	int x = 100;
	
	printf("(1)--> x = %d\n" , x);//100
	
	x = x/1;
	
	printf("(2)--> x = %d\n" , x);//100
	
	x = x/2;
	
	printf("(3)--> x = %d\n" , x);//50
	
	x = x/5;
	
	printf("(4)--> x = %d\n" , x);//10
	
	x = x/2.5;
	
	printf("(5)--> x = %d\n" , x);//4 
	
	x = x/x;
	
	printf("(6)--> x = %d\n" , x);//1
	
	x = (x/x)*(6);
	
	printf("(7)--> x = %d\n" , x);//6
	
	x = x/(1+2);
	
	printf("(8)--> x = %d\n" , x);//2
	
	x = 8/2;
	
	printf("(9)--> x = %d\n" , x);//4
	
	x = x/12.4;
	
	printf("(10)--> x = %d\n" , x);//0
	
	
	
	
	return 0;
}
