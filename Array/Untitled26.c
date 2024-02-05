#include <stdio.h>
#include <string.h>
#define SIZE 25


int main(void){
	
	char x[] = "Happy Birthday to you";
	char y[SIZE];
	
	strcpy(y,x);
	
	printf("The string in array y is : %s\n" , y);
	
	return 0;
}