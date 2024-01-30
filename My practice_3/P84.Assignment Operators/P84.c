#include <stdio.h>
int main(){
	
	int x = 10;
	int y;
	
	y =  x;
	printf("y = %d\n" , y );//10
	
	y += x;
	printf("y = %d\n" , y );//20
	
	y -= x;
	printf("y = %d\n" , y );//10
	
	y *= x;
	printf("y = %d\n" , y );//100
	
	y /= x;
	printf("y = %d\n" , y );//10
	
	y %= x;
	printf("y = %d\n" , y );//0
	
	return 0;
}
