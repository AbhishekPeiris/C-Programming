#include <stdio.h>
int main(){
	
	int X,Y,Z; // Z variable is answer
	
	printf("Enter the X value := ");
	scanf(" %d" , &X);
	
	printf("Enter the Y value := ");
	scanf(" %d" , &Y);
	
	printf("\n***************************\n");
	
	
	Z = X+Y;
	printf("X+Y = %d\n" , Z);
	
	Z = X-Y;
	printf("X-Y = %d\n" , Z);
	
	Z = X/Y;
	printf("X/Y = %d\n" , Z);
	
	Z = X*Y;
	printf("X*Y = %d\n" , Z);
	
	Z = X%Y;
	printf("X%Y = %d\n" , Z);
	
	
	return 0;
	
}
