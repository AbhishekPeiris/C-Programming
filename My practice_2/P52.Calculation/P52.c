#include <stdio.h>
int main(){
	
	int x = 4+1;//5
	
	printf("(1)--> x = %d\n" , x);//5
	
	x = x+1;
	
	printf("(2)--> x = %d\n" , x);//6
	
	x = x+1;
	
	printf("(3)--> x = %d\n" , x);//7
	
	x = x+20;
	
	printf("(4)--> x = %d\n" , x);//27
	
	x = x+34.8;
	
	printf("(5)--> x = %d\n" , x);//61.8 - " 61 because of an integer "
	
	x = x+x;
	
	printf("(6)--> x = %d\n" , x);//122
	
	x = x+x+6;
	
	printf("(7)--> x = %d\n" , x);//250
	
	x = x+20+30;
	
	printf("(8)--> x = %d\n" , x);//300
	
	x = 8+2;//10 - " It is suggested to take x=10 now, whatever x was before "
	
	printf("(9)--> x = %d\n" , x);//10
	
	x = x+0.5;
	
	printf("(10)--> x = %d\n" , x);//10
	
	
	
	
	return 0;
}
